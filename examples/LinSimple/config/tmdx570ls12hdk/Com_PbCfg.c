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

#if (COM_MAX_BUFFER_SIZE < 20)
#error Com: The configured ram buffer size is less than required! (20 bytes required)
#endif
#if (COM_MAX_N_IPDUS < 3)
#error Com: Configured maximum number of Pdus is less than the number of Pdus in configuration!
#endif
#if (COM_MAX_N_SUPPORTED_IPDU_COUNTERS < 0)
#error Com: Configured maximum number of Pdus with counter(ArcMaxNumberOfSupportedIPduCounters) is less than the number of Pdus configured with counter !
#endif
#if (COM_MAX_N_SIGNALS < 7)
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
SECTION_POSTBUILD_DATA const uint16 Com_SignalInitValue_Signal_Rx_1 = 0;
SECTION_POSTBUILD_DATA const uint16 Com_SignalInitValue_Signal_Rx_2 = 0;
SECTION_POSTBUILD_DATA const uint8 Com_SignalInitValue_Signal_Tx_1 = 0;
SECTION_POSTBUILD_DATA const uint32 Com_SignalInitValue_Signal_Tx_2 = 0;
SECTION_POSTBUILD_DATA const uint32 Com_SignalInitValue_Signal_Tx_3 = 0;
SECTION_POSTBUILD_DATA const uint32 Com_SignalInitValue_Word_1 = 0;
SECTION_POSTBUILD_DATA const uint32 Com_SignalInitValue_Word_2 = 0;


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


    { // Signal_Rx_1
        .ComHandleId                = ComConf_ComSignal_Signal_Rx_1,
        .ComIPduHandleId            = ComConf_ComIPdu_LAMPS_RX,
        // @req COM292          
        .ComFirstTimeoutFactor      = 0,
        .ComNotification            = COM_NO_FUNCTION_CALLOUT,        
        .ComTimeoutFactor           = 0,
        .ComTimeoutNotification     = COM_NO_FUNCTION_CALLOUT,
        .ComErrorNotification       = COM_NO_FUNCTION_CALLOUT,
        .ComTransferProperty        = COM_PENDING,
        .ComUpdateBitPosition       = 0,
        .ComSignalArcUseUpdateBit   = FALSE,
        .ComSignalInitValue         = &Com_SignalInitValue_Signal_Rx_1,
        .ComBitPosition             = 7,
        .ComBitSize                 = 16,
        .ComSignalEndianess         = COM_BIG_ENDIAN,
        .ComSignalType              = COM_UINT16,
        .Com_Arc_IsSignalGroup      = FALSE,
        .ComGroupSignal             = NULL,
        .ComRxDataTimeoutAction     = COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSigGwRoutingReq         = FALSE,
        .ComOsekNmNetId             = COM_OSEKNM_INVALID_NET_ID,
        .ComOsekNmNodeId            = 0,
        .Com_Arc_EOL                = 0
    },

    { // Signal_Rx_2
        .ComHandleId                = ComConf_ComSignal_Signal_Rx_2,
        .ComIPduHandleId            = ComConf_ComIPdu_LAMPS_RX,
        // @req COM292          
        .ComFirstTimeoutFactor      = 0,
        .ComNotification            = COM_NO_FUNCTION_CALLOUT,        
        .ComTimeoutFactor           = 0,
        .ComTimeoutNotification     = COM_NO_FUNCTION_CALLOUT,
        .ComErrorNotification       = COM_NO_FUNCTION_CALLOUT,
        .ComTransferProperty        = COM_PENDING,
        .ComUpdateBitPosition       = 0,
        .ComSignalArcUseUpdateBit   = FALSE,
        .ComSignalInitValue         = &Com_SignalInitValue_Signal_Rx_2,
        .ComBitPosition             = 23,
        .ComBitSize                 = 16,
        .ComSignalEndianess         = COM_BIG_ENDIAN,
        .ComSignalType              = COM_UINT16,
        .Com_Arc_IsSignalGroup      = FALSE,
        .ComGroupSignal             = NULL,
        .ComRxDataTimeoutAction     = COM_TIMEOUT_DATA_ACTION_NONE,
        .ComSigGwRoutingReq         = FALSE,
        .ComOsekNmNetId             = COM_OSEKNM_INVALID_NET_ID,
        .ComOsekNmNodeId            = 0,
        .Com_Arc_EOL                = 0
    },

    { // Signal_Tx_1
        .ComHandleId                = ComConf_ComSignal_Signal_Tx_1,
        .ComIPduHandleId            = ComConf_ComIPdu_ENG_TX,
        .ComFirstTimeoutFactor      = 0,      
        .ComNotification            = COM_NO_FUNCTION_CALLOUT,        
        .ComTimeoutFactor           = 0,
        .ComTimeoutNotification     = COM_NO_FUNCTION_CALLOUT,
        .ComErrorNotification       = COM_NO_FUNCTION_CALLOUT,
        .ComTransferProperty        = COM_PENDING,
        .ComUpdateBitPosition       = 0,
        .ComSignalArcUseUpdateBit   = FALSE,
        .ComSignalInitValue         = &Com_SignalInitValue_Signal_Tx_1,
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

    { // Signal_Tx_2
        .ComHandleId                = ComConf_ComSignal_Signal_Tx_2,
        .ComIPduHandleId            = ComConf_ComIPdu_ENG_TX,
        .ComFirstTimeoutFactor      = 0,      
        .ComNotification            = COM_NO_FUNCTION_CALLOUT,        
        .ComTimeoutFactor           = 0,
        .ComTimeoutNotification     = COM_NO_FUNCTION_CALLOUT,
        .ComErrorNotification       = COM_NO_FUNCTION_CALLOUT,
        .ComTransferProperty        = COM_PENDING,
        .ComUpdateBitPosition       = 0,
        .ComSignalArcUseUpdateBit   = FALSE,
        .ComSignalInitValue         = &Com_SignalInitValue_Signal_Tx_2,
        .ComBitPosition             = 15,
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

    { // Signal_Tx_3
        .ComHandleId                = ComConf_ComSignal_Signal_Tx_3,
        .ComIPduHandleId            = ComConf_ComIPdu_ENG_TX,
        .ComFirstTimeoutFactor      = 0,      
        .ComNotification            = COM_NO_FUNCTION_CALLOUT,        
        .ComTimeoutFactor           = 0,
        .ComTimeoutNotification     = COM_NO_FUNCTION_CALLOUT,
        .ComErrorNotification       = COM_NO_FUNCTION_CALLOUT,
        .ComTransferProperty        = COM_PENDING,
        .ComUpdateBitPosition       = 0,
        .ComSignalArcUseUpdateBit   = FALSE,
        .ComSignalInitValue         = &Com_SignalInitValue_Signal_Tx_3,
        .ComBitPosition             = 47,
        .ComBitSize                 = 24,
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

    { // Word_1
        .ComHandleId                = ComConf_ComSignal_Word_1,
        .ComIPduHandleId            = ComConf_ComIPdu_TCM_RX,
        // @req COM292          
        .ComFirstTimeoutFactor      = 0,
        .ComNotification            = COM_NO_FUNCTION_CALLOUT,        
        .ComTimeoutFactor           = 0,
        .ComTimeoutNotification     = COM_NO_FUNCTION_CALLOUT,
        .ComErrorNotification       = COM_NO_FUNCTION_CALLOUT,
        .ComTransferProperty        = COM_PENDING,
        .ComUpdateBitPosition       = 0,
        .ComSignalArcUseUpdateBit   = FALSE,
        .ComSignalInitValue         = &Com_SignalInitValue_Word_1,
        .ComBitPosition             = 7,
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

    { // Word_2
        .ComHandleId                = ComConf_ComSignal_Word_2,
        .ComIPduHandleId            = ComConf_ComIPdu_TCM_RX,
        // @req COM292          
        .ComFirstTimeoutFactor      = 0,
        .ComNotification            = COM_NO_FUNCTION_CALLOUT,        
        .ComTimeoutFactor           = 0,
        .ComTimeoutNotification     = COM_NO_FUNCTION_CALLOUT,
        .ComErrorNotification       = COM_NO_FUNCTION_CALLOUT,
        .ComTransferProperty        = COM_PENDING,
        .ComUpdateBitPosition       = 0,
        .ComSignalArcUseUpdateBit   = FALSE,
        .ComSignalInitValue         = &Com_SignalInitValue_Word_2,
        .ComBitPosition             = 39,
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
	.ComIPduGroupHandleId 		= ComConf_ComIPduGroup_LIN,
	.Com_Arc_EOL 				= 0
},

{
	.Com_Arc_EOL				= 1
}
};


/* 
 * IPdu signal lists. 
 */

SECTION_POSTBUILD_DATA const ComSignal_type * const ComIPduSignalRefs_ENG_TX[] = {
	&ComSignal[ComConf_ComSignal_Signal_Tx_1],
	&ComSignal[ComConf_ComSignal_Signal_Tx_2],
	&ComSignal[ComConf_ComSignal_Signal_Tx_3],
	NULL
};

SECTION_POSTBUILD_DATA const ComSignal_type * const ComIPduSignalRefs_LAMPS_RX[] = {
	&ComSignal[ComConf_ComSignal_Signal_Rx_1],
	&ComSignal[ComConf_ComSignal_Signal_Rx_2],
	NULL
};

SECTION_POSTBUILD_DATA const ComSignal_type * const ComIPduSignalRefs_TCM_RX[] = {
	&ComSignal[ComConf_ComSignal_Word_1],
	&ComSignal[ComConf_ComSignal_Word_2],
	NULL
};


/*
 * IPdu Counter list
 */
 
/*
 * I-PDU group ref lists
 */
SECTION_POSTBUILD_DATA const ComIPduGroup_type ComIpduGroupRefs_ENG_TX[] = {
	{
		.ComIPduGroupHandleId 		= ComConf_ComIPduGroup_LIN,
		.Com_Arc_EOL 				= 0
	},
	{
		.Com_Arc_EOL				= 1
	}
};
SECTION_POSTBUILD_DATA const ComIPduGroup_type ComIpduGroupRefs_LAMPS_RX[] = {
	{
		.ComIPduGroupHandleId 		= ComConf_ComIPduGroup_LIN,
		.Com_Arc_EOL 				= 0
	},
	{
		.Com_Arc_EOL				= 1
	}
};
SECTION_POSTBUILD_DATA const ComIPduGroup_type ComIpduGroupRefs_TCM_RX[] = {
	{
		.ComIPduGroupHandleId 		= ComConf_ComIPduGroup_LIN,
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


	{ // ENG_TX
		.ArcIPduOutgoingId			= PDUR_PDU_ID_ENG_TX,
		.ComRxIPduCallout			= COM_NO_FUNCTION_CALLOUT,
		.ComTxIPduCallout			= COM_NO_FUNCTION_CALLOUT,
		.ComTriggerTransmitIPduCallout = COM_NO_FUNCTION_CALLOUT,
		.ComIPduSignalProcessing 	= COM_IMMEDIATE,
		.ComIPduSize				= 8,
		.ComIPduDirection			= COM_SEND,
		.ComIPduGroupRefs			= ComIpduGroupRefs_ENG_TX,
		.ComTxIPdu = {
			.ComTxIPduMinimumDelayFactor	= 0,
			.ComTxIPduUnusedAreasDefault	= 0,
			.ComTxModeTrue = {
				.ComTxModeMode						= COM_PERIODIC,
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
		.ComIPduSignalRef			= ComIPduSignalRefs_ENG_TX,
		.ComIPduDynSignalRef		= NULL,
		.ComIpduCounterRef			= NULL,
		.ComIPduGwMapSigDescHandle	= NULL,
		.ComIPduGwRoutingReq		= FALSE,
		.Com_Arc_EOL				= 0
	},


	{ // LAMPS_RX
		.ArcIPduOutgoingId			= PDUR_REVERSE_PDU_ID_LAMPS_RX,
		.ComRxIPduCallout			= COM_NO_FUNCTION_CALLOUT,
		.ComTxIPduCallout			= COM_NO_FUNCTION_CALLOUT,
		.ComTriggerTransmitIPduCallout = COM_NO_FUNCTION_CALLOUT,
		.ComIPduSignalProcessing 	= COM_IMMEDIATE,
		.ComIPduSize				= 4,
		.ComIPduDirection			= COM_RECEIVE,
		.ComIPduGroupRefs			= ComIpduGroupRefs_LAMPS_RX,
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
		.ComIPduSignalRef			= ComIPduSignalRefs_LAMPS_RX,
		.ComIPduDynSignalRef		= NULL,
		.ComIpduCounterRef			= NULL,
		.ComIPduGwMapSigDescHandle	= NULL,
		.ComIPduGwRoutingReq		= FALSE,
		.Com_Arc_EOL				= 0
	},


	{ // TCM_RX
		.ArcIPduOutgoingId			= PDUR_REVERSE_PDU_ID_TCM_RX,
		.ComRxIPduCallout			= COM_NO_FUNCTION_CALLOUT,
		.ComTxIPduCallout			= COM_NO_FUNCTION_CALLOUT,
		.ComTriggerTransmitIPduCallout = COM_NO_FUNCTION_CALLOUT,
		.ComIPduSignalProcessing 	= COM_IMMEDIATE,
		.ComIPduSize				= 8,
		.ComIPduDirection			= COM_RECEIVE,
		.ComIPduGroupRefs			= ComIpduGroupRefs_TCM_RX,
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
		.ComIPduSignalRef			= ComIPduSignalRefs_TCM_RX,
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
	.ComNofIPdus					= 3,
	.ComNofSignals					= 7,
	.ComNofGroupSignals				= 0,
	.ComIPdu 						= ComIPdu,
	.ComIPduGroup 					= ComIPduGroup,
	.ComSignal						= ComSignal,
	.ComGroupSignal					= ComGroupSignal,
	.ComGwMappingRef				= ComGwMapping,
	.ComGwSrcDesc					= ComGwSourceDescs,
	.ComGwDestnDesc					= ComGwDestinationDescs
};


