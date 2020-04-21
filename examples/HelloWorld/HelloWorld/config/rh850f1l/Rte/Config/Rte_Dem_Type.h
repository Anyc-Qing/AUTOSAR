/**
 * Application Types Header File
 *
 * @req SWS_Rte_07122
 */

/** === HEADER ====================================================================================
 */

#ifndef RTE_DEM_TYPE_H_
#define RTE_DEM_TYPE_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/** --- Includes ----------------------------------------------------------------------------------
 * @req SWS_Rte_07127
 */
#include <Rte_Type.h>

/** === BODY ====================================================================================
 */

/** --- ENUMERATION DATA TYPES ------------------------------------------------------------------ */

/** Enum literals for Dem_DTCFormatType */
#ifndef DEM_DTC_FORMAT_OBD
#define DEM_DTC_FORMAT_OBD 0U
#endif /* DEM_DTC_FORMAT_OBD */

#ifndef DEM_DTC_FORMAT_UDS
#define DEM_DTC_FORMAT_UDS 1U
#endif /* DEM_DTC_FORMAT_UDS */

/** Enum literals for Dem_DTCOriginType */
#ifndef DEM_DTC_ORIGIN_PRIMARY_MEMORY
#define DEM_DTC_ORIGIN_PRIMARY_MEMORY 1U
#endif /* DEM_DTC_ORIGIN_PRIMARY_MEMORY */

#ifndef DEM_DTC_ORIGIN_MIRROR_MEMORY
#define DEM_DTC_ORIGIN_MIRROR_MEMORY 2U
#endif /* DEM_DTC_ORIGIN_MIRROR_MEMORY */

#ifndef DEM_DTC_ORIGIN_PERMANENT_MEMORY
#define DEM_DTC_ORIGIN_PERMANENT_MEMORY 3U
#endif /* DEM_DTC_ORIGIN_PERMANENT_MEMORY */

#ifndef DEM_DTC_ORIGIN_SECONDARY_MEMORY
#define DEM_DTC_ORIGIN_SECONDARY_MEMORY 4U
#endif /* DEM_DTC_ORIGIN_SECONDARY_MEMORY */

/** Enum literals for Dem_EventStatusExtendedType */
#ifndef DEM_TEST_FAILED
#define DEM_TEST_FAILED 1U
#endif /* DEM_TEST_FAILED */

#ifndef DEM_TEST_FAILED_THIS_OPERATION_CYCLE
#define DEM_TEST_FAILED_THIS_OPERATION_CYCLE 2U
#endif /* DEM_TEST_FAILED_THIS_OPERATION_CYCLE */

#ifndef DEM_PENDING_DTC
#define DEM_PENDING_DTC 4U
#endif /* DEM_PENDING_DTC */

#ifndef DEM_CONFIRMED_DTC
#define DEM_CONFIRMED_DTC 8U
#endif /* DEM_CONFIRMED_DTC */

#ifndef DEM_TEST_NOT_COMPLETED_SINCE_LAST_CLEAR
#define DEM_TEST_NOT_COMPLETED_SINCE_LAST_CLEAR 16U
#endif /* DEM_TEST_NOT_COMPLETED_SINCE_LAST_CLEAR */

#ifndef DEM_TEST_FAILED_SINCE_LAST_CLEAR
#define DEM_TEST_FAILED_SINCE_LAST_CLEAR 32U
#endif /* DEM_TEST_FAILED_SINCE_LAST_CLEAR */

#ifndef DEM_TEST_NOT_COMPLETED_THIS_OPERATION_CYCLE
#define DEM_TEST_NOT_COMPLETED_THIS_OPERATION_CYCLE 64U
#endif /* DEM_TEST_NOT_COMPLETED_THIS_OPERATION_CYCLE */

#ifndef DEM_WARNING_INDICATOR_REQUESTED
#define DEM_WARNING_INDICATOR_REQUESTED 128U
#endif /* DEM_WARNING_INDICATOR_REQUESTED */

/** Enum literals for Dem_EventStatusType */
#ifndef DEM_EVENT_STATUS_PASSED
#define DEM_EVENT_STATUS_PASSED 0U
#endif /* DEM_EVENT_STATUS_PASSED */

#ifndef DEM_EVENT_STATUS_FAILED
#define DEM_EVENT_STATUS_FAILED 1U
#endif /* DEM_EVENT_STATUS_FAILED */

#ifndef DEM_EVENT_STATUS_PREPASSED
#define DEM_EVENT_STATUS_PREPASSED 2U
#endif /* DEM_EVENT_STATUS_PREPASSED */

#ifndef DEM_EVENT_STATUS_PREFAILED
#define DEM_EVENT_STATUS_PREFAILED 3U
#endif /* DEM_EVENT_STATUS_PREFAILED */

/** Enum literals for Dem_InitMonitorReasonType */
#ifndef DEM_INIT_MONITOR_CLEAR
#define DEM_INIT_MONITOR_CLEAR 1U
#endif /* DEM_INIT_MONITOR_CLEAR */

#ifndef DEM_INIT_MONITOR_RESTART
#define DEM_INIT_MONITOR_RESTART 2U
#endif /* DEM_INIT_MONITOR_RESTART */

/** Enum literals for Dem_OperationCycleStateType */
#ifndef DEM_CYCLE_STATE_START
#define DEM_CYCLE_STATE_START 0U
#endif /* DEM_CYCLE_STATE_START */

#ifndef DEM_CYCLE_STATE_END
#define DEM_CYCLE_STATE_END 1U
#endif /* DEM_CYCLE_STATE_END */

/** Enum literals for boolean */
#ifndef FALSE
#define FALSE 0U
#endif /* FALSE */

#ifndef TRUE
#define TRUE 1U
#endif /* TRUE */

/** --- MODE TYPES ------------------------------------------------------------------------------ */

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_07126 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_DEM_TYPE_H_ */
