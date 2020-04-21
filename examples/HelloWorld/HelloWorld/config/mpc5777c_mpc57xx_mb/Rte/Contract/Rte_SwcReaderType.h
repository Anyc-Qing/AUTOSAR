/**
 * Application Header File
 *
 * @req SWS_Rte_01003
 */

/** === HEADER ====================================================================================
 */
/*lint -e18 -e452 LINT:OTHER:Duplicate declarations hidden behind ifdef */

/** --- Normal include guard ----------------------------------------------------------------------
 */
#ifndef RTE_SWCREADERTYPE_H_
#define RTE_SWCREADERTYPE_H_

/** --- C++ guard ---------------------------------------------------------------------------------
 * @req SWS_Rte_03709
 */
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/** --- Duplicate application include guard -------------------------------------------------------
 * @req SWS_Rte_01006
 */
#ifdef RTE_APPLICATION_HEADER_FILE
#error Multiple application header files included.
#endif
#define RTE_APPLICATION_HEADER_FILE

/** --- Single runnable API -----------------------------------------------------------------------
 * @req SWS_Rte_02751
 */
#if defined(RTE_RUNNABLEAPI_Init) || \
defined(RTE_RUNNABLEAPI_SwcReaderRunnable)
#define RTE_RUNNABLEAPI
#endif

/** --- Includes ----------------------------------------------------------------------------------
 * @req SWS_Rte_02751
 * @req SWS_Rte_07131
 */
#include <Rte_DataHandleType.h>
#include <Rte_SwcReaderType_Type.h>

/** --- Application Errors ------------------------------------------------------------------------
 * @req SWS_Rte_02575
 * @req SWS_Rte_02576
 * @req SWS_Rte_07143
 */
#define RTE_E_AnalogServiceRead_E_NOT_OK 1U
#define RTE_E_AnalogServiceRead_E_OK 0U
#define RTE_E_DETService_E_OK 0U
#define RTE_E_DLTService_E_NOT_OK 1U
#define RTE_E_DLTService_E_OK 0U
#define RTE_E_DiagnosticMonitor_E_NOT_OK 1U
#define RTE_E_DiagnosticMonitor_E_OK 0U
#define RTE_E_DigitalServiceWrite_E_NOT_OK 1U
#define RTE_E_DigitalServiceWrite_E_OK 0U
#define RTE_E_EcuM_StateRequest_E_NOT_OK 1U
#define RTE_E_EcuM_StateRequest_E_OK 0U
#define RTE_E_FunctionInhibition_E_NOT_OK 1U
#define RTE_E_FunctionInhibition_E_OK 0U
#define RTE_E_OsService_E_OK 0U
#define RTE_E_OsService_E_OS_ID 3U
#define RTE_E_OsService_E_OS_VALUE 8U
#define RTE_E_PwmServiceSetDuty_E_NOT_OK 1U
#define RTE_E_PwmServiceSetDuty_E_OK 0U
#define RTE_E_WdgM_LocalSupervision_E_NOT_OK 1U
#define RTE_E_WdgM_LocalSupervision_E_OK 0U

/** --- Initial Values ----------------------------------------------------------------------------
 * @SWS_Rte_05078
 */

/** --- PIM DATA TYPES ------------------------------------------------------------------------------ */

/** --- Condition Value Macros -------------------------------------------------------
 * @req SWS_Rte_03854
 */

/** === BODY ======================================================================================
 */

/** @req SWS_Rte_03731
 *  @req SWS_Rte_07137
 *  @req SWS_Rte_07138
 *  !req SWS_Rte_06523
 *  @req SWS_Rte_03730
 *  @req SWS_Rte_07677
 *  @req SWS_Rte_02620
 *  @req SWS_Rte_02621
 *  @req SWS_Rte_01055
 *  @req SWS_Rte_03726 */

/** @req SWS_Rte_01343
 *  @req SWS_Rte_01342
 *  !req SWS_Rte_06524
 *  @req SWS_Rte_01053
 */

extern Std_ReturnType Rte_Call_SwcReaderType_SwcReader_RunControl_RequestRUN(void);
extern Std_ReturnType Rte_Call_SwcReaderType_SwcReader_OsCounter_GetCounterValue(/*OUT*/TickType * value);
extern Std_ReturnType Rte_Call_SwcReaderType_SwcReader_OsCounter_GetElapsedValue(/*INOUT*/TickType * value, /*OUT*/TickType * elapsedValue);
extern Std_ReturnType Rte_Call_SwcReaderType_SwcReader_Blinker_Write(/*IN*/DigitalLevel Level);
extern Std_ReturnType Rte_Call_SwcReaderType_SwcReader_AnalogReader_Read(/*OUT*/AnalogValue * Value, /*OUT*/SignalQuality * Quality);
extern Std_ReturnType Rte_Call_SwcReaderType_SwcReader_Det_ReportError(/*IN*/uint8 ApiId, /*IN*/uint8 ErrorId);
extern Std_ReturnType Rte_Call_SwcReaderType_SwcReader_PWMWriter_Set(/*IN*/DutyCycle DutyValue, /*OUT*/SignalQuality * Quality);
extern Std_ReturnType Rte_Call_SwcReaderType_SwcReader_Dlt_SendLogMessage(/*IN*/const Dlt_MessageLogInfoType * log_info, /*IN*/constUint8Ptr log_data, /*IN*/
        uint16 log_data_length);
extern Std_ReturnType Rte_Call_SwcReaderType_SwcReader_Dem_TestEvent_SetEventStatus(/*IN*/Dem_EventStatusType EventStatus);
extern Std_ReturnType Rte_Call_SwcReaderType_SwcReader_WdgM_LocalSup_CheckpointReached(/*IN*/WdgM_CheckpointIdType CheckpointID);
extern Std_ReturnType Rte_Call_SwcReaderType_SwcReader_RunControl_ReleaseRUN(void);
extern Std_ReturnType Rte_Call_SwcReaderType_SwcReader_FiM_FID1_Inhibition_GetFunctionPermission(/*OUT*/boolean * Permission);

/** @req SWS_Rte_07132
 *  @req SWS_Rte_03714 
 *  @req SWS_Rte_03725 
 *  @req SWS_Rte_03752
 *  @req SWS_Rte_02623
 */
typedef struct {
    Rte_DE_TestCmdType * const SwcReaderRunnable_ReceiverPort_cmd;
    Rte_DE_uint32 * const SwcReaderRunnable_ReceiverPort_data1;
    Rte_DE_sint32 * const SwcReaderRunnable_AdcResult_data1;
    Rte_DE_uint32 * const SwcReaderRunnable_ResultPort_data1;
    Rte_DE_WdgMModeEnum * const SwcReaderRunnable_WdgM_StateReq_requestedMode;
} Rte_CDS_SwcReaderType;

/** --- Instance handle type ---------------------------------------------------------------------- */
typedef Rte_CDS_SwcReaderType const * const Rte_Instance;

/** --- Singleton instance handle -----------------------------------------------------------------
 *  @req SWS_Rte_03793
 */
extern const Rte_Instance Rte_Inst_SwcReaderType;
#define self (Rte_Inst_SwcReaderType)

/** --- Calibration API --------------------------------------------------------------------------- */

/** --- Per Instance Memory API ------------------------------------------------------------------- */

/** --- Indirect port API ------------------------------------------------------------------------- */

/** --- Single Runnable APIs ---------------------------------------------------------------------- */
#if defined(RTE_RUNNABLEAPI)
/** --- Init */
#if defined(RTE_RUNNABLEAPI_Init)

void swcReaderInit(void);

static inline Std_ReturnType Rte_Call_RunControl_RequestRUN(void) {
    return Rte_Call_SwcReaderType_SwcReader_RunControl_RequestRUN();
}

#endif

/** --- SwcReaderRunnable */
#if defined(RTE_RUNNABLEAPI_SwcReaderRunnable)

void swcReaderRunnable(void);

static inline uint32 Rte_IRead_SwcReaderRunnable_ReceiverPort_data1(void) {
    return self->SwcReaderRunnable_ReceiverPort_data1->value;
}

static inline TestCmdType Rte_IRead_SwcReaderRunnable_ReceiverPort_cmd(void) {
    return self->SwcReaderRunnable_ReceiverPort_cmd->value;
}

static inline void Rte_IWrite_SwcReaderRunnable_ResultPort_data1(/*IN*/uint32 value) {
    self->SwcReaderRunnable_ResultPort_data1->value = value;
}

static inline void Rte_IWrite_SwcReaderRunnable_AdcResult_data1(/*IN*/sint32 value) {
    self->SwcReaderRunnable_AdcResult_data1->value = value;
}

static inline void Rte_IWrite_SwcReaderRunnable_WdgM_StateReq_requestedMode(/*IN*/WdgMModeEnum value) {
    self->SwcReaderRunnable_WdgM_StateReq_requestedMode->value = value;
}

static inline Std_ReturnType Rte_Call_OsCounter_GetCounterValue(/*OUT*/TickType * value) {
    return Rte_Call_SwcReaderType_SwcReader_OsCounter_GetCounterValue(value);
}

static inline Std_ReturnType Rte_Call_OsCounter_GetElapsedValue(/*INOUT*/TickType * value, /*OUT*/TickType * elapsedValue) {
    return Rte_Call_SwcReaderType_SwcReader_OsCounter_GetElapsedValue(value, elapsedValue);
}

static inline Std_ReturnType Rte_Call_Blinker_Write(/*IN*/DigitalLevel Level) {
    return Rte_Call_SwcReaderType_SwcReader_Blinker_Write(Level);
}

static inline Std_ReturnType Rte_Call_AnalogReader_Read(/*OUT*/AnalogValue * Value, /*OUT*/SignalQuality * Quality) {
    return Rte_Call_SwcReaderType_SwcReader_AnalogReader_Read(Value, Quality);
}

static inline Std_ReturnType Rte_Call_Det_ReportError(/*IN*/uint8 ApiId, /*IN*/uint8 ErrorId) {
    return Rte_Call_SwcReaderType_SwcReader_Det_ReportError(ApiId, ErrorId);
}

static inline Std_ReturnType Rte_Call_PWMWriter_Set(/*IN*/DutyCycle DutyValue, /*OUT*/SignalQuality * Quality) {
    return Rte_Call_SwcReaderType_SwcReader_PWMWriter_Set(DutyValue, Quality);
}

static inline Std_ReturnType Rte_Call_Dlt_SendLogMessage(/*IN*/const Dlt_MessageLogInfoType * log_info, /*IN*/constUint8Ptr log_data, /*IN*/uint16 log_data_length) {
    return Rte_Call_SwcReaderType_SwcReader_Dlt_SendLogMessage(log_info, log_data, log_data_length);
}

static inline Std_ReturnType Rte_Call_Dem_TestEvent_SetEventStatus(/*IN*/Dem_EventStatusType EventStatus) {
    return Rte_Call_SwcReaderType_SwcReader_Dem_TestEvent_SetEventStatus(EventStatus);
}

static inline Std_ReturnType Rte_Call_WdgM_LocalSup_CheckpointReached(/*IN*/WdgM_CheckpointIdType CheckpointID) {
    return Rte_Call_SwcReaderType_SwcReader_WdgM_LocalSup_CheckpointReached(CheckpointID);
}

static inline Std_ReturnType Rte_Call_RunControl_ReleaseRUN(void) {
    return Rte_Call_SwcReaderType_SwcReader_RunControl_ReleaseRUN();
}

static inline Std_ReturnType Rte_Call_FiM_FID1_Inhibition_GetFunctionPermission(/*OUT*/boolean * Permission) {
    return Rte_Call_SwcReaderType_SwcReader_FiM_FID1_Inhibition_GetFunctionPermission(Permission);
}

#endif
#endif

/** --- All Runnable APIs ------------------------------------------------------------------------- */
#if !defined(RTE_RUNNABLEAPI)
void swcReaderInit(void);

static inline Std_ReturnType Rte_Call_RunControl_RequestRUN(void) {
    return Rte_Call_SwcReaderType_SwcReader_RunControl_RequestRUN();
}

void swcReaderRunnable(void);

static inline uint32 Rte_IRead_SwcReaderRunnable_ReceiverPort_data1(void) {
    return self->SwcReaderRunnable_ReceiverPort_data1->value;
}

static inline TestCmdType Rte_IRead_SwcReaderRunnable_ReceiverPort_cmd(void) {
    return self->SwcReaderRunnable_ReceiverPort_cmd->value;
}

static inline void Rte_IWrite_SwcReaderRunnable_ResultPort_data1(/*IN*/uint32 value) {
    self->SwcReaderRunnable_ResultPort_data1->value = value;
}

static inline void Rte_IWrite_SwcReaderRunnable_AdcResult_data1(/*IN*/sint32 value) {
    self->SwcReaderRunnable_AdcResult_data1->value = value;
}

static inline void Rte_IWrite_SwcReaderRunnable_WdgM_StateReq_requestedMode(/*IN*/WdgMModeEnum value) {
    self->SwcReaderRunnable_WdgM_StateReq_requestedMode->value = value;
}

static inline Std_ReturnType Rte_Call_OsCounter_GetCounterValue(/*OUT*/TickType * value) {
    return Rte_Call_SwcReaderType_SwcReader_OsCounter_GetCounterValue(value);
}

static inline Std_ReturnType Rte_Call_OsCounter_GetElapsedValue(/*INOUT*/TickType * value, /*OUT*/TickType * elapsedValue) {
    return Rte_Call_SwcReaderType_SwcReader_OsCounter_GetElapsedValue(value, elapsedValue);
}

static inline Std_ReturnType Rte_Call_Blinker_Write(/*IN*/DigitalLevel Level) {
    return Rte_Call_SwcReaderType_SwcReader_Blinker_Write(Level);
}

static inline Std_ReturnType Rte_Call_AnalogReader_Read(/*OUT*/AnalogValue * Value, /*OUT*/SignalQuality * Quality) {
    return Rte_Call_SwcReaderType_SwcReader_AnalogReader_Read(Value, Quality);
}

static inline Std_ReturnType Rte_Call_Det_ReportError(/*IN*/uint8 ApiId, /*IN*/uint8 ErrorId) {
    return Rte_Call_SwcReaderType_SwcReader_Det_ReportError(ApiId, ErrorId);
}

static inline Std_ReturnType Rte_Call_PWMWriter_Set(/*IN*/DutyCycle DutyValue, /*OUT*/SignalQuality * Quality) {
    return Rte_Call_SwcReaderType_SwcReader_PWMWriter_Set(DutyValue, Quality);
}

static inline Std_ReturnType Rte_Call_Dlt_SendLogMessage(/*IN*/const Dlt_MessageLogInfoType * log_info, /*IN*/constUint8Ptr log_data, /*IN*/
        uint16 log_data_length) {
    return Rte_Call_SwcReaderType_SwcReader_Dlt_SendLogMessage(log_info, log_data, log_data_length);
}

static inline Std_ReturnType Rte_Call_Dem_TestEvent_SetEventStatus(/*IN*/Dem_EventStatusType EventStatus) {
    return Rte_Call_SwcReaderType_SwcReader_Dem_TestEvent_SetEventStatus(EventStatus);
}

static inline Std_ReturnType Rte_Call_WdgM_LocalSup_CheckpointReached(/*IN*/WdgM_CheckpointIdType CheckpointID) {
    return Rte_Call_SwcReaderType_SwcReader_WdgM_LocalSup_CheckpointReached(CheckpointID);
}

static inline Std_ReturnType Rte_Call_RunControl_ReleaseRUN(void) {
    return Rte_Call_SwcReaderType_SwcReader_RunControl_ReleaseRUN();
}

static inline Std_ReturnType Rte_Call_FiM_FID1_Inhibition_GetFunctionPermission(/*OUT*/boolean * Permission) {
    return Rte_Call_SwcReaderType_SwcReader_FiM_FID1_Inhibition_GetFunctionPermission(Permission);
}
#endif

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_03710 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_SWCREADERTYPE_H_ */
