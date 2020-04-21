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

#include "Rte_LedBlinkerSWC.h"

/** === Runnable Prototypes =======================================================================
 */

/** ------ ledBlinkerSWC -----------------------------------------------------------------------
 */
void Rte_ledBlinkerSWC_LedBlinkerSWCMain(void); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */

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
#define LedBlinkerSWC_START_SEC_CONST_UNSPECIFIED
#include <LedBlinkerSWC_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_CDS_LedBlinkerSWC LedBlinkerSWC_ledBlinkerSWC = {
    ._dummy = 0
};
#define LedBlinkerSWC_STOP_SEC_CONST_UNSPECIFIED
#include <LedBlinkerSWC_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define LedBlinkerSWC_START_SEC_CONST_UNSPECIFIED
#include <LedBlinkerSWC_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_Instance Rte_Inst_LedBlinkerSWC = &LedBlinkerSWC_ledBlinkerSWC;

#define LedBlinkerSWC_STOP_SEC_CONST_UNSPECIFIED
#include <LedBlinkerSWC_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Runnables =================================================================================
 */

/** ------ ledBlinkerSWC -----------------------------------------------------------------------
 */

#define LedBlinkerSWC_START_SEC_CODE
#include <LedBlinkerSWC_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
void Rte_ledBlinkerSWC_LedBlinkerSWCMain(void) {

    /* PRE */

    /* MAIN */

    ledBlinkerSWCMain();

    /* POST */

}
#define LedBlinkerSWC_STOP_SEC_CODE
#include <LedBlinkerSWC_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */   

