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

/** --- MODE TYPES ------------------------------------------------------------------------------ */

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_07126 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_BSWM_TYPE_H_ */
