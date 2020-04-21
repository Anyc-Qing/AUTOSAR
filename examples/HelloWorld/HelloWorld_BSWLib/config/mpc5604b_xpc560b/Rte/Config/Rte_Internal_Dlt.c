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
/** ------ Dlt_service */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dlt_dlt_Dlt_service_RegisterContext(/*IN*/const uint8 * app_id, /*IN*/const uint8 * context_id, /*IN*/
        constUint8Ptr app_description, /*IN*/uint8 len_app_description, /*IN*/constUint8Ptr context_description, /*IN*/
        uint8 len_context_description) {
    return Rte_dlt_Dlt_RegisterContext(4096, app_id, context_id, app_description, len_app_description, context_description, len_context_description);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dlt_dlt_Dlt_service_SendLogMessage(/*IN*/const Dlt_MessageLogInfoType * log_info, /*IN*/constUint8Ptr log_data, /*IN*/
        uint16 log_data_length) {
    return Rte_dlt_Dlt_SendLogMessage(4096, log_info, log_data, log_data_length);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_Dlt_dlt_Dlt_service_SendTraceMessage(/*IN*/const Dlt_MessageTraceInfoType * trace_info, /*IN*/constUint8Ptr trace_data, /*IN*/
        uint16 trace_data_length) {
    return Rte_dlt_Dlt_SendTraceMessage(4096, trace_info, trace_data, trace_data_length);
}

#define Rte_STOP_SEC_CODE
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

//lint -restore
