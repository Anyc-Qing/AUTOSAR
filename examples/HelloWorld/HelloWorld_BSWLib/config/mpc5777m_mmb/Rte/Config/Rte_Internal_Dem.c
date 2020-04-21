#include <Rte_Internal.h>
#include <Rte_Calprms.h>
#include <Rte_Assert.h>
#include <Rte_Fifo.h>
#include <Com.h>
#include <Os.h>
#include <Ioc.h>
#include <Rte_Buffers.h>

/*lint -e522 lint does not understand that low level calls to void operator are needed */
/*lint -e160 warning only viable if in c++ */
/*lint -e950 asm command needs to be used */
/*lint -e9008 The comma operator is acceptable even with loss of readability */
/*lint -e451 AUTOSAR API */
/*lint -e515 Variable amount of Arguments for SYS_CALLS */
/*lint -e970 Use of types and modifiers acceptable outside of typedefs */
/*lint -e843 AUTOSAR API for memory wrapping */
/*lint -e838 all values must have an assigned value on initialization even if unused */
/*lint -e9018 AUTOSAR API for Union types */
/*lint -e516 Variable argument types for SYS_CALLS */
/*lint -e545 Sending pointer address is legal in ANSI C */

/*lint -e957 Should be fixed, most functions are missing these prototypes */
/** --- SERVER ACTIVATIONS ------------------------------------------------------------------ */

/** --- FUNCTIONS --------------------------------------------------------------------------- */
//lint -save -e715 Ignore unconnected functions
#define Rte_START_SEC_CODE
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
/** ------ CBInitEvt_TestEvent */
//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_CBInitEvt_TestEvent_InitMonitorForEvent(/*IN*/Dem_InitMonitorReasonType InitMonitorReason) {
    /* --- Unconnected */
    return RTE_E_UNCONNECTED;
}

/** ------ ControlEventAvailable_TestEvent */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_ControlEventAvailable_TestEvent_SetEventAvailable(/*IN*/boolean AvailableStatus) {
    return Rte_dem_SetEventAvailable(6, AvailableStatus);
}

/** ------ Dcm */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_Dcm_ClearDTC(/*IN*/uint32 DTC, /*IN*/Dem_DTCFormatType DTCFormat, /*IN*/Dem_DTCOriginType DTCOrigin) {
    return Rte_dem_ClearDTC(DTC, DTCFormat, DTCOrigin);
}

/** ------ Event_TestEvent */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_Event_TestEvent_ClearPrestoredFreezeFrame(void) {
    return Rte_dem_ClearPrestoredFreezeFrame(6);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_Event_TestEvent_PrestoreFreezeFrame(void) {
    return Rte_dem_PrestoreFreezeFrame(6);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_Event_TestEvent_ResetEventStatus(void) {
    return Rte_dem_ResetEventStatus(6);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_Event_TestEvent_SetEventDisabled(void) {
    return Rte_dem_SetEventDisabled(6);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_Event_TestEvent_SetEventStatus(/*IN*/Dem_EventStatusType EventStatus) {
    return Rte_dem_SetEventStatus(6, EventStatus);
}

/** ------ EvtInfo_TestEvent */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_EvtInfo_TestEvent_GetDTCOfEvent(/*IN*/Dem_DTCFormatType DTCFormat, /*OUT*/uint32 * DTCOfEvent) {
    return Rte_dem_GetDTCOfEvent(6, DTCFormat, DTCOfEvent);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_EvtInfo_TestEvent_GetEventExtendedDataRecord(/*IN*/uint8 RecordNumber, /*OUT*/uint8 * DestBuffer) {
    return Rte_dem_GetEventExtendedDataRecord(6, RecordNumber, DestBuffer);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_EvtInfo_TestEvent_GetEventFailed(/*OUT*/boolean * EventFailed) {
    return Rte_dem_GetEventFailed(6, EventFailed);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_EvtInfo_TestEvent_GetEventFreezeFrameData(/*IN*/uint8 RecordNumber, /*IN*/boolean ReportTotalRecord, /*IN*/
        uint16 DataId, /*OUT*/uint8 * DestBuffer) {
    return Rte_dem_GetEventFreezeFrameData(6, RecordNumber, ReportTotalRecord, DataId, DestBuffer);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_EvtInfo_TestEvent_GetEventStatus(/*OUT*/Dem_EventStatusExtendedType * EventStatusExtended) {
    return Rte_dem_GetEventStatus(6, EventStatusExtended);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_EvtInfo_TestEvent_GetEventTested(/*OUT*/boolean * EventTested) {
    return Rte_dem_GetEventTested(6, EventTested);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_EvtInfo_TestEvent_GetFaultDetectionCounter(/*OUT*/sint8 * FaultDetectionCounter) {
    return Rte_dem_GetFaultDetectionCounter(6, FaultDetectionCounter);
}

/** ------ GeneralEvtInfo */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_GeneralEvtInfo_GetDTCOfEvent(/*IN*/Dem_EventIdType EventId, /*IN*/Dem_DTCFormatType DTCFormat, /*OUT*/
        uint32 * DTCOfEvent) {
    return Rte_dem_GetDTCOfEvent(EventId, DTCFormat, DTCOfEvent);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_GeneralEvtInfo_GetEventExtendedDataRecord(/*IN*/Dem_EventIdType EventId, /*IN*/uint8 RecordNumber, /*OUT*/
        uint8 * DestBuffer) {
    return Rte_dem_GetEventExtendedDataRecord(EventId, RecordNumber, DestBuffer);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_GeneralEvtInfo_GetEventFailed(/*IN*/Dem_EventIdType EventId, /*OUT*/boolean * EventFailed) {
    return Rte_dem_GetEventFailed(EventId, EventFailed);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_GeneralEvtInfo_GetEventFreezeFrameData(/*IN*/Dem_EventIdType EventId, /*IN*/uint8 RecordNumber, /*IN*/
        boolean ReportTotalRecord, /*IN*/uint16 DataId, /*OUT*/uint8 * DestBuffer) {
    return Rte_dem_GetEventFreezeFrameData(EventId, RecordNumber, ReportTotalRecord, DataId, DestBuffer);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_GeneralEvtInfo_GetEventStatus(/*IN*/Dem_EventIdType EventId, /*OUT*/
        Dem_EventStatusExtendedType * EventStatusExtended) {
    return Rte_dem_GetEventStatus(EventId, EventStatusExtended);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_GeneralEvtInfo_GetEventTested(/*IN*/Dem_EventIdType EventId, /*OUT*/boolean * EventTested) {
    return Rte_dem_GetEventTested(EventId, EventTested);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_GeneralEvtInfo_GetFaultDetectionCounter(/*IN*/Dem_EventIdType EventId, /*OUT*/sint8 * FaultDetectionCounter) {
    return Rte_dem_GetFaultDetectionCounter(EventId, FaultDetectionCounter);
}

/** ------ OpCycle_DemOperationCycle */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dem_dem_OpCycle_DemOperationCycle_SetOperationCycleState(/*IN*/Dem_OperationCycleStateType CycleState) {
    return Rte_dem_SetOperationCycleState(2, CycleState);
}

#define Rte_STOP_SEC_CODE
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

//lint -restore
