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

#include "Rte_FiM.h"

/** === Runnable Prototypes =======================================================================
 */

/** ------ fim -----------------------------------------------------------------------
 */
Std_ReturnType Rte_fim_GetFunctionPermission(/*IN*/FiM_FunctionIdType portDefArg1, /*OUT*/boolean * Permission); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_fim_SetFunctionAvailable(/*IN*/FiM_FunctionIdType portDefArg1, /*IN*/boolean Availability); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */

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
#define FiM_START_SEC_CONST_UNSPECIFIED
#include <FiM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_CDS_FiM FiM_fim = {
    ._dummy = 0
};
#define FiM_STOP_SEC_CONST_UNSPECIFIED
#include <FiM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define FiM_START_SEC_CONST_UNSPECIFIED
#include <FiM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_Instance Rte_Inst_FiM = &FiM_fim;

#define FiM_STOP_SEC_CONST_UNSPECIFIED
#include <FiM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Runnables =================================================================================
 */

/** ------ fim -----------------------------------------------------------------------
 */

#define FiM_START_SEC_CODE
#include <FiM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_fim_GetFunctionPermission(/*IN*/FiM_FunctionIdType portDefArg1, /*OUT*/boolean * Permission) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = FiM_GetFunctionPermission(portDefArg1, Permission);

    /* POST */

    return retVal;
}
#define FiM_STOP_SEC_CODE
#include <FiM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define FiM_START_SEC_CODE
#include <FiM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_fim_SetFunctionAvailable(/*IN*/FiM_FunctionIdType portDefArg1, /*IN*/boolean Availability) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = FiM_SetFunctionAvailable(portDefArg1, Availability);

    /* POST */

    return retVal;
}
#define FiM_STOP_SEC_CODE
#include <FiM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */   

