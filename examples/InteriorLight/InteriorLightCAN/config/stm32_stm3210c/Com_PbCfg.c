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

#if (COM_MAX_BUFFER_SIZE < 192)
#error Com: The configured ram buffer size is less than required! (192 bytes required)
#endif
#if (COM_MAX_N_IPDUS < 2)
#error Com: Configured maximum number of Pdus is less than the number of Pdus in configuration!
#endif
#if (COM_MAX_N_SUPPORTED_IPDU_COUNTERS < 0)
#error Com: Configured maximum number of Pdus with counter(ArcMaxNumberOfSupportedIPduCounters) is less than the number of Pdus configured with counter !
#endif
#if (COM_MAX_N_SIGNALS < 2)
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
SECTION_POSTBUILD_DATA const uint32 Com_SignalInitValue_DoorStatus = 0;
SECTION_POSTBUILD_DATA const uint32 Com_SignalInitValue_LightStatus = 0;


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


    { // DoorStatus
        .ComHandleId                = ComConf_ComSignal_DoorStatus,
        .ComIPduHandleId            = ComConf_ComIPdu_DoorStatusPdu,
        // @req COM292          
        .ComFirstTimeoutFactor      = 0,
        .ComNotification            = COM_NO_FUNCTION_CALLOUT,        
        .ComTimeoutFactor           = 0,
        .ComTimeoutNotification     = COM_NO_FUNCTION_CALLOUT,
        .ComErrorNotification       = COM_NO_FUNCTION_CALLOUT,
        .ComTransferProperty        = COM_TRIGGERED_ON_CHANGE,
        .ComUpdateBitPosition       = 0,
        .ComSignalArcUseUpdateBit   = FALSE,
        .ComSignalInitValue         = &Com_SignalInitValue_DoorStatus,
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

    { // LightStatus
        .ComHandleId                = ComConf_ComSignal_LightStatus,
        .ComIPduHandleId            = ComConf_ComIPdu_LightStatusPdu,
        .ComFirstTimeoutFactor      = 0,      
        .ComNotification            = COM_NO_FUNCTION_CALLOUT,        
        .ComTimeoutFactor           = 0,
        .ComTimeoutNotification     = COM_NO_FUNCTION_CALLOUT,
        .ComErrorNotification       = COM_NO_FUNCTION_CALLOUT,
        .ComTransferProperty        = COM_PENDING,
        .ComUpdateBitPosition       = 0,
        .ComSignalArcUseUpdateBit   = FALSE,
        .ComSignalInitValue         = &Com_SignalInitValue_LightStatus,
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

SECTION_POSTBUILD_DATA const ComSignal_type * const ComIPduSignalRefs_DoorStatusPdu[] = {
	&ComSignal[ComConf_ComSignal_DoorStatus],
	NULL
};

SECTION_POSTBUILD_DATA const ComSignal_type * const ComIPduSignalRefs_LightStatusPdu[] = {
	&ComSignal[ComConf_ComSignal_LightStatus],
	NULL
};


/*
 * IPdu Counter list
 */
 
/*
 * I-PDU group ref lists
 */
SECTION_POSTBUILD_DATA const ComIPduGroup_type ComIpduGroupRefs_DoorStatusPdu[] = {
	{
		.ComIPduGroupHandleId 		= ComConf_ComIPduGroup_ComIPduGroupRx,
		.Com_Arc_EOL 				= 0
	},
	{
		.Com_Arc_EOL				= 1
	}
};
SECTION_POSTBUILD_DATA const ComIPduGroup_type ComIpduGroupRefs_LightStatusPdu[] = {
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


	{ // DoorStatusPdu
		.ArcIPduOutgoingId			= PDUR_REVERSE_PDU_ID_PDURX,
		.ComRxIPduCallout			= COM_NO_FUNCTION_CALLOUT,
		.ComTxIPduCallout			= COM_NO_FUNCTION_CALLOUT,
		.ComTriggerTransmitIPduCallout = COM_NO_FUNCTION_CALLOUT,
		.ComIPduSignalProcessing 	= COM_DEFERRED,
		.ComIPduSize				= 64,
		.ComIPduDirection			= COM_RECEIVE,
		.ComIPduGroupRefs			= ComIpduGroupRefs_DoorStatusPdu,
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
		.ComIPduSignalRef			= ComIPduSignalRefs_DoorStatusPdu,
		.ComIPduDynSignalRef		= NULL,
		.ComIpduCounterRef			= NULL,
		.ComIPduGwMapSigDescHandle	= NULL,
		.ComIPduGwRoutingReq		= FALSE,
		.Com_Arc_EOL				= 0
	},


	{ // LightStatusPdu
		.ArcIPduOutgoingId			= PDUR_PDU_ID_PDUTX,
		.ComRxIPduCallout			= COM_NO_FUNCTION_CALLOUT,
		.ComTxIPduCallout			= COM_NO_FUNCTION_CALLOUT,
		.ComTriggerTransmitIPduCallout = COM_NO_FUNCTION_CALLOUT,
		.ComIPduSignalProcessing 	= COM_DEFERRED,
		.ComIPduSize				= 64,
		.ComIPduDirection			= COM_SEND,
		.ComIPduGroupRefs			= ComIpduGroupRefs_LightStatusPdu,
		.ComTxIPdu = {
			.ComTxIPduMinimumDelayFactor	= 0,
			.ComTxIPduUnusedAreasDefault	= 0,
			.ComTxIPduClearUpdateBit		= TRANSMIT,
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
		.ComIPduSignalRef			= ComIPduSignalRefs_LightStatusPdu,
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
	.ComNofIPdus					= 2,
	.ComNofSignals					= 2,
	.ComNofGroupSignals				= 0,
	.ComIPdu 						= ComIPdu,
	.ComIPduGroup 					= ComIPduGroup,
	.ComSignal						= ComSignal,
	.ComGroupSignal					= ComGroupSignal,
	.ComGwMappingRef				= ComGwMapping,
	.ComGwSrcDesc					= ComGwSourceDescs,
	.ComGwDestnDesc					= ComGwDestinationDescs
};


