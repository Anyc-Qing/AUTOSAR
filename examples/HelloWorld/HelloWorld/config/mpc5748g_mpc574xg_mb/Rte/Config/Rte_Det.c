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

#include "Rte_Det.h"

/** === Runnable Prototypes =======================================================================
 */

/** ------ det -----------------------------------------------------------------------
 */
Std_ReturnType Rte_det_ReportError(/*IN*/uint16 portDefArg1, /*IN*/uint8 portDefArg2, /*IN*/uint8 ApiId, /*IN*/uint8 ErrorId); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */

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
#define Det_START_SEC_CONST_UNSPECIFIED
#include <Det_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_CDS_Det Det_det = {
    ._dummy = 0
};
#define Det_STOP_SEC_CONST_UNSPECIFIED
#include <Det_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Det_START_SEC_CONST_UNSPECIFIED
#include <Det_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_Instance Rte_Inst_Det = &Det_det;

#define Det_STOP_SEC_CONST_UNSPECIFIED
#include <Det_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Runnables =================================================================================
 */

/** ------ det -----------------------------------------------------------------------
 */

#define Det_START_SEC_CODE
#include <Det_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_det_ReportError(/*IN*/uint16 portDefArg1, /*IN*/uint8 portDefArg2, /*IN*/uint8 ApiId, /*IN*/uint8 ErrorId) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = Det_ReportError(portDefArg1, portDefArg2, ApiId, ErrorId);

    /* POST */

    return retVal;
}
#define Det_STOP_SEC_CODE
#include <Det_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */   

