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

#include "Rte_Os.h"

/** === Runnable Prototypes =======================================================================
 */

/** ------ os -----------------------------------------------------------------------
 */
Std_ReturnType Rte_os_GetCounterValue(/*IN*/CounterType portDefArg1, /*OUT*/TickType * value); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_os_GetElapsedValue(/*IN*/CounterType portDefArg1, /*INOUT*/TickType * value, /*OUT*/TickType * elapsedValue); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */

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
#define Os_START_SEC_CONST_UNSPECIFIED
#include <Os_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_CDS_Os Os_os = {
    ._dummy = 0
};
#define Os_STOP_SEC_CONST_UNSPECIFIED
#include <Os_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Os_START_SEC_CONST_UNSPECIFIED
#include <Os_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_Instance Rte_Inst_Os = &Os_os;

#define Os_STOP_SEC_CONST_UNSPECIFIED
#include <Os_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Runnables =================================================================================
 */

/** ------ os -----------------------------------------------------------------------
 */

#define Os_START_SEC_CODE
#include <Os_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_os_GetCounterValue(/*IN*/CounterType portDefArg1, /*OUT*/TickType * value) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Os_GetCounterValue(portDefArg1, value);

    /* POST */

    return retVal;
}
#define Os_STOP_SEC_CODE
#include <Os_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Os_START_SEC_CODE
#include <Os_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_os_GetElapsedValue(/*IN*/CounterType portDefArg1, /*INOUT*/TickType * value, /*OUT*/TickType * elapsedValue) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Os_GetElapsedValue(portDefArg1, value, elapsedValue);

    /* POST */

    return retVal;
}
#define Os_STOP_SEC_CODE
#include <Os_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */   

