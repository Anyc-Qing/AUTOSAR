/** === HEADER ====================================================================================
 */

#include <Rte.h>

#include <Os.h>
#if ((OS_AR_RELEASE_MAJOR_VERSION != RTE_AR_RELEASE_MAJOR_VERSION) || (OS_AR_RELEASE_MINOR_VERSION != RTE_AR_RELEASE_MINOR_VERSION))
#error Os version mismatch
#endif

#include <Com.h>
#if ((COM_AR_RELEASE_MAJOR_VERSION != RTE_AR_RELEASE_MAJOR_VERSION) || (COM_AR_RELEASE_MINOR_VERSION != RTE_AR_RELEASE_MINOR_VERSION))
#error Com version mismatch
#endif

#include <Rte_Hook.h>
#include <Rte_Internal.h>
#include <Rte_Calprms.h>

#include "Rte_ComM.h"

/** === Runnable Prototypes =======================================================================
 */

/** ------ comM -----------------------------------------------------------------------
 */
Std_ReturnType Rte_comM_GetCurrentComMode(/*IN*/ComM_UserHandleType portDefArg1, /*OUT*/ComM_ModeType * ComMode); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_comM_GetMaxComMode(/*IN*/ComM_UserHandleType portDefArg1, /*OUT*/ComM_ModeType * ComMode); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_comM_GetRequestedComMode(/*IN*/ComM_UserHandleType portDefArg1, /*OUT*/ComM_ModeType * ComMode); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_comM_RequestComMode(/*IN*/ComM_UserHandleType portDefArg1, /*IN*/ComM_ModeType ComMode); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */

/** === Inter-Runnable Variable Buffers ===========================================================
 */

/** === Inter-Runnable Variable Functions =========================================================
 */

/** === Implicit Buffer Instances =================================================================
 */
/*lint -e765 AUTOSAR API SWS_MemMap_00003 */

/** === Per Instance Memories =====================================================================
 */

/** === Component Data Structure Instances ========================================================
 */
#define ComM_START_SEC_CONST_UNSPECIFIED
#include <ComM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_CDS_ComM ComM_comM = {
    ._dummy = 0
};
#define ComM_STOP_SEC_CONST_UNSPECIFIED
#include <ComM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define ComM_START_SEC_CONST_UNSPECIFIED
#include <ComM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_Instance Rte_Inst_ComM = &ComM_comM;

#define ComM_STOP_SEC_CONST_UNSPECIFIED
#include <ComM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Runnables =================================================================================
 */

/** ------ comM -----------------------------------------------------------------------
 */

#define ComM_START_SEC_CODE
#include <ComM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_comM_GetCurrentComMode(/*IN*/ComM_UserHandleType portDefArg1, /*OUT*/ComM_ModeType * ComMode) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = ComM_GetCurrentComMode(portDefArg1, ComMode);

    /* POST */

    return retVal;
}
#define ComM_STOP_SEC_CODE
#include <ComM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define ComM_START_SEC_CODE
#include <ComM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_comM_GetMaxComMode(/*IN*/ComM_UserHandleType portDefArg1, /*OUT*/ComM_ModeType * ComMode) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = ComM_GetMaxComMode(portDefArg1, ComMode);

    /* POST */

    return retVal;
}
#define ComM_STOP_SEC_CODE
#include <ComM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define ComM_START_SEC_CODE
#include <ComM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_comM_GetRequestedComMode(/*IN*/ComM_UserHandleType portDefArg1, /*OUT*/ComM_ModeType * ComMode) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = ComM_GetRequestedComMode(portDefArg1, ComMode);

    /* POST */

    return retVal;
}
#define ComM_STOP_SEC_CODE
#include <ComM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define ComM_START_SEC_CODE
#include <ComM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_comM_RequestComMode(/*IN*/ComM_UserHandleType portDefArg1, /*IN*/ComM_ModeType ComMode) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = ComM_RequestComMode(portDefArg1, ComMode);

    /* POST */

    return retVal;
}
#define ComM_STOP_SEC_CODE
#include <ComM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */   

