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
#if defined(USE_ETHIF)
#include "EthIf.h"
#endif
#include "EthSM.h"
#include "SoAd.h"
#include "Dcm.h"
#include "../../../core/communication/DoIP/inc/DoIP.h"

#include "Timer.h"

#define BSW_SERVICE_TASK_PERIOD	0.005
#define COMM_MAIN_PERIOD	    ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define ECUM_MAIN_PERIOD	    ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define ETHSM_MAIN_PERIOD	    ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define ETHIF_MAIN_PERIOD       ((uint32_t)(0.01 / BSW_SERVICE_TASK_PERIOD))
#define DCM_MAIN_PERIOD         ((uint32_t)(0.005 / BSW_SERVICE_TASK_PERIOD))
#define SOAD_MAIN_PERIOD        ((uint32_t)(0.005 / BSW_SERVICE_TASK_PERIOD))
#define DOIP_MAIN_PERIOD        ((uint32_t)(0.005 / BSW_SERVICE_TASK_PERIOD))

static uint32_t service = 0u;
static boolean tcpipInitialized = FALSE;

void OsBswServiceTask ( void ) {

	static uint16 actvDoIPDelayStart;
	boolean actvDoIP;

	actvDoIP = FALSE;

	while (1) {
		SYS_CALL_WaitEvent (EVENT_MASK_OsBwmMainEvent);
		SYS_CALL_ClearEvent(EVENT_MASK_OsBwmMainEvent);

		 if ((actvDoIPDelayStart > 100) && (actvDoIP == FALSE)) {
			    DoIP_ActivationLineSwitchActive();
			    actvDoIP = TRUE;
		 } else if (actvDoIP == FALSE) {
			 actvDoIPDelayStart ++;
		 } else {
			 /* do nothing */
		 }

		if (0u == (service % ECUM_MAIN_PERIOD)) {
			EcuM_MainFunction();
		}


		if (0u == (service % COMM_MAIN_PERIOD)) {
			ComM_MainFunction_EthChnl();
		}

		if (0u == (service % ETHSM_MAIN_PERIOD)) {
			EthSM_MainFunction();
		}


		if (0u == (service % DCM_MAIN_PERIOD)) {
    		Dcm_MainFunction();
		}

		if (0u == (service % SOAD_MAIN_PERIOD)) {
    		SoAd_MainFunction();
		}

		if (0u == (service % DOIP_MAIN_PERIOD)) {
		  	DoIP_MainFunction();
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

		service++;
		if(     	!(service % COMM_MAIN_PERIOD) &&
#if defined(USE_ETHIF)
					!(service % ETHIF_MAIN_PERIOD)&&
#endif
					!(service % DCM_MAIN_PERIOD) &&
					!(service % DOIP_MAIN_PERIOD) &&
					!(service % SOAD_MAIN_PERIOD) &&
					!(service % ECUM_MAIN_PERIOD) &&
					!(service % ETHSM_MAIN_PERIOD))
		{
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
	}
}

void OsStartupTask( void ){

	EcuM_StartupTwo();

    Timer_Init();
    (void)EcuM_RequestRUN((EcuM_UserType)ECUM_USER_EthernetUser);
	
	ComM_RequestComMode(ComMConf_ComMUser_EthChnlUser, COMM_FULL_COMMUNICATION );

	SYS_CALL_SetRelAlarm(ALARM_ID_OsAlarmLWIPMain, 1, 5); /* cycle time  = no of SOAD sockets * 1 ms ==>
   	as currently there is a limitation in the implementation */
	tcpipInitialized = TRUE;

	SYS_CALL_SetRelAlarm(ALARM_ID_OsAlarmBswService, 1, 5);
	SYS_CALL_ActivateTask(TASK_ID_OsBswServiceTask);

	// Open Tcp connection to tester
	(void)SoAd_OpenSoCon(SOAD_SOCON_ID_SOADSOCKETCONNECTIONGROUP_DOIP_TCP_SOADSOCKETCONNECTION_DOIP_TCP);

    // Let DoIP open UDP connection and send out vehicle announcement
    DoIP_ActivationLineSwitchActive();

    (void)TerminateTask();
}
