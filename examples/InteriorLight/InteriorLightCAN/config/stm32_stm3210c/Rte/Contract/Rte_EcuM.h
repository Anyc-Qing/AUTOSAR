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
#ifndef RTE_ECUM_H_
#define RTE_ECUM_H_

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
#if defined(RTE_RUNNABLEAPI_EcuM_MainFunction) || \
defined(RTE_RUNNABLEAPI_GetBootTarget) || \
defined(RTE_RUNNABLEAPI_GetLastShutdownTarget) || \
defined(RTE_RUNNABLEAPI_GetShutdownTarget) || \
defined(RTE_RUNNABLEAPI_ReleasePOSTRUN) || \
defined(RTE_RUNNABLEAPI_ReleaseRUN) || \
defined(RTE_RUNNABLEAPI_RequestPOSTRUN) || \
defined(RTE_RUNNABLEAPI_RequestRUN) || \
defined(RTE_RUNNABLEAPI_SelectBootTarget) || \
defined(RTE_RUNNABLEAPI_SelectShutdownTarget)
#define RTE_RUNNABLEAPI
#endif

/** --- Includes ----------------------------------------------------------------------------------
 * @req SWS_Rte_02751
 * @req SWS_Rte_07131
 */
#include <Rte_DataHandleType.h>
#include <Rte_EcuM_Type.h>

/** --- Application Errors ------------------------------------------------------------------------
 * @req SWS_Rte_02575
 * @req SWS_Rte_02576
 * @req SWS_Rte_07143
 */
#define RTE_E_EcuM_BootTarget_E_NOT_OK 1U
#define RTE_E_EcuM_BootTarget_E_OK 0U
#define RTE_E_EcuM_ShutdownTarget_E_NOT_OK 1U
#define RTE_E_EcuM_ShutdownTarget_E_OK 0U
#define RTE_E_EcuM_StateRequest_E_NOT_OK 1U
#define RTE_E_EcuM_StateRequest_E_OK 0U

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

extern Std_ReturnType Rte_Switch_EcuM_ecuM_currentMode_currentMode(/*IN*/uint8 mode);

/** @req SWS_Rte_07132
 *  @req SWS_Rte_03714 
 *  @req SWS_Rte_03725 
 *  @req SWS_Rte_03752
 *  @req SWS_Rte_02623
 */
typedef struct {
    uint8 _dummy;
} Rte_CDS_EcuM;

/** --- Instance handle type ---------------------------------------------------------------------- */
typedef Rte_CDS_EcuM const * const Rte_Instance;

/** --- Singleton instance handle -----------------------------------------------------------------
 *  @req SWS_Rte_03793
 */
extern const Rte_Instance Rte_Inst_EcuM;
#define self (Rte_Inst_EcuM)

/** --- Calibration API --------------------------------------------------------------------------- */

/** --- Per Instance Memory API ------------------------------------------------------------------- */

/** --- Indirect port API ------------------------------------------------------------------------- */

/** --- Single Runnable APIs ---------------------------------------------------------------------- */
#if defined(RTE_RUNNABLEAPI)
/** --- EcuM_MainFunction */
#if defined(RTE_RUNNABLEAPI_EcuM_MainFunction)

void EcuM_MainFunction(void);

static inline Std_ReturnType Rte_Switch_currentMode_currentMode(/*IN*/uint8 mode) {
    return Rte_Switch_EcuM_ecuM_currentMode_currentMode(mode);
}

#endif

/** --- GetBootTarget */
#if defined(RTE_RUNNABLEAPI_GetBootTarget)

Std_ReturnType EcuM_GetBootTarget(/*OUT*/EcuM_BootTargetType * target);

#endif

/** --- GetLastShutdownTarget */
#if defined(RTE_RUNNABLEAPI_GetLastShutdownTarget)

Std_ReturnType EcuM_GetLastShutdownTarget(/*OUT*/EcuM_StateType * target, /*OUT*/uint8 * mode);

#endif

/** --- GetShutdownTarget */
#if defined(RTE_RUNNABLEAPI_GetShutdownTarget)

Std_ReturnType EcuM_GetShutdownTarget(/*OUT*/EcuM_StateType * target, /*OUT*/uint8 * mode);

#endif

/** --- ReleasePOSTRUN */
#if defined(RTE_RUNNABLEAPI_ReleasePOSTRUN)

Std_ReturnType EcuM_ReleasePOST_RUN(/*IN*/EcuM_UserType portDefArg1);

#endif

/** --- ReleaseRUN */
#if defined(RTE_RUNNABLEAPI_ReleaseRUN)

Std_ReturnType EcuM_ReleaseRUN(/*IN*/EcuM_UserType portDefArg1);

#endif

/** --- RequestPOSTRUN */
#if defined(RTE_RUNNABLEAPI_RequestPOSTRUN)

Std_ReturnType EcuM_RequestPOST_RUN(/*IN*/EcuM_UserType portDefArg1);

#endif

/** --- RequestRUN */
#if defined(RTE_RUNNABLEAPI_RequestRUN)

Std_ReturnType EcuM_RequestRUN(/*IN*/EcuM_UserType portDefArg1);

#endif

/** --- SelectBootTarget */
#if defined(RTE_RUNNABLEAPI_SelectBootTarget)

Std_ReturnType EcuM_SelectBootTarget(/*IN*/EcuM_BootTargetType target);

#endif

/** --- SelectShutdownTarget */
#if defined(RTE_RUNNABLEAPI_SelectShutdownTarget)

Std_ReturnType EcuM_SelectShutdownTarget(/*IN*/EcuM_StateType target, /*IN*/uint8 mode);

#endif
#endif

/** --- All Runnable APIs ------------------------------------------------------------------------- */
#if !defined(RTE_RUNNABLEAPI)
void EcuM_MainFunction(void);

static inline Std_ReturnType Rte_Switch_currentMode_currentMode(/*IN*/uint8 mode) {
    return Rte_Switch_EcuM_ecuM_currentMode_currentMode(mode);
}

Std_ReturnType EcuM_GetBootTarget(/*OUT*/EcuM_BootTargetType * target);

Std_ReturnType EcuM_GetLastShutdownTarget(/*OUT*/EcuM_StateType * target, /*OUT*/uint8 * mode);

Std_ReturnType EcuM_GetShutdownTarget(/*OUT*/EcuM_StateType * target, /*OUT*/uint8 * mode);

Std_ReturnType EcuM_ReleasePOST_RUN(/*IN*/EcuM_UserType portDefArg1);

Std_ReturnType EcuM_ReleaseRUN(/*IN*/EcuM_UserType portDefArg1);

Std_ReturnType EcuM_RequestPOST_RUN(/*IN*/EcuM_UserType portDefArg1);

Std_ReturnType EcuM_RequestRUN(/*IN*/EcuM_UserType portDefArg1);

Std_ReturnType EcuM_SelectBootTarget(/*IN*/EcuM_BootTargetType target);

Std_ReturnType EcuM_SelectShutdownTarget(/*IN*/EcuM_StateType target, /*IN*/uint8 mode);
#endif

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_03710 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_ECUM_H_ */
