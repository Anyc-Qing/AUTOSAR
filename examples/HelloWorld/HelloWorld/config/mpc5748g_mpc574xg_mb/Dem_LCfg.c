
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

/* Generator version: 5.18.0
 * AUTOSAR version:   4.0.3
 */

#include "Dem.h"
#if (DEM_USE_NVM == STD_ON)
#include "NvM.h"
#endif

#if defined(USE_RTE)
#include "Rte_Dem.h"
#endif

#include "CalibrationData.h"
/* Included header files containing callback declarations */	
#include "Dem_Callbacks.h"
#include "IoHwAb_Dcm.h"

// #########################################  INFO  #########################################
// The following data read callbacks should be declared in the included header files:

// Std_ReturnType ReadTest(uint8 *Data);
// Std_ReturnType IoHwAb_Dcm_Read_AnalogSignal(uint8 *Data);
// ##########################################################################################
// Rte functions
// Std_ReturnType Rte_Call_CBInitEvt_TestEvent_InitMonitorForEvent(Dem_InitMonitorReasonType InitMonitorReason);

#define DEM_PIDANDDID_LIST_EOL_INDEX 	2u
#define DEM_FF_LIST_EOL_INDEX 			1u

#define DEM_PID_LIST_EOL_INDEX			0u
#define DEM_DID_LIST_EOL_INDEX			2u

#if (DEM_MAX_NUMBER_EVENT_PRI_MEM < 1) && (DEM_EVENT_DISPLACEMENT_SUPPORT == STD_OFF)
#warning Dem: The number of events with event destination primary memory is greater than the configured maximum \
number of events which can be stored in primary memory (Dem Max Number Event Entry Primary)! \
If changing Dem Max Number Event Entry Primary also make sure that the Fee block is big enough (if Fee used).
#endif

#if (DEM_MAX_NUMBER_EVENT_SEC_MEM < 0) && (DEM_EVENT_DISPLACEMENT_SUPPORT == STD_OFF)
#warning Dem: The number of events with event destination secondary memory is greater than the configured maximum \
number of events which can be stored in seconday memory (Dem Max Number Event Entry Secondary)! \
If changing Dem Max Number Event Entry Secondary also make sure that the Fee block is big enough (if Fee used).
#endif

#define Dem_START_SEC_CALIB_UNSPECIFIED
#include "Dem_MemMap.h" /*lint !e9019 suppressed due to Dem_MemMap.h include is required */
/**
 * @a2l_characteristic TestEvent_DTC_DTC
 * @desc calib param for DTC TestEvent_DTC
 * @struct_size 4
 * @field_name UDSDTC
 * @min 1
 * @max 16777214
 * @type uint32
 * @field_name OBDDTC
 * @min 4294967295
 * @max 4294967295
 * @type uint32
 * @field_name DTCUsed
 * @min 0
 * @max 1
 * @type uint8
 * @field_name ImmediateNvStorage
 * @min 0
 * @max 1
 * @type uint8
 */
#if !defined(HOST_TEST)
ARC_DECLARE_CALIB(const Arc_Dem_DTC, TestEvent_DTC_DTC) = {
#else
Arc_Dem_DTC TestEvent_DTC_DTC = {
#endif /* HOST_TEST */
	.UDSDTC = 3,
	.OBDDTC = DEM_NO_DTC,
	.DTCUsed = TRUE,
	.ImmediateNvStorage = FALSE,
};
#define Dem_STOP_SEC_CALIB_UNSPECIFIED
#include "Dem_MemMap.h" /*lint !e9019 suppressed due to Dem_MemMap.h include is required */


const Dem_DTCClassType DtcClassList[] = {
	{	//TestEvent_DTC
		.DTCRef = &TestEvent_DTC_DTC,
		.DTCSeverity = DEM_SEVERITY_NO_SEVERITY,
		.Arc_EOL = FALSE
	},
	{
		.Arc_EOL = TRUE
	}
};



const Dem_ExtendedDataRecordClassType ExtendedDataRecordClassList[] = {
	{	//DemExtendedDataRecordClass
		.RecordNumber = 1u,
		.DataSize = 1u,
		.UpdateRule = DEM_UPDATE_RECORD_YES,
		.CallbackGetExtDataRecord = ReadTest,
		.InternalDataElement = DEM_NO_ELEMENT,
	},
};



const Dem_ExtendedDataClassType DemExtendedDataClass = {
	.ExtendedDataRecordClassRef = {
		&ExtendedDataRecordClassList[DEM_EXT_DATA_REC_CLASS_DemExtendedDataRecordClass_INDEX],		
		NULL,
	}
};

/* Counter based predebounce */

/* Internal monitor */



const Dem_PidOrDidType DemDidList[] = {
	{
		.PidOrDidSize = 1,
		.DidIdentifier = 1u,
		.DidReadFnc = ReadTest,
		.Arc_EOL = FALSE
	},
	{
		.PidOrDidSize = 32,
		.DidIdentifier = 273u,
		.DidReadFnc = IoHwAb_Dcm_Read_AnalogSignal,
		.Arc_EOL = FALSE
	},
	{
		.Arc_EOL = TRUE
	}
};

const Dem_PidOrDidType DemPidList[] = {
	{
		.Arc_EOL = TRUE
	}
};

const Dem_PidOrDidType * const DemFreezeFrameClass_didRefList[] = {
		&DemDidList[DEM_DID_DemDidClass_INDEX],
		&DemDidList[DEM_DID_DemDidClass_Adc_INDEX],
		&DemDidList[DEM_DID_LIST_EOL_INDEX]
};

const Dem_PidOrDidType * const OBDFreezeFrame_pidRefList[] = {
		&DemPidList[DEM_PID_LIST_EOL_INDEX]
};


const Dem_FreezeFrameClassType FreezeFrameClassList[] = {
	{	//DemFreezeFrameClass
		.FFKind = DEM_FREEZE_FRAME_NON_OBD,
		.FFIdClassRef = DemFreezeFrameClass_didRefList
	},
};




const Arc_FailureCycleCounterThreshold NoFailure_FailureCycleCounter = {
	.Threshold = 0u,
};


#define Dem_START_SEC_CALIB_UNSPECIFIED
#include "Dem_MemMap.h" /*lint !e9019 suppressed due to Dem_MemMap.h include is required */
/**
 * @a2l_characteristic CAN_E_TIMEOUT_EventAvailable
 * @desc Determines if event is available or not
 * @scaling 1 
 * @min 0
 * @max 1
 * @type uint8
 */
#if !defined(HOST_TEST)
ARC_DECLARE_CALIB(const boolean, CAN_E_TIMEOUT_EventAvailable) = TRUE;
#else
boolean CAN_E_TIMEOUT_EventAvailable = TRUE; /*lint -esym(843,CAN_E_TIMEOUT_EventAvailable) not declared as const for HOST_TEST only */
#endif
#define Dem_STOP_SEC_CALIB_UNSPECIFIED
#include "Dem_MemMap.h" /*lint !e9019 suppressed due to Dem_MemMap.h include is required */

	
const Dem_EventClassType CAN_E_TIMEOUT_DemEventClass = {
	.EventAvailableByCalibration = &CAN_E_TIMEOUT_EventAvailable,
	.ConsiderPtoStatus = FALSE,
	.EventDestination = DEM_DTC_ORIGIN_NOT_USED,
	.IndicatorAttribute = NULL,
	.EventPriority = 1u,
	.FFPrestorageSupported = FALSE, /* Value is not configurable */
	.OperationCycleRef = DEM_IGNITION,
	.PreDebounceAlgorithmClass = NULL,
	.AgingAllowed = FALSE,
	.AgingCycleCounterThresholdPtr = NULL,
	.AgingCycleRef = DEM_ACTIVE, /* Not used */
	.FailureCycleRef= DEM_OPERATION_CYCLE_ID_ENDMARK,
	.FailureCycleCounterThresholdRef = &NoFailure_FailureCycleCounter,
	.EnableConditionGroupRef = NULL
};

#define Dem_START_SEC_CALIB_UNSPECIFIED
#include "Dem_MemMap.h" /*lint !e9019 suppressed due to Dem_MemMap.h include is required */
/**
 * @a2l_characteristic TestEvent_EventAvailable
 * @desc Determines if event is available or not
 * @scaling 1 
 * @min 0
 * @max 1
 * @type uint8
 */
#if !defined(HOST_TEST)
ARC_DECLARE_CALIB(const boolean, TestEvent_EventAvailable) = TRUE;
#else
boolean TestEvent_EventAvailable = TRUE; /*lint -esym(843,TestEvent_EventAvailable) not declared as const for HOST_TEST only */
#endif
#define Dem_STOP_SEC_CALIB_UNSPECIFIED
#include "Dem_MemMap.h" /*lint !e9019 suppressed due to Dem_MemMap.h include is required */

	
const Dem_EventClassType TestEvent_DemEventClass = {
	.EventAvailableByCalibration = &TestEvent_EventAvailable,
	.ConsiderPtoStatus = FALSE,
	.EventDestination = DEM_DTC_ORIGIN_PRIMARY_MEMORY,
	.IndicatorAttribute = NULL,
	.EventPriority = 1u,
	.FFPrestorageSupported = FALSE, /* Value is not configurable */
	.OperationCycleRef = DEM_ACTIVE,
	.PreDebounceAlgorithmClass = NULL,
	.AgingAllowed = FALSE,
	.AgingCycleCounterThresholdPtr = NULL,
	.AgingCycleRef = DEM_ACTIVE, /* Not used */
	.FailureCycleRef= DEM_OPERATION_CYCLE_ID_ENDMARK,
	.FailureCycleCounterThresholdRef = &NoFailure_FailureCycleCounter,
	.EnableConditionGroupRef = NULL
};

#define Dem_START_SEC_CALIB_UNSPECIFIED
#include "Dem_MemMap.h" /*lint !e9019 suppressed due to Dem_MemMap.h include is required */
/**
 * @a2l_characteristic FLS_E_WRITE_FAILED_EventAvailable
 * @desc Determines if event is available or not
 * @scaling 1 
 * @min 0
 * @max 1
 * @type uint8
 */
#if !defined(HOST_TEST)
ARC_DECLARE_CALIB(const boolean, FLS_E_WRITE_FAILED_EventAvailable) = TRUE;
#else
boolean FLS_E_WRITE_FAILED_EventAvailable = TRUE; /*lint -esym(843,FLS_E_WRITE_FAILED_EventAvailable) not declared as const for HOST_TEST only */
#endif
#define Dem_STOP_SEC_CALIB_UNSPECIFIED
#include "Dem_MemMap.h" /*lint !e9019 suppressed due to Dem_MemMap.h include is required */

	
const Dem_EventClassType FLS_E_WRITE_FAILED_DemEventClass = {
	.EventAvailableByCalibration = &FLS_E_WRITE_FAILED_EventAvailable,
	.ConsiderPtoStatus = FALSE,
	.EventDestination = DEM_DTC_ORIGIN_NOT_USED,
	.IndicatorAttribute = NULL,
	.EventPriority = 1u,
	.FFPrestorageSupported = FALSE, /* Value is not configurable */
	.OperationCycleRef = DEM_ACTIVE,
	.PreDebounceAlgorithmClass = NULL,
	.AgingAllowed = FALSE,
	.AgingCycleCounterThresholdPtr = NULL,
	.AgingCycleRef = DEM_ACTIVE, /* Not used */
	.FailureCycleRef= DEM_OPERATION_CYCLE_ID_ENDMARK,
	.FailureCycleCounterThresholdRef = &NoFailure_FailureCycleCounter,
	.EnableConditionGroupRef = NULL
};

#define Dem_START_SEC_CALIB_UNSPECIFIED
#include "Dem_MemMap.h" /*lint !e9019 suppressed due to Dem_MemMap.h include is required */
/**
 * @a2l_characteristic FLS_E_READ_FAILED_EventAvailable
 * @desc Determines if event is available or not
 * @scaling 1 
 * @min 0
 * @max 1
 * @type uint8
 */
#if !defined(HOST_TEST)
ARC_DECLARE_CALIB(const boolean, FLS_E_READ_FAILED_EventAvailable) = TRUE;
#else
boolean FLS_E_READ_FAILED_EventAvailable = TRUE; /*lint -esym(843,FLS_E_READ_FAILED_EventAvailable) not declared as const for HOST_TEST only */
#endif
#define Dem_STOP_SEC_CALIB_UNSPECIFIED
#include "Dem_MemMap.h" /*lint !e9019 suppressed due to Dem_MemMap.h include is required */

	
const Dem_EventClassType FLS_E_READ_FAILED_DemEventClass = {
	.EventAvailableByCalibration = &FLS_E_READ_FAILED_EventAvailable,
	.ConsiderPtoStatus = FALSE,
	.EventDestination = DEM_DTC_ORIGIN_NOT_USED,
	.IndicatorAttribute = NULL,
	.EventPriority = 1u,
	.FFPrestorageSupported = FALSE, /* Value is not configurable */
	.OperationCycleRef = DEM_ACTIVE,
	.PreDebounceAlgorithmClass = NULL,
	.AgingAllowed = FALSE,
	.AgingCycleCounterThresholdPtr = NULL,
	.AgingCycleRef = DEM_ACTIVE, /* Not used */
	.FailureCycleRef= DEM_OPERATION_CYCLE_ID_ENDMARK,
	.FailureCycleCounterThresholdRef = &NoFailure_FailureCycleCounter,
	.EnableConditionGroupRef = NULL
};

#define Dem_START_SEC_CALIB_UNSPECIFIED
#include "Dem_MemMap.h" /*lint !e9019 suppressed due to Dem_MemMap.h include is required */
/**
 * @a2l_characteristic FLS_E_ERASE_FAILED_EventAvailable
 * @desc Determines if event is available or not
 * @scaling 1 
 * @min 0
 * @max 1
 * @type uint8
 */
#if !defined(HOST_TEST)
ARC_DECLARE_CALIB(const boolean, FLS_E_ERASE_FAILED_EventAvailable) = TRUE;
#else
boolean FLS_E_ERASE_FAILED_EventAvailable = TRUE; /*lint -esym(843,FLS_E_ERASE_FAILED_EventAvailable) not declared as const for HOST_TEST only */
#endif
#define Dem_STOP_SEC_CALIB_UNSPECIFIED
#include "Dem_MemMap.h" /*lint !e9019 suppressed due to Dem_MemMap.h include is required */

	
const Dem_EventClassType FLS_E_ERASE_FAILED_DemEventClass = {
	.EventAvailableByCalibration = &FLS_E_ERASE_FAILED_EventAvailable,
	.ConsiderPtoStatus = FALSE,
	.EventDestination = DEM_DTC_ORIGIN_NOT_USED,
	.IndicatorAttribute = NULL,
	.EventPriority = 1u,
	.FFPrestorageSupported = FALSE, /* Value is not configurable */
	.OperationCycleRef = DEM_ACTIVE,
	.PreDebounceAlgorithmClass = NULL,
	.AgingAllowed = FALSE,
	.AgingCycleCounterThresholdPtr = NULL,
	.AgingCycleRef = DEM_ACTIVE, /* Not used */
	.FailureCycleRef= DEM_OPERATION_CYCLE_ID_ENDMARK,
	.FailureCycleCounterThresholdRef = &NoFailure_FailureCycleCounter,
	.EnableConditionGroupRef = NULL
};

#define Dem_START_SEC_CALIB_UNSPECIFIED
#include "Dem_MemMap.h" /*lint !e9019 suppressed due to Dem_MemMap.h include is required */
/**
 * @a2l_characteristic FLS_E_COMPARE_FAILED_EventAvailable
 * @desc Determines if event is available or not
 * @scaling 1 
 * @min 0
 * @max 1
 * @type uint8
 */
#if !defined(HOST_TEST)
ARC_DECLARE_CALIB(const boolean, FLS_E_COMPARE_FAILED_EventAvailable) = TRUE;
#else
boolean FLS_E_COMPARE_FAILED_EventAvailable = TRUE; /*lint -esym(843,FLS_E_COMPARE_FAILED_EventAvailable) not declared as const for HOST_TEST only */
#endif
#define Dem_STOP_SEC_CALIB_UNSPECIFIED
#include "Dem_MemMap.h" /*lint !e9019 suppressed due to Dem_MemMap.h include is required */

	
const Dem_EventClassType FLS_E_COMPARE_FAILED_DemEventClass = {
	.EventAvailableByCalibration = &FLS_E_COMPARE_FAILED_EventAvailable,
	.ConsiderPtoStatus = FALSE,
	.EventDestination = DEM_DTC_ORIGIN_NOT_USED,
	.IndicatorAttribute = NULL,
	.EventPriority = 1u,
	.FFPrestorageSupported = FALSE, /* Value is not configurable */
	.OperationCycleRef = DEM_ACTIVE,
	.PreDebounceAlgorithmClass = NULL,
	.AgingAllowed = FALSE,
	.AgingCycleCounterThresholdPtr = NULL,
	.AgingCycleRef = DEM_ACTIVE, /* Not used */
	.FailureCycleRef= DEM_OPERATION_CYCLE_ID_ENDMARK,
	.FailureCycleCounterThresholdRef = &NoFailure_FailureCycleCounter,
	.EnableConditionGroupRef = NULL
};


const Dem_EventParameterType EventParameterList[] = {
	{
		.EventID = DemConf_DemEventParameter_CAN_E_TIMEOUT,
		.EventKind = DEM_EVENT_KIND_BSW,
		.EventClass = &CAN_E_TIMEOUT_DemEventClass,
		.ExtendedDataClassRef = NULL,
		.FreezeFrameClassRef = NULL,
		.MaxNumberFreezeFrameRecords = 0u,
		.FreezeFrameRecNumClassRef = NULL,
		.CallbackInitMforE = NULL,
		.CallbackEventStatusChanged = NULL,
		.CallbackClearEventAllowed = NULL,
		.CallbackEventDataChanged = NULL,
		.DTCClassRef = NULL,
		.EventDTCKind = DEM_NON_EMISSION_RELATED,
		.Arc_EOL = FALSE
	},
	{
		.EventID = DemConf_DemEventParameter_FLS_E_WRITE_FAILED,
		.EventKind = DEM_EVENT_KIND_BSW,
		.EventClass = &FLS_E_WRITE_FAILED_DemEventClass,
		.ExtendedDataClassRef = NULL,
		.FreezeFrameClassRef = NULL,
		.MaxNumberFreezeFrameRecords = 0u,
		.FreezeFrameRecNumClassRef = NULL,
		.CallbackInitMforE = NULL,
		.CallbackEventStatusChanged = NULL,
		.CallbackClearEventAllowed = NULL,
		.CallbackEventDataChanged = NULL,
		.DTCClassRef = NULL,
		.EventDTCKind = DEM_NON_EMISSION_RELATED,
		.Arc_EOL = FALSE
	},
	{
		.EventID = DemConf_DemEventParameter_FLS_E_READ_FAILED,
		.EventKind = DEM_EVENT_KIND_BSW,
		.EventClass = &FLS_E_READ_FAILED_DemEventClass,
		.ExtendedDataClassRef = NULL,
		.FreezeFrameClassRef = NULL,
		.MaxNumberFreezeFrameRecords = 0u,
		.FreezeFrameRecNumClassRef = NULL,
		.CallbackInitMforE = NULL,
		.CallbackEventStatusChanged = NULL,
		.CallbackClearEventAllowed = NULL,
		.CallbackEventDataChanged = NULL,
		.DTCClassRef = NULL,
		.EventDTCKind = DEM_NON_EMISSION_RELATED,
		.Arc_EOL = FALSE
	},
	{
		.EventID = DemConf_DemEventParameter_FLS_E_ERASE_FAILED,
		.EventKind = DEM_EVENT_KIND_BSW,
		.EventClass = &FLS_E_ERASE_FAILED_DemEventClass,
		.ExtendedDataClassRef = NULL,
		.FreezeFrameClassRef = NULL,
		.MaxNumberFreezeFrameRecords = 0u,
		.FreezeFrameRecNumClassRef = NULL,
		.CallbackInitMforE = NULL,
		.CallbackEventStatusChanged = NULL,
		.CallbackClearEventAllowed = NULL,
		.CallbackEventDataChanged = NULL,
		.DTCClassRef = NULL,
		.EventDTCKind = DEM_NON_EMISSION_RELATED,
		.Arc_EOL = FALSE
	},
	{
		.EventID = DemConf_DemEventParameter_FLS_E_COMPARE_FAILED,
		.EventKind = DEM_EVENT_KIND_BSW,
		.EventClass = &FLS_E_COMPARE_FAILED_DemEventClass,
		.ExtendedDataClassRef = NULL,
		.FreezeFrameClassRef = NULL,
		.MaxNumberFreezeFrameRecords = 0u,
		.FreezeFrameRecNumClassRef = NULL,
		.CallbackInitMforE = NULL,
		.CallbackEventStatusChanged = NULL,
		.CallbackClearEventAllowed = NULL,
		.CallbackEventDataChanged = NULL,
		.DTCClassRef = NULL,
		.EventDTCKind = DEM_NON_EMISSION_RELATED,
		.Arc_EOL = FALSE
	},
	{
		.EventID = DemConf_DemEventParameter_TestEvent,
		.EventKind = DEM_EVENT_KIND_SWC,
		.EventClass = &TestEvent_DemEventClass,
		.ExtendedDataClassRef = NULL,
		.FreezeFrameClassRef = NULL,
		.MaxNumberFreezeFrameRecords = 0u,
		.FreezeFrameRecNumClassRef = NULL,
		.CallbackInitMforE = Rte_Call_CBInitEvt_TestEvent_InitMonitorForEvent,
		.CallbackEventStatusChanged = NULL,
		.CallbackClearEventAllowed = NULL,
		.CallbackEventDataChanged = NULL,
		.DTCClassRef = &DtcClassList[DEM_DTC_TestEvent_DTC_INDEX],
		.EventDTCKind = DEM_NON_EMISSION_RELATED,
		.Arc_EOL = FALSE
	},
	{
		.Arc_EOL = TRUE
	}
};


const Dem_GroupOfDtcType DemDtcGroups[] = {
	{
		.DemGroupDTCs = 0x0UL,
		.Arc_EOL = FALSE
	},
	{
		.DemGroupDTCs = 0xFFFFFFUL,
		.Arc_EOL = TRUE
	}
};

const Dem_ConfigSetType DEM_ConfigSet = {
		.EventParameter = EventParameterList,
		.DTCClass = DtcClassList,
		.GlobalOBDFreezeFrameClassRef = NULL,
		.Indicators = NULL,
#if (DEM_ENABLE_CONDITION_SUPPORT == STD_ON)
		.EnableCondition = DemEnableConditionList,
#endif
		.GroupOfDtc = DemDtcGroups
};


const Dem_ConfigType DEM_Config = {
	.ConfigSet = &DEM_ConfigSet,
};

