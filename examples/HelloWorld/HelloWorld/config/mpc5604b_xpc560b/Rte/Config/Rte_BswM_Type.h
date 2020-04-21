/**
 * Application Types Header File
 *
 * @req SWS_Rte_07122
 */

/** === HEADER ====================================================================================
 */

#ifndef RTE_BSWM_TYPE_H_
#define RTE_BSWM_TYPE_H_

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

/** Enum literals for ComMModeEnum */
#ifndef COMM_NO_COMMUNICATION
#define COMM_NO_COMMUNICATION 0U
#endif /* COMM_NO_COMMUNICATION */

#ifndef COMM_SILENT_COMMUNICATION
#define COMM_SILENT_COMMUNICATION 1U
#endif /* COMM_SILENT_COMMUNICATION */

#ifndef COMM_FULL_COMMUNICATION
#define COMM_FULL_COMMUNICATION 2U
#endif /* COMM_FULL_COMMUNICATION */

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

/** --- MODE TYPES ------------------------------------------------------------------------------ */

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_07126 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_BSWM_TYPE_H_ */
