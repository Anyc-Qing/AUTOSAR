/*-------------------------------- Arctic Core ------------------------------
 * Copyright (C) 2014, ArcCore AB, Sweden, www.arccore.com.
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
#include "Std_Types.h"
#include "Dio.h"
#include "ComM.h"
#include "EcuM.h"
#include "Com.h"
#include "CanSM.h"
#include "Can.h"
#include "IoHwAb.h"

#define BSW_SERVICE_TASK_PERIOD	0.005

#define CAN_MAIN_PERIOD		((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define COMM_MAIN_PERIOD	((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define COM_MAIN_PERIOD		((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define ECUM_MAIN_PERIOD	((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define CANSM_MAIN_PERIOD	((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define IOHWAB_MAIN_PERIOD  ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define BSWM_MAIN_PERIOD    ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))

extern void BswM_MainFunction(void);

static uint32_t service = 0u;

void OsIdle( void ) {
	// Do nothing
	for(;;) {}
}

void OsBswTask ( void ) {
	EcuM_StateType state = ECUM_STATE_OFF;

	(void)EcuM_GetState(&state);

	if( state <= ECUM_STATE_STARTUP_ONE) {
		(void)TerminateTask();
	}

	if( state <= ECUM_STATE_STARTUP_TWO) {
		/* Before STARTUP_TWO, only schedule memory tasks */
		(void)TerminateTask();
	}

	if (0u == (service % COMM_MAIN_PERIOD)) {
		ComM_MainFunction_ComMChannel();
	}

	if (0u == (service % COM_MAIN_PERIOD)) {
		Com_MainFunctionRx();
		Com_MainFunctionTx();
	}

	if (0u == (service % ECUM_MAIN_PERIOD)) {
		EcuM_MainFunction();
	}

	if (0u == (service % CANSM_MAIN_PERIOD)) {
		CanSM_MainFunction();
	}

    if (0u == (service % CAN_MAIN_PERIOD)) {
        Can_MainFunction_Mode();
    }

    if (0u == (service % IOHWAB_MAIN_PERIOD)) {
        IoHwAb_MainFunction();
    }

    if (0u == (service % BSWM_MAIN_PERIOD)) {
        BswM_MainFunction();
    }

    service++;

	if( !(service % COMM_MAIN_PERIOD) &&
			!(service % CANSM_MAIN_PERIOD) &&
			!(service % ECUM_MAIN_PERIOD) &&
			!(service % COMM_MAIN_PERIOD) &&
            !(service % BSWM_MAIN_PERIOD) &&
            !(service % IOHWAB_MAIN_PERIOD))	{
		service = 0u;
	}

	(void)TerminateTask();
}


void OsStartupTask( void ){
    EcuM_StartupTwo();

    (void)TerminateTask();
}


