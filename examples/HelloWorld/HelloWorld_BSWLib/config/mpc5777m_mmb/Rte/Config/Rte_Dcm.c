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

#include "Rte_Dcm.h"

/** === Runnable Prototypes =======================================================================
 */

/** ------ dcm -----------------------------------------------------------------------
 */
Std_ReturnType Rte_dcm_Dcm_GetActiveProtocol(/*OUT*/Dcm_ProtocolType * ActiveProtocol); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_dcm_Dcm_GetSecurityLevel(/*OUT*/Dcm_SecLevelType * SecLevel); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_dcm_Dcm_GetSesCtrlType(/*OUT*/Dcm_SesCtrlType * SesCtrlType); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
void Rte_dcm_Dcm_MainFunction(void); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_dcm_Dcm_ResetToDefaultSession(void); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */

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
#define Dcm_START_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_CDS_Dcm Dcm_dcm = {
    ._dummy = 0
};
#define Dcm_STOP_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dcm_START_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_Instance Rte_Inst_Dcm = &Dcm_dcm;

#define Dcm_STOP_SEC_CONST_UNSPECIFIED
#include <Dcm_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Runnables =================================================================================
 */

/** ------ dcm -----------------------------------------------------------------------
 */

#define Dcm_START_SEC_CODE
#include <Dcm_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_dcm_Dcm_GetActiveProtocol(/*OUT*/Dcm_ProtocolType * ActiveProtocol) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Dcm_GetActiveProtocol(ActiveProtocol);

    /* POST */

    return retVal;
}
#define Dcm_STOP_SEC_CODE
#include <Dcm_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dcm_START_SEC_CODE
#include <Dcm_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_dcm_Dcm_GetSecurityLevel(/*OUT*/Dcm_SecLevelType * SecLevel) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Dcm_GetSecurityLevel(SecLevel);

    /* POST */

    return retVal;
}
#define Dcm_STOP_SEC_CODE
#include <Dcm_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dcm_START_SEC_CODE
#include <Dcm_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_dcm_Dcm_GetSesCtrlType(/*OUT*/Dcm_SesCtrlType * SesCtrlType) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Dcm_GetSesCtrlType(SesCtrlType);

    /* POST */

    return retVal;
}
#define Dcm_STOP_SEC_CODE
#include <Dcm_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dcm_START_SEC_CODE
#include <Dcm_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
void Rte_dcm_Dcm_MainFunction(void) {

    /* PRE */

    /* MAIN */

    Dcm_MainFunction();

    /* POST */

}
#define Dcm_STOP_SEC_CODE
#include <Dcm_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dcm_START_SEC_CODE
#include <Dcm_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_dcm_Dcm_ResetToDefaultSession(void) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Dcm_ResetToDefaultSession();

    /* POST */

    return retVal;
}
#define Dcm_STOP_SEC_CODE
#include <Dcm_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */   

