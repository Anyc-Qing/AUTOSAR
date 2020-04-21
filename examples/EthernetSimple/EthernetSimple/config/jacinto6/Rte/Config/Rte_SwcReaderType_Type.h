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

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_07126 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_SWCREADERTYPE_TYPE_H_ */
