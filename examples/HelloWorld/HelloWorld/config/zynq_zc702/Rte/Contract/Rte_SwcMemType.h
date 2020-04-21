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
#ifndef RTE_SWCMEMTYPE_H_
#define RTE_SWCMEMTYPE_H_

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
#if defined(RTE_RUNNABLEAPI_Init) || \
defined(RTE_RUNNABLEAPI_JobFinishedPIM1) || \
defined(RTE_RUNNABLEAPI_JobFinishedPIM2) || \
defined(RTE_RUNNABLEAPI_Main)
#define RTE_RUNNABLEAPI
#endif

/** --- Includes ----------------------------------------------------------------------------------
 * @req SWS_Rte_02751
 * @req SWS_Rte_07131
 */
#include <Rte_DataHandleType.h>
#include <Rte_SwcMemType_Type.h>

/** --- Application Errors ------------------------------------------------------------------------
 * @req SWS_Rte_02575
 * @req SWS_Rte_02576
 * @req SWS_Rte_07143
 */
#define RTE_E_NvMNotifyJobFinished_E_OK 0U
#define RTE_E_NvMService_E_NOT_OK 1U
#define RTE_E_NvMService_E_OK 0U

/** --- Initial Values ----------------------------------------------------------------------------
 * @SWS_Rte_05078
 */

/** --- PIM DATA TYPES ------------------------------------------------------------------------------ */
typedef Rte_PimType_SwcMemType_PIM1Type PIM1Type;
typedef Rte_PimType_SwcMemType_PIM2Type PIM2Type;

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

extern Std_ReturnType Rte_Write_SwcMemType_SwcMem_SwcMemTx_result(/*IN*/NvmResType data);
extern Std_ReturnType Rte_Write_SwcMemType_SwcMem_SwcMemTx_blockId(/*IN*/uint8 data);
extern Std_ReturnType Rte_Write_SwcMemType_SwcMem_SwcMemTx_payload(/*IN*/uint32 data);
extern Std_ReturnType Rte_Call_SwcMemType_SwcMem_ServicePIM1_SetRamBlockStatus(/*IN*/boolean BlockChanged);
extern Std_ReturnType Rte_Call_SwcMemType_SwcMem_ServicePIM2_ReadBlock(/*IN*/VoidPtr DstPtr);
extern Std_ReturnType Rte_Call_SwcMemType_SwcMem_ServicePIM2_WriteBlock(/*IN*/ConstVoidPtr SrcPtr);

/** @req SWS_Rte_07132
 *  @req SWS_Rte_03714 
 *  @req SWS_Rte_03725 
 *  @req SWS_Rte_03752
 *  @req SWS_Rte_02623
 */
typedef struct {
    Rte_DE_uint8 * const Main_SwcMemRx_blockId;
    Rte_DE_NvmCmdType * const Main_SwcMemRx_command;
    Rte_DE_uint32 * const Main_SwcMemRx_payload;
    Rte_PimType_SwcMemType_PIM1Type *Pim_PIM1;
    Rte_PimType_SwcMemType_PIM2Type *Pim_PIM2;
} Rte_CDS_SwcMemType;

/** --- Instance handle type ---------------------------------------------------------------------- */
typedef Rte_CDS_SwcMemType const * const Rte_Instance;

/** --- Singleton instance handle -----------------------------------------------------------------
 *  @req SWS_Rte_03793
 */
extern const Rte_Instance Rte_Inst_SwcMemType;
#define self (Rte_Inst_SwcMemType)

/** --- Calibration API --------------------------------------------------------------------------- */

/** --- Per Instance Memory API ------------------------------------------------------------------- */
static inline PIM1Type *Rte_Pim_PIM1(void) {
    return self->Pim_PIM1;
}
static inline PIM2Type *Rte_Pim_PIM2(void) {
    return self->Pim_PIM2;
}

/** --- Indirect port API ------------------------------------------------------------------------- */

/** --- Single Runnable APIs ---------------------------------------------------------------------- */
#if defined(RTE_RUNNABLEAPI)
/** --- Init */
#if defined(RTE_RUNNABLEAPI_Init)

void SwcMem_Init(void);

#endif

/** --- JobFinishedPIM1 */
#if defined(RTE_RUNNABLEAPI_JobFinishedPIM1)

Std_ReturnType SwcMem_JobFinishedPIM1(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult);

#endif

/** --- JobFinishedPIM2 */
#if defined(RTE_RUNNABLEAPI_JobFinishedPIM2)

Std_ReturnType SwcMem_JobFinishedPIM2(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult);

#endif

/** --- Main */
#if defined(RTE_RUNNABLEAPI_Main)

void SwcMem_MainFunction(void);

static inline NvmCmdType Rte_IRead_Main_SwcMemRx_command(void) {
    return self->Main_SwcMemRx_command->value;
}

static inline uint8 Rte_IRead_Main_SwcMemRx_blockId(void) {
    return self->Main_SwcMemRx_blockId->value;
}

static inline uint32 Rte_IRead_Main_SwcMemRx_payload(void) {
    return self->Main_SwcMemRx_payload->value;
}

static inline Std_ReturnType Rte_Write_SwcMemTx_result(/*IN*/NvmResType data) {
    return Rte_Write_SwcMemType_SwcMem_SwcMemTx_result(data);
}

static inline Std_ReturnType Rte_Write_SwcMemTx_blockId(/*IN*/uint8 data) {
    return Rte_Write_SwcMemType_SwcMem_SwcMemTx_blockId(data);
}

static inline Std_ReturnType Rte_Write_SwcMemTx_payload(/*IN*/uint32 data) {
    return Rte_Write_SwcMemType_SwcMem_SwcMemTx_payload(data);
}

static inline Std_ReturnType Rte_Call_ServicePIM1_SetRamBlockStatus(/*IN*/boolean BlockChanged) {
    return Rte_Call_SwcMemType_SwcMem_ServicePIM1_SetRamBlockStatus(BlockChanged);
}

static inline Std_ReturnType Rte_Call_ServicePIM2_ReadBlock(/*IN*/VoidPtr DstPtr) {
    return Rte_Call_SwcMemType_SwcMem_ServicePIM2_ReadBlock(DstPtr);
}

static inline Std_ReturnType Rte_Call_ServicePIM2_WriteBlock(/*IN*/ConstVoidPtr SrcPtr) {
    return Rte_Call_SwcMemType_SwcMem_ServicePIM2_WriteBlock(SrcPtr);
}

#endif
#endif

/** --- All Runnable APIs ------------------------------------------------------------------------- */
#if !defined(RTE_RUNNABLEAPI)
void SwcMem_Init(void);

Std_ReturnType SwcMem_JobFinishedPIM1(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult);

Std_ReturnType SwcMem_JobFinishedPIM2(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult);

void SwcMem_MainFunction(void);

static inline NvmCmdType Rte_IRead_Main_SwcMemRx_command(void) {
    return self->Main_SwcMemRx_command->value;
}

static inline uint8 Rte_IRead_Main_SwcMemRx_blockId(void) {
    return self->Main_SwcMemRx_blockId->value;
}

static inline uint32 Rte_IRead_Main_SwcMemRx_payload(void) {
    return self->Main_SwcMemRx_payload->value;
}

static inline Std_ReturnType Rte_Write_SwcMemTx_result(/*IN*/NvmResType data) {
    return Rte_Write_SwcMemType_SwcMem_SwcMemTx_result(data);
}

static inline Std_ReturnType Rte_Write_SwcMemTx_blockId(/*IN*/uint8 data) {
    return Rte_Write_SwcMemType_SwcMem_SwcMemTx_blockId(data);
}

static inline Std_ReturnType Rte_Write_SwcMemTx_payload(/*IN*/uint32 data) {
    return Rte_Write_SwcMemType_SwcMem_SwcMemTx_payload(data);
}

static inline Std_ReturnType Rte_Call_ServicePIM1_SetRamBlockStatus(/*IN*/boolean BlockChanged) {
    return Rte_Call_SwcMemType_SwcMem_ServicePIM1_SetRamBlockStatus(BlockChanged);
}

static inline Std_ReturnType Rte_Call_ServicePIM2_ReadBlock(/*IN*/VoidPtr DstPtr) {
    return Rte_Call_SwcMemType_SwcMem_ServicePIM2_ReadBlock(DstPtr);
}

static inline Std_ReturnType Rte_Call_ServicePIM2_WriteBlock(/*IN*/ConstVoidPtr SrcPtr) {
    return Rte_Call_SwcMemType_SwcMem_ServicePIM2_WriteBlock(SrcPtr);
}
#endif

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_03710 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_SWCMEMTYPE_H_ */
