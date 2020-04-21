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
#include "ComM.h"
#include "EcuM.h"
#if defined (USE_IOHWAB)
#include "IoHwAb.h"
#endif
#if defined(USE_ETHIF)
#include "EthIf.h"
#endif
#include "EthSM.h"
#include "Com.h"
#include "SoAd.h"
#if defined(USE_XCP)
#include "Xcp.h"
#endif
#include "Timer.h"

#define BSW_SERVICE_TASK_PERIOD	0.005
#define COMM_MAIN_PERIOD	    ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define COM_MAIN_PERIOD		    ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define ECUM_MAIN_PERIOD	    ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define IOHWAB_MAIN_PERIOD      ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define BSWM_MAIN_PERIOD        ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define XCP_MAIN_PERIOD		    ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define ETHSM_MAIN_PERIOD	    ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define ETHIF_MAIN_PERIOD       ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))

static uint32_t service = 0u;
static boolean tcpipInitialized = FALSE;

extern void BswM_MainFunction(void);

void OsBswServiceTask ( void ) {
	EcuM_StateType state = ECUM_STATE_OFF;

	while (1) {
		SYS_CALL_WaitEvent (EVENT_MASK_OsBwmMainEvent);
		SYS_CALL_ClearEvent(EVENT_MASK_OsBwmMainEvent);

		(void)EcuM_GetState(&state);

		if( state <= ECUM_STATE_STARTUP_ONE){
			continue;
		}

		if( state <= ECUM_STATE_STARTUP_TWO){
			/* before startup 2 only schedule memory tasks */
			continue;
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

#if defined(USE_XCP)
		if (0u == (service % XCP_MAIN_PERIOD)) {
			Xcp_MainFunction();
			/*This wrapper function is intended to be called from periodic task,
			which has the period: 10 millisecond. */
			Xcp_Arc_WrapperForEventChannel_XcpEventChannel();
		}
#endif
		service++;
		if(     	!(service % COMM_MAIN_PERIOD) &&
					!(service % ECUM_MAIN_PERIOD) &&
					!(service % COM_MAIN_PERIOD)  &&
					!(service % BSWM_MAIN_PERIOD) &&
					!(service % ETHSM_MAIN_PERIOD)&&
#if !defined(STM32F10X_CL)
					!(service % XCP_MAIN_PERIOD)  &&
#endif
#if defined(USE_ETHIF)
					!(service % ETHIF_MAIN_PERIOD)&&
#endif

					!(service % IOHWAB_MAIN_PERIOD)){
			service = 0u;
		}

	}
}

/* LWIP extended task */
void MainLWIPTask( void ) {
	for(;;) {
		SYS_CALL_WaitEvent (EVENT_MASK_LWIP_MAIN);
		SYS_CALL_ClearEvent(EVENT_MASK_LWIP_MAIN);
#if defined(CFG_MPC5777M)
		fec_linkUp();
#endif
		TcpIp_MainFunction();
		SoAd_MainFunction();

	}
}

void OsStartupTask( void ){

    (void)EcuM_RequestRUN((EcuM_UserType)ECUM_USER_EthernetUser);
    Timer_Init();
	EcuM_StartupTwo();

   	SetRelAlarm(ALARM_ID_OsAlarmLWIPMain, 1, 5); /* cycle time  = no of SOAD sockets * 1 ms ==>
   	as currently there is a limitation in the implementation */
	tcpipInitialized = TRUE;

    (void)TerminateTask();
}
