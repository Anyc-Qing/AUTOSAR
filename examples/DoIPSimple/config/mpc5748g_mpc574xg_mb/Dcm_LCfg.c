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

/* Generator version: 8.7.0
 * AUTOSAR version:   4.0.3
 */

#include "Std_Types.h"
#if defined(USE_PDUR)
#include "PduR.h"
#include "PduR_PbCfg.h"
#endif
#if defined(USE_NVM)
#include "NvM.h"
#endif
#if defined(USE_COMM)
#include "ComM.h"
#endif
#include "Dcm.h"
#include "Dcm_Lcfg.h"
#ifndef DCM_NOT_SERVICE_COMPONENT
#include "Rte_Dcm.h"
#endif

#define DCM_SESSION_EOL_INDEX 2
#define DCM_DID_LIST_EOL_INDEX 1
#define DCM_OBDM_0_TID_INDEX   0  

/*lint -save -e752 based on configuration these declerations are used   */
extern uint32 DspRoutineInfoReadUnsigned(uint8 *data, uint16 bitOffset, uint8 size, boolean changeEndianess);
extern sint32 DspRoutineInfoRead(uint8 *data, uint16 bitOffset, uint8 size, boolean changeEndianess);
extern void DspRoutineInfoWrite(uint32 val, uint8 *data, uint16 bitOffset, uint8 size, boolean changeEndianess);
/*lint restore*/



const Dcm_DspSecurityRowType DspSecurityList[] = {
	{
		.DspSecurityLevel = 0,
		.DspSecurityADRSize = 0,
		.DspSecuritySeedSize = 4,
		.DspSecurityKeySize = 4,
		.DspSecurityDelayTimeOnBoot =0,
		.DspSecurityNumAttDelay = 5,		
		.DspSecurityDelayTime = 10000,			
		.DspSecurityNumAttLock = 0,			/* Value is not configurable */
		.GetSeed = {.getSeedWithoutRecord = Rte_Call_SecurityAccess_SecurityLevel_0_GetSeed},
		.CompareKey = Rte_Call_SecurityAccess_SecurityLevel_0_CompareKey,
		.Arc_EOL = FALSE
	},

	{
		.Arc_EOL = TRUE
	}
};

const Dcm_DspSecurityType DspSecurity = {
	.DspSecurityRow = DspSecurityList
};

const Dcm_DspSecurityRowType * const ServiceTable_UDS_0x22_ReadDataByIdentifier_SecurityList[] = {
	&DspSecurityList[0],
	&DspSecurityList[DCM_SECURITY_EOL_INDEX]
};
const Dcm_DspSecurityRowType * const ServiceTable_UDS_0x10_DiagnosticSessionControl_SecurityList[] = {
	&DspSecurityList[DCM_SECURITY_EOL_INDEX]
};


const Dcm_DspSessionRowType DspSessionList[] = {
	{
		.DspSessionLevel = 1,
		.ArcDspRteSessionLevelName = RTE_MODE_DcmDiagnosticSessionControl_DcmConf_DcmDspSessionRow_Default_Session,
		.DspSessionP2ServerMax = 50,
		.DspSessionP2StarServerMax = 5000,
		.DspSessionForBoot = DCM_NO_BOOT,
		.Arc_EOL = FALSE,
	},
	{
		.DspSessionLevel = 2,
		.ArcDspRteSessionLevelName = RTE_MODE_DcmDiagnosticSessionControl_DcmConf_DcmDspSessionRow_Programming_Session,
		.DspSessionP2ServerMax = 50,
		.DspSessionP2StarServerMax = 5000,
		.DspSessionForBoot = DCM_SYS_BOOT_RESPAPP,
		.Arc_EOL = FALSE,
	},
	{
		.Arc_EOL = TRUE
	}
};

const Dcm_DspSessionType DspSession = {
	.DspSessionRow = DspSessionList,
};

const Dcm_DspSessionRowType * const ServiceTable_UDS_0x22_ReadDataByIdentifier_SessionList[] = {
	&DspSessionList[0],
	&DspSessionList[DCM_SESSION_EOL_INDEX]
};
const Dcm_DspSessionRowType * const ServiceTable_UDS_0x10_DiagnosticSessionControl_SessionList[] = {
	&DspSessionList[0],
	&DspSessionList[DCM_SESSION_EOL_INDEX]
};


const Dcm_DspSessionRowType * const DidInfo_DcmDspDidInfoStaticReadOnly_read_sessionRefList[] = {
	&DspSessionList[0],
	&DspSessionList[DCM_SESSION_EOL_INDEX]
};

const Dcm_DspSecurityRowType * const DidInfo_DcmDspDidInfoStaticReadOnly_read_securityRefList[] = {
	&DspSecurityList[0],
	&DspSecurityList[DCM_SECURITY_EOL_INDEX]
};

const Dcm_DspDidReadType didRead_DcmDspDidInfoStaticReadOnly = {
	.DspDidReadSessionRef = DidInfo_DcmDspDidInfoStaticReadOnly_read_sessionRefList,
	.DspDidReadSecurityLevelRef = DidInfo_DcmDspDidInfoStaticReadOnly_read_securityRefList
};

const Dcm_DspSessionRowType * const DidInfo_DcmDspDidInfoStaticReadOnly_write_sessionRefList[] = {
	&DspSessionList[DCM_SESSION_EOL_INDEX]
};

const Dcm_DspSecurityRowType * const DidInfo_DcmDspDidInfoStaticReadOnly_write_securityRefList[] = {
	&DspSecurityList[DCM_SECURITY_EOL_INDEX]
};

const Dcm_DspDidWriteType didWrite_DcmDspDidInfoStaticReadOnly = {
	.DspDidWriteSessionRef = DidInfo_DcmDspDidInfoStaticReadOnly_write_sessionRefList,
	.DspDidWriteSecurityLevelRef = DidInfo_DcmDspDidInfoStaticReadOnly_write_securityRefList
};


const Dcm_DspDidInfoType DspDidInfoList[] = {
		{
				.DspDidDynamicllyDefined = FALSE,
				.DspDidAccess = {
						.DspDidRead = &didRead_DcmDspDidInfoStaticReadOnly,
						.DspDidWrite = NULL,
						.DspDidControl = NULL,
				}
		},
};

extern const Dcm_DspPidType DspPidList[];

const Dcm_DspPidType DspPidList[] = {
	{
	    .Arc_EOL = TRUE
	}
};


const Dcm_DspTestResultObdmidType DspTestResultObdmidList[] = {
    {
        .Arc_EOL = TRUE
    }
};

const Dcm_DspTestResultByObdmidType DspObmidTestResult = {
		.DspTestResultObdmidTid = DspTestResultObdmidList		
};


const Dcm_DspVehInfoType DspVehInfoList[] = {
    {
        .Arc_EOL = TRUE
    }
};

extern const Dcm_DspDidType DspDidList[];

const Dcm_DspDidType * const DID_0xE103_refList[] = {
	&DspDidList[DCM_DID_LIST_EOL_INDEX],
};

const Dcm_DspDataInfoType DspDataInfo_DcmDspDataInfo = {
	.DspDidFixedLength = TRUE,
	.DspDidScalingInfoSize = 0
};


const Dcm_DspDataType DspData_DID_0xE103_Data = {
    .DspDataInfoRef = &DspDataInfo_DcmDspDataInfo,
    .DspDataReadDataLengthFnc = NULL,
	.DspDataConditionCheckReadFnc = DID_0xE103_ConditionCheck,
	.DspDataReadDataFnc = {.SynchDataReadFnc = DID_0xE103_Read},
	.DspDataWriteDataFnc = {.FixLenDataWriteFnc = NULL},
	.DspDataGetScalingInfoFnc = NULL,
	.DspDataReturnControlToEcuFnc = {.FuncReturnControlToECUFnc = NULL},
	.DspDataResetToDefaultFnc = {.FuncResetToDefaultFnc = NULL},
	.DspDataFreezeCurrentStateFnc = {.FuncFreezeCurrentStateFnc = NULL},
	.DspDataShortTermAdjustmentFnc = {.FuncShortTermAdjustmentFnc = NULL},
	.DspDataUsePort = DATA_PORT_SYNCH,
    .DspDataBitSize = 8,
#if defined(USE_NVM)
    .DspNvmUseBlockID = 0xFF,
#endif
    .DspDataType = DCM_UINT8_N,
    .DspDataEndianess = DCM_ENDIAN_NOT_USED
};


const Dcm_DspSignalType DspDid_DID_0xE103_SignalList[] = {
	{
		.DspSignalDataRef = &DspData_DID_0xE103_Data,
		.DspSignalBitPosition = 0
	},
};


const Dcm_DspDidType DspDidList[] = { 
	{	/* DID_0xE103 */
		.DspDidIdentifier = 0xe103,
		.DspDidInfoRef = &DspDidInfoList[0],
		.DspDidRef = DID_0xE103_refList,
		.DspSignalRef = DspDid_DID_0xE103_SignalList,
		.DspNofSignals = 1,
		.DspDidDataByteSize = 1,/* 8 bits */
		.DspDidDataScalingInfoSize = 0,
		.DspDidRoeActivateFnc = NULL,
		.DspDidRoeEventId = 0,	
		.Arc_EOL = FALSE
	},
	{
		.Arc_EOL = TRUE
	}
};



const Dcm_DspRoutineType  DspRoutineList[] = {
	{
		.Arc_EOL = TRUE
	}
};



const Dcm_DspMemoryIdInfo DspMemoryIdInfoList[] = {
	{
			.Arc_EOL = TRUE
	}
};

const Dcm_DspMemoryType DspMemory = {
	.DcmDspUseMemoryId = FALSE,
	.DspMemoryIdInfo = DspMemoryIdInfoList,
};

const Dcm_ComMChannelConfigType DcmComMChannelCfg[DCM_NOF_COMM_CHANNELS + 1u] = {
	[DCM_COMM_CHANNEL_EthChnl_INDEX] = {
        .ModeSwitchFnc = Rte_Switch_DcmCommunicationControl_EthChnl_DcmCommunicationControl_EthChnl,
        .NetworkHandle = ComMConf_ComMChannel_EthChnl,
        .InternalIndex = DCM_COMM_CHANNEL_EthChnl_INDEX,
        .Arc_EOL = FALSE,
    },
    {
        .ModeSwitchFnc = NULL,
        .NetworkHandle = 0u,
        .InternalIndex = 0u,
        .Arc_EOL = TRUE,
    }
};


const Dcm_DspType Dsp = {
	.DspDid = DspDidList,
	.DspDidInfo = DspDidInfoList,
	.DspEcuReset = NULL,
	.DspPid = DspPidList,
	.DspReadDTC = NULL,
	.DspRequestControl = NULL,
	.DspRoutine = DspRoutineList,
	.DspRoutineInfo = NULL,
	.DspSecurity = &DspSecurity,
	.DspSession = &DspSession,
	.DspTestResultByObdmid = &DspObmidTestResult,
	.DspVehInfo = DspVehInfoList,
	.DspMemory = NULL,
	.DspComControl = NULL,
};

/************************************************************************
 *									DSD									*
 ************************************************************************/

const Dcm_DsdSubServiceType DcmDsdServiceTable_UDS_UDS_0x10_DiagnosticSessionControl_SubServices[] = {
	{
		.Arc_EOL = TRUE
	}
};

const Dcm_DsdServiceType DcmDsdServiceTable_UDS_serviceList[] = {
	{
		.DsdSidTabServiceId = 0x22,
		.DsdSidTabSubfuncAvail = FALSE,
		.DsdSidTabSecurityLevelRef = ServiceTable_UDS_0x22_ReadDataByIdentifier_SecurityList,
		.DsdSidTabSessionLevelRef = ServiceTable_UDS_0x22_ReadDataByIdentifier_SessionList,
		.DspSidTabFnc = NULL,
		.DsdSubServiceList = NULL,
		.Arc_EOL = FALSE
	},
	{
		.DsdSidTabServiceId = 0x10,
		.DsdSidTabSubfuncAvail = TRUE,
		.DsdSidTabSecurityLevelRef = ServiceTable_UDS_0x10_DiagnosticSessionControl_SecurityList,
		.DsdSidTabSessionLevelRef = ServiceTable_UDS_0x10_DiagnosticSessionControl_SessionList,
		.DspSidTabFnc = NULL,
		.DsdSubServiceList = NULL,
		.Arc_EOL = FALSE
	},
	{
		.Arc_EOL = TRUE
	}
};

const Dcm_DsdServiceTableType DsdServiceTable[] = {	
	{
		.DsdSidTabId = 0,
		.DsdService = DcmDsdServiceTable_UDS_serviceList,
		.Arc_EOL = FALSE
	},
	{
		.Arc_EOL = TRUE
	}
};

const Dcm_DsdType Dsd = {
	.DsdServiceTable = DsdServiceTable
};


/************************************************************************
 *									DSL									*
 ************************************************************************/

uint8 DcmDslBuffer[255];
Dcm_DslBufferRuntimeType rxBufferParams_DcmDslBuffer =
{
	.status = BUFFER_AVAILABLE
};

Dcm_DslRunTimeProtocolParametersType dcmDslRuntimeVariables[1];

const Dcm_DslBufferType DcmDslBufferList[DCM_DSL_BUFFER_LIST_LENGTH] = {
	{
		.DslBufferID = 0,
		.DslBufferSize = 0,	/* Value is not configurable */
		.pduInfo = {
			.SduDataPtr = DcmDslBuffer,
			.SduLength = 255,
		},
		.externalBufferRuntimeData = &rxBufferParams_DcmDslBuffer
	},
};

const Dcm_DslCallbackDCMRequestServiceType DCMRequestServiceList[] = {
	{
		.StartProtocol = Rte_Call_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StartProtocol,
		.StopProtocol = Rte_Call_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StopProtocol,
		.Arc_EOL = FALSE
	},
	{
		.Arc_EOL = TRUE
	}
};

extern const Dcm_DslMainConnectionType DslMainConnectionList[];

const Dcm_DslProtocolRxType DcmDslProtocolRxList[] = {
	{
		.DslMainConnectionParent = &DslMainConnectionList[0],
		.DslProtocolAddrType = DCM_PROTOCOL_FUNCTIONAL_ADDR_TYPE,
		.DcmDslProtocolRxPduId = DCM_PDU_ID_DCM_RXFUNC,
#if defined(USE_COMM)
		.ComMChannelInternalIndex = DCM_COMM_CHANNEL_EthChnl_INDEX, /* 0 */
#endif
		.Arc_EOL = FALSE
	},
	{
		.DslMainConnectionParent = &DslMainConnectionList[0],
		.DslProtocolAddrType = DCM_PROTOCOL_PHYSICAL_ADDR_TYPE,
		.DcmDslProtocolRxPduId = DCM_PDU_ID_DCM_RX,
#if defined(USE_COMM)
		.ComMChannelInternalIndex = DCM_COMM_CHANNEL_EthChnl_INDEX, /* 0 */
#endif
		.Arc_EOL = FALSE
	},
	{
		.Arc_EOL = TRUE
	}
};

const Dcm_DslProtocolTxType DcmDslProtocolTxList[] = {
	{
		.DslMainConnectionParent = &DslMainConnectionList[0],
		.DcmDslProtocolTxPduId = PDUR_PDU_ID_DCM_TX,
		.Arc_EOL = FALSE
	},
	{
		.Arc_EOL = TRUE
	}
};
extern const Dcm_DslProtocolRowType DslProtocolRowList[];


const Dcm_DslPeriodicTransmissionType DslPeriodicConnectionList[] = {
	{
		.Arc_EOL = TRUE
	}
};

const Dcm_DslPeriodicTxType DcmDslProtocolPeriodicTxList[] = {
	{
		.Arc_EOL = TRUE
	}
};

extern const Dcm_DslConnectionType DcmDslProtocolRow_UDS_ConnectionList[];

const Dcm_DslMainConnectionType DslMainConnectionList[] = {
	{
		/* DcmDslProtocolRow_UDS.DcmDslConnection.DcmDslMainConnection */
		.DslConnectionParent = &DcmDslProtocolRow_UDS_ConnectionList[0],
		.DslPeriodicTransmissionConRef = NULL,
		.DslProtocolTx = &DcmDslProtocolTxList[0],
		.DslPhysicalProtocolRx = &DcmDslProtocolRxList[1],
		.DslRxTesterSourceAddress = 0
	},
};


const Dcm_DslConnectionType DcmDslProtocolRow_UDS_ConnectionList[] = {
	{
		/* DcmDslConnection.DcmDslMainConnection */
		.DslProtocolRow = &DslProtocolRowList[0],
		.DslMainConnection = &DslMainConnectionList[0],
		.DslPeriodicTransmission = NULL,
		.Arc_EOL = FALSE
	},
	{
		.Arc_EOL = TRUE
	}
};



extern const Dcm_DslProtocolTimingRowType ProtocolTimingList[];

const Dcm_DslProtocolRowType DslProtocolRowList[]= {
	{
		/* DcmDslProtocolRow_UDS */
		.DslRunTimeProtocolParameters = &dcmDslRuntimeVariables[0],
		.DslProtocolID = DCM_UDS_ON_CAN,
		.DslProtocolIsParallelExecutab = FALSE, // not supported
		.DslProtocolPreemptTimeout = 1000,
		.DslProtocolPriority = 1,
		.DslProtocolTransType = DCM_PROTOCOL_TRANS_TYPE_1,
		.DslProtocolRxBufferID = &DcmDslBufferList[0],
		.DslProtocolSIDTable = &DsdServiceTable[0],
		.DslProtocolTxBufferID = &DcmDslBufferList[0],
		.DslProtocolTimeLimit = &ProtocolTimingList[0],
		.DslConnections = DcmDslProtocolRow_UDS_ConnectionList,
		.DslSendRespPendOnTransToBoot = TRUE,
		.Arc_EOL = FALSE
	},
	{
		.Arc_EOL = TRUE
	}
};

const Dcm_DslProtocolType DslProtocol = {
		.DslProtocolTxGlobalList = DcmDslProtocolTxList,
		.DslProtocolRxGlobalList = DcmDslProtocolRxList,
		.DslProtocolPeriodicTxGlobalList = DcmDslProtocolPeriodicTxList,
		.DslProtocolRowList = DslProtocolRowList
};

const Dcm_DslProtocolTimingRowType ProtocolTimingList[] = {
	{
		.TimStrP2ServerAdjust = 10u,
		.TimStrP2StarServerAdjust = 100u,
		.TimStrS3Server = 5000u, /* Value is not configurable*/
		.Arc_EOL = FALSE
	},
	{
		.Arc_EOL = TRUE
	}
};

const Dcm_DslProtocolTimingType ProtocolTiming = {
	.DslProtocolTimingRow = ProtocolTimingList
};

const Dcm_DslServiceRequestNotificationType ServiceRequestNotification[] = {
	{
		.Arc_EOL = TRUE
	}
};

const Dcm_DslDiagRespType DiagResp = {
		.DslDiagRespForceRespPendEn = TRUE, /* Value is not configurable */
		.DslDiagRespMaxNumRespPend = 10
};

const Dcm_DslType Dsl = {
		.DslBuffer = DcmDslBufferList,
		.DslCallbackDCMRequestService = DCMRequestServiceList,
		.DslDiagResp = &DiagResp,
		.DslProtocol = &DslProtocol,
		.DslProtocolTiming = &ProtocolTiming,
		.DslServiceRequestNotification = ServiceRequestNotification
};

const Dcm_ConfigType DCM_Config = {
		.Dsp = &Dsp,
		.Dsd = &Dsd,
		.Dsl = &Dsl,
		.DcmComMChannelCfg = DcmComMChannelCfg,
};

