/**
 * Application Types Header File
 *
 * @req SWS_Rte_07122
 */

/** === HEADER ====================================================================================
 */

#ifndef RTE_WDGM_TYPE_H_
#define RTE_WDGM_TYPE_H_

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

/** Enum literals for WdgM_GlobalStatusType */
#ifndef WDGM_GLOBAL_STATUS_OK
#define WDGM_GLOBAL_STATUS_OK 0U
#endif /* WDGM_GLOBAL_STATUS_OK */

#ifndef WDGM_GLOBAL_STATUS_FAILED
#define WDGM_GLOBAL_STATUS_FAILED 1U
#endif /* WDGM_GLOBAL_STATUS_FAILED */

#ifndef WDGM_GLOBAL_STATUS_EXPIRED
#define WDGM_GLOBAL_STATUS_EXPIRED 2U
#endif /* WDGM_GLOBAL_STATUS_EXPIRED */

#ifndef WDGM_GLOBAL_STATUS_STOPPED
#define WDGM_GLOBAL_STATUS_STOPPED 3U
#endif /* WDGM_GLOBAL_STATUS_STOPPED */

#ifndef WDGM_GLOBAL_STATUS_DEACTIVATED
#define WDGM_GLOBAL_STATUS_DEACTIVATED 4U
#endif /* WDGM_GLOBAL_STATUS_DEACTIVATED */

/** Enum literals for WdgM_LocalStatusType */
#ifndef WDGM_LOCAL_STATUS_OK
#define WDGM_LOCAL_STATUS_OK 0U
#endif /* WDGM_LOCAL_STATUS_OK */

#ifndef WDGM_LOCAL_STATUS_FAILED
#define WDGM_LOCAL_STATUS_FAILED 1U
#endif /* WDGM_LOCAL_STATUS_FAILED */

#ifndef WDGM_LOCAL_STATUS_EXPIRED
#define WDGM_LOCAL_STATUS_EXPIRED 2U
#endif /* WDGM_LOCAL_STATUS_EXPIRED */

#ifndef WDGM_LOCAL_STATUS_DEACTIVATED
#define WDGM_LOCAL_STATUS_DEACTIVATED 4U
#endif /* WDGM_LOCAL_STATUS_DEACTIVATED */

/** Enum literals for WdgM_ModeType */
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

/** --- MODE TYPES ------------------------------------------------------------------------------ */

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
}
/* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_WDGM_TYPE_H_ */
