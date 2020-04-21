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

#include "Rte_EcuM.h"

/** === Runnable Prototypes =======================================================================
 */

/** ------ ecuM -----------------------------------------------------------------------
 */
Std_ReturnType Rte_ecuM_GetBootTarget(/*OUT*/EcuM_BootTargetType * target); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_ecuM_GetLastShutdownTarget(/*OUT*/EcuM_StateType * target, /*OUT*/uint8 * mode); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_ecuM_GetShutdownTarget(/*OUT*/EcuM_StateType * target, /*OUT*/uint8 * mode); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_ecuM_ReleasePOSTRUN(/*IN*/EcuM_UserType portDefArg1); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_ecuM_ReleaseRUN(/*IN*/EcuM_UserType portDefArg1); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_ecuM_RequestPOSTRUN(/*IN*/EcuM_UserType portDefArg1); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_ecuM_RequestRUN(/*IN*/EcuM_UserType portDefArg1); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_ecuM_SelectBootTarget(/*IN*/EcuM_BootTargetType target); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_ecuM_SelectShutdownTarget(/*IN*/EcuM_StateType target, /*IN*/uint8 mode); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */

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
#define EcuM_START_SEC_CONST_UNSPECIFIED
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_CDS_EcuM EcuM_ecuM = {
    ._dummy = 0
};
#define EcuM_STOP_SEC_CONST_UNSPECIFIED
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define EcuM_START_SEC_CONST_UNSPECIFIED
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_Instance Rte_Inst_EcuM = &EcuM_ecuM;

#define EcuM_STOP_SEC_CONST_UNSPECIFIED
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Runnables =================================================================================
 */

/** ------ ecuM -----------------------------------------------------------------------
 */

#define EcuM_START_SEC_CODE
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_ecuM_GetBootTarget(/*OUT*/EcuM_BootTargetType * target) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = EcuM_GetBootTarget(target);

    /* POST */

    return retVal;
}
#define EcuM_STOP_SEC_CODE
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define EcuM_START_SEC_CODE
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_ecuM_GetLastShutdownTarget(/*OUT*/EcuM_StateType * target, /*OUT*/uint8 * mode) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = EcuM_GetLastShutdownTarget(target, mode);

    /* POST */

    return retVal;
}
#define EcuM_STOP_SEC_CODE
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define EcuM_START_SEC_CODE
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_ecuM_GetShutdownTarget(/*OUT*/EcuM_StateType * target, /*OUT*/uint8 * mode) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = EcuM_GetShutdownTarget(target, mode);

    /* POST */

    return retVal;
}
#define EcuM_STOP_SEC_CODE
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define EcuM_START_SEC_CODE
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_ecuM_ReleasePOSTRUN(/*IN*/EcuM_UserType portDefArg1) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = EcuM_ReleasePOST_RUN(portDefArg1);

    /* POST */

    return retVal;
}
#define EcuM_STOP_SEC_CODE
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define EcuM_START_SEC_CODE
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_ecuM_ReleaseRUN(/*IN*/EcuM_UserType portDefArg1) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = EcuM_ReleaseRUN(portDefArg1);

    /* POST */

    return retVal;
}
#define EcuM_STOP_SEC_CODE
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define EcuM_START_SEC_CODE
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_ecuM_RequestPOSTRUN(/*IN*/EcuM_UserType portDefArg1) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = EcuM_RequestPOST_RUN(portDefArg1);

    /* POST */

    return retVal;
}
#define EcuM_STOP_SEC_CODE
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define EcuM_START_SEC_CODE
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_ecuM_RequestRUN(/*IN*/EcuM_UserType portDefArg1) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = EcuM_RequestRUN(portDefArg1);

    /* POST */

    return retVal;
}
#define EcuM_STOP_SEC_CODE
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define EcuM_START_SEC_CODE
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_ecuM_SelectBootTarget(/*IN*/EcuM_BootTargetType target) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = EcuM_SelectBootTarget(target);

    /* POST */

    return retVal;
}
#define EcuM_STOP_SEC_CODE
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define EcuM_START_SEC_CODE
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_ecuM_SelectShutdownTarget(/*IN*/EcuM_StateType target, /*IN*/uint8 mode) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = EcuM_SelectShutdownTarget(target, mode);

    /* POST */

    return retVal;
}
#define EcuM_STOP_SEC_CODE
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */   

