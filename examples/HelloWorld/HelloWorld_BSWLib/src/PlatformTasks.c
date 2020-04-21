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
#include "SbcCdd.h"
#include "Dcm.h"
#include "CanTp.h"
#include "Can.h"
#include "IoHwAb.h"
#include "Xcp.h"
#include "Pwm.h"
#if defined(USE_NVM)
#include "NvM.h"
#include "Fee.h"
#include "Fls.h"
#include "SwcMem.h"
#if defined(USE_EA)
#include "Ea.h"
#include "Eep.h"
#include "Spi.h"
#endif
#endif

#define BSW_SERVICE_TASK_PERIOD	0.005

#define CAN_MAIN_PERIOD		((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define COMM_MAIN_PERIOD	((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define COM_MAIN_PERIOD		((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define ECUM_MAIN_PERIOD	((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define CANSM_MAIN_PERIOD	((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define CANTP_MAIN_PERIOD   ((uint32_t)(0.005 / BSW_SERVICE_TASK_PERIOD))
#define DCM_MAIN_PERIOD     ((uint32_t)(0.02 / BSW_SERVICE_TASK_PERIOD))
#define IOHWAB_MAIN_PERIOD  ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define BSWM_MAIN_PERIOD    ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define XCP_MAIN_PERIOD		((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define SWCMEM_MAIN_PERIOD  ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))

extern void BswM_MainFunction(void);

static uint32_t service = 0u;

void OsXcpTask ( void ) {
	EcuM_StateType state = ECUM_STATE_OFF;

	(void)EcuM_GetState(&state);

	if( state <= ECUM_STATE_STARTUP_ONE) {

		(void)TerminateTask();
	}

	if( state <= ECUM_STATE_STARTUP_TWO) {

		/* before startup 2 only schedule memory tasks */
		(void)TerminateTask();
	}

	/*This wrapper function is intended to be called from periodic task,
	  which has the period: 10 millisecond. */
	Xcp_Arc_WrapperForEventChannel_XcpEventChannel();

	(void)TerminateTask();

}


void OsBswServiceTask ( void ) {
	EcuM_StateType state = ECUM_STATE_OFF;

	(void)EcuM_GetState(&state);

	if( state <= ECUM_STATE_STARTUP_ONE) {
		(void)TerminateTask();
	}

#if defined(USE_NVM)
    /* Speed up NVM reading/writing at startup/shutdown */
    uint8 nofExtraLoops = 0u;
    if (state <= ECUM_STATE_STARTUP_TWO) {
        nofExtraLoops = 1u;
    } else if ((state == ECUM_STATE_SHUTDOWN) || (state == ECUM_STATE_OFF) ||
               (state == ECUM_STATE_GO_OFF_TWO) || (state == ECUM_STATE_GO_OFF_ONE)) {
        nofExtraLoops = 10u;
    }

    for(uint8 i = 0u; i < (1u + nofExtraLoops); i++ ) {
        NvM_MainFunction();
        Fee_MainFunction();
        Ea_MainFunction();
        Fls_MainFunction();
        Spi_MainFunction_Handling();
        Eep_MainFunction();
    }
#endif


	if( state <= ECUM_STATE_STARTUP_TWO) {
		/* before startup 2 only schedule memory tasks */
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

    if (0u == (service % CANTP_MAIN_PERIOD)) {
        CanTp_MainFunction();
    }

    if (0u == (service % XCP_MAIN_PERIOD)) {
        Xcp_MainFunction();
    }

    if (0u == (service % DCM_MAIN_PERIOD)) {
        Dcm_MainFunction();
    }

    if (0u == (service % IOHWAB_MAIN_PERIOD)) {
        IoHwAb_MainFunction();
    }

    if (0u == (service % BSWM_MAIN_PERIOD)) {
        BswM_MainFunction();
    }

#if defined(USE_NVM)
    if (0u == (service % SWCMEM_MAIN_PERIOD)) {
        SwcMem_MainFunction();
    }
#endif
    service++;

	if( !(service % COMM_MAIN_PERIOD) &&
			!(service % CANSM_MAIN_PERIOD) &&
			!(service % ECUM_MAIN_PERIOD) &&
			!(service % COMM_MAIN_PERIOD) &&
            !(service % CANTP_MAIN_PERIOD) &&
            !(service % DCM_MAIN_PERIOD) &&
            !(service % BSWM_MAIN_PERIOD) &&
            !(service % XCP_MAIN_PERIOD) &&
            !(service % IOHWAB_MAIN_PERIOD) &&
            !(service % SWCMEM_MAIN_PERIOD) )	{
		service = 0u;
	}

	(void)TerminateTask();

}


void OsStartupTask( void ){

    (void)EcuM_RequestRUN((EcuM_UserType)ECUM_USER_HelloWorldUser);

    /* The BSW/Platform task will be started in the end of EcuM_AL_DriverInitTwo() */

    EcuM_StartupTwo();

	SbcCdd_Init();

#if defined(USE_NVM)
	SwcMem_Init();
#endif

#if defined(CFG_BRD_TMDX570_LS12HDK)
	Pwm_EnableNotification(PwmConf_PwmChannel_Channel_LED_3, PWM_BOTH_EDGES);
#endif

    (void)TerminateTask();
}

#if defined(CFG_BRD_TMDX570_LS12HDK)
void NotificationPwmCh1(void)
{
    static Dio_LevelType level = STD_LOW;

    if (level == STD_HIGH) {
        level = STD_LOW;
    }
    else {
        level = STD_HIGH;
    }
    Dio_WriteChannel(DioConf_DioChannel_LED_D3, level);
}
#endif
