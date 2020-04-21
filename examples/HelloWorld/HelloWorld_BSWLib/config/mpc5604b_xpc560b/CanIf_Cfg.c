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

/* Generator version: 5.3.0
 * AUTOSAR version:   4.0.3
 */

#include "CanIf.h"

#if defined(USE_CANTP)
#include "CanTp.h"
#include "CanTp_Cbk.h"
#endif
#if defined(USE_J1939TP)
#include "J1939Tp.h"
#include "J1939Tp_Cbk.h"
#endif
#if defined(USE_PDUR)
#include "PduR.h"
#endif
#if defined(USE_CANNM)
#include "CanNm_Cbk.h"
#endif
#if defined(USE_XCP)
#include "Xcp.h"
#include "XcpOnCan_Cbk.h"
#endif





const CanIfUserRxIndicationType CanIfUserRxIndications[] = {
#if defined(USE_CANNM)	
	CanNm_RxIndication,
#else
	NULL,
#endif	
#if defined(USE_CANTP)	
	CanTp_RxIndication,
#else
	NULL,
#endif
#if defined(USE_J1939TP)
	J1939Tp_RxIndication,
#else
	NULL,
#endif
#if defined(USE_PDUR)	
	PduR_CanIfRxIndication,
#else
	NULL,
#endif
#if defined(USE_XCP)	
	Xcp_CanIfRxIndication,
#else
	NULL,
#endif	

};

const CanIfUserTxConfirmationType CanIfUserTxConfirmations[] = {
#if defined(USE_CANNM)	
	CanNm_TxConfirmation,
#else
	NULL,
#endif	
#if defined(USE_CANTP)	
	CanTp_TxConfirmation,
#else
	NULL,
#endif
#if defined(USE_J1939TP)
	J1939Tp_TxConfirmation,
#else
	NULL,
#endif
#if defined(USE_PDUR)	
	PduR_CanIfTxConfirmation,
#else
	NULL,
#endif
#if defined(USE_XCP)
	Xcp_CanIfTxConfirmation,
#else
	NULL,
#endif
};



// Busoff notification
extern void CanSM_ControllerBusOff(uint8 Channel);


// Controller mode indication
extern void CanSM_ControllerModeIndication(uint8 Channel,  CanIf_ControllerModeType ControllerMode);






// Function callbacks for higher layers
const CanIf_DispatchConfigType CanIfDispatchConfig =
{
	.CanIfBusOffNotification					= CanSM_ControllerBusOff,
	.CanIfControllerModeIndication 				= CanSM_ControllerModeIndication,
  	.CanIfWakeUpNotification 					= NULL,	// Not used
  	.CanIfWakeupValidNotification 				= NULL,
#if !defined(CFG_MCAL_EXTERNAL)  	
  	.CanIfErrorNotificaton 						= NULL,	// Not used
#endif
#if defined (USE_CANTRCV)
  	.CanIfTrcvWakeFlagNotification				= NULL,
  	.CanIfTrcvClearWakeFlagNotification			= NULL,
  	.CanIfTrcvConfirmPnAvailabilityNotification	= NULL,
  	.CanIfTrcvModeChangeNotification			= NULL,
#endif /* USE_CANTRCV */
};



