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

/* Generator version: 1.2.2
 * AUTOSAR version:   4.0.3
 */

#if defined(USE_PDUR)
#include "PduR.h"
#include "PduR_PbCfg.h"
#endif

#if defined(USE_CANTP)
#include "CanTp.h"
#include "CanTp_PBCfg.h"
#endif

#include "Com.h"
#include "Com_PbCfg.h"

#include "MemMap.h"

#if (COM_MAX_BUFFER_SIZE < 208)
#error Com: The configured ram buffer size is less than required! (208 bytes required)
#endif
#if (COM_MAX_N_IPDUS < 4)
#error Com: Configured maximum number of Pdus is less than the number of Pdus in configuration!
#endif
#if (COM_MAX_N_SUPPORTED_IPDU_COUNTERS < 0)
#error Com: Configured maximum number of Pdus with counter(ArcMaxNumberOfSupportedIPduCounters) is less than the number of Pdus configured with counter !
#endif
#if (COM_MAX_N_SIGNALS < 10)
#error Com: Configured maximum number of signals is less than the number of signals in configuration!
#endif
#if (COM_MAX_N_GROUP_SIGNALS < 0)
#error Com: Configured maximum number of groupsignals is less than the number of groupsignals in configuration!
#endif
#if (COM_MAX_N_SUPPORTED_GWSOURCE_DESCRIPTIONS < 0)
#error Com: Configured maximum number of gateway source description is less than the number of ComGwSourceDescription in configuration!
#endif


/*
 * Signal init values.
 */
SECTION_POSTBUILD_DATA const sint32 Com_SignalInitValue_AdcValue = 52;
SECTION_POSTBUILD_DATA const uint8 Com_SignalInitValue_SwcMemRx_BlockId = 0;
SECTION_POSTBUILD_DATA const uint32 Com_SignalInitValue_SwcMemRx_Data = 0;
SECTION_POSTBUILD_DATA const uint8 Com_SignalInitValue_SwcMemRx_Request = 0;
SECTION_POSTBUILD_DATA const uint8 Com_SignalInitValue_SwcMemTx_BlockId = 0;
SECTION_POSTBUILD_DATA const uint32 Com_SignalInitValue_SwcMemTx_Data = 0;
SECTION_POSTBUILD_DATA const uint8 Com_SignalInitValue_SwcMemTx_Result = 0;
SECTION_POSTBUILD_DATA const uint8 Com_SignalInitValue_rxCmdSignal = 0;
SECTION_POSTBUILD_DATA const uint32 Com_SignalInitValue_rxsignal01 = 0;
SECTION_POSTBUILD_DATA const uint32 Com_SignalInitValue_txsignal01 = 0;


/*
 * Group signal definitions
 */
SECTION_POSTBUILD_DATA const ComGroupSignal_type ComGroupSignal[] = {
	{
		.Com_Arc_EOL = 1
	}
};


/*
 * SignalGroup GroupSignals lists.
 */



/*
 * Signal group masks.
 */


/*
 * Signal definitions
 */
 
SECTION_POSTBUILD_DATA const ComSignal_type ComSignal[] = {


    { // AdcValue
        .ComHandleId                = ComConf_ComSignal_AdcValue,
        .ComIPduHandleId            = ComConf_ComIPdu_Ecu01,
        .ComFirstTimeoutFactor      = 0,      
        .ComNotification            = COM_NO_FUNCTION_CALLOUT,        
        .ComTimeoutFactor           = 0,
        .ComTimeoutNotification     = COM_NO_FUNCTION_CALLOUT,
        .ComErrorNotification       = COM_NO_FUNCTION_CALLOUT,
        .ComTransferProperty        = COM_PENDING,
        .ComUpdateBitPosition       = 0,
        .ComSignalArcUseUpdateBit   = FALSE,
        .ComSignalInitValue         = &Com_SignalInitValue_AdcValue,
        .ComBitPosition             = 32,
        .ComBitSize                 = 32,
        .ComSignalEndianess         = COM_LITTLE_ENDIAN,
        .ComSignalType              = COM_SINT32,
        .Com_Arc_IsSignalGroup      = FALSE,
        .ComGroupSignal             = NULL,
        .ComRxDataTimeoutAction     = COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSigGwRoutingReq         = FALSE,
        .ComOsekNmNetId             = COM_OSEKNM_INVALID_NET_ID,
        .ComOsekNmNodeId            = 0,
        .Com_Arc_EOL                = 0
    },

    { // SwcMemRx_BlockId
        .ComHandleId                = ComConf_ComSignal_SwcMemRx_BlockId,
        .ComIPduHandleId            = ComConf_ComIPdu_SwcMemRx,
        // @req COM292          
        .ComFirstTimeoutFactor      = 0,
        .ComNotification            = COM_NO_FUNCTION_CALLOUT,        
        .ComTimeoutFactor           = 0,
        .ComTimeoutNotification     = COM_NO_FUNCTION_CALLOUT,
        .ComErrorNotification       = COM_NO_FUNCTION_CALLOUT,
        .ComTransferProperty        = COM_PENDING,
        .ComUpdateBitPosition       = 0,
        .ComSignalArcUseUpdateBit   = FALSE,
        .ComSignalInitValue         = &Com_SignalInitValue_SwcMemRx_BlockId,
        .ComBitPosition             = 15,
        .ComBitSize                 = 8,
        .ComSignalEndianess         = COM_BIG_ENDIAN,
        .ComSignalType              = COM_UINT8,
        .Com_Arc_IsSignalGroup      = FALSE,
        .ComGroupSignal             = NULL,
        .ComRxDataTimeoutAction     = COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSigGwRoutingReq         = FALSE,
        .ComOsekNmNetId             = COM_OSEKNM_INVALID_NET_ID,
        .ComOsekNmNodeId            = 0,
        .Com_Arc_EOL                = 0
    },

    { // SwcMemRx_Data
        .ComHandleId                = ComConf_ComSignal_SwcMemRx_Data,
        .ComIPduHandleId            = ComConf_ComIPdu_SwcMemRx,
        // @req COM292          
        .ComFirstTimeoutFactor      = 0,
        .ComNotification            = COM_NO_FUNCTION_CALLOUT,        
        .ComTimeoutFactor           = 0,
        .ComTimeoutNotification     = COM_NO_FUNCTION_CALLOUT,
        .ComErrorNotification       = COM_NO_FUNCTION_CALLOUT,
        .ComTransferProperty        = COM_PENDING,
        .ComUpdateBitPosition       = 0,
        .ComSignalArcUseUpdateBit   = FALSE,
        .ComSignalInitValue         = &Com_SignalInitValue_SwcMemRx_Data,
        .ComBitPosition             = 23,
        .ComBitSize                 = 32,
        .ComSignalEndianess         = COM_BIG_ENDIAN,
        .ComSignalType              = COM_UINT32,
        .Com_Arc_IsSignalGroup      = FALSE,
        .ComGroupSignal             = NULL,
        .ComRxDataTimeoutAction     = COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSigGwRoutingReq         = FALSE,
        .ComOsekNmNetId             = COM_OSEKNM_INVALID_NET_ID,
        .ComOsekNmNodeId            = 0,
        .Com_Arc_EOL                = 0
    },

    { // SwcMemRx_Request
        .ComHandleId                = ComConf_ComSignal_SwcMemRx_Request,
        .ComIPduHandleId            = ComConf_ComIPdu_SwcMemRx,
        // @req COM292          
        .ComFirstTimeoutFactor      = 0,
        .ComNotification            = Rte_COMCbk_SwcMemRx_Request_CALLOUT,        
        .ComTimeoutFactor           = 0,
        .ComTimeoutNotification     = COM_NO_FUNCTION_CALLOUT,
        .ComErrorNotification       = COM_NO_FUNCTION_CALLOUT,
        .ComTransferProperty        = COM_PENDING,
        .ComUpdateBitPosition       = 0,
        .ComSignalArcUseUpdateBit   = FALSE,
        .ComSignalInitValue         = &Com_SignalInitValue_SwcMemRx_Request,
        .ComBitPosition             = 7,
        .ComBitSize                 = 8,
        .ComSignalEndianess         = COM_BIG_ENDIAN,
        .ComSignalType              = COM_UINT8,
        .Com_Arc_IsSignalGroup      = FALSE,
        .ComGroupSignal             = NULL,
        .ComRxDataTimeoutAction     = COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSigGwRoutingReq         = FALSE,
        .ComOsekNmNetId             = COM_OSEKNM_INVALID_NET_ID,
        .ComOsekNmNodeId            = 0,
        .Com_Arc_EOL                = 0
    },

    { // SwcMemTx_BlockId
        .ComHandleId                = ComConf_ComSignal_SwcMemTx_BlockId,
        .ComIPduHandleId            = ComConf_ComIPdu_SwcMemTx,
        .ComFirstTimeoutFactor      = 0,      
        .ComNotification            = COM_NO_FUNCTION_CALLOUT,        
        .ComTimeoutFactor           = 0,
        .ComTimeoutNotification     = COM_NO_FUNCTION_CALLOUT,
        .ComErrorNotification       = COM_NO_FUNCTION_CALLOUT,
        .ComTransferProperty        = COM_PENDING,
        .ComUpdateBitPosition       = 0,
        .ComSignalArcUseUpdateBit   = FALSE,
        .ComSignalInitValue         = &Com_SignalInitValue_SwcMemTx_BlockId,
        .ComBitPosition             = 15,
        .ComBitSize                 = 8,
        .ComSignalEndianess         = COM_BIG_ENDIAN,
        .ComSignalType              = COM_UINT8,
        .Com_Arc_IsSignalGroup      = FALSE,
        .ComGroupSignal             = NULL,
        .ComRxDataTimeoutAction     = COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSigGwRoutingReq         = FALSE,
        .ComOsekNmNetId             = COM_OSEKNM_INVALID_NET_ID,
        .ComOsekNmNodeId            = 0,
        .Com_Arc_EOL                = 0
    },

    { // SwcMemTx_Data
        .ComHandleId                = ComConf_ComSignal_SwcMemTx_Data,
        .ComIPduHandleId            = ComConf_ComIPdu_SwcMemTx,
        .ComFirstTimeoutFactor      = 0,      
        .ComNotification            = COM_NO_FUNCTION_CALLOUT,        
        .ComTimeoutFactor           = 0,
        .ComTimeoutNotification     = COM_NO_FUNCTION_CALLOUT,
        .ComErrorNotification       = COM_NO_FUNCTION_CALLOUT,
        .ComTransferProperty        = COM_PENDING,
        .ComUpdateBitPosition       = 0,
        .ComSignalArcUseUpdateBit   = FALSE,
        .ComSignalInitValue         = &Com_SignalInitValue_SwcMemTx_Data,
        .ComBitPosition             = 23,
        .ComBitSize                 = 32,
        .ComSignalEndianess         = COM_BIG_ENDIAN,
        .ComSignalType              = COM_UINT32,
        .Com_Arc_IsSignalGroup      = FALSE,
        .ComGroupSignal             = NULL,
        .ComRxDataTimeoutAction     = COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSigGwRoutingReq         = FALSE,
        .ComOsekNmNetId             = COM_OSEKNM_INVALID_NET_ID,
        .ComOsekNmNodeId            = 0,
        .Com_Arc_EOL                = 0
    },

    { // SwcMemTx_Result
        .ComHandleId                = ComConf_ComSignal_SwcMemTx_Result,
        .ComIPduHandleId            = ComConf_ComIPdu_SwcMemTx,
        .ComFirstTimeoutFactor      = 0,      
        .ComNotification            = COM_NO_FUNCTION_CALLOUT,        
        .ComTimeoutFactor           = 0,
        .ComTimeoutNotification     = COM_NO_FUNCTION_CALLOUT,
        .ComErrorNotification       = COM_NO_FUNCTION_CALLOUT,
        .ComTransferProperty        = COM_TRIGGERED,
        .ComUpdateBitPosition       = 0,
        .ComSignalArcUseUpdateBit   = FALSE,
        .ComSignalInitValue         = &Com_SignalInitValue_SwcMemTx_Result,
        .ComBitPosition             = 7,
        .ComBitSize                 = 8,
        .ComSignalEndianess         = COM_BIG_ENDIAN,
        .ComSignalType              = COM_UINT8,
        .Com_Arc_IsSignalGroup      = FALSE,
        .ComGroupSignal             = NULL,
        .ComRxDataTimeoutAction     = COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSigGwRoutingReq         = FALSE,
        .ComOsekNmNetId             = COM_OSEKNM_INVALID_NET_ID,
        .ComOsekNmNodeId            = 0,
        .Com_Arc_EOL                = 0
    },

    { // rxCmdSignal
        .ComHandleId                = ComConf_ComSignal_rxCmdSignal,
        .ComIPduHandleId            = ComConf_ComIPdu_Tester01,
        // @req COM292          
        .ComFirstTimeoutFactor      = 0,
        .ComNotification            = COM_NO_FUNCTION_CALLOUT,        
        .ComTimeoutFactor           = 0,
        .ComTimeoutNotification     = COM_NO_FUNCTION_CALLOUT,
        .ComErrorNotification       = COM_NO_FUNCTION_CALLOUT,
        .ComTransferProperty        = COM_PENDING,
        .ComUpdateBitPosition       = 0,
        .ComSignalArcUseUpdateBit   = FALSE,
        .ComSignalInitValue         = &Com_SignalInitValue_rxCmdSignal,
        .ComBitPosition             = 39,
        .ComBitSize                 = 8,
        .ComSignalEndianess         = COM_BIG_ENDIAN,
        .ComSignalType              = COM_UINT8,
        .Com_Arc_IsSignalGroup      = FALSE,
        .ComGroupSignal             = NULL,
        .ComRxDataTimeoutAction     = COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSigGwRoutingReq         = FALSE,
        .ComOsekNmNetId             = COM_OSEKNM_INVALID_NET_ID,
        .ComOsekNmNodeId            = 0,
        .Com_Arc_EOL                = 0
    },

    { // rxsignal01
        .ComHandleId                = ComConf_ComSignal_rxsignal01,
        .ComIPduHandleId            = ComConf_ComIPdu_Tester01,
        // @req COM292          
        .ComFirstTimeoutFactor      = 0,
        .ComNotification            = COM_NO_FUNCTION_CALLOUT,        
        .ComTimeoutFactor           = 0,
        .ComTimeoutNotification     = COM_NO_FUNCTION_CALLOUT,
        .ComErrorNotification       = COM_NO_FUNCTION_CALLOUT,
        .ComTransferProperty        = COM_PENDING,
        .ComUpdateBitPosition       = 0,
        .ComSignalArcUseUpdateBit   = FALSE,
        .ComSignalInitValue         = &Com_SignalInitValue_rxsignal01,
        .ComBitPosition             = 0,
        .ComBitSize                 = 32,
        .ComSignalEndianess         = COM_LITTLE_ENDIAN,
        .ComSignalType              = COM_UINT32,
        .Com_Arc_IsSignalGroup      = FALSE,
        .ComGroupSignal             = NULL,
        .ComRxDataTimeoutAction     = COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSigGwRoutingReq         = FALSE,
        .ComOsekNmNetId             = COM_OSEKNM_INVALID_NET_ID,
        .ComOsekNmNodeId            = 0,
        .Com_Arc_EOL                = 0
    },

    { // txsignal01
        .ComHandleId                = ComConf_ComSignal_txsignal01,
        .ComIPduHandleId            = ComConf_ComIPdu_Ecu01,
        .ComFirstTimeoutFactor      = 0,      
        .ComNotification            = COM_NO_FUNCTION_CALLOUT,        
        .ComTimeoutFactor           = 0,
        .ComTimeoutNotification     = COM_NO_FUNCTION_CALLOUT,
        .ComErrorNotification       = COM_NO_FUNCTION_CALLOUT,
        .ComTransferProperty        = COM_PENDING,
        .ComUpdateBitPosition       = 0,
        .ComSignalArcUseUpdateBit   = FALSE,
        .ComSignalInitValue         = &Com_SignalInitValue_txsignal01,
        .ComBitPosition             = 0,
        .ComBitSize                 = 32,
        .ComSignalEndianess         = COM_LITTLE_ENDIAN,
        .ComSignalType              = COM_UINT32,
        .Com_Arc_IsSignalGroup      = FALSE,
        .ComGroupSignal             = NULL,
        .ComRxDataTimeoutAction     = COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSigGwRoutingReq         = FALSE,
        .ComOsekNmNetId             = COM_OSEKNM_INVALID_NET_ID,
        .ComOsekNmNodeId            = 0,
        .Com_Arc_EOL                = 0
    },
	{
		.Com_Arc_EOL				= 1
	}
};

/*
 * Gateway source signal description definitions
 */
SECTION_POSTBUILD_DATA const ComGwSrcDesc_type ComGwSourceDescs[] = {
{
	.Com_Arc_EOL				= 1
}
};


/*
 * Gateway destination signal description definitions
 */
SECTION_POSTBUILD_DATA const ComGwDestnDesc_type ComGwDestinationDescs[] = {
{
	.Com_Arc_EOL				= 1
}
};


/*
 * Gateway Destination signal references
 */


/*
 * Gateway mappings
 */
SECTION_POSTBUILD_DATA const ComGwMapping_type ComGwMapping[] = {
{
	.Com_Arc_EOL				= 1
}
};


/*
 * I-PDU group definitions
 */
SECTION_POSTBUILD_DATA const ComIPduGroup_type ComIPduGroup[] = {

{
	.ComIPduGroupHandleId 		= ComConf_ComIPduGroup_ComIPduGroupRx,
	.Com_Arc_EOL 				= 0
},

{
	.ComIPduGroupHandleId 		= ComConf_ComIPduGroup_ComIPduGroupTx,
	.Com_Arc_EOL 				= 0
},

{
	.Com_Arc_EOL				= 1
}
};


/* 
 * IPdu signal lists. 
 */

SECTION_POSTBUILD_DATA const ComSignal_type * const ComIPduSignalRefs_Tester01[] = {
	&ComSignal[ComConf_ComSignal_rxsignal01],
	&ComSignal[ComConf_ComSignal_rxCmdSignal],
	NULL
};

SECTION_POSTBUILD_DATA const ComSignal_type * const ComIPduSignalRefs_Ecu01[] = {
	&ComSignal[ComConf_ComSignal_txsignal01],
	&ComSignal[ComConf_ComSignal_AdcValue],
	NULL
};

SECTION_POSTBUILD_DATA const ComSignal_type * const ComIPduSignalRefs_SwcMemRx[] = {
	&ComSignal[ComConf_ComSignal_SwcMemRx_Request],
	&ComSignal[ComConf_ComSignal_SwcMemRx_BlockId],
	&ComSignal[ComConf_ComSignal_SwcMemRx_Data],
	NULL
};

SECTION_POSTBUILD_DATA const ComSignal_type * const ComIPduSignalRefs_SwcMemTx[] = {
	&ComSignal[ComConf_ComSignal_SwcMemTx_Result],
	&ComSignal[ComConf_ComSignal_SwcMemTx_BlockId],
	&ComSignal[ComConf_ComSignal_SwcMemTx_Data],
	NULL
};


/*
 * IPdu Counter list
 */
 
/*
 * I-PDU group ref lists
 */
SECTION_POSTBUILD_DATA const ComIPduGroup_type ComIpduGroupRefs_Tester01[] = {
	{
		.ComIPduGroupHandleId 		= ComConf_ComIPduGroup_ComIPduGroupRx,
		.Com_Arc_EOL 				= 0
	},
	{
		.Com_Arc_EOL				= 1
	}
};
SECTION_POSTBUILD_DATA const ComIPduGroup_type ComIpduGroupRefs_Ecu01[] = {
	{
		.ComIPduGroupHandleId 		= ComConf_ComIPduGroup_ComIPduGroupTx,
		.Com_Arc_EOL 				= 0
	},
	{
		.Com_Arc_EOL				= 1
	}
};
SECTION_POSTBUILD_DATA const ComIPduGroup_type ComIpduGroupRefs_SwcMemRx[] = {
	{
		.ComIPduGroupHandleId 		= ComConf_ComIPduGroup_ComIPduGroupRx,
		.Com_Arc_EOL 				= 0
	},
	{
		.Com_Arc_EOL				= 1
	}
};
SECTION_POSTBUILD_DATA const ComIPduGroup_type ComIpduGroupRefs_SwcMemTx[] = {
	{
		.ComIPduGroupHandleId 		= ComConf_ComIPduGroup_ComIPduGroupTx,
		.Com_Arc_EOL 				= 0
	},
	{
		.Com_Arc_EOL				= 1
	}
};

/*
 * Gateway signal description handle
 */
	

/*
 * I-PDU definitions
 */
SECTION_POSTBUILD_DATA const ComIPdu_type ComIPdu[] = {	


	{ // Tester01
		.ArcIPduOutgoingId			= PDUR_REVERSE_PDU_ID_TESTER01,
		.ComRxIPduCallout			= COM_NO_FUNCTION_CALLOUT,
		.ComTxIPduCallout			= COM_NO_FUNCTION_CALLOUT,
		.ComTriggerTransmitIPduCallout = COM_NO_FUNCTION_CALLOUT,
		.ComIPduSignalProcessing 	= COM_DEFERRED,
		.ComIPduSize				= 64,
		.ComIPduDirection			= COM_RECEIVE,
		.ComIPduGroupRefs			= ComIpduGroupRefs_Tester01,
		.ComTxIPdu = {
			.ComTxIPduMinimumDelayFactor	= 0,
			.ComTxIPduUnusedAreasDefault	= 0,
			.ComTxModeTrue = {
				.ComTxModeMode						= COM_NONE,
				.ComTxModeNumberOfRepetitions		= 0,
				.ComTxModeRepetitionPeriodFactor	= 0,
				.ComTxModeTimeOffsetFactor			= 0,
				.ComTxModeTimePeriodFactor			= 0,
			},
			.ComTxModeFalse = {
				.ComTxModeMode						= COM_NONE,
				.ComTxModeNumberOfRepetitions		= 0,
				.ComTxModeRepetitionPeriodFactor	= 0,
				.ComTxModeTimeOffsetFactor			= 0,
				.ComTxModeTimePeriodFactor			= 0,
			},
		},
		.ComIPduSignalRef			= ComIPduSignalRefs_Tester01,
		.ComIPduDynSignalRef		= NULL,
		.ComIpduCounterRef			= NULL,
		.ComIPduGwMapSigDescHandle	= NULL,
		.ComIPduGwRoutingReq		= FALSE,
		.Com_Arc_EOL				= 0
	},


	{ // Ecu01
		.ArcIPduOutgoingId			= PDUR_PDU_ID_ECU01,
		.ComRxIPduCallout			= COM_NO_FUNCTION_CALLOUT,
		.ComTxIPduCallout			= COM_NO_FUNCTION_CALLOUT,
		.ComTriggerTransmitIPduCallout = COM_NO_FUNCTION_CALLOUT,
		.ComIPduSignalProcessing 	= COM_DEFERRED,
		.ComIPduSize				= 64,
		.ComIPduDirection			= COM_SEND,
		.ComIPduGroupRefs			= ComIpduGroupRefs_Ecu01,
		.ComTxIPdu = {
			.ComTxIPduMinimumDelayFactor	= 0,
			.ComTxIPduUnusedAreasDefault	= 0,
			.ComTxModeTrue = {
				.ComTxModeMode						= COM_PERIODIC,
				.ComTxModeNumberOfRepetitions		= 0,
				.ComTxModeRepetitionPeriodFactor	= 0,
				.ComTxModeTimeOffsetFactor			= 0,
				.ComTxModeTimePeriodFactor			= 10,
			},
			.ComTxModeFalse = {
				.ComTxModeMode						= COM_NONE,
				.ComTxModeNumberOfRepetitions		= 0,
				.ComTxModeRepetitionPeriodFactor	= 0,
				.ComTxModeTimeOffsetFactor			= 0,
				.ComTxModeTimePeriodFactor			= 0,
			},
		},
		.ComIPduSignalRef			= ComIPduSignalRefs_Ecu01,
		.ComIPduDynSignalRef		= NULL,
		.ComIpduCounterRef			= NULL,
		.ComIPduGwMapSigDescHandle	= NULL,
		.ComIPduGwRoutingReq		= FALSE,
		.Com_Arc_EOL				= 0
	},


	{ // SwcMemRx
		.ArcIPduOutgoingId			= PDUR_REVERSE_PDU_ID_SWCMEM_RX_COM,
		.ComRxIPduCallout			= COM_NO_FUNCTION_CALLOUT,
		.ComTxIPduCallout			= COM_NO_FUNCTION_CALLOUT,
		.ComTriggerTransmitIPduCallout = COM_NO_FUNCTION_CALLOUT,
		.ComIPduSignalProcessing 	= COM_IMMEDIATE,
		.ComIPduSize				= 8,
		.ComIPduDirection			= COM_RECEIVE,
		.ComIPduGroupRefs			= ComIpduGroupRefs_SwcMemRx,
		.ComTxIPdu = {
			.ComTxIPduMinimumDelayFactor	= 0,
			.ComTxIPduUnusedAreasDefault	= 0,
			.ComTxModeTrue = {
				.ComTxModeMode						= COM_NONE,
				.ComTxModeNumberOfRepetitions		= 0,
				.ComTxModeRepetitionPeriodFactor	= 0,
				.ComTxModeTimeOffsetFactor			= 0,
				.ComTxModeTimePeriodFactor			= 0,
			},
			.ComTxModeFalse = {
				.ComTxModeMode						= COM_NONE,
				.ComTxModeNumberOfRepetitions		= 0,
				.ComTxModeRepetitionPeriodFactor	= 0,
				.ComTxModeTimeOffsetFactor			= 0,
				.ComTxModeTimePeriodFactor			= 0,
			},
		},
		.ComIPduSignalRef			= ComIPduSignalRefs_SwcMemRx,
		.ComIPduDynSignalRef		= NULL,
		.ComIpduCounterRef			= NULL,
		.ComIPduGwMapSigDescHandle	= NULL,
		.ComIPduGwRoutingReq		= FALSE,
		.Com_Arc_EOL				= 0
	},


	{ // SwcMemTx
		.ArcIPduOutgoingId			= PDUR_PDU_ID_SWCMEM_TX_COM,
		.ComRxIPduCallout			= COM_NO_FUNCTION_CALLOUT,
		.ComTxIPduCallout			= COM_NO_FUNCTION_CALLOUT,
		.ComTriggerTransmitIPduCallout = COM_NO_FUNCTION_CALLOUT,
		.ComIPduSignalProcessing 	= COM_IMMEDIATE,
		.ComIPduSize				= 8,
		.ComIPduDirection			= COM_SEND,
		.ComIPduGroupRefs			= ComIpduGroupRefs_SwcMemTx,
		.ComTxIPdu = {
			.ComTxIPduMinimumDelayFactor	= 0,
			.ComTxIPduUnusedAreasDefault	= 0,
			.ComTxModeTrue = {
				.ComTxModeMode						= COM_DIRECT,
				.ComTxModeNumberOfRepetitions		= 0,
				.ComTxModeRepetitionPeriodFactor	= 0,
				.ComTxModeTimeOffsetFactor			= 0,
				.ComTxModeTimePeriodFactor			= 0,
			},
			.ComTxModeFalse = {
				.ComTxModeMode						= COM_NONE,
				.ComTxModeNumberOfRepetitions		= 0,
				.ComTxModeRepetitionPeriodFactor	= 0,
				.ComTxModeTimeOffsetFactor			= 0,
				.ComTxModeTimePeriodFactor			= 0,
			},
		},
		.ComIPduSignalRef			= ComIPduSignalRefs_SwcMemTx,
		.ComIPduDynSignalRef		= NULL,
		.ComIpduCounterRef			= NULL,
		.ComIPduGwMapSigDescHandle	= NULL,
		.ComIPduGwRoutingReq		= FALSE,
		.Com_Arc_EOL				= 0
	},

  
  




	{
		.Com_Arc_EOL				= 1
	}
};

SECTION_POSTBUILD_DATA const Com_ConfigType ComConfiguration = {
	.ComConfigurationId 			= 1,
	.ComNofIPdus					= 4,
	.ComNofSignals					= 10,
	.ComNofGroupSignals				= 0,
	.ComIPdu 						= ComIPdu,
	.ComIPduGroup 					= ComIPduGroup,
	.ComSignal						= ComSignal,
	.ComGroupSignal					= ComGroupSignal,
	.ComGwMappingRef				= ComGwMapping,
	.ComGwSrcDesc					= ComGwSourceDescs,
	.ComGwDestnDesc					= ComGwDestinationDescs
};


