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
		.CanIfCanRxPduId 			= PDUR_PDU_ID_TESTER01,
    	.CanIfCanRxPduLowerCanId 	= 2,
    	.CanIfCanRxPduUpperCanId 	= 2,
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
	{
		.CanIfCanRxPduId 			= CANTP_PDU_ID_DIAGFUNCTIONALRX,
    	.CanIfCanRxPduLowerCanId 	= 2047,
    	.CanIfCanRxPduUpperCanId 	= 2047,
    	.CanIfCanRxPduDlc 			= 8,
#if ( CANIF_PUBLIC_READRXPDU_DATA_API == STD_ON )    
    	.CanIfReadRxPduData 		= FALSE,
#endif    
#if ( CANIF_PUBLIC_READRXPDU_NOTIFY_STATUS_API == STD_ON )
    	.CanIfReadRxPduNotifyStatus = FALSE, 
#endif
    	.CanIdIsExtended	 		= false,
    	.CanIfUserRxIndication 		= CANTP_CALLOUT,
	},
	{
		.CanIfCanRxPduId 			= CANTP_PDU_ID_DIAGPHYSICALRX,
    	.CanIfCanRxPduLowerCanId 	= 1843,
    	.CanIfCanRxPduUpperCanId 	= 1843,
    	.CanIfCanRxPduDlc 			= 8,
#if ( CANIF_PUBLIC_READRXPDU_DATA_API == STD_ON )    
    	.CanIfReadRxPduData 		= FALSE,
#endif    
#if ( CANIF_PUBLIC_READRXPDU_NOTIFY_STATUS_API == STD_ON )
    	.CanIfReadRxPduNotifyStatus = FALSE, 
#endif
    	.CanIdIsExtended	 		= false,
    	.CanIfUserRxIndication 		= CANTP_CALLOUT,
	},
	{
		.CanIfCanRxPduId 			= XCP_PDU_ID_XCP_RX_PDU,
    	.CanIfCanRxPduLowerCanId 	= 1000,
    	.CanIfCanRxPduUpperCanId 	= 1000,
    	.CanIfCanRxPduDlc 			= 8,
#if ( CANIF_PUBLIC_READRXPDU_DATA_API == STD_ON )    
    	.CanIfReadRxPduData 		= FALSE,
#endif    
#if ( CANIF_PUBLIC_READRXPDU_NOTIFY_STATUS_API == STD_ON )
    	.CanIfReadRxPduNotifyStatus = FALSE, 
#endif
    	.CanIdIsExtended	 		= false,
    	.CanIfUserRxIndication 		= XCP_CALLOUT,
	},
	{
		.CanIfCanRxPduId 			= PDUR_PDU_ID_SWCMEM_RX_CANIF,
    	.CanIfCanRxPduLowerCanId 	= 17,
    	.CanIfCanRxPduUpperCanId 	= 17,
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
	{
		.CanIfCanRxPduId 			= SPECIAL_PDU_ID_T1_RX_PDU,
    	.CanIfCanRxPduLowerCanId 	= 2000,
    	.CanIfCanRxPduUpperCanId 	= 2000,
    	.CanIfCanRxPduDlc 			= 8,
#if ( CANIF_PUBLIC_READRXPDU_DATA_API == STD_ON )    
    	.CanIfReadRxPduData 		= FALSE,
#endif    
#if ( CANIF_PUBLIC_READRXPDU_NOTIFY_STATUS_API == STD_ON )
    	.CanIfReadRxPduNotifyStatus = FALSE, 
#endif
    	.CanIdIsExtended	 		= false,
    	.CanIfUserRxIndication 		= 5,
	},
};

SECTION_POSTBUILD_DATA const CanIf_HthConfigType CanIfHthConfigData_CanIfInitHohCfg[] =
{
	{ 
    	.CanIfHthType 				= CANIF_HANDLE_TYPE_BASIC,
    	.CanIfCanControllerIdRef 	= CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg,
    	.CanIfHthIdSymRef 			= CanConf_CanHardwareObject_Ctrl_0_Tx_0,
	},
};

SECTION_POSTBUILD_DATA const uint16 CanIfCanHohToCanIfHrhMap_CanIfInitHohCfg[] = {
    [CanConf_CanHardwareObject_Ctrl_0_Rx_0] = CanIfInitHohCfg_CanIfHrhCfg_INDEX,
    [CanConf_CanHardwareObject_Ctrl_0_Tx_0] = NO_CANIF_HRH,
};

SECTION_POSTBUILD_DATA const CanIf_HrhConfigType CanIfHrhConfigData_CanIfInitHohCfg[] =
{
	[CanIfInitHohCfg_CanIfHrhCfg_INDEX] = {
    	.CanIfHrhType 				= CANIF_HANDLE_TYPE_BASIC,
    	.CanIfSoftwareFilterHrh 	= TRUE,
    	.CanIfHrhCanCtrlIdRef 		= CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg,
    	.RxPduList					= HrhRxPdu_CanIfHrhCfg,
    	.NofRxPdus					= 6u,
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
		.CanIfTxPduId 				= SPECIAL_PDU_ID_T1_TX_PDU,
    	.CanIfCanTxPduIdCanId 		= 2001,
    	.CanIfCanTxPduIdDlc 		= 8,
    	.CanIfCanTxPduType 			= CANIF_PDU_TYPE_STATIC,
    	.CanIfTxPduPnFilterEnable	= STD_OFF,
#if ( CANIF_PUBLIC_READTXPDU_NOTIFY_STATUS_API == STD_ON )
    	.CanIfReadTxPduNotifyStatus = FALSE,
#endif
    	.CanIfTxPduIdCanIdType 		= CANIF_CAN_ID_TYPE_11,
    	.CanIfUserTxConfirmation 	= 5,
    	/* [CanIfBufferCfg] */
    	.CanIfTxPduBufferRef		= &CanIfBufferCfgData[0],
	},
	{
		.CanIfTxPduId 				= XCP_PDU_ID_XCP_TX_PDU,
    	.CanIfCanTxPduIdCanId 		= 1001,
    	.CanIfCanTxPduIdDlc 		= 8,
    	.CanIfCanTxPduType 			= CANIF_PDU_TYPE_STATIC,
    	.CanIfTxPduPnFilterEnable	= STD_OFF,
#if ( CANIF_PUBLIC_READTXPDU_NOTIFY_STATUS_API == STD_ON )
    	.CanIfReadTxPduNotifyStatus = FALSE,
#endif
    	.CanIfTxPduIdCanIdType 		= CANIF_CAN_ID_TYPE_11,
    	.CanIfUserTxConfirmation 	= XCP_CALLOUT,
    	/* [CanIfBufferCfg] */
    	.CanIfTxPduBufferRef		= &CanIfBufferCfgData[0],
	},
    {
        .CanIfTxPduId               = PDUR_REVERSE_PDU_ID_ECU01,
        .CanIfCanTxPduIdCanId       = 1,
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
    {
        .CanIfTxPduId               = CANTP_PDU_ID_DIAGPHYSICALTX,
        .CanIfCanTxPduIdCanId       = 1587,
        .CanIfCanTxPduIdDlc         = 8,
        .CanIfCanTxPduType          = CANIF_PDU_TYPE_STATIC,
        .CanIfTxPduPnFilterEnable   = STD_OFF,
#if ( CANIF_PUBLIC_READTXPDU_NOTIFY_STATUS_API == STD_ON )
        .CanIfReadTxPduNotifyStatus = FALSE,
#endif
        .CanIfTxPduIdCanIdType      = CANIF_CAN_ID_TYPE_11,
        .CanIfUserTxConfirmation    = CANTP_CALLOUT,
        /* [CanIfBufferCfg] */
        .CanIfTxPduBufferRef        = &CanIfBufferCfgData[0],
    },
    {
        .CanIfTxPduId               = PDUR_REVERSE_PDU_ID_DIAGUUDT,
        .CanIfCanTxPduIdCanId       = 1696,
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
    {
        .CanIfTxPduId               = PDUR_REVERSE_PDU_ID_SWCMEM_TX_CANIF,
        .CanIfCanTxPduIdCanId       = 16,
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
		.CanControllerId 		= (uint32)CanConf_CanController_CanController0,
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
	.CanIfNumberOfCanRxPduIds 			= 6,
	.CanIfNumberOfCanTXPduIds 			= 6,
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




