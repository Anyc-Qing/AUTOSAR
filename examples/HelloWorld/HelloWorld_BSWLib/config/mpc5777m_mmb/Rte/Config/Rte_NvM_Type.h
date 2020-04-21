/**
 * Application Types Header File
 *
 * @req SWS_Rte_07122
 */

/** === HEADER ====================================================================================
 */

#ifndef RTE_NVM_TYPE_H_
#define RTE_NVM_TYPE_H_

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

/** Enum literals for NvM_RequestResultType */
#ifndef NVM_REQ_OK
#define NVM_REQ_OK 0U
#endif /* NVM_REQ_OK */

#ifndef NVM_REQ_NOT_OK
#define NVM_REQ_NOT_OK 1U
#endif /* NVM_REQ_NOT_OK */

#ifndef NVM_REQ_PENDING
#define NVM_REQ_PENDING 2U
#endif /* NVM_REQ_PENDING */

#ifndef NVM_REQ_INTEGRITY_FAILED
#define NVM_REQ_INTEGRITY_FAILED 3U
#endif /* NVM_REQ_INTEGRITY_FAILED */

#ifndef NVM_REQ_BLOCK_SKIPPED
#define NVM_REQ_BLOCK_SKIPPED 4U
#endif /* NVM_REQ_BLOCK_SKIPPED */

#ifndef NVM_REQ_NV_INVALIDATED
#define NVM_REQ_NV_INVALIDATED 5U
#endif /* NVM_REQ_NV_INVALIDATED */

#ifndef NVM_REQ_CANCELED
#define NVM_REQ_CANCELED 6U
#endif /* NVM_REQ_CANCELED */

#ifndef NVM_REQ_REDUNDANCY_FAILED
#define NVM_REQ_REDUNDANCY_FAILED 7U
#endif /* NVM_REQ_REDUNDANCY_FAILED */

#ifndef NVM_REQ_RESTORED_FROM_ROM
#define NVM_REQ_RESTORED_FROM_ROM 8U
#endif /* NVM_REQ_RESTORED_FROM_ROM */

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

#endif /* RTE_NVM_TYPE_H_ */
