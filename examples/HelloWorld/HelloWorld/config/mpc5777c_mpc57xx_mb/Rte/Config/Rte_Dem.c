/** === HEADER ====================================================================================
 */

#include <Rte.h>

#include <Os.h>
#if ((OS_AR_RELEASE_MAJOR_VERSION != RTE_AR_RELEASE_MAJOR_VERSION) || (OS_AR_RELEASE_MINOR_VERSION != RTE_AR_RELEASE_MINOR_VERSION))
#error Os version mismatch
#endif

#include <Com.h>
#if ((COM_AR_RELEASE_MAJOR_VERSION != RTE_AR_RELEASE_MAJOR_VERSION) || (COM_AR_RELEASE_MINOR_VERSION != RTE_AR_RELEASE_MINOR_VERSION))
#error Com version mismatch
#endif

#include <Rte_Hook.h>
#include <Rte_Internal.h>
#include <Rte_Calprms.h>

#include "Rte_Dem.h"

/** === Runnable Prototypes =======================================================================
 */

/** ------ dem -----------------------------------------------------------------------
 */
Std_ReturnType Rte_dem_ClearDTC(/*IN*/uint32 DTC, /*IN*/Dem_DTCFormatType DTCFormat, /*IN*/Dem_DTCOriginType DTCOrigin); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_dem_ClearPrestoredFreezeFrame(/*IN*/Dem_EventIdType portDefArg1); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_dem_GetDTCOfEvent(/*IN*/Dem_EventIdType EventId, /*IN*/Dem_DTCFormatType DTCFormat, /*OUT*/uint32 * DTCOfEvent); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_dem_GetEventExtendedDataRecord(/*IN*/Dem_EventIdType EventId, /*IN*/uint8 RecordNumber, /*OUT*/uint8 * DestBuffer); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_dem_GetEventFailed(/*IN*/Dem_EventIdType EventId, /*OUT*/boolean * EventFailed); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_dem_GetEventFreezeFrameData(/*IN*/Dem_EventIdType EventId, /*IN*/uint8 RecordNumber, /*IN*/boolean ReportTotalRecord, /*IN*/
        uint16 DataId, /*OUT*/uint8 * DestBuffer); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_dem_GetEventStatus(/*IN*/Dem_EventIdType EventId, /*OUT*/Dem_EventStatusExtendedType * EventStatusExtended); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_dem_GetEventTested(/*IN*/Dem_EventIdType EventId, /*OUT*/boolean * EventTested); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_dem_GetFaultDetectionCounter(/*IN*/Dem_EventIdType EventId, /*OUT*/sint8 * FaultDetectionCounter); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_dem_PrestoreFreezeFrame(/*IN*/Dem_EventIdType portDefArg1); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_dem_ResetEventStatus(/*IN*/Dem_EventIdType portDefArg1); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_dem_SetEventAvailable(/*IN*/Dem_EventIdType portDefArg1, /*IN*/boolean AvailableStatus); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_dem_SetEventDisabled(/*IN*/Dem_EventIdType portDefArg1); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_dem_SetEventStatus(/*IN*/Dem_EventIdType portDefArg1, /*IN*/Dem_EventStatusType EventStatus); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_dem_SetOperationCycleState(/*IN*/Dem_OperationCycleIdType portDefArg1, /*IN*/Dem_OperationCycleStateType CycleState); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */

/** === Inter-Runnable Variable Buffers ===========================================================
 */

/** === Inter-Runnable Variable Functions =========================================================
 */

/** === Implicit Buffer Instances =================================================================
 */
/*lint -e765 AUTOSAR API SWS_MemMap_00003 */

/** === Per Instance Memories =====================================================================
 */

/** === Component Data Structure Instances ========================================================
 */
#define Dem_START_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_CDS_Dem Dem_dem = {
    ._dummy = 0
};
#define Dem_STOP_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dem_START_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_Instance Rte_Inst_Dem = &Dem_dem;

#define Dem_STOP_SEC_CONST_UNSPECIFIED
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Runnables =================================================================================
 */

/** ------ dem -----------------------------------------------------------------------
 */

#define Dem_START_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_dem_ClearDTC(/*IN*/uint32 DTC, /*IN*/Dem_DTCFormatType DTCFormat, /*IN*/Dem_DTCOriginType DTCOrigin) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Dem_ClearDTC(DTC, DTCFormat, DTCOrigin);

    /* POST */

    return retVal;
}
#define Dem_STOP_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dem_START_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_dem_ClearPrestoredFreezeFrame(/*IN*/Dem_EventIdType portDefArg1) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Dem_ClearPrestoredFreezeFrame(portDefArg1);

    /* POST */

    return retVal;
}
#define Dem_STOP_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dem_START_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_dem_GetDTCOfEvent(/*IN*/Dem_EventIdType EventId, /*IN*/Dem_DTCFormatType DTCFormat, /*OUT*/uint32 * DTCOfEvent) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Dem_GetDTCOfEvent(EventId, DTCFormat, DTCOfEvent);

    /* POST */

    return retVal;
}
#define Dem_STOP_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dem_START_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_dem_GetEventExtendedDataRecord(/*IN*/Dem_EventIdType EventId, /*IN*/uint8 RecordNumber, /*OUT*/uint8 * DestBuffer) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Dem_GetEventExtendedDataRecord(EventId, RecordNumber, DestBuffer);

    /* POST */

    return retVal;
}
#define Dem_STOP_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dem_START_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_dem_GetEventFailed(/*IN*/Dem_EventIdType EventId, /*OUT*/boolean * EventFailed) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Dem_GetEventFailed(EventId, EventFailed);

    /* POST */

    return retVal;
}
#define Dem_STOP_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dem_START_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_dem_GetEventFreezeFrameData(/*IN*/Dem_EventIdType EventId, /*IN*/uint8 RecordNumber, /*IN*/boolean ReportTotalRecord, /*IN*/
        uint16 DataId, /*OUT*/uint8 * DestBuffer) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Dem_GetEventFreezeFrameData(EventId, RecordNumber, ReportTotalRecord, DataId, DestBuffer);

    /* POST */

    return retVal;
}
#define Dem_STOP_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dem_START_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_dem_GetEventStatus(/*IN*/Dem_EventIdType EventId, /*OUT*/Dem_EventStatusExtendedType * EventStatusExtended) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Dem_GetEventStatus(EventId, EventStatusExtended);

    /* POST */

    return retVal;
}
#define Dem_STOP_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dem_START_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_dem_GetEventTested(/*IN*/Dem_EventIdType EventId, /*OUT*/boolean * EventTested) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Dem_GetEventTested(EventId, EventTested);

    /* POST */

    return retVal;
}
#define Dem_STOP_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dem_START_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_dem_GetFaultDetectionCounter(/*IN*/Dem_EventIdType EventId, /*OUT*/sint8 * FaultDetectionCounter) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Dem_GetFaultDetectionCounter(EventId, FaultDetectionCounter);

    /* POST */

    return retVal;
}
#define Dem_STOP_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dem_START_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_dem_PrestoreFreezeFrame(/*IN*/Dem_EventIdType portDefArg1) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Dem_PrestoreFreezeFrame(portDefArg1);

    /* POST */

    return retVal;
}
#define Dem_STOP_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dem_START_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_dem_ResetEventStatus(/*IN*/Dem_EventIdType portDefArg1) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Dem_ResetEventStatus(portDefArg1);

    /* POST */

    return retVal;
}
#define Dem_STOP_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dem_START_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_dem_SetEventAvailable(/*IN*/Dem_EventIdType portDefArg1, /*IN*/boolean AvailableStatus) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Dem_SetEventAvailable(portDefArg1, AvailableStatus);

    /* POST */

    return retVal;
}
#define Dem_STOP_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dem_START_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_dem_SetEventDisabled(/*IN*/Dem_EventIdType portDefArg1) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Dem_SetEventDisabled(portDefArg1);

    /* POST */

    return retVal;
}
#define Dem_STOP_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dem_START_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_dem_SetEventStatus(/*IN*/Dem_EventIdType portDefArg1, /*IN*/Dem_EventStatusType EventStatus) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Dem_SetEventStatus(portDefArg1, EventStatus);

    /* POST */

    return retVal;
}
#define Dem_STOP_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dem_START_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_dem_SetOperationCycleState(/*IN*/Dem_OperationCycleIdType portDefArg1, /*IN*/Dem_OperationCycleStateType CycleState) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Dem_SetOperationCycleState(portDefArg1, CycleState);

    /* POST */

    return retVal;
}
#define Dem_STOP_SEC_CODE
#include <Dem_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */   

