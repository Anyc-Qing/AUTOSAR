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
#ifndef RTE_WDGM_H_
#define RTE_WDGM_H_

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
#if defined(RTE_RUNNABLEAPI_CheckpointReached) || \
defined(RTE_RUNNABLEAPI_WdgM_MainFunction)
#define RTE_RUNNABLEAPI
#endif

/** --- Includes ----------------------------------------------------------------------------------
 * @req SWS_Rte_02751
 * @req SWS_Rte_07131
 */
#include <Rte_DataHandleType.h>
#include <Rte_WdgM_Type.h>

/** --- Application Errors ------------------------------------------------------------------------
 * @req SWS_Rte_02575
 * @req SWS_Rte_02576
 * @req SWS_Rte_07143
 */
#define RTE_E_WdgM_LocalSupervision_E_NOT_OK 1U
#define RTE_E_WdgM_LocalSupervision_E_OK 0U

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
typedef struct {
    // SWS_Rte_07138 requires the existence of a PDS in the CDS. Even if it is empty.
    uint8 _dummy;
} Rte_PDS_WdgM_WdgM_GlobalMode_P;

typedef struct {
    // SWS_Rte_07138 requires the existence of a PDS in the CDS. Even if it is empty.
    uint8 _dummy;
} Rte_PDS_WdgM_WdgM_LocalMode_P;

/** @req SWS_Rte_01343
 *  @req SWS_Rte_01342
 *  !req SWS_Rte_06524
 *  @req SWS_Rte_01053
 */

typedef struct Rte_PDS_WdgM_WdgM_GlobalMode_P * Rte_PortHandle_WdgM_GlobalMode_P;
typedef struct Rte_PDS_WdgM_WdgM_LocalMode_P * Rte_PortHandle_WdgM_LocalMode_P;

extern Std_ReturnType Rte_Switch_WdgM_wdgm_mode_Supervised100msTask_currentMode(/*IN*/uint8 mode);
extern Std_ReturnType Rte_Switch_WdgM_wdgm_globalMode_currentMode(/*IN*/uint8 mode);

/** @req SWS_Rte_07132
 *  @req SWS_Rte_03714 
 *  @req SWS_Rte_03725 
 *  @req SWS_Rte_03752
 *  @req SWS_Rte_02623
 */
typedef struct {
    Rte_PDS_WdgM_WdgM_GlobalMode_P globalMode;
    Rte_PDS_WdgM_WdgM_LocalMode_P mode_Supervised100msTask;
} Rte_CDS_WdgM;

/** --- Instance handle type ---------------------------------------------------------------------- */
typedef Rte_CDS_WdgM const * const Rte_Instance;

/** --- Singleton instance handle -----------------------------------------------------------------
 *  @req SWS_Rte_03793
 */
extern const Rte_Instance Rte_Inst_WdgM;
#define self (Rte_Inst_WdgM)

/** --- Calibration API --------------------------------------------------------------------------- */

/** --- Per Instance Memory API ------------------------------------------------------------------- */

/** --- Indirect port API ------------------------------------------------------------------------- */
static inline Rte_PortHandle_WdgM_LocalMode_P Rte_Port_mode_Supervised100msTask(void) {
    return (Rte_PortHandle_WdgM_LocalMode_P) &(self->mode_Supervised100msTask);
}

static inline Rte_PortHandle_WdgM_GlobalMode_P Rte_Port_globalMode(void) {
    return (Rte_PortHandle_WdgM_GlobalMode_P) &(self->globalMode);
}

static inline Rte_PortHandle_WdgM_LocalMode_P Rte_Ports_WdgM_LocalMode_P(void) {
    return (Rte_PortHandle_WdgM_LocalMode_P) &(self->mode_Supervised100msTask);
}

static inline Rte_PortHandle_WdgM_GlobalMode_P Rte_Ports_WdgM_GlobalMode_P(void) {
    return (Rte_PortHandle_WdgM_GlobalMode_P) &(self->globalMode);
}

static inline uint8 Rte_NPorts_WdgM_LocalMode_P(void) {
    return 1;
}

static inline uint8 Rte_NPorts_WdgM_GlobalMode_P(void) {
    return 1;
}

/** --- Single Runnable APIs ---------------------------------------------------------------------- */
#if defined(RTE_RUNNABLEAPI)
/** --- CheckpointReached */
#if defined(RTE_RUNNABLEAPI_CheckpointReached)

Std_ReturnType WdgM_CheckpointReached(/*IN*/WdgM_SupervisedEntityIdType portDefArg1, /*IN*/WdgM_CheckpointIdType CheckpointID);

#endif

/** --- WdgM_MainFunction */
#if defined(RTE_RUNNABLEAPI_WdgM_MainFunction)

void WdgM_MainFunction(void);

static inline Std_ReturnType Rte_Switch_mode_Supervised100msTask_currentMode(/*IN*/uint8 mode) {
    return Rte_Switch_WdgM_wdgm_mode_Supervised100msTask_currentMode(mode);
}

static inline Std_ReturnType Rte_Switch_globalMode_currentMode(/*IN*/uint8 mode) {
    return Rte_Switch_WdgM_wdgm_globalMode_currentMode(mode);
}

#endif
#endif

/** --- All Runnable APIs ------------------------------------------------------------------------- */
#if !defined(RTE_RUNNABLEAPI)
Std_ReturnType WdgM_CheckpointReached(/*IN*/WdgM_SupervisedEntityIdType portDefArg1, /*IN*/WdgM_CheckpointIdType CheckpointID);

void WdgM_MainFunction(void);

static inline Std_ReturnType Rte_Switch_mode_Supervised100msTask_currentMode(/*IN*/uint8 mode) {
    return Rte_Switch_WdgM_wdgm_mode_Supervised100msTask_currentMode(mode);
}

static inline Std_ReturnType Rte_Switch_globalMode_currentMode(/*IN*/uint8 mode) {
    return Rte_Switch_WdgM_wdgm_globalMode_currentMode(mode);
}
#endif

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_03710 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_WDGM_H_ */
