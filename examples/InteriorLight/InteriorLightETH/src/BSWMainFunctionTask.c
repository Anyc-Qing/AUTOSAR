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

#include "IoHwAb.h"
#if defined(USE_ETHIF)
#include "EthIf.h"
#endif
#include "EthSM.h"

#define BSW_SERVICE_TASK_PERIOD	0.005
#define COMM_MAIN_PERIOD	    ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define COM_MAIN_PERIOD		    ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define ECUM_MAIN_PERIOD	    ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define IOHWAB_MAIN_PERIOD      ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define BSWM_MAIN_PERIOD        ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define ETHSM_MAIN_PERIOD	    ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define ETHIF_MAIN_PERIOD       ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))

static boolean tcpipInitialized = FALSE;

extern void BswM_MainFunction(void);

static uint32_t service = 0u;

/**
 * The OsTask that is run when no other OsTasks are run
 */
void OsIdle( void ) {
	for(;;) {}
}

/**
 * Scheduler for all BSW-modules' Main Functions
 */
void OsBswServiceTask ( void ) {
	EcuM_StateType state = ECUM_STATE_OFF;
	(void)EcuM_GetState(&state);

	if( state <= ECUM_STATE_STARTUP_TWO){
		/* before startup 2 only schedule memory tasks */
		(void)TerminateTask();
	}

	if (0u == (service % ECUM_MAIN_PERIOD)) {
		EcuM_MainFunction();
	}

	if (0u == (service % BSWM_MAIN_PERIOD)) {
		BswM_MainFunction();
	}

	if (0u == (service % COMM_MAIN_PERIOD)) {
		ComM_MainFunction_ComMChannel();
	}

	if (0u == (service % ETHSM_MAIN_PERIOD)) {
		EthSM_MainFunction();
	}

	if (0u == (service % COM_MAIN_PERIOD)) {
		Com_MainFunctionRx();
		Com_MainFunctionTx();
	}
#if defined(USE_ETHIF)
	if ((0u == (service % ETHIF_MAIN_PERIOD)) && tcpipInitialized) {
#if (ETHIF_ENABLE_TX_INTERRUPT == STD_OFF)
		EthIf_MainFunctionTx();
#endif
#if (ETHIF_ENABLE_RX_INTERRUPT == STD_OFF)
		EthIf_MainFunctionRx();
#endif
	}
#endif

#if defined (USE_IOHWAB)
	if (0u == (service % IOHWAB_MAIN_PERIOD)) {
		IoHwAb_MainFunction();
	}
#endif
	service++;
	if(     	!(service % COMM_MAIN_PERIOD) &&
				!(service % ECUM_MAIN_PERIOD) &&
				!(service % COM_MAIN_PERIOD)  &&
			    !(service % BSWM_MAIN_PERIOD) &&
			    !(service % ETHSM_MAIN_PERIOD)&&
#if defined(USE_ETHIF)
			    !(service % ETHIF_MAIN_PERIOD)&&
#endif

				!(service % IOHWAB_MAIN_PERIOD)){
		service = 0u;
	}
	(void)TerminateTask();
}

void MainLWIPTask( void ) {
	for(;;) {
		SYS_CALL_WaitEvent (EVENT_MASK_LWIP_MAIN);
		SYS_CALL_ClearEvent(EVENT_MASK_LWIP_MAIN);

		TcpIp_MainFunction();
		SoAd_MainFunction();
	}
}

/**
 * Function that is run to initialize the ECU
 */
void OsStartupTask( void ){
    EcuM_StartupTwo();

   	SetRelAlarm(ALARM_ID_OsAlarmLWIPMain, 1, 5);
	tcpipInitialized = TRUE;

    (void)TerminateTask();
}


