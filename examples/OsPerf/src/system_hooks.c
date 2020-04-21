/*-------------------------------- Arctic Core ------------------------------
 * Copyright (C) 2013, ArcCore AB, Sweden, www.arccore.com.
 * Contact: <contact@arccore.com>
 * 
 * You may ONLY use this file:
 * 1)if you have a valid commercial ArcCore license and then in accordance with  
 * the terms contained in the written license agreement between you and ArcCore, 
 * or alternatively
 * 2)if you follow the terms found in GNU General Public License version 2 as 
 * published by the Free Software Foundation and appearing in the file 
 * LICENSE.GPL included in the packaging of this file or here 
 * <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>
 *-------------------------------- Arctic Core -----------------------------*/

/*
 * DESCRIPTION
 *   Hold all OSEK system hooks.
 */

/* ----------------------------[includes]------------------------------------*/

#include <stdint.h>
#include "Os.h"
#include <assert.h>

#include "Mcu.h"
#include "perf.h"

/* ----------------------------[private define]------------------------------*/
#define ERROR_LOG_SIZE 1

//#define USE_LDEBUG_PRINTF	1
#include "debug.h"

/* ----------------------------[private macro]-------------------------------*/


/* ----------------------------[private typedef]-----------------------------*/

typedef struct ErrorEntry {
	StatusType 		error;
	OsErrorType     info;
	TaskType    	taskId;
	OsServiceIdType serviceId;
} ErrorEntryType;


typedef struct ErrorLog {
	int 			index;
	ErrorEntryType 	log[ERROR_LOG_SIZE];
} ErrorLogType;

struct LogBad {
	uint32_t param1;
	uint32_t param2;
	uint32_t param3;
	TaskType taskId;
	OsServiceIdType serviceId;
	StatusType error;
} LogBadType;


/* ----------------------------[private function prototypes]-----------------*/
/* ----------------------------[private variables]---------------------------*/
ErrorLogType ErrorLog;
/* ----------------------------[private functions]---------------------------*/
/* ----------------------------[public functions]----------------------------*/

/**
 *
 * @param FatalError
 * @return
 */
ProtectionReturnType ProtectionHook( StatusType FatalError ) {
    (void)FatalError;
//	printf("## ProtectionHook\n");
	return PRO_KILLAPPL;
}

/**
 *
 */
void StartupHook( void ) {
	Perf_Init();
	Perf_InstallFunctionName(0, "Timer_uDelay", sizeof("Timer_uDelay"));
}

/**
 *
 * @param Error
 */
void ShutdownHook( StatusType error ) {
//	LDEBUG_FPUTS("## ShutdownHook\n");
	(void)error;
	while(1) {
		//err = err;
		;
	}
}

/**
 *
 * @param error
 */
void ErrorHook( StatusType error ) {

	TaskType task;
	static struct LogBad LogBad[ERROR_LOG_SIZE];
	static uint8_t ErrorCount = 0;

	GetTaskID(&task);


	OsServiceIdType service = OSErrorGetServiceId();

	/* Grab the arguments to the functions
	 * This is the standard way, see 11.2 in OSEK spec
	 */
	switch(service) {
	case OSServiceId_SetRelAlarm:
	{
		// Read the arguments to the faulty functions...
		AlarmType alarm_id = OSError_SetRelAlarm_AlarmId;
		TickType increment = OSError_SetRelAlarm_Increment;
		TickType cycle = OSError_SetRelAlarm_Cycle;
		(void)alarm_id;
		(void)increment;
		(void)cycle;

		// ... Handle this some way.
		break;
	}
	/*
	 * The same pattern as above applies for all other OS functions.
	 * See Os.h for names and definitions.
	 */

	default:
		break;
	}

//	LDEBUG_PRINTF("## ErrorHook err=%u\n",Error);

	/* Log the errors in a buffer for later review */
	LogBad[ErrorCount].param1 = os_error.param1;
	LogBad[ErrorCount].param2 = os_error.param2;
	LogBad[ErrorCount].param3 = os_error.param3;
	LogBad[ErrorCount].serviceId = service;
	LogBad[ErrorCount].taskId = task;
	LogBad[ErrorCount].error = error;

	ErrorCount++;

	/* Keep compiler silent */
	(void)LogBad[ErrorCount].param1;

	// Stall if buffer is full.
	while(ErrorCount >= ERROR_LOG_SIZE)
	{

	};
}

