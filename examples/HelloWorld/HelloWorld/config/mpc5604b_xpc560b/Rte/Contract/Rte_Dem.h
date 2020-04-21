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
#ifndef RTE_DEM_H_
#define RTE_DEM_H_

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
#if defined(RTE_RUNNABLEAPI_ClearDTC) || \
defined(RTE_RUNNABLEAPI_ClearPrestoredFreezeFrame) || \
defined(RTE_RUNNABLEAPI_Dem_MainFunction) || \
defined(RTE_RUNNABLEAPI_GetDTCOfEvent) || \
defined(RTE_RUNNABLEAPI_GetEventExtendedDataRecord) || \
defined(RTE_RUNNABLEAPI_GetEventFailed) || \
defined(RTE_RUNNABLEAPI_GetEventFreezeFrameData) || \
defined(RTE_RUNNABLEAPI_GetEventStatus) || \
defined(RTE_RUNNABLEAPI_GetEventTested) || \
defined(RTE_RUNNABLEAPI_GetFaultDetectionCounter) || \
defined(RTE_RUNNABLEAPI_PrestoreFreezeFrame) || \
defined(RTE_RUNNABLEAPI_ResetEventStatus) || \
defined(RTE_RUNNABLEAPI_SetEventAvailable) || \
defined(RTE_RUNNABLEAPI_SetEventDisabled) || \
defined(RTE_RUNNABLEAPI_SetEventStatus) || \
defined(RTE_RUNNABLEAPI_SetOperationCycleState)
#define RTE_RUNNABLEAPI
#endif

/** --- Includes ----------------------------------------------------------------------------------
 * @req SWS_Rte_02751
 * @req SWS_Rte_07131
 */
#include <Rte_DataHandleType.h>
#include <Rte_Dem_Type.h>

/** --- Application Errors ------------------------------------------------------------------------
 * @req SWS_Rte_02575
 * @req SWS_Rte_02576
 * @req SWS_Rte_07143
 */
#define RTE_E_CallbackInitMonitorForEvent_E_NOT_OK 1U
#define RTE_E_DcmIf_DEM_CLEAR_FAILED 4U
#define RTE_E_DcmIf_DEM_CLEAR_OK 0U
#define RTE_E_DcmIf_DEM_CLEAR_PENDING 5U
#define RTE_E_DcmIf_DEM_CLEAR_WRONG_DTC 1U
#define RTE_E_DcmIf_DEM_CLEAR_WRONG_DTCKIND 3U
#define RTE_E_DcmIf_DEM_CLEAR_WRONG_DTCORIGIN 2U
#define RTE_E_DiagnosticInfo_E_NOT_OK 1U
#define RTE_E_DiagnosticInfo_E_NO_DTC_AVAILABLE 2U
#define RTE_E_DiagnosticInfo_E_OK 0U
#define RTE_E_DiagnosticMonitor_E_NOT_OK 1U
#define RTE_E_DiagnosticMonitor_E_OK 0U
#define RTE_E_EventAvailable_E_NOT_OK 1U
#define RTE_E_EventAvailable_E_OK 0U
#define RTE_E_GeneralDiagnosticInfo_E_NOT_OK 1U
#define RTE_E_GeneralDiagnosticInfo_E_NO_DTC_AVAILABLE 2U
#define RTE_E_GeneralDiagnosticInfo_E_OK 0U
#define RTE_E_OperationCycle_E_NOT_OK 1U
#define RTE_E_OperationCycle_E_OK 0U

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

extern Std_ReturnType Rte_Call_Dem_dem_CBInitEvt_TestEvent_InitMonitorForEvent(/*IN*/Dem_InitMonitorReasonType InitMonitorReason);

/** @req SWS_Rte_07132
 *  @req SWS_Rte_03714 
 *  @req SWS_Rte_03725 
 *  @req SWS_Rte_03752
 *  @req SWS_Rte_02623
 */
typedef struct {
    uint8 _dummy;
} Rte_CDS_Dem;

/** --- Instance handle type ---------------------------------------------------------------------- */
typedef Rte_CDS_Dem const * const Rte_Instance;

/** --- Singleton instance handle -----------------------------------------------------------------
 *  @req SWS_Rte_03793
 */
extern const Rte_Instance Rte_Inst_Dem;
#define self (Rte_Inst_Dem)

/** --- Calibration API --------------------------------------------------------------------------- */

/** --- Per Instance Memory API ------------------------------------------------------------------- */

/** --- Indirect port API ------------------------------------------------------------------------- */

/** --- Single Runnable APIs ---------------------------------------------------------------------- */
#if defined(RTE_RUNNABLEAPI)
/** --- ClearDTC */
#if defined(RTE_RUNNABLEAPI_ClearDTC)

Std_ReturnType Dem_ClearDTC(/*IN*/uint32 DTC, /*IN*/Dem_DTCFormatType DTCFormat, /*IN*/Dem_DTCOriginType DTCOrigin);

static inline Std_ReturnType Rte_Call_CBInitEvt_TestEvent_InitMonitorForEvent(/*IN*/Dem_InitMonitorReasonType InitMonitorReason) {
    return Rte_Call_Dem_dem_CBInitEvt_TestEvent_InitMonitorForEvent(InitMonitorReason);
}

#endif

/** --- ClearPrestoredFreezeFrame */
#if defined(RTE_RUNNABLEAPI_ClearPrestoredFreezeFrame)

Std_ReturnType Dem_ClearPrestoredFreezeFrame(/*IN*/Dem_EventIdType portDefArg1);

#endif

/** --- Dem_MainFunction */
#if defined(RTE_RUNNABLEAPI_Dem_MainFunction)

void Dem_MainFunction(void);

#endif

/** --- GetDTCOfEvent */
#if defined(RTE_RUNNABLEAPI_GetDTCOfEvent)

Std_ReturnType Dem_GetDTCOfEvent(/*IN*/Dem_EventIdType EventId, /*IN*/Dem_DTCFormatType DTCFormat, /*OUT*/uint32 * DTCOfEvent);

#endif

/** --- GetEventExtendedDataRecord */
#if defined(RTE_RUNNABLEAPI_GetEventExtendedDataRecord)

Std_ReturnType Dem_GetEventExtendedDataRecord(/*IN*/Dem_EventIdType EventId, /*IN*/uint8 RecordNumber, /*OUT*/uint8 * DestBuffer);

#endif

/** --- GetEventFailed */
#if defined(RTE_RUNNABLEAPI_GetEventFailed)

Std_ReturnType Dem_GetEventFailed(/*IN*/Dem_EventIdType EventId, /*OUT*/boolean * EventFailed);

#endif

/** --- GetEventFreezeFrameData */
#if defined(RTE_RUNNABLEAPI_GetEventFreezeFrameData)

Std_ReturnType Dem_GetEventFreezeFrameData(/*IN*/Dem_EventIdType EventId, /*IN*/uint8 RecordNumber, /*IN*/boolean ReportTotalRecord, /*IN*/uint16 DataId, /*OUT*/uint8 * DestBuffer);

#endif

/** --- GetEventStatus */
#if defined(RTE_RUNNABLEAPI_GetEventStatus)

Std_ReturnType Dem_GetEventStatus(/*IN*/Dem_EventIdType EventId, /*OUT*/Dem_EventStatusExtendedType * EventStatusExtended);

#endif

/** --- GetEventTested */
#if defined(RTE_RUNNABLEAPI_GetEventTested)

Std_ReturnType Dem_GetEventTested(/*IN*/Dem_EventIdType EventId, /*OUT*/boolean * EventTested);

#endif

/** --- GetFaultDetectionCounter */
#if defined(RTE_RUNNABLEAPI_GetFaultDetectionCounter)

Std_ReturnType Dem_GetFaultDetectionCounter(/*IN*/Dem_EventIdType EventId, /*OUT*/sint8 * FaultDetectionCounter);

#endif

/** --- PrestoreFreezeFrame */
#if defined(RTE_RUNNABLEAPI_PrestoreFreezeFrame)

Std_ReturnType Dem_PrestoreFreezeFrame(/*IN*/Dem_EventIdType portDefArg1);

#endif

/** --- ResetEventStatus */
#if defined(RTE_RUNNABLEAPI_ResetEventStatus)

Std_ReturnType Dem_ResetEventStatus(/*IN*/Dem_EventIdType portDefArg1);

#endif

/** --- SetEventAvailable */
#if defined(RTE_RUNNABLEAPI_SetEventAvailable)

Std_ReturnType Dem_SetEventAvailable(/*IN*/Dem_EventIdType portDefArg1, /*IN*/boolean AvailableStatus);

#endif

/** --- SetEventDisabled */
#if defined(RTE_RUNNABLEAPI_SetEventDisabled)

Std_ReturnType Dem_SetEventDisabled(/*IN*/Dem_EventIdType portDefArg1);

#endif

/** --- SetEventStatus */
#if defined(RTE_RUNNABLEAPI_SetEventStatus)

Std_ReturnType Dem_SetEventStatus(/*IN*/Dem_EventIdType portDefArg1, /*IN*/Dem_EventStatusType EventStatus);

#endif

/** --- SetOperationCycleState */
#if defined(RTE_RUNNABLEAPI_SetOperationCycleState)

Std_ReturnType Dem_SetOperationCycleState(/*IN*/Dem_OperationCycleIdType portDefArg1, /*IN*/Dem_OperationCycleStateType CycleState);

static inline Std_ReturnType Rte_Call_CBInitEvt_TestEvent_InitMonitorForEvent(/*IN*/Dem_InitMonitorReasonType InitMonitorReason) {
    return Rte_Call_Dem_dem_CBInitEvt_TestEvent_InitMonitorForEvent(InitMonitorReason);
}

#endif
#endif

/** --- All Runnable APIs ------------------------------------------------------------------------- */
#if !defined(RTE_RUNNABLEAPI)
Std_ReturnType Dem_ClearDTC(/*IN*/uint32 DTC, /*IN*/Dem_DTCFormatType DTCFormat, /*IN*/Dem_DTCOriginType DTCOrigin);

static inline Std_ReturnType Rte_Call_CBInitEvt_TestEvent_InitMonitorForEvent(/*IN*/Dem_InitMonitorReasonType InitMonitorReason) {
    return Rte_Call_Dem_dem_CBInitEvt_TestEvent_InitMonitorForEvent(InitMonitorReason);
}

Std_ReturnType Dem_ClearPrestoredFreezeFrame(/*IN*/Dem_EventIdType portDefArg1);

void Dem_MainFunction(void);

Std_ReturnType Dem_GetDTCOfEvent(/*IN*/Dem_EventIdType EventId, /*IN*/Dem_DTCFormatType DTCFormat, /*OUT*/uint32 * DTCOfEvent);

Std_ReturnType Dem_GetEventExtendedDataRecord(/*IN*/Dem_EventIdType EventId, /*IN*/uint8 RecordNumber, /*OUT*/uint8 * DestBuffer);

Std_ReturnType Dem_GetEventFailed(/*IN*/Dem_EventIdType EventId, /*OUT*/boolean * EventFailed);

Std_ReturnType Dem_GetEventFreezeFrameData(/*IN*/Dem_EventIdType EventId, /*IN*/uint8 RecordNumber, /*IN*/boolean ReportTotalRecord, /*IN*/
        uint16 DataId, /*OUT*/uint8 * DestBuffer);

Std_ReturnType Dem_GetEventStatus(/*IN*/Dem_EventIdType EventId, /*OUT*/Dem_EventStatusExtendedType * EventStatusExtended);

Std_ReturnType Dem_GetEventTested(/*IN*/Dem_EventIdType EventId, /*OUT*/boolean * EventTested);

Std_ReturnType Dem_GetFaultDetectionCounter(/*IN*/Dem_EventIdType EventId, /*OUT*/sint8 * FaultDetectionCounter);

Std_ReturnType Dem_PrestoreFreezeFrame(/*IN*/Dem_EventIdType portDefArg1);

Std_ReturnType Dem_ResetEventStatus(/*IN*/Dem_EventIdType portDefArg1);

Std_ReturnType Dem_SetEventAvailable(/*IN*/Dem_EventIdType portDefArg1, /*IN*/boolean AvailableStatus);

Std_ReturnType Dem_SetEventDisabled(/*IN*/Dem_EventIdType portDefArg1);

Std_ReturnType Dem_SetEventStatus(/*IN*/Dem_EventIdType portDefArg1, /*IN*/Dem_EventStatusType EventStatus);

Std_ReturnType Dem_SetOperationCycleState(/*IN*/Dem_OperationCycleIdType portDefArg1, /*IN*/Dem_OperationCycleStateType CycleState);
#endif

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_03710 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_DEM_H_ */
