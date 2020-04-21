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
#ifndef RTE_COMM_H_
#define RTE_COMM_H_

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
#if defined(RTE_RUNNABLEAPI_ComM_MainFunction) || \
defined(RTE_RUNNABLEAPI_GetCurrentComMode) || \
defined(RTE_RUNNABLEAPI_GetMaxComMode) || \
defined(RTE_RUNNABLEAPI_GetRequestedComMode) || \
defined(RTE_RUNNABLEAPI_RequestComMode)
#define RTE_RUNNABLEAPI
#endif

/** --- Includes ----------------------------------------------------------------------------------
 * @req SWS_Rte_02751
 * @req SWS_Rte_07131
 */
#include <Rte_DataHandleType.h>
#include <Rte_ComM_Type.h>

/** --- Application Errors ------------------------------------------------------------------------
 * @req SWS_Rte_02575
 * @req SWS_Rte_02576
 * @req SWS_Rte_07143
 */
#define RTE_E_ComM_UserRequest_E_MODE_LIMITATION 2U
#define RTE_E_ComM_UserRequest_E_NOT_OK 1U
#define RTE_E_ComM_UserRequest_E_OK 0U

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

extern Std_ReturnType Rte_Switch_ComM_comM_UM_ComMUser_currentMode(/*IN*/uint8 mode);

/** @req SWS_Rte_07132
 *  @req SWS_Rte_03714 
 *  @req SWS_Rte_03725 
 *  @req SWS_Rte_03752
 *  @req SWS_Rte_02623
 */
typedef struct {
    uint8 _dummy;
} Rte_CDS_ComM;

/** --- Instance handle type ---------------------------------------------------------------------- */
typedef Rte_CDS_ComM const * const Rte_Instance;

/** --- Singleton instance handle -----------------------------------------------------------------
 *  @req SWS_Rte_03793
 */
extern const Rte_Instance Rte_Inst_ComM;
#define self (Rte_Inst_ComM)

/** --- Calibration API --------------------------------------------------------------------------- */

/** --- Per Instance Memory API ------------------------------------------------------------------- */

/** --- Indirect port API ------------------------------------------------------------------------- */

/** --- Single Runnable APIs ---------------------------------------------------------------------- */
#if defined(RTE_RUNNABLEAPI)
/** --- ComM_MainFunction */
#if defined(RTE_RUNNABLEAPI_ComM_MainFunction)

void ComM_MainFunction(void);

static inline Std_ReturnType Rte_Switch_UM_ComMUser_currentMode(/*IN*/uint8 mode) {
    return Rte_Switch_ComM_comM_UM_ComMUser_currentMode(mode);
}

#endif

/** --- GetCurrentComMode */
#if defined(RTE_RUNNABLEAPI_GetCurrentComMode)

Std_ReturnType ComM_GetCurrentComMode(/*IN*/ComM_UserHandleType portDefArg1, /*OUT*/ComM_ModeType * ComMode);

#endif

/** --- GetMaxComMode */
#if defined(RTE_RUNNABLEAPI_GetMaxComMode)

Std_ReturnType ComM_GetMaxComMode(/*IN*/ComM_UserHandleType portDefArg1, /*OUT*/ComM_ModeType * ComMode);

#endif

/** --- GetRequestedComMode */
#if defined(RTE_RUNNABLEAPI_GetRequestedComMode)

Std_ReturnType ComM_GetRequestedComMode(/*IN*/ComM_UserHandleType portDefArg1, /*OUT*/ComM_ModeType * ComMode);

#endif

/** --- RequestComMode */
#if defined(RTE_RUNNABLEAPI_RequestComMode)

Std_ReturnType ComM_RequestComMode(/*IN*/ComM_UserHandleType portDefArg1, /*IN*/ComM_ModeType ComMode);

#endif
#endif

/** --- All Runnable APIs ------------------------------------------------------------------------- */
#if !defined(RTE_RUNNABLEAPI)
void ComM_MainFunction(void);

static inline Std_ReturnType Rte_Switch_UM_ComMUser_currentMode(/*IN*/uint8 mode) {
    return Rte_Switch_ComM_comM_UM_ComMUser_currentMode(mode);
}

Std_ReturnType ComM_GetCurrentComMode(/*IN*/ComM_UserHandleType portDefArg1, /*OUT*/ComM_ModeType * ComMode);

Std_ReturnType ComM_GetMaxComMode(/*IN*/ComM_UserHandleType portDefArg1, /*OUT*/ComM_ModeType * ComMode);

Std_ReturnType ComM_GetRequestedComMode(/*IN*/ComM_UserHandleType portDefArg1, /*OUT*/ComM_ModeType * ComMode);

Std_ReturnType ComM_RequestComMode(/*IN*/ComM_UserHandleType portDefArg1, /*IN*/ComM_ModeType ComMode);
#endif

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_03710 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_COMM_H_ */
