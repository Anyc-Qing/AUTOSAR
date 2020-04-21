/**
 * Application Header File
 *
 * @req SWS_Rte_01003
 */

/** === HEADER ====================================================================================
 */
/*lint -e18 -e452 LINT:OTHER:Duplicate declarations hidden behind ifdef */

/** --- Normal include guard ----------------------------------------------------------------------
 */
#ifndef RTE_NVM_H_
#define RTE_NVM_H_

/** --- C++ guard ---------------------------------------------------------------------------------
 * @req SWS_Rte_03709
 */
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/** --- Duplicate application include guard -------------------------------------------------------
 * @req SWS_Rte_01006
 */
#ifdef RTE_APPLICATION_HEADER_FILE
#error Multiple application header files included.
#endif
#define RTE_APPLICATION_HEADER_FILE

/** --- Single runnable API -----------------------------------------------------------------------
 * @req SWS_Rte_02751
 */
#if defined(RTE_RUNNABLEAPI_EraseNvBlock) || \
defined(RTE_RUNNABLEAPI_GetDataIndex) || \
defined(RTE_RUNNABLEAPI_GetErrorStatus) || \
defined(RTE_RUNNABLEAPI_InvalidateNvBlock) || \
defined(RTE_RUNNABLEAPI_NvM_MainFunction) || \
defined(RTE_RUNNABLEAPI_ReadBlock) || \
defined(RTE_RUNNABLEAPI_RestoreBlockDefaults) || \
defined(RTE_RUNNABLEAPI_SetBlockProtection) || \
defined(RTE_RUNNABLEAPI_SetDataIndex) || \
defined(RTE_RUNNABLEAPI_SetRamBlockStatus) || \
defined(RTE_RUNNABLEAPI_WriteBlock)
#define RTE_RUNNABLEAPI
#endif

/** --- Includes ----------------------------------------------------------------------------------
 * @req SWS_Rte_02751
 * @req SWS_Rte_07131
 */
#include <Rte_DataHandleType.h>
#include <Rte_NvM_Type.h>

/** --- Application Errors ------------------------------------------------------------------------
 * @req SWS_Rte_02575
 * @req SWS_Rte_02576
 * @req SWS_Rte_07143
 */
#define RTE_E_NvMAdmin_E_NOT_OK 1U
#define RTE_E_NvMAdmin_E_OK 0U
#define RTE_E_NvMNotifyInitBlock_E_NOT_OK 1U
#define RTE_E_NvMNotifyInitBlock_E_OK 0U
#define RTE_E_NvMNotifyJobFinished_E_OK 0U
#define RTE_E_NvMService_E_NOT_OK 1U
#define RTE_E_NvMService_E_OK 0U

/** --- Initial Values ----------------------------------------------------------------------------
 * @SWS_Rte_05078
 */

/** --- PIM DATA TYPES ------------------------------------------------------------------------------ */

/** --- Condition Value Macros -------------------------------------------------------
 * @req SWS_Rte_03854
 */

/** === BODY ======================================================================================
 */

/** @req SWS_Rte_03731
 *  @req SWS_Rte_07137
 *  @req SWS_Rte_07138
 *  !req SWS_Rte_06523
 *  @req SWS_Rte_03730
 *  @req SWS_Rte_07677
 *  @req SWS_Rte_02620
 *  @req SWS_Rte_02621
 *  @req SWS_Rte_01055
 *  @req SWS_Rte_03726 */

/** @req SWS_Rte_01343
 *  @req SWS_Rte_01342
 *  !req SWS_Rte_06524
 *  @req SWS_Rte_01053
 */

extern Std_ReturnType Rte_Call_NvM_nvm_PNInitBlock_SwcMem_Block1_InitBlock(void);
extern Std_ReturnType Rte_Call_NvM_nvm_PNJobFinished_SwcMem_Block1_JobFinished(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult);
extern Std_ReturnType Rte_Call_NvM_nvm_PNInitBlock_SwcMem_Block2_InitBlock(void);
extern Std_ReturnType Rte_Call_NvM_nvm_PNJobFinished_SwcMem_Block2_JobFinished(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult);

/** @req SWS_Rte_07132
 *  @req SWS_Rte_03714 
 *  @req SWS_Rte_03725 
 *  @req SWS_Rte_03752
 *  @req SWS_Rte_02623
 */
typedef struct {
    uint8 _dummy;
} Rte_CDS_NvM;

/** --- Instance handle type ---------------------------------------------------------------------- */
typedef Rte_CDS_NvM const * const Rte_Instance;

/** --- Singleton instance handle -----------------------------------------------------------------
 *  @req SWS_Rte_03793
 */
extern const Rte_Instance Rte_Inst_NvM;
#define self (Rte_Inst_NvM)

/** --- Calibration API --------------------------------------------------------------------------- */

/** --- Per Instance Memory API ------------------------------------------------------------------- */

/** --- Indirect port API ------------------------------------------------------------------------- */

/** --- Single Runnable APIs ---------------------------------------------------------------------- */
#if defined(RTE_RUNNABLEAPI)
/** --- EraseNvBlock */
#if defined(RTE_RUNNABLEAPI_EraseNvBlock)

Std_ReturnType NvM_EraseNvBlock(/*IN*/NvM_BlockIdType portDefArg1);

#endif

/** --- GetDataIndex */
#if defined(RTE_RUNNABLEAPI_GetDataIndex)

Std_ReturnType NvM_GetDataIndex(/*IN*/NvM_BlockIdType portDefArg1, /*OUT*/uint8 * DataIndexPtr);

#endif

/** --- GetErrorStatus */
#if defined(RTE_RUNNABLEAPI_GetErrorStatus)

Std_ReturnType NvM_GetErrorStatus(/*IN*/NvM_BlockIdType portDefArg1, /*OUT*/NvM_RequestResultType * RequestResultPtr);

#endif

/** --- InvalidateNvBlock */
#if defined(RTE_RUNNABLEAPI_InvalidateNvBlock)

Std_ReturnType NvM_InvalidateNvBlock(/*IN*/NvM_BlockIdType portDefArg1);

#endif

/** --- NvM_MainFunction */
#if defined(RTE_RUNNABLEAPI_NvM_MainFunction)

void NvM_MainFunction(void);

static inline Std_ReturnType Rte_Call_PNInitBlock_SwcMem_Block1_InitBlock(void) {
    return Rte_Call_NvM_nvm_PNInitBlock_SwcMem_Block1_InitBlock();
}

static inline Std_ReturnType Rte_Call_PNJobFinished_SwcMem_Block1_JobFinished(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult) {
    return Rte_Call_NvM_nvm_PNJobFinished_SwcMem_Block1_JobFinished(ServiceId, JobResult);
}

static inline Std_ReturnType Rte_Call_PNInitBlock_SwcMem_Block2_InitBlock(void) {
    return Rte_Call_NvM_nvm_PNInitBlock_SwcMem_Block2_InitBlock();
}

static inline Std_ReturnType Rte_Call_PNJobFinished_SwcMem_Block2_JobFinished(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult) {
    return Rte_Call_NvM_nvm_PNJobFinished_SwcMem_Block2_JobFinished(ServiceId, JobResult);
}

#endif

/** --- ReadBlock */
#if defined(RTE_RUNNABLEAPI_ReadBlock)

Std_ReturnType NvM_ReadBlock(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/VoidPtr DstPtr);

#endif

/** --- RestoreBlockDefaults */
#if defined(RTE_RUNNABLEAPI_RestoreBlockDefaults)

Std_ReturnType NvM_RestoreBlockDefaults(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/VoidPtr DstPtr);

#endif

/** --- SetBlockProtection */
#if defined(RTE_RUNNABLEAPI_SetBlockProtection)

Std_ReturnType NvM_SetBlockProtection(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/boolean ProtectionEnabled);

#endif

/** --- SetDataIndex */
#if defined(RTE_RUNNABLEAPI_SetDataIndex)

Std_ReturnType NvM_SetDataIndex(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/uint8 DataIndex);

#endif

/** --- SetRamBlockStatus */
#if defined(RTE_RUNNABLEAPI_SetRamBlockStatus)

Std_ReturnType NvM_SetRamBlockStatus(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/boolean BlockChanged);

#endif

/** --- WriteBlock */
#if defined(RTE_RUNNABLEAPI_WriteBlock)

Std_ReturnType NvM_WriteBlock(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/ConstVoidPtr SrcPtr);

#endif
#endif

/** --- All Runnable APIs ------------------------------------------------------------------------- */
#if !defined(RTE_RUNNABLEAPI)
Std_ReturnType NvM_EraseNvBlock(/*IN*/NvM_BlockIdType portDefArg1);

Std_ReturnType NvM_GetDataIndex(/*IN*/NvM_BlockIdType portDefArg1, /*OUT*/uint8 * DataIndexPtr);

Std_ReturnType NvM_GetErrorStatus(/*IN*/NvM_BlockIdType portDefArg1, /*OUT*/NvM_RequestResultType * RequestResultPtr);

Std_ReturnType NvM_InvalidateNvBlock(/*IN*/NvM_BlockIdType portDefArg1);

void NvM_MainFunction(void);

static inline Std_ReturnType Rte_Call_PNInitBlock_SwcMem_Block1_InitBlock(void) {
    return Rte_Call_NvM_nvm_PNInitBlock_SwcMem_Block1_InitBlock();
}

static inline Std_ReturnType Rte_Call_PNJobFinished_SwcMem_Block1_JobFinished(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult) {
    return Rte_Call_NvM_nvm_PNJobFinished_SwcMem_Block1_JobFinished(ServiceId, JobResult);
}

static inline Std_ReturnType Rte_Call_PNInitBlock_SwcMem_Block2_InitBlock(void) {
    return Rte_Call_NvM_nvm_PNInitBlock_SwcMem_Block2_InitBlock();
}

static inline Std_ReturnType Rte_Call_PNJobFinished_SwcMem_Block2_JobFinished(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult) {
    return Rte_Call_NvM_nvm_PNJobFinished_SwcMem_Block2_JobFinished(ServiceId, JobResult);
}

Std_ReturnType NvM_ReadBlock(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/VoidPtr DstPtr);

Std_ReturnType NvM_RestoreBlockDefaults(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/VoidPtr DstPtr);

Std_ReturnType NvM_SetBlockProtection(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/boolean ProtectionEnabled);

Std_ReturnType NvM_SetDataIndex(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/uint8 DataIndex);

Std_ReturnType NvM_SetRamBlockStatus(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/boolean BlockChanged);

Std_ReturnType NvM_WriteBlock(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/ConstVoidPtr SrcPtr);
#endif

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_03710 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_NVM_H_ */
