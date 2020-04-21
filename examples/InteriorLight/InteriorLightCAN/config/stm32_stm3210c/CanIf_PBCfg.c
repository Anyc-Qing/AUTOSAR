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
#include "CanIf_PBCfg.h"

#if defined(USE_CANTP)
#include "CanTp.h"
#include "CanTp_Cbk.h"
#endif

#if defined(USE_J1939TP)
#include "J1939Tp.h"
#include "J1939Tp_Cbk.h"
#endif

#if defined(USE_CANNM)
#include "CanNm.h"
#include "CanNm_PBCfg.h"
#endif
#if defined(USE_PDUR)
#include "PduR.h"
#include "PduR_PbCfg.h"
#endif
#if defined(USE_XCP)
#include "Xcp.h"
#include "XcpOnCan_Cbk.h"
#endif

#include "MemMap.h"


// Data for init configuration CanIfInitConfiguration
#define CanIfInitHohCfg_CanIfHrhCfg_INDEX 0u

SECTION_POSTBUILD_DATA const CanIf_RxPduConfigType HrhRxPdu_CanIfHrhCfg[] = {
	{
		.CanIfCanRxPduId 			= PDUR_PDU_ID_PDURX,
    	.CanIfCanRxPduLowerCanId 	= 1,
    	.CanIfCanRxPduUpperCanId 	= 1,
    	.CanIfCanRxPduDlc 			= 8,
#if ( CANIF_PUBLIC_READRXPDU_DATA_API == STD_ON )    
    	.CanIfReadRxPduData 		= FALSE,
#endif    
#if ( CANIF_PUBLIC_READRXPDU_NOTIFY_STATUS_API == STD_ON )
    	.CanIfReadRxPduNotifyStatus = FALSE, 
#endif
    	.CanIdIsExtended	 		= false,
    	.CanIfUserRxIndication 		= PDUR_CALLOUT,
	},
};

SECTION_POSTBUILD_DATA const CanIf_HthConfigType CanIfHthConfigData_CanIfInitHohCfg[] =
{
	{ 
    	.CanIfHthType 				= CANIF_HANDLE_TYPE_BASIC,
    	.CanIfCanControllerIdRef 	= CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg,
    	.CanIfHthIdSymRef 			= CanConf_CanHardwareObject_CanHardwareObjectTx,
	},
};

SECTION_POSTBUILD_DATA const uint16 CanIfCanHohToCanIfHrhMap_CanIfInitHohCfg[] = {
    [CanConf_CanHardwareObject_CanHardwareObjectRx] = CanIfInitHohCfg_CanIfHrhCfg_INDEX,
    [CanConf_CanHardwareObject_CanHardwareObjectTx] = NO_CANIF_HRH,
};

SECTION_POSTBUILD_DATA const CanIf_HrhConfigType CanIfHrhConfigData_CanIfInitHohCfg[] =
{
	[CanIfInitHohCfg_CanIfHrhCfg_INDEX] = {
    	.CanIfHrhType 				= CANIF_HANDLE_TYPE_BASIC,
    	.CanIfSoftwareFilterHrh 	= TRUE,
    	.CanIfHrhCanCtrlIdRef 		= CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg,
    	.RxPduList					= HrhRxPdu_CanIfHrhCfg,
    	.NofRxPdus					= 1u,
  	},
};

SECTION_POSTBUILD_DATA const CanIf_InitHohConfigType CanIfHohConfigData[] = { 
	{
		.HrhListSize			= sizeof(CanIfCanHohToCanIfHrhMap_CanIfInitHohCfg)/sizeof(CanIfCanHohToCanIfHrhMap_CanIfInitHohCfg[0]),
		.CanHohToCanIfHrhMap 	= CanIfCanHohToCanIfHrhMap_CanIfInitHohCfg,
		.CanIfHrhConfig 		= CanIfHrhConfigData_CanIfInitHohCfg,
	    .CanIfHthConfig 		= CanIfHthConfigData_CanIfInitHohCfg,
	},
};

SECTION_POSTBUILD_DATA const CanIf_TxBufferConfigType CanIfBufferCfgData[] = {
	{
		.CanIfBufferSize = 0,
		.CanIfBufferHthRef = &CanIfHthConfigData_CanIfInitHohCfg[0],
		.CanIf_Arc_BufferId = 0
	},
};

SECTION_POSTBUILD_DATA const CanIf_TxPduConfigType CanIfTxPduConfigData[] = {
    {
        .CanIfTxPduId               = PDUR_REVERSE_PDU_ID_PDUTX,
        .CanIfCanTxPduIdCanId       = 2,
        .CanIfCanTxPduIdDlc         = 8,
        .CanIfCanTxPduType          = CANIF_PDU_TYPE_STATIC,
        .CanIfTxPduPnFilterEnable   = STD_OFF,
#if ( CANIF_PUBLIC_READTXPDU_NOTIFY_STATUS_API == STD_ON )
        .CanIfReadTxPduNotifyStatus = FALSE,
#endif
        .CanIfTxPduIdCanIdType      = CANIF_CAN_ID_TYPE_11,
        .CanIfUserTxConfirmation    = PDUR_CALLOUT,
        /* [CanIfBufferCfg] */
        .CanIfTxPduBufferRef        = &CanIfBufferCfgData[0],
    },
};

SECTION_POSTBUILD_DATA const CanIf_TxBufferConfigType *const CanIfCtrlCfg_BufferList[] = {
	/* CanIfBufferCfg */
	&CanIfBufferCfgData[0],
};


SECTION_POSTBUILD_DATA const CanIf_Arc_ChannelConfigType CanIf_Arc_ChannelConfig[CANIF_CHANNEL_CNT] = { 
	{
		/* CanIfCtrlCfg */
		.CanControllerId 		= (uint32)CanConf_CanController_CanController,
		.NofTxBuffers 			= 1,
		.TxBufferRefList 		= CanIfCtrlCfg_BufferList,
		.CanIfCtrlWakeUpSupport = STD_OFF,
		.CanIfCtrlWakeUpSrc		= 0,
		.CanIfCtrlPnFilterSet	= STD_OFF,
	},
};


// This container contains the init parameters of the CAN
// Multiplicity 1.
SECTION_POSTBUILD_DATA const CanIf_InitConfigType CanIfInitConfig =
{
	.CanIfConfigSet 					= 0, // Not used  
	.CanIfNumberOfCanRxPduIds 			= 1,
	.CanIfNumberOfCanTXPduIds 			= 1,
	.CanIfNumberOfDynamicCanTXPduIds	= 0, // Not used
	.CanIfNumberOfTxBuffers				= 1,

	// Containers
	.CanIfBufferCfgPtr					= CanIfBufferCfgData,
	.CanIfHohConfigPtr 					= CanIfHohConfigData,
	.CanIfTxPduConfigPtr 				= CanIfTxPduConfigData,
};

// This container includes all necessary configuration sub-containers
// according the CAN Interface configuration structure.
SECTION_POSTBUILD_DATA const CanIf_ConfigType CanIf_Config =
{
	
	.InitConfig 					= &CanIfInitConfig,
	.CanIfTransceiverConfig 		= NULL,
	.Arc_ChannelConfig			 	= CanIf_Arc_ChannelConfig,  
};




