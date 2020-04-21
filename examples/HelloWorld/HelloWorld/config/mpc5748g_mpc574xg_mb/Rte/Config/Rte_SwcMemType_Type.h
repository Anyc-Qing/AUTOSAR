/**
 * Application Types Header File
 *
 * @req SWS_Rte_07122
 */

/** === HEADER ====================================================================================
 */

#ifndef RTE_SWCMEMTYPE_TYPE_H_
#define RTE_SWCMEMTYPE_TYPE_H_

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

/** Enum literals for NvmCmdType */
#ifndef SWCMEM_REQ_IDLE
#define SWCMEM_REQ_IDLE 0U
#endif /* SWCMEM_REQ_IDLE */

#ifndef SWCMEM_REQ_WRITE_BLOCK
#define SWCMEM_REQ_WRITE_BLOCK 1U
#endif /* SWCMEM_REQ_WRITE_BLOCK */

#ifndef SWCMEM_REQ_READ_BLOCK
#define SWCMEM_REQ_READ_BLOCK 2U
#endif /* SWCMEM_REQ_READ_BLOCK */

/** Enum literals for NvmResType */
#ifndef SWCMEM_RES_NONE
#define SWCMEM_RES_NONE 0U
#endif /* SWCMEM_RES_NONE */

#ifndef SWCMEM_RES_WRITE_BLOCK_OK
#define SWCMEM_RES_WRITE_BLOCK_OK 1U
#endif /* SWCMEM_RES_WRITE_BLOCK_OK */

#ifndef SWCMEM_RES_WRITE_BLOCK_FAILED
#define SWCMEM_RES_WRITE_BLOCK_FAILED 2U
#endif /* SWCMEM_RES_WRITE_BLOCK_FAILED */

#ifndef SWCMEM_RES_READ_BLOCK_OK
#define SWCMEM_RES_READ_BLOCK_OK 3U
#endif /* SWCMEM_RES_READ_BLOCK_OK */

#ifndef SWCMEM_RES_READ_BLOCK_FAILED
#define SWCMEM_RES_READ_BLOCK_FAILED 4U
#endif /* SWCMEM_RES_READ_BLOCK_FAILED */

#ifndef SWCMEM_RES_REQ_BUSY
#define SWCMEM_RES_REQ_BUSY 5U
#endif /* SWCMEM_RES_REQ_BUSY */

#ifndef SWCMEM_RES_REQ_INVALID
#define SWCMEM_RES_REQ_INVALID 6U
#endif /* SWCMEM_RES_REQ_INVALID */

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

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_07126 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_SWCMEMTYPE_TYPE_H_ */
