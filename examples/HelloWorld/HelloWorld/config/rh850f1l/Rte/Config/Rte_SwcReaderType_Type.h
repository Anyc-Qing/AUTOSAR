/**
 * Application Types Header File
 *
 * @req SWS_Rte_07122
 */

/** === HEADER ====================================================================================
 */

#ifndef RTE_SWCREADERTYPE_TYPE_H_
#define RTE_SWCREADERTYPE_TYPE_H_

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

/** Enum literals for DigitalLevel */
#ifndef IOHWAB_LOW
#define IOHWAB_LOW 0U
#endif /* IOHWAB_LOW */

#ifndef IOHWAB_HIGH
#define IOHWAB_HIGH 1U
#endif /* IOHWAB_HIGH */

/** Enum literals for Dlt_MessageLogLevelType */
#ifndef DLT_LOG_OFF
#define DLT_LOG_OFF 0U
#endif /* DLT_LOG_OFF */

#ifndef DLT_LOG_FATAL
#define DLT_LOG_FATAL 1U
#endif /* DLT_LOG_FATAL */

#ifndef DLT_LOG_ERROR
#define DLT_LOG_ERROR 2U
#endif /* DLT_LOG_ERROR */

#ifndef DLT_LOG_WARN
#define DLT_LOG_WARN 3U
#endif /* DLT_LOG_WARN */

#ifndef DLT_LOG_INFO
#define DLT_LOG_INFO 4U
#endif /* DLT_LOG_INFO */

#ifndef DLT_LOG_DEBUG
#define DLT_LOG_DEBUG 5U
#endif /* DLT_LOG_DEBUG */

#ifndef DLT_LOG_VERBOSE
#define DLT_LOG_VERBOSE 6U
#endif /* DLT_LOG_VERBOSE */

/** Enum literals for Dlt_MessageTraceType */
#ifndef DLT_TRACE_VARIABLE
#define DLT_TRACE_VARIABLE 1U
#endif /* DLT_TRACE_VARIABLE */

#ifndef DLT_TRACE_FUNCTION_IN
#define DLT_TRACE_FUNCTION_IN 2U
#endif /* DLT_TRACE_FUNCTION_IN */

#ifndef DLT_TRACE_FUNCTION_OUT
#define DLT_TRACE_FUNCTION_OUT 3U
#endif /* DLT_TRACE_FUNCTION_OUT */

#ifndef DLT_TRACE_STATE
#define DLT_TRACE_STATE 4U
#endif /* DLT_TRACE_STATE */

#ifndef DLT_TRACE_VFB
#define DLT_TRACE_VFB 5U
#endif /* DLT_TRACE_VFB */

/** Enum literals for SignalQuality */
#ifndef IOHWAB_INIVAL
#define IOHWAB_INIVAL 0U
#endif /* IOHWAB_INIVAL */

#ifndef IOHWAB_ERR
#define IOHWAB_ERR 1U
#endif /* IOHWAB_ERR */

#ifndef IOHWAB_BAD
#define IOHWAB_BAD 2U
#endif /* IOHWAB_BAD */

#ifndef IOHWAB_GOOD
#define IOHWAB_GOOD 3U
#endif /* IOHWAB_GOOD */

/** Enum literals for TestCmdType */
#ifndef TESTER_CMD_NONE
#define TESTER_CMD_NONE 0U
#endif /* TESTER_CMD_NONE */

#ifndef TESTER_CMD_SHUTDOWN
#define TESTER_CMD_SHUTDOWN 1U
#endif /* TESTER_CMD_SHUTDOWN */

#ifndef TESTER_CMD_ENABLE_WDG
#define TESTER_CMD_ENABLE_WDG 2U
#endif /* TESTER_CMD_ENABLE_WDG */

#ifndef TESTER_CMD_DISABLE_WDG
#define TESTER_CMD_DISABLE_WDG 3U
#endif /* TESTER_CMD_DISABLE_WDG */

#ifndef TESTER_CMD_STOP_WDG_KICK
#define TESTER_CMD_STOP_WDG_KICK 4U
#endif /* TESTER_CMD_STOP_WDG_KICK */

/** Enum literals for WdgMModeEnum */
#ifndef SUPERVISION_DEACTIVATED
#define SUPERVISION_DEACTIVATED 0U
#endif /* SUPERVISION_DEACTIVATED */

#ifndef SUPERVISION_FAILED
#define SUPERVISION_FAILED 1U
#endif /* SUPERVISION_FAILED */

#ifndef SUPERVISION_EXPIRED
#define SUPERVISION_EXPIRED 2U
#endif /* SUPERVISION_EXPIRED */

#ifndef SUPERVISION_STOPPED
#define SUPERVISION_STOPPED 3U
#endif /* SUPERVISION_STOPPED */

#ifndef SUPERVISION_OK
#define SUPERVISION_OK 4U
#endif /* SUPERVISION_OK */

/** Enum literals for boolean */
#ifndef FALSE
#define FALSE 0U
#endif /* FALSE */

#ifndef TRUE
#define TRUE 1U
#endif /* TRUE */

/** --- MODE TYPES ------------------------------------------------------------------------------ */

#ifndef RTE_MODETYPE_EcuM_Mode
#define RTE_MODETYPE_EcuM_Mode
typedef uint8 Rte_ModeType_EcuM_Mode;
#endif

#ifndef RTE_TRANSITION_EcuM_Mode
#define RTE_TRANSITION_EcuM_Mode 6U
#endif

#ifndef RTE_MODE_EcuM_Mode_POST_RUN
#define RTE_MODE_EcuM_Mode_POST_RUN 0U
#endif

#ifndef RTE_MODE_EcuM_Mode_RUN
#define RTE_MODE_EcuM_Mode_RUN 1U
#endif

#ifndef RTE_MODE_EcuM_Mode_SHUTDOWN
#define RTE_MODE_EcuM_Mode_SHUTDOWN 2U
#endif

#ifndef RTE_MODE_EcuM_Mode_SLEEP
#define RTE_MODE_EcuM_Mode_SLEEP 3U
#endif

#ifndef RTE_MODE_EcuM_Mode_STARTUP
#define RTE_MODE_EcuM_Mode_STARTUP 4U
#endif

#ifndef RTE_MODE_EcuM_Mode_WAKE_SLEEP
#define RTE_MODE_EcuM_Mode_WAKE_SLEEP 5U
#endif

#ifndef RTE_MODETYPE_WdgMMode
#define RTE_MODETYPE_WdgMMode
typedef uint8 Rte_ModeType_WdgMMode;
#endif

#ifndef RTE_TRANSITION_WdgMMode
#define RTE_TRANSITION_WdgMMode 255U
#endif

#ifndef RTE_MODE_WdgMMode_SUPERVISION_DEACTIVATED
#define RTE_MODE_WdgMMode_SUPERVISION_DEACTIVATED 0U
#endif

#ifndef RTE_MODE_WdgMMode_SUPERVISION_EXPIRED
#define RTE_MODE_WdgMMode_SUPERVISION_EXPIRED 2U
#endif

#ifndef RTE_MODE_WdgMMode_SUPERVISION_FAILED
#define RTE_MODE_WdgMMode_SUPERVISION_FAILED 1U
#endif

#ifndef RTE_MODE_WdgMMode_SUPERVISION_OK
#define RTE_MODE_WdgMMode_SUPERVISION_OK 4U
#endif

#ifndef RTE_MODE_WdgMMode_SUPERVISION_STOPPED
#define RTE_MODE_WdgMMode_SUPERVISION_STOPPED 3U
#endif

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_07126 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_SWCREADERTYPE_TYPE_H_ */
