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
#ifndef RTE_DLT_H_
#define RTE_DLT_H_

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
#if defined(RTE_RUNNABLEAPI_Dlt_RegisterContext) || \
defined(RTE_RUNNABLEAPI_Dlt_SendLogMessage) || \
defined(RTE_RUNNABLEAPI_Dlt_SendTraceMessage)
#define RTE_RUNNABLEAPI
#endif

/** --- Includes ----------------------------------------------------------------------------------
 * @req SWS_Rte_02751
 * @req SWS_Rte_07131
 */
#include <Rte_DataHandleType.h>
#include <Rte_Dlt_Type.h>

/** --- Application Errors ------------------------------------------------------------------------
 * @req SWS_Rte_02575
 * @req SWS_Rte_02576
 * @req SWS_Rte_07143
 */
#define RTE_E_DLTService_E_NOT_OK 1U
#define RTE_E_DLTService_E_OK 0U

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

/** @req SWS_Rte_07132
 *  @req SWS_Rte_03714 
 *  @req SWS_Rte_03725 
 *  @req SWS_Rte_03752
 *  @req SWS_Rte_02623
 */
typedef struct {
    uint8 _dummy;
} Rte_CDS_Dlt;

/** --- Instance handle type ---------------------------------------------------------------------- */
typedef Rte_CDS_Dlt const * const Rte_Instance;

/** --- Singleton instance handle -----------------------------------------------------------------
 *  @req SWS_Rte_03793
 */
extern const Rte_Instance Rte_Inst_Dlt;
#define self (Rte_Inst_Dlt)

/** --- Calibration API --------------------------------------------------------------------------- */

/** --- Per Instance Memory API ------------------------------------------------------------------- */

/** --- Indirect port API ------------------------------------------------------------------------- */

/** --- Single Runnable APIs ---------------------------------------------------------------------- */
#if defined(RTE_RUNNABLEAPI)
/** --- Dlt_RegisterContext */
#if defined(RTE_RUNNABLEAPI_Dlt_RegisterContext)

Std_ReturnType Dlt_RegisterContext(/*IN*/Dlt_SessionIDType portDefArg1, /*IN*/const uint8 * app_id, /*IN*/const uint8 * context_id, /*IN*/constUint8Ptr app_description, /*IN*/uint8 len_app_description, /*IN*/constUint8Ptr context_description, /*IN*/uint8 len_context_description);

#endif

/** --- Dlt_SendLogMessage */
#if defined(RTE_RUNNABLEAPI_Dlt_SendLogMessage)

Std_ReturnType Dlt_SendLogMessage(/*IN*/Dlt_SessionIDType portDefArg1, /*IN*/const Dlt_MessageLogInfoType * log_info, /*IN*/constUint8Ptr log_data, /*IN*/uint16 log_data_length);

#endif

/** --- Dlt_SendTraceMessage */
#if defined(RTE_RUNNABLEAPI_Dlt_SendTraceMessage)

Std_ReturnType Dlt_SendTraceMessage(/*IN*/Dlt_SessionIDType portDefArg1, /*IN*/const Dlt_MessageTraceInfoType * trace_info, /*IN*/constUint8Ptr trace_data, /*IN*/uint16 trace_data_length);

#endif
#endif

/** --- All Runnable APIs ------------------------------------------------------------------------- */
#if !defined(RTE_RUNNABLEAPI)
Std_ReturnType Dlt_RegisterContext(/*IN*/Dlt_SessionIDType portDefArg1, /*IN*/const uint8 * app_id, /*IN*/const uint8 * context_id, /*IN*/
        constUint8Ptr app_description, /*IN*/uint8 len_app_description, /*IN*/constUint8Ptr context_description, /*IN*/uint8 len_context_description);

Std_ReturnType Dlt_SendLogMessage(/*IN*/Dlt_SessionIDType portDefArg1, /*IN*/const Dlt_MessageLogInfoType * log_info, /*IN*/constUint8Ptr log_data, /*IN*/
        uint16 log_data_length);

Std_ReturnType Dlt_SendTraceMessage(/*IN*/Dlt_SessionIDType portDefArg1, /*IN*/const Dlt_MessageTraceInfoType * trace_info, /*IN*/
        constUint8Ptr trace_data, /*IN*/uint16 trace_data_length);
#endif

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_03710 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_DLT_H_ */
