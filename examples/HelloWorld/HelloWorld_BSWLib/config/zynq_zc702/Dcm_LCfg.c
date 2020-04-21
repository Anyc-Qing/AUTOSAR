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

#define DCM_SESSION_EOL_INDEX 1
#define DCM_DID_LIST_EOL_INDEX 6
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

const Dcm_DspSecurityRowType * const ServiceTable_ReadDataByIdentifier_0x22_SecurityList[] = {
	&DspSecurityList[0],
	&DspSecurityList[DCM_SECURITY_EOL_INDEX]
};
const Dcm_DspSecurityRowType * const ServiceTable_ReadDataByPeriodicIdentifier_0x2A_SecurityList[] = {
	&DspSecurityList[0],
	&DspSecurityList[DCM_SECURITY_EOL_INDEX]
};
const Dcm_DspSecurityRowType * const ServiceTable_DynamicallyDefinedDataIdentifier_0x2C_SecurityList[] = {
	&DspSecurityList[0],
	&DspSecurityList[DCM_SECURITY_EOL_INDEX]
};
const Dcm_DspSecurityRowType * const ServiceTable_InputOutputControlByIdentifier_0x2F_SecurityList[] = {
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
		.Arc_EOL = TRUE
	}
};

const Dcm_DspSessionType DspSession = {
	.DspSessionRow = DspSessionList,
};

const Dcm_DspSessionRowType * const ServiceTable_ReadDataByIdentifier_0x22_SessionList[] = {
	&DspSessionList[0],
	&DspSessionList[DCM_SESSION_EOL_INDEX]
};
const Dcm_DspSessionRowType * const ServiceTable_ReadDataByPeriodicIdentifier_0x2A_SessionList[] = {
	&DspSessionList[0],
	&DspSessionList[DCM_SESSION_EOL_INDEX]
};
const Dcm_DspSessionRowType * const ServiceTable_DynamicallyDefinedDataIdentifier_0x2C_SessionList[] = {
	&DspSessionList[0],
	&DspSessionList[DCM_SESSION_EOL_INDEX]
};
const Dcm_DspSessionRowType * const ServiceTable_InputOutputControlByIdentifier_0x2F_SessionList[] = {
	&DspSessionList[DCM_SESSION_EOL_INDEX]
};


const Dcm_DspSessionRowType * const DidInfo_DcmDspDidInfoStatic_read_sessionRefList[] = {
	&DspSessionList[0],
	&DspSessionList[DCM_SESSION_EOL_INDEX]
};

const Dcm_DspSecurityRowType * const DidInfo_DcmDspDidInfoStatic_read_securityRefList[] = {
	&DspSecurityList[0],
	&DspSecurityList[DCM_SECURITY_EOL_INDEX]
};

const Dcm_DspDidReadType didRead_DcmDspDidInfoStatic = {
	.DspDidReadSessionRef = DidInfo_DcmDspDidInfoStatic_read_sessionRefList,
	.DspDidReadSecurityLevelRef = DidInfo_DcmDspDidInfoStatic_read_securityRefList
};
const Dcm_DspSessionRowType * const DidInfo_DcmDspDidInfoDynamic_read_sessionRefList[] = {
	&DspSessionList[DCM_SESSION_EOL_INDEX]
};

const Dcm_DspSecurityRowType * const DidInfo_DcmDspDidInfoDynamic_read_securityRefList[] = {
	&DspSecurityList[DCM_SECURITY_EOL_INDEX]
};

const Dcm_DspDidReadType didRead_DcmDspDidInfoDynamic = {
	.DspDidReadSessionRef = DidInfo_DcmDspDidInfoDynamic_read_sessionRefList,
	.DspDidReadSecurityLevelRef = DidInfo_DcmDspDidInfoDynamic_read_securityRefList
};
const Dcm_DspSessionRowType * const DidInfo_DcmDspDidInfoControl_read_sessionRefList[] = {
	&DspSessionList[DCM_SESSION_EOL_INDEX]
};

const Dcm_DspSecurityRowType * const DidInfo_DcmDspDidInfoControl_read_securityRefList[] = {
	&DspSecurityList[DCM_SECURITY_EOL_INDEX]
};

const Dcm_DspDidReadType didRead_DcmDspDidInfoControl = {
	.DspDidReadSessionRef = DidInfo_DcmDspDidInfoControl_read_sessionRefList,
	.DspDidReadSecurityLevelRef = DidInfo_DcmDspDidInfoControl_read_securityRefList
};

const Dcm_DspSessionRowType * const DidInfo_DcmDspDidInfoStatic_write_sessionRefList[] = {
	&DspSessionList[DCM_SESSION_EOL_INDEX]
};

const Dcm_DspSecurityRowType * const DidInfo_DcmDspDidInfoStatic_write_securityRefList[] = {
	&DspSecurityList[DCM_SECURITY_EOL_INDEX]
};

const Dcm_DspDidWriteType didWrite_DcmDspDidInfoStatic = {
	.DspDidWriteSessionRef = DidInfo_DcmDspDidInfoStatic_write_sessionRefList,
	.DspDidWriteSecurityLevelRef = DidInfo_DcmDspDidInfoStatic_write_securityRefList
};
const Dcm_DspSessionRowType * const DidInfo_DcmDspDidInfoDynamic_write_sessionRefList[] = {
	&DspSessionList[DCM_SESSION_EOL_INDEX]
};

const Dcm_DspSecurityRowType * const DidInfo_DcmDspDidInfoDynamic_write_securityRefList[] = {
	&DspSecurityList[DCM_SECURITY_EOL_INDEX]
};

const Dcm_DspDidWriteType didWrite_DcmDspDidInfoDynamic = {
	.DspDidWriteSessionRef = DidInfo_DcmDspDidInfoDynamic_write_sessionRefList,
	.DspDidWriteSecurityLevelRef = DidInfo_DcmDspDidInfoDynamic_write_securityRefList
};
const Dcm_DspSessionRowType * const DidInfo_DcmDspDidInfoControl_write_sessionRefList[] = {
	&DspSessionList[DCM_SESSION_EOL_INDEX]
};

const Dcm_DspSecurityRowType * const DidInfo_DcmDspDidInfoControl_write_securityRefList[] = {
	&DspSecurityList[DCM_SECURITY_EOL_INDEX]
};

const Dcm_DspDidWriteType didWrite_DcmDspDidInfoControl = {
	.DspDidWriteSessionRef = DidInfo_DcmDspDidInfoControl_write_sessionRefList,
	.DspDidWriteSecurityLevelRef = DidInfo_DcmDspDidInfoControl_write_securityRefList
};

const Dcm_DspSessionRowType * const DidInfo_DcmDspDidInfoControl_control_sessionRefList[] = {
		&DspSessionList[DCM_SESSION_EOL_INDEX],
};

const Dcm_DspSecurityRowType * const DidInfo_DcmDspDidInfoControl_control_securityRefList[] = {
		&DspSecurityList[DCM_SECURITY_EOL_INDEX],
};

const Dcm_DspDidControlType didControl_DcmDspDidInfoControl = {
		.DspDidControlSessionRef = DidInfo_DcmDspDidInfoControl_control_sessionRefList,
		.DspDidControlSecurityLevelRef = DidInfo_DcmDspDidInfoControl_control_securityRefList,
};

const Dcm_DspDidInfoType DspDidInfoList[] = {
		{
				.DspDidDynamicllyDefined = FALSE,
				.DspDidAccess = {
						.DspDidRead = &didRead_DcmDspDidInfoStatic,
						.DspDidWrite = NULL,
						.DspDidControl = NULL,
				}
		},
		{
				.DspDidDynamicllyDefined = TRUE,
				.DspDidAccess = {
						.DspDidRead = &didRead_DcmDspDidInfoDynamic,
						.DspDidWrite = &didWrite_DcmDspDidInfoDynamic,
						.DspDidControl = NULL,
				}
		},
		{
				.DspDidDynamicllyDefined = FALSE,
				.DspDidAccess = {
						.DspDidRead = &didRead_DcmDspDidInfoControl,
						.DspDidWrite = NULL,
						.DspDidControl = &didControl_DcmDspDidInfoControl,
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

const Dcm_DspDidType * const DID_0x0100_refList[] = {
	&DspDidList[DCM_DID_LIST_EOL_INDEX],
};
const Dcm_DspDidType * const DID_0x0101_refList[] = {
	&DspDidList[DCM_DID_LIST_EOL_INDEX],
};
const Dcm_DspDidType * const DID_0x0102_refList[] = {
	&DspDidList[DCM_DID_LIST_EOL_INDEX],
};
const Dcm_DspDidType * const DID_0xF200_refList[] = {
	&DspDidList[DCM_DID_LIST_EOL_INDEX],
};
const Dcm_DspDidType * const DID_0xF201_refList[] = {
	&DspDidList[DCM_DID_LIST_EOL_INDEX],
};
const Dcm_DspDidType * const DID_0x0200_refList[] = {
	&DspDidList[DCM_DID_LIST_EOL_INDEX],
};

const Dcm_DspDataInfoType DspDataInfo_DataInfo_FixedLength = {
	.DspDidFixedLength = TRUE,
	.DspDidScalingInfoSize = 0
};


const Dcm_DspDataType DspData_DID_0x0100_Data = {
    .DspDataInfoRef = &DspDataInfo_DataInfo_FixedLength,
    .DspDataReadDataLengthFnc = NULL,
	.DspDataConditionCheckReadFnc = DID_0x0100_ConditionCheck,
	.DspDataReadDataFnc = {.SynchDataReadFnc = DID_0x0100_Read},
	.DspDataWriteDataFnc = {.FixLenDataWriteFnc = NULL},
	.DspDataGetScalingInfoFnc = NULL,
	.DspDataReturnControlToEcuFnc = {.FuncReturnControlToECUFnc = NULL},
	.DspDataResetToDefaultFnc = {.FuncResetToDefaultFnc = NULL},
	.DspDataFreezeCurrentStateFnc = {.FuncFreezeCurrentStateFnc = NULL},
	.DspDataShortTermAdjustmentFnc = {.FuncShortTermAdjustmentFnc = NULL},
	.DspDataUsePort = DATA_PORT_SYNCH,
    .DspDataBitSize = 160,
#if defined(USE_NVM)
    .DspNvmUseBlockID = 0xFF,
#endif
    .DspDataType = DCM_UINT8_N,
    .DspDataEndianess = DCM_ENDIAN_NOT_USED
};

const Dcm_DspDataType DspData_DID_0xF200_PeriodicDid = {
    .DspDataInfoRef = &DspDataInfo_DataInfo_FixedLength,
    .DspDataReadDataLengthFnc = NULL,
	.DspDataConditionCheckReadFnc = DID_0x0100_ConditionCheck,
	.DspDataReadDataFnc = {.SynchDataReadFnc = DID_0xF200_Read},
	.DspDataWriteDataFnc = {.FixLenDataWriteFnc = NULL},
	.DspDataGetScalingInfoFnc = NULL,
	.DspDataReturnControlToEcuFnc = {.FuncReturnControlToECUFnc = NULL},
	.DspDataResetToDefaultFnc = {.FuncResetToDefaultFnc = NULL},
	.DspDataFreezeCurrentStateFnc = {.FuncFreezeCurrentStateFnc = NULL},
	.DspDataShortTermAdjustmentFnc = {.FuncShortTermAdjustmentFnc = NULL},
	.DspDataUsePort = DATA_PORT_SYNCH,
    .DspDataBitSize = 32,
#if defined(USE_NVM)
    .DspNvmUseBlockID = 0xFF,
#endif
    .DspDataType = DCM_UINT8_N,
    .DspDataEndianess = DCM_ENDIAN_NOT_USED
};

const Dcm_DspDataType DspData_DID_0x0101_Data = {
    .DspDataInfoRef = &DspDataInfo_DataInfo_FixedLength,
    .DspDataReadDataLengthFnc = NULL,
	.DspDataConditionCheckReadFnc = DID_0x0100_ConditionCheck,
	.DspDataReadDataFnc = {.SynchDataReadFnc = DID_0x0101_Read},
	.DspDataWriteDataFnc = {.FixLenDataWriteFnc = NULL},
	.DspDataGetScalingInfoFnc = NULL,
	.DspDataReturnControlToEcuFnc = {.FuncReturnControlToECUFnc = NULL},
	.DspDataResetToDefaultFnc = {.FuncResetToDefaultFnc = NULL},
	.DspDataFreezeCurrentStateFnc = {.FuncFreezeCurrentStateFnc = NULL},
	.DspDataShortTermAdjustmentFnc = {.FuncShortTermAdjustmentFnc = NULL},
	.DspDataUsePort = DATA_PORT_SYNCH,
    .DspDataBitSize = 16,
#if defined(USE_NVM)
    .DspNvmUseBlockID = 0xFF,
#endif
    .DspDataType = DCM_UINT8_N,
    .DspDataEndianess = DCM_ENDIAN_NOT_USED
};

const Dcm_DspDataType DspData_DID_0x0102_Data = {
    .DspDataInfoRef = &DspDataInfo_DataInfo_FixedLength,
    .DspDataReadDataLengthFnc = NULL,
	.DspDataConditionCheckReadFnc = DID_0x0100_ConditionCheck,
	.DspDataReadDataFnc = {.SynchDataReadFnc = DID_0x0102_Read},
	.DspDataWriteDataFnc = {.FixLenDataWriteFnc = NULL},
	.DspDataGetScalingInfoFnc = NULL,
	.DspDataReturnControlToEcuFnc = {.FuncReturnControlToECUFnc = NULL},
	.DspDataResetToDefaultFnc = {.FuncResetToDefaultFnc = NULL},
	.DspDataFreezeCurrentStateFnc = {.FuncFreezeCurrentStateFnc = NULL},
	.DspDataShortTermAdjustmentFnc = {.FuncShortTermAdjustmentFnc = NULL},
	.DspDataUsePort = DATA_PORT_SYNCH,
    .DspDataBitSize = 16,
#if defined(USE_NVM)
    .DspNvmUseBlockID = 0xFF,
#endif
    .DspDataType = DCM_UINT8_N,
    .DspDataEndianess = DCM_ENDIAN_NOT_USED
};

const Dcm_DspDataType DspData_DID_0x0200_Data = {
    .DspDataInfoRef = &DspDataInfo_DataInfo_FixedLength,
    .DspDataReadDataLengthFnc = NULL,
	.DspDataConditionCheckReadFnc = NULL,
	.DspDataReadDataFnc = {.SynchDataReadFnc = IoHwAb_Dcm_Read_PwmSignal_LED3},
	.DspDataWriteDataFnc = {.FixLenDataWriteFnc = NULL},
	.DspDataGetScalingInfoFnc = NULL,
	.DspDataReturnControlToEcuFnc = {.EcuSignalReturnControlToECUFnc = IoHwAb_Dcm_PwmSignal_LED3},
	.DspDataResetToDefaultFnc = {.EcuSignalResetToDefaultFnc = IoHwAb_Dcm_PwmSignal_LED3},
	.DspDataFreezeCurrentStateFnc = {.EcuSignalFreezeCurrentStateFnc = IoHwAb_Dcm_PwmSignal_LED3},
	.DspDataShortTermAdjustmentFnc = {.EcuSignalShortTermAdjustmentFnc = IoHwAb_Dcm_PwmSignal_LED3},
	.DspDataUsePort = DATA_PORT_ECU_SIGNAL,
    .DspDataBitSize = 32,
#if defined(USE_NVM)
    .DspNvmUseBlockID = 0xFF,
#endif
    .DspDataType = DCM_UINT8_N,
    .DspDataEndianess = DCM_ENDIAN_NOT_USED
};


const Dcm_DspSignalType DspDid_DID_0x0100_SignalList[] = {
	{
		.DspSignalDataRef = &DspData_DID_0x0100_Data,
		.DspSignalBitPosition = 0
	},
};

const Dcm_DspSignalType DspDid_DID_0x0101_SignalList[] = {
	{
		.DspSignalDataRef = &DspData_DID_0x0101_Data,
		.DspSignalBitPosition = 0
	},
};

const Dcm_DspSignalType DspDid_DID_0x0102_SignalList[] = {
	{
		.DspSignalDataRef = &DspData_DID_0x0102_Data,
		.DspSignalBitPosition = 0
	},
};

const Dcm_DspSignalType DspDid_DID_0xF200_SignalList[] = {
	{
		.DspSignalDataRef = &DspData_DID_0xF200_PeriodicDid,
		.DspSignalBitPosition = 0
	},
};

const Dcm_DspSignalType DspDid_DID_0x0200_SignalList[] = {
	{
		.DspSignalDataRef = &DspData_DID_0x0200_Data,
		.DspSignalBitPosition = 0
	},
};


const Dcm_DspDidType DspDidList[] = { 
	{	/* DID_0x0100 */
		.DspDidIdentifier = 0x100,
		.DspDidInfoRef = &DspDidInfoList[0],
		.DspDidRef = DID_0x0100_refList,
		.DspSignalRef = DspDid_DID_0x0100_SignalList,
		.DspNofSignals = 1,
		.DspDidDataByteSize = 20,/* 160 bits */
		.DspDidDataScalingInfoSize = 0,
		.DspDidRoeActivateFnc = NULL,
		.DspDidRoeEventId = 0,	
		.Arc_EOL = FALSE
	},
	{	/* DID_0x0101 */
		.DspDidIdentifier = 0x101,
		.DspDidInfoRef = &DspDidInfoList[0],
		.DspDidRef = DID_0x0101_refList,
		.DspSignalRef = DspDid_DID_0x0101_SignalList,
		.DspNofSignals = 1,
		.DspDidDataByteSize = 2,/* 16 bits */
		.DspDidDataScalingInfoSize = 0,
		.DspDidRoeActivateFnc = NULL,
		.DspDidRoeEventId = 0,	
		.Arc_EOL = FALSE
	},
	{	/* DID_0x0102 */
		.DspDidIdentifier = 0x102,
		.DspDidInfoRef = &DspDidInfoList[0],
		.DspDidRef = DID_0x0102_refList,
		.DspSignalRef = DspDid_DID_0x0102_SignalList,
		.DspNofSignals = 1,
		.DspDidDataByteSize = 2,/* 16 bits */
		.DspDidDataScalingInfoSize = 0,
		.DspDidRoeActivateFnc = NULL,
		.DspDidRoeEventId = 0,	
		.Arc_EOL = FALSE
	},
	{	/* DID_0xF200 */
		.DspDidIdentifier = 0xf200,
		.DspDidInfoRef = &DspDidInfoList[0],
		.DspDidRef = DID_0xF200_refList,
		.DspSignalRef = DspDid_DID_0xF200_SignalList,
		.DspNofSignals = 1,
		.DspDidDataByteSize = 4,/* 32 bits */
		.DspDidDataScalingInfoSize = 0,
		.DspDidRoeActivateFnc = NULL,
		.DspDidRoeEventId = 0,	
		.Arc_EOL = FALSE
	},
	{	/* DID_0xF201 */
		.DspDidIdentifier = 0xf201,
		.DspDidInfoRef = &DspDidInfoList[1],
		.DspDidRef = DID_0xF201_refList,
		.DspSignalRef = NULL,
		.DspNofSignals = 0,
		.DspDidDataByteSize = 0,/* 0 bits */
		.DspDidDataScalingInfoSize = 0,
		.DspDidRoeActivateFnc = NULL,
		.DspDidRoeEventId = 0,	
		.Arc_EOL = FALSE
	},
	{	/* DID_0x0200 */
		.DspDidIdentifier = 0x200,
		.DspDidInfoRef = &DspDidInfoList[2],
		.DspDidRef = DID_0x0200_refList,
		.DspSignalRef = DspDid_DID_0x0200_SignalList,
		.DspNofSignals = 1,
		.DspDidDataByteSize = 4,/* 32 bits */
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
	[DCM_COMM_CHANNEL_ComMChannel_INDEX] = {
        .ModeSwitchFnc = Rte_Switch_DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel,
        .NetworkHandle = ComMConf_ComMChannel_ComMChannel,
        .InternalIndex = DCM_COMM_CHANNEL_ComMChannel_INDEX,
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

const Dcm_DsdServiceType DcmDsdServiceTable_UDS_serviceList[] = {
	{
		.DsdSidTabServiceId = 0x22,
		.DsdSidTabSubfuncAvail = FALSE,
		.DsdSidTabSecurityLevelRef = ServiceTable_ReadDataByIdentifier_0x22_SecurityList,
		.DsdSidTabSessionLevelRef = ServiceTable_ReadDataByIdentifier_0x22_SessionList,
		.DspSidTabFnc = NULL,
		.DsdSubServiceList = NULL,
		.Arc_EOL = FALSE
	},
	{
		.DsdSidTabServiceId = 0x2a,
		.DsdSidTabSubfuncAvail = FALSE,
		.DsdSidTabSecurityLevelRef = ServiceTable_ReadDataByPeriodicIdentifier_0x2A_SecurityList,
		.DsdSidTabSessionLevelRef = ServiceTable_ReadDataByPeriodicIdentifier_0x2A_SessionList,
		.DspSidTabFnc = NULL,
		.DsdSubServiceList = NULL,
		.Arc_EOL = FALSE
	},
	{
		.DsdSidTabServiceId = 0x2c,
		.DsdSidTabSubfuncAvail = FALSE,
		.DsdSidTabSecurityLevelRef = ServiceTable_DynamicallyDefinedDataIdentifier_0x2C_SecurityList,
		.DsdSidTabSessionLevelRef = ServiceTable_DynamicallyDefinedDataIdentifier_0x2C_SessionList,
		.DspSidTabFnc = NULL,
		.DsdSubServiceList = NULL,
		.Arc_EOL = FALSE
	},
	{
		.DsdSidTabServiceId = 0x2f,
		.DsdSidTabSubfuncAvail = FALSE,
		.DsdSidTabSecurityLevelRef = ServiceTable_InputOutputControlByIdentifier_0x2F_SecurityList,
		.DsdSidTabSessionLevelRef = ServiceTable_InputOutputControlByIdentifier_0x2F_SessionList,
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

uint8 DcmDslBuffer_Rx[255];
Dcm_DslBufferRuntimeType rxBufferParams_DcmDslBuffer_Rx =
{
	.status = BUFFER_AVAILABLE
};
uint8 DcmDslBuffer_Tx[255];
Dcm_DslBufferRuntimeType rxBufferParams_DcmDslBuffer_Tx =
{
	.status = BUFFER_AVAILABLE
};
uint8 DcmDslBuffer_Periodic[8];
Dcm_DslBufferRuntimeType rxBufferParams_DcmDslBuffer_Periodic =
{
	.status = BUFFER_AVAILABLE
};

Dcm_DslRunTimeProtocolParametersType dcmDslRuntimeVariables[2];

const Dcm_DslBufferType DcmDslBufferList[DCM_DSL_BUFFER_LIST_LENGTH] = {
	{
		.DslBufferID = 0,
		.DslBufferSize = 0,	/* Value is not configurable */
		.pduInfo = {
			.SduDataPtr = DcmDslBuffer_Rx,
			.SduLength = 255,
		},
		.externalBufferRuntimeData = &rxBufferParams_DcmDslBuffer_Rx
	},
	{
		.DslBufferID = 1,
		.DslBufferSize = 0,	/* Value is not configurable */
		.pduInfo = {
			.SduDataPtr = DcmDslBuffer_Tx,
			.SduLength = 255,
		},
		.externalBufferRuntimeData = &rxBufferParams_DcmDslBuffer_Tx
	},
	{
		.DslBufferID = 2,
		.DslBufferSize = 0,	/* Value is not configurable */
		.pduInfo = {
			.SduDataPtr = DcmDslBuffer_Periodic,
			.SduLength = 8,
		},
		.externalBufferRuntimeData = &rxBufferParams_DcmDslBuffer_Periodic
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
		.DslProtocolAddrType = DCM_PROTOCOL_PHYSICAL_ADDR_TYPE,
		.DcmDslProtocolRxPduId = DCM_PDU_ID_DIAGPHYSICALRX,
#if defined(USE_COMM)
		.ComMChannelInternalIndex = DCM_COMM_CHANNEL_ComMChannel_INDEX, /* 0 */
#endif
		.Arc_EOL = FALSE
	},
	{
		.DslMainConnectionParent = &DslMainConnectionList[0],
		.DslProtocolAddrType = DCM_PROTOCOL_FUNCTIONAL_ADDR_TYPE,
		.DcmDslProtocolRxPduId = DCM_PDU_ID_DIAGFUNCTIONALRX,
#if defined(USE_COMM)
		.ComMChannelInternalIndex = DCM_COMM_CHANNEL_ComMChannel_INDEX, /* 0 */
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
		.DcmDslProtocolTxPduId = PDUR_PDU_ID_DIAGPHYSICALTX,
		.Arc_EOL = FALSE
	},
	{
		.Arc_EOL = TRUE
	}
};
extern const Dcm_DslProtocolRowType DslProtocolRowList[];

const Dcm_DslPeriodicTxType DslPeriodicConnection_PeriodicTransmission[] = {
	{
		.DslProtocolRow = &DslProtocolRowList[1],
		.PduRTxPduId = PDUR_PDU_ID_DIAGUUDT,
		.DcmTxPduId = DCM_PDU_ID_DIAGUUDT,
		.Arc_EOL = FALSE
	},
	{
		.Arc_EOL = TRUE
	}
};

const Dcm_DslPeriodicTransmissionType DslPeriodicConnectionList[] = {
	{
		.TxPduList = DslPeriodicConnection_PeriodicTransmission,
		.DslProtocolRow = &DslProtocolRowList[1],
		.Arc_EOL = FALSE
	},
	{
		.Arc_EOL = TRUE
	}
};

const Dcm_DslPeriodicTxType DcmDslProtocolPeriodicTxList[] = {
	{
		.PduRTxPduId = PDUR_PDU_ID_DIAGUUDT,
		.DcmTxPduId = DCM_PDU_ID_DIAGUUDT,
		.DslProtocolRow = &DslProtocolRowList[1],
		.Arc_EOL = FALSE
	},
	{
		.Arc_EOL = TRUE
	}
};

extern const Dcm_DslConnectionType DcmDslProtocolRow_UDS_ConnectionList[];

const Dcm_DslMainConnectionType DslMainConnectionList[] = {
	{
		/* DcmDslProtocolRow_UDS.DcmDslConnection.DcmDslMainConnection */
		.DslConnectionParent = &DcmDslProtocolRow_UDS_ConnectionList[0],
		.DslPeriodicTransmissionConRef = &DslPeriodicConnectionList[0],
		.DslProtocolTx = &DcmDslProtocolTxList[0],
		.DslPhysicalProtocolRx = &DcmDslProtocolRxList[0],
		.DslRxTesterSourceAddress = 0
	},
};


const Dcm_DslConnectionType DcmDslProtocolRow_UDS_ConnectionList[] = {
	{
		/* DcmDslConnection.DcmDslMainConnection */
		.DslProtocolRow = &DslProtocolRowList[0],
		.DslMainConnection = &DslMainConnectionList[0],
		.DslPeriodicTransmission = &DslPeriodicConnectionList[0],
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
		.DslProtocolTransType = DCM_PROTOCOL_TRANS_TYPE_2,
		.DslProtocolRxBufferID = &DcmDslBufferList[0],
		.DslProtocolSIDTable = &DsdServiceTable[0],
		.DslProtocolTxBufferID = &DcmDslBufferList[1],
		.DslProtocolTimeLimit = &ProtocolTimingList[0],
		.DslConnections = DcmDslProtocolRow_UDS_ConnectionList,
		.DslSendRespPendOnTransToBoot = TRUE,
		.Arc_EOL = FALSE
	},
	{
		/* DcmDslProtocolRow_UUDT */
		.DslRunTimeProtocolParameters = &dcmDslRuntimeVariables[1],
		.DslProtocolID = DCM_PERIODIC_ON_CAN,
		.DslProtocolIsParallelExecutab = FALSE, // not supported
		.DslProtocolPreemptTimeout = 0,
		.DslProtocolPriority = 0,
		.DslProtocolTransType = DCM_PROTOCOL_TRANS_TYPE_1,
		.DslProtocolRxBufferID = NULL,
		.DslProtocolSIDTable = NULL,
		.DslProtocolTxBufferID = &DcmDslBufferList[2],
		.DslProtocolTimeLimit = &ProtocolTimingList[1],
		.DslConnections = NULL,
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
		.TimStrP2ServerAdjust = 20u,
		.TimStrP2StarServerAdjust = 1000u,
		.TimStrS3Server = 5000u, /* Value is not configurable*/
		.Arc_EOL = FALSE
	},
	{
		.TimStrP2ServerAdjust = 0u,/* Not used for periodic protocol */
		.TimStrP2StarServerAdjust = 0u,/* Not used for periodic protocol */
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

