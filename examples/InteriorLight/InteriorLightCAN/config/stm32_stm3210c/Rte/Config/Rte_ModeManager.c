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

#include "Rte_ModeManager.h"

/** === Runnable Prototypes =======================================================================
 */

/** ------ modeManager -----------------------------------------------------------------------
 */
void Rte_modeManager_ModeManagerInit(void); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */

/** === Inter-Runnable Variable Buffers ===========================================================
 */

/** === Inter-Runnable Variable Functions =========================================================
 */

/** === Implicit Buffer Instances =================================================================
 */
/*lint -e765 AUTOSAR API SWS_MemMap_00003 */
#define ModeManager_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <ModeManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_DE_ComMModeEnum ImplDE_modeManager_ModeManagerInit_ComMControl_requestedMode; /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
#define ModeManager_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <ModeManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Per Instance Memories =====================================================================
 */

/** === Component Data Structure Instances ========================================================
 */
#define ModeManager_START_SEC_CONST_UNSPECIFIED
#include <ModeManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_CDS_ModeManager ModeManager_modeManager = {
    .ModeManagerInit_ComMControl_requestedMode = &ImplDE_modeManager_ModeManagerInit_ComMControl_requestedMode
};
#define ModeManager_STOP_SEC_CONST_UNSPECIFIED
#include <ModeManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define ModeManager_START_SEC_CONST_UNSPECIFIED
#include <ModeManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_Instance Rte_Inst_ModeManager = &ModeManager_modeManager;

#define ModeManager_STOP_SEC_CONST_UNSPECIFIED
#include <ModeManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Runnables =================================================================================
 */

/** ------ modeManager -----------------------------------------------------------------------
 */

#define ModeManager_START_SEC_CODE
#include <ModeManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
void Rte_modeManager_ModeManagerInit(void) {

    /* PRE */

    /* MAIN */

    modeManagerInit();

    /* POST */

    Rte_Write_ModeManager_modeManager_ComMControl_requestedMode(ImplDE_modeManager_ModeManagerInit_ComMControl_requestedMode.value); /*lint !e534 AUTOSAR API */

}
#define ModeManager_STOP_SEC_CODE
#include <ModeManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */   

