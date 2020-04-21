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

#include "Rte_WdgM.h"

/** === Runnable Prototypes =======================================================================
 */

/** ------ wdgm -----------------------------------------------------------------------
 */
Std_ReturnType Rte_wdgm_CheckpointReached(/*IN*/WdgM_SupervisedEntityIdType portDefArg1, /*IN*/WdgM_CheckpointIdType CheckpointID); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_wdgm_GetFirstExpiredSEID(/*OUT*/WdgM_SupervisedEntityIdType * SEID); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_wdgm_GetGlobalStatus(/*OUT*/WdgM_GlobalStatusType * Status); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_wdgm_GetLocalStatus(/*IN*/WdgM_SupervisedEntityIdType portDefArg1, /*OUT*/WdgM_LocalStatusType * Status); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_wdgm_GetMode(/*OUT*/WdgM_ModeType * Mode); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
void Rte_wdgm_PerformReset(void); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_wdgm_SetMode(/*IN*/WdgM_ModeType Mode); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */

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
#define WdgM_START_SEC_CONST_UNSPECIFIED
#include <WdgM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_CDS_WdgM WdgM_wdgm = {
    .localMode_Supervised100msTask = {
        ._dummy = 0 // SWS_Rte_07138 requires the existence of a PDS in the CDS. Even if it is empty.
    }
};
#define WdgM_STOP_SEC_CONST_UNSPECIFIED
#include <WdgM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define WdgM_START_SEC_CONST_UNSPECIFIED
#include <WdgM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_Instance Rte_Inst_WdgM = &WdgM_wdgm;

#define WdgM_STOP_SEC_CONST_UNSPECIFIED
#include <WdgM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Runnables =================================================================================
 */

/** ------ wdgm -----------------------------------------------------------------------
 */

#define WdgM_START_SEC_CODE
#include <WdgM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_wdgm_CheckpointReached(/*IN*/WdgM_SupervisedEntityIdType portDefArg1, /*IN*/WdgM_CheckpointIdType CheckpointID) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = WdgM_CheckpointReached(portDefArg1, CheckpointID);

    /* POST */

    return retVal;
}
#define WdgM_STOP_SEC_CODE
#include <WdgM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define WdgM_START_SEC_CODE
#include <WdgM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_wdgm_GetFirstExpiredSEID(/*OUT*/WdgM_SupervisedEntityIdType * SEID) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = WdgM_GetFirstExpiredSEID(SEID);

    /* POST */

    return retVal;
}
#define WdgM_STOP_SEC_CODE
#include <WdgM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define WdgM_START_SEC_CODE
#include <WdgM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_wdgm_GetGlobalStatus(/*OUT*/WdgM_GlobalStatusType * Status) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = WdgM_GetGlobalStatus(Status);

    /* POST */

    return retVal;
}
#define WdgM_STOP_SEC_CODE
#include <WdgM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define WdgM_START_SEC_CODE
#include <WdgM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_wdgm_GetLocalStatus(/*IN*/WdgM_SupervisedEntityIdType portDefArg1, /*OUT*/WdgM_LocalStatusType * Status) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = WdgM_GetLocalStatus(portDefArg1, Status);

    /* POST */

    return retVal;
}
#define WdgM_STOP_SEC_CODE
#include <WdgM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define WdgM_START_SEC_CODE
#include <WdgM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_wdgm_GetMode(/*OUT*/WdgM_ModeType * Mode) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = WdgM_GetMode(Mode);

    /* POST */

    return retVal;
}
#define WdgM_STOP_SEC_CODE
#include <WdgM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define WdgM_START_SEC_CODE
#include <WdgM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
void Rte_wdgm_PerformReset(void) {

    /* PRE */

    /* MAIN */

    WdgM_PerformReset();

    /* POST */

}
#define WdgM_STOP_SEC_CODE
#include <WdgM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define WdgM_START_SEC_CODE
#include <WdgM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_wdgm_SetMode(/*IN*/WdgM_ModeType Mode) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = WdgM_SetMode(Mode);

    /* POST */

    return retVal;
}
#define WdgM_STOP_SEC_CODE
#include <WdgM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */   

