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

/* Generator version: 4.0.1
 * AUTOSAR version:   4.0.3
 */


#include "BswM.h"
#include "BswM_Internal.h"

#if defined(USE_COMM)
#include "ComM.h"
#include "BswM_ComM.h"
#endif
#if defined(USE_PDUR)
#include "PduR.h"
#endif
#if defined(USE_NVM)
#include "NvM.h"
#endif
#if defined(USE_CANSM)
#include "CanSM.h"
#include "BswM_CanSM.h"
#endif
#if defined(USE_SD)
#include "SD.h"
/* @req BswM0026 Partially */
#include "BswM_Sd.h"
#endif
#if defined(USE_FRSM)
#include "FrSM.h"
#include "BswM_FrSM.h"
#endif
#if defined(USE_LINSM)
#include "LinSM.h"
#include "BswM_LinSM.h"
#endif
#if defined(USE_LINTP)
#include "LinTp.h"
#include "BswM_LinTp.h"
#endif
#if defined(USE_ETHSM)
#include "EthSM.h"
#include "BswM_EthSM.h"
#endif
#if defined(USE_COM)
#include "Com.h"
#endif
#if defined(USE_LINIF)
#include "LinIf.h"
#endif
#include "EcuM.h"
#include "BswM_EcuM.h"
#if defined(USE_DCM)
#include "Dcm.h"
#endif
#if defined(USE_DET)
#include "Det.h"
#endif
#if defined(USE_DEM)
#include "Dem.h"
#endif
#if defined(USE_NM)
#include "Nm.h"
#endif
#if defined(USE_DCM)
#include "Dcm.h"
#include "BswM_DCM.h"
#endif

#if defined(USE_RTE)
#include "Rte_BswM.h"
#endif
#include "SchM_BswM.h"



#define BSWM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "BswM_BswMemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/
uint32 BswM_ModeReqMirrors[BSWM_NUMBER_OF_REQUESTS];
#define BSWM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "BswM_BswMemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/

Std_ReturnType BswM_PduGroupSwitchActionHandle( const BswM_ActionListItemType *item );
Std_ReturnType BswM_RequestFullComActionHandle( const BswM_ActionListItemType *item );
boolean BswM_ComMFullCommuncationlExpressionLogicalExpHandle( void );
boolean BswM_StartCommunicationExpressionLogicalExpHandle( void );


Std_ReturnType BswM_PduGroupSwitchActionHandle( const BswM_ActionListItemType *item ) {

	BswM_Internal_PduGroupSwitchAction(item);
	
	return E_OK;
}






Std_ReturnType BswM_RequestFullComActionHandle( const BswM_ActionListItemType *item ) {

	(void) *item; /* Suppress compiler warnings and e715 */
	
	return 	ComM_RequestComMode(ComMConf_ComMUser_ComMUser, COMM_FULL_COMMUNICATION);
}



boolean BswM_ComMFullCommuncationlExpressionLogicalExpHandle( void ) {
	return (((ComM_ModeType) BswM_ModeReqMirrors[BSWM_BSWCOMMINDICATION_REQ_IDX] == COMM_FULL_COMMUNICATION));
}

boolean BswM_StartCommunicationExpressionLogicalExpHandle( void ) {
	return (((uint8) BswM_ModeReqMirrors[BSWM_SWCSTARTCOMMUNICATION_REQ_IDX] != COMM_NO_COMMUNICATION));
}

Std_ReturnType (*BswM_AtomicActions[BSWM_NUMBER_OF_ATOMIC_ACTIONS]) ( const BswM_ActionListItemType *item ) = 
{
	[BSWM_IPDUSTART_ACTION_IDX] = BswM_PduGroupSwitchActionHandle,
	[BSWM_REQUESTFULLCOM_ACTION_IDX] = BswM_RequestFullComActionHandle,
};

boolean (*BswM_LogicalExpressions[BSWM_NUMBER_OF_LOGICAL_EXPRESSIONS]) ( void ) = 
{
	[BSWM_COMMFULLCOMMUNCATIONLEXPRESSION_EXP_IDX] = BswM_ComMFullCommuncationlExpressionLogicalExpHandle,
	[BSWM_STARTCOMMUNICATIONEXPRESSION_EXP_IDX] = BswM_StartCommunicationExpressionLogicalExpHandle,
};

static inline uint8 BswM_Internal_Read_SwcModeReq_SwcStartCommunication( void ) {
	uint8 tmp;
	(void) Rte_Read_modeRequestPort_SwcStartCommunication_requestedMode( &tmp );
	return tmp;
}

void BswM_Internal_UpdateNotificationMirrors( void ) {
	BswM_ModeReqMirrors[BSWM_SWCSTARTCOMMUNICATION_REQ_IDX] = (uint32) BswM_Internal_Read_SwcModeReq_SwcStartCommunication();


}



/* @req BswM0047 */
void BswM_ComM_CurrentMode( NetworkHandleType Network,
                            ComM_ModeType RequestedMode ) {
	BSWM_VALIDATE_INIT_NORV(BSWM_SERVICEID_COMMCURRENTMODE); /* @req BswM0078 */
	BSWM_VALIDATE_REQUESTMODE_NORV(IS_VALID_COMM_MODE(RequestedMode), BSWM_SERVICEID_COMMCURRENTMODE); /* @req BswM0091 */

	switch (Network) {
		case ComMConf_ComMChannel_ComMChannel:
			BswM_ModeReqMirrors[BSWM_BSWCOMMINDICATION_REQ_IDX] = (ComM_ModeType) RequestedMode; //lint -e641 Conversion from enum to int OK since enum typ will fit in uint32
			break;
		default:
			break;
	}
}

/* @req BswM0148 */
void BswM_ComM_CurrentPNCMode( PNCHandleType PNC,
                               ComM_PncModeType CurrentPncMode ) {
	BSWM_VALIDATE_INIT_NORV(BSWM_SERVICEID_COMMCURRENTPNCMODE); /* @req BswM0149 */

	(void)PNC;
	(void)CurrentPncMode;
}

/* @req BswM0056 */
void BswM_EcuM_CurrentState( EcuM_StateType CurrentState ) {
	BSWM_VALIDATE_INIT_NORV(BSWM_SERVICEID_ECUMCURRENTSTATE); /* @req BswM0084 */
	/* !req BswM0103 */

	(void)CurrentState;
}

/* @req BswM0131 */
void BswM_EcuM_CurrentWakeup( EcuM_WakeupSourceType source,
                              EcuM_WakeupStatusType state ) {
	BSWM_VALIDATE_INIT_NORV(BSWM_SERVICEID_ECUMCURRENTWAKEUP); /* @req BswM0132 */
	/* !req BswM0133 */

	(void)source;
	(void)state;
}

/* !req BswM0050 */
void BswM_EthSM_CurrentState( NetworkHandleType Network,
                              EthSM_NetworkModeStateType CurrentState ) {
	BSWM_VALIDATE_INIT_NORV(BSWM_SERVICEID_ETHSMCURRENTSTATE); /* @req BswM0081 */
	/* !req BswM0097 */
	(void)Network;
	(void)CurrentState;
}
