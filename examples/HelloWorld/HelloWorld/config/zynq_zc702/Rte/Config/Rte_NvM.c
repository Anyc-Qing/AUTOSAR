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

#include "Rte_NvM.h"

/** === Runnable Prototypes =======================================================================
 */

/** ------ nvm -----------------------------------------------------------------------
 */
Std_ReturnType Rte_nvm_EraseNvBlock(/*IN*/NvM_BlockIdType portDefArg1); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_nvm_GetDataIndex(/*IN*/NvM_BlockIdType portDefArg1, /*OUT*/uint8 * DataIndexPtr); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_nvm_GetErrorStatus(/*IN*/NvM_BlockIdType portDefArg1, /*OUT*/NvM_RequestResultType * RequestResultPtr); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_nvm_InvalidateNvBlock(/*IN*/NvM_BlockIdType portDefArg1); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_nvm_ReadBlock(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/VoidPtr DstPtr); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_nvm_RestoreBlockDefaults(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/VoidPtr DstPtr); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_nvm_SetBlockProtection(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/boolean ProtectionEnabled); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_nvm_SetDataIndex(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/uint8 DataIndex); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_nvm_SetRamBlockStatus(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/boolean BlockChanged); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_nvm_WriteBlock(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/ConstVoidPtr SrcPtr); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */

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
#define NvM_START_SEC_CONST_UNSPECIFIED
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_CDS_NvM NvM_nvm = {
    ._dummy = 0
};
#define NvM_STOP_SEC_CONST_UNSPECIFIED
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define NvM_START_SEC_CONST_UNSPECIFIED
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_Instance Rte_Inst_NvM = &NvM_nvm;

#define NvM_STOP_SEC_CONST_UNSPECIFIED
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Runnables =================================================================================
 */

/** ------ nvm -----------------------------------------------------------------------
 */

#define NvM_START_SEC_CODE
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_nvm_EraseNvBlock(/*IN*/NvM_BlockIdType portDefArg1) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = NvM_EraseNvBlock(portDefArg1);

    /* POST */

    return retVal;
}
#define NvM_STOP_SEC_CODE
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define NvM_START_SEC_CODE
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_nvm_GetDataIndex(/*IN*/NvM_BlockIdType portDefArg1, /*OUT*/uint8 * DataIndexPtr) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = NvM_GetDataIndex(portDefArg1, DataIndexPtr);

    /* POST */

    return retVal;
}
#define NvM_STOP_SEC_CODE
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define NvM_START_SEC_CODE
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_nvm_GetErrorStatus(/*IN*/NvM_BlockIdType portDefArg1, /*OUT*/NvM_RequestResultType * RequestResultPtr) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = NvM_GetErrorStatus(portDefArg1, RequestResultPtr);

    /* POST */

    return retVal;
}
#define NvM_STOP_SEC_CODE
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define NvM_START_SEC_CODE
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_nvm_InvalidateNvBlock(/*IN*/NvM_BlockIdType portDefArg1) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = NvM_InvalidateNvBlock(portDefArg1);

    /* POST */

    return retVal;
}
#define NvM_STOP_SEC_CODE
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define NvM_START_SEC_CODE
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_nvm_ReadBlock(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/VoidPtr DstPtr) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = NvM_ReadBlock(portDefArg1, DstPtr);

    /* POST */

    return retVal;
}
#define NvM_STOP_SEC_CODE
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define NvM_START_SEC_CODE
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_nvm_RestoreBlockDefaults(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/VoidPtr DstPtr) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = NvM_RestoreBlockDefaults(portDefArg1, DstPtr);

    /* POST */

    return retVal;
}
#define NvM_STOP_SEC_CODE
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define NvM_START_SEC_CODE
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_nvm_SetBlockProtection(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/boolean ProtectionEnabled) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = NvM_SetBlockProtection(portDefArg1, ProtectionEnabled);

    /* POST */

    return retVal;
}
#define NvM_STOP_SEC_CODE
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define NvM_START_SEC_CODE
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_nvm_SetDataIndex(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/uint8 DataIndex) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = NvM_SetDataIndex(portDefArg1, DataIndex);

    /* POST */

    return retVal;
}
#define NvM_STOP_SEC_CODE
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define NvM_START_SEC_CODE
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_nvm_SetRamBlockStatus(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/boolean BlockChanged) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = NvM_SetRamBlockStatus(portDefArg1, BlockChanged);

    /* POST */

    return retVal;
}
#define NvM_STOP_SEC_CODE
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define NvM_START_SEC_CODE
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_nvm_WriteBlock(/*IN*/NvM_BlockIdType portDefArg1, /*IN*/ConstVoidPtr SrcPtr) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = NvM_WriteBlock(portDefArg1, SrcPtr);

    /* POST */

    return retVal;
}
#define NvM_STOP_SEC_CODE
#include <NvM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */   

