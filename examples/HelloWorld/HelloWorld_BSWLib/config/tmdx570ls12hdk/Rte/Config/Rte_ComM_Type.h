/**
 * Application Types Header File
 *
 * @req SWS_Rte_07122
 */

/** === HEADER ====================================================================================
 */

#ifndef RTE_COMM_TYPE_H_
#define RTE_COMM_TYPE_H_

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

/** Enum literals for ComM_ModeType */
#ifndef COMM_NO_COMMUNICATION
#define COMM_NO_COMMUNICATION 0U
#endif /* COMM_NO_COMMUNICATION */

#ifndef COMM_SILENT_COMMUNICATION
#define COMM_SILENT_COMMUNICATION 1U
#endif /* COMM_SILENT_COMMUNICATION */

#ifndef COMM_FULL_COMMUNICATION
#define COMM_FULL_COMMUNICATION 2U
#endif /* COMM_FULL_COMMUNICATION */

/** Enum literals for ComM_UserHandleType */
#ifndef COMM_NOT_USED_USER_ID
#define COMM_NOT_USED_USER_ID 255U
#endif /* COMM_NOT_USED_USER_ID */

/** --- MODE TYPES ------------------------------------------------------------------------------ */

#ifndef RTE_MODETYPE_ComMMode
#define RTE_MODETYPE_ComMMode
typedef uint8 Rte_ModeType_ComMMode;
#endif

#ifndef RTE_TRANSITION_ComMMode
#define RTE_TRANSITION_ComMMode 3U
#endif

#ifndef RTE_MODE_ComMMode_COMM_FULL_COMMUNICATION
#define RTE_MODE_ComMMode_COMM_FULL_COMMUNICATION 0U
#endif

#ifndef RTE_MODE_ComMMode_COMM_NO_COMMUNICATION
#define RTE_MODE_ComMMode_COMM_NO_COMMUNICATION 1U
#endif

#ifndef RTE_MODE_ComMMode_COMM_SILENT_COMMUNICATION
#define RTE_MODE_ComMMode_COMM_SILENT_COMMUNICATION 2U
#endif

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_07126 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_COMM_TYPE_H_ */
