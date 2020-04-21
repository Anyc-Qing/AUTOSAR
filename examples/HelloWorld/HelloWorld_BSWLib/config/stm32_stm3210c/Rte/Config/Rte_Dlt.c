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

#include "Rte_Dlt.h"

/** === Runnable Prototypes =======================================================================
 */

/** ------ dlt -----------------------------------------------------------------------
 */
Std_ReturnType Rte_dlt_Dlt_RegisterContext(/*IN*/Dlt_SessionIDType portDefArg1, /*IN*/const uint8 * app_id, /*IN*/const uint8 * context_id, /*IN*/
        constUint8Ptr app_description, /*IN*/uint8 len_app_description, /*IN*/constUint8Ptr context_description, /*IN*/uint8 len_context_description); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_dlt_Dlt_SendLogMessage(/*IN*/Dlt_SessionIDType portDefArg1, /*IN*/const Dlt_MessageLogInfoType * log_info, /*IN*/
        constUint8Ptr log_data, /*IN*/uint16 log_data_length); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_dlt_Dlt_SendTraceMessage(/*IN*/Dlt_SessionIDType portDefArg1, /*IN*/const Dlt_MessageTraceInfoType * trace_info, /*IN*/
        constUint8Ptr trace_data, /*IN*/uint16 trace_data_length); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */

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
#define Dlt_START_SEC_CONST_UNSPECIFIED
#include <Dlt_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_CDS_Dlt Dlt_dlt = {
    ._dummy = 0
};
#define Dlt_STOP_SEC_CONST_UNSPECIFIED
#include <Dlt_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dlt_START_SEC_CONST_UNSPECIFIED
#include <Dlt_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_Instance Rte_Inst_Dlt = &Dlt_dlt;

#define Dlt_STOP_SEC_CONST_UNSPECIFIED
#include <Dlt_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Runnables =================================================================================
 */

/** ------ dlt -----------------------------------------------------------------------
 */

#define Dlt_START_SEC_CODE
#include <Dlt_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_dlt_Dlt_RegisterContext(/*IN*/Dlt_SessionIDType portDefArg1, /*IN*/const uint8 * app_id, /*IN*/const uint8 * context_id, /*IN*/
        constUint8Ptr app_description, /*IN*/uint8 len_app_description, /*IN*/constUint8Ptr context_description, /*IN*/
        uint8 len_context_description) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Dlt_RegisterContext(portDefArg1, app_id, context_id, app_description, len_app_description, context_description, len_context_description);

    /* POST */

    return retVal;
}
#define Dlt_STOP_SEC_CODE
#include <Dlt_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dlt_START_SEC_CODE
#include <Dlt_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_dlt_Dlt_SendLogMessage(/*IN*/Dlt_SessionIDType portDefArg1, /*IN*/const Dlt_MessageLogInfoType * log_info, /*IN*/
        constUint8Ptr log_data, /*IN*/uint16 log_data_length) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Dlt_SendLogMessage(portDefArg1, log_info, log_data, log_data_length);

    /* POST */

    return retVal;
}
#define Dlt_STOP_SEC_CODE
#include <Dlt_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dlt_START_SEC_CODE
#include <Dlt_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_dlt_Dlt_SendTraceMessage(/*IN*/Dlt_SessionIDType portDefArg1, /*IN*/const Dlt_MessageTraceInfoType * trace_info, /*IN*/
        constUint8Ptr trace_data, /*IN*/uint16 trace_data_length) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Dlt_SendTraceMessage(portDefArg1, trace_info, trace_data, trace_data_length);

    /* POST */

    return retVal;
}
#define Dlt_STOP_SEC_CODE
#include <Dlt_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */   

