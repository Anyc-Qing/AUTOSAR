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
