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


#include "Os.h"
#include "Mcu.h"
#include "arc.h"

//#define USE_LDEBUG_PRINTF // Uncomment this to turn debug statements on.
#include "debug.h"

// How many errors to keep in error log.
#define ERROR_LOG_SIZE 20



static uint32 numberTaskActivations = 0;

/* This function is called when numberEventsSet is > 3 and numberTaskActivations is > 3
 * It is in a separate function since we want to set a break point here in the automatic
 * test system to determine if it works.
 */
static void TestPass(void) {
	LDEBUG_PRINTF("Test passes\n");
}



/**
 * Just an example of a basic task.
 */

void bTask3( void ) {
	StackInfoType si;
	TaskType currTask;
	LDEBUG_PRINTF("[%08u] bTask3 start\n", (unsigned)GetOsTick() );

	numberTaskActivations++;

	(void)GetTaskID(&currTask);
	Os_Arc_GetStackInfo(currTask,&si);
	LDEBUG_PRINTF("bTask3: %u%% stack usage\n",
			(unsigned)OS_STACK_USAGE(&si));
	GetOsTick();
	(void)TerminateTask();
}

/**
 * An extended task is auto-started and is also triggered by an alarm
 * that sets event 2.
 */
#if defined(CFG_SPE_FPU_SCALAR_SINGLE) || defined(CFG_EFPU) || defined(CFG_SPE) || defined (CFG_SPE_INIT)
typedef volatile float volatile_float;
#endif
void eTask1( void ) {

	static uint32 numberEventsSet = 0;

#if defined(CFG_SPE_FPU_SCALAR_SINGLE) || defined(CFG_EFPU) || defined(CFG_SPE) || defined (CFG_SPE_INIT)
	volatile_float tryFloatingPoint = 0.0F;
#endif

	StackInfoType si;
	TaskType currTask;

	LDEBUG_FPUTS("eTask1 start\n");

	for(;;) {
		(void)SetEvent(TASK_ID_eTask2,EVENT_MASK_Event2);
		(void)WaitEvent(EVENT_MASK_Event1);
		(void)ClearEvent(EVENT_MASK_Event1);
		numberEventsSet++;

#if defined(CFG_SPE_FPU_SCALAR_SINGLE) || defined(CFG_EFPU) || defined(CFG_SPE) || defined (CFG_SPE_INIT)
		/*lint -esym(550,tryFloatingPoint ) MISRA:OTHER: [value of tryFloatingPoint shall not be used. Just a check to do
		 * floating point operation].*/
		tryFloatingPoint += 1.0F;
#endif

		(void)GetTaskID(&currTask);
		Os_Arc_GetStackInfo(currTask,&si);
		LDEBUG_PRINTF("eTask1: %u%% stack usage\n",
				(unsigned)OS_STACK_USAGE(&si));

		if ((numberEventsSet > 3) && (numberTaskActivations > 0)) {
			/*lint -e{522} MISRA:OTHER:[MISRA 2012 Rule 2.2, required]*/
			TestPass();
		}

	}
}

/**
 * An extended task that receives events from someone
 * and activates task: bTask3.
 */
void eTask2( void ) {
	LDEBUG_FPUTS("eTask2 start\n");

	for(;;) {
		(void)WaitEvent(EVENT_MASK_Event2);
		(void)ClearEvent(EVENT_MASK_Event2);
		(void)ActivateTask(TASK_ID_bTask3);
		{
			StackInfoType si;
			TaskType currTask;
			(void)GetTaskID(&currTask);
			Os_Arc_GetStackInfo(currTask,&si);
			LDEBUG_PRINTF("eTask2: %u%% stack usage\n",
					(unsigned)OS_STACK_USAGE(&si));
		}
	}
}


/*
 * Functions that must be supplied by the example
 */

void OsIdle( void ) {
	for(;;) {}
}
