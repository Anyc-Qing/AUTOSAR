#include <Rte_Internal.h>
#include <Rte_Calprms.h>
#include <Rte_Assert.h>
#include <Rte_Fifo.h>
#include <Com.h>
#include <Os.h>
#include <Ioc.h>
#include <Rte_Buffers.h>

/*lint -e522 lint does not understand that low level calls to void operator are needed */
/*lint -e160 warning only viable if in c++ */
/*lint -e950 asm command needs to be used */
/*lint -e9008 The comma operator is acceptable even with loss of readability */
/*lint -e451 AUTOSAR API */
/*lint -e515 Variable amount of Arguments for SYS_CALLS */
/*lint -e970 Use of types and modifiers acceptable outside of typedefs */
/*lint -e843 AUTOSAR API for memory wrapping */
/*lint -e838 all values must have an assigned value on initialization even if unused */
/*lint -e9018 AUTOSAR API for Union types */
/*lint -e516 Variable argument types for SYS_CALLS */
/*lint -e545 Sending pointer address is legal in ANSI C */

/*lint -e957 Should be fixed, most functions are missing these prototypes */
/** --- SERVER ACTIVATIONS ------------------------------------------------------------------ */

/** --- FUNCTIONS --------------------------------------------------------------------------- */
//lint -save -e715 Ignore unconnected functions
#define Rte_START_SEC_CODE
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
/** ------ PAdmin_SwcMem_Block1 */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PAdmin_SwcMem_Block1_SetBlockProtection(/*IN*/boolean ProtectionEnabled) {
    return Rte_nvm_SetBlockProtection(2, ProtectionEnabled);
}

/** ------ PAdmin_SwcMem_Block2 */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PAdmin_SwcMem_Block2_SetBlockProtection(/*IN*/boolean ProtectionEnabled) {
    return Rte_nvm_SetBlockProtection(3, ProtectionEnabled);
}

/** ------ PNInitBlock_SwcMem_Block1 */
//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PNInitBlock_SwcMem_Block1_InitBlock(void) {
    /* --- Unconnected */
    return RTE_E_UNCONNECTED;
}

/** ------ PNInitBlock_SwcMem_Block2 */
//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PNInitBlock_SwcMem_Block2_InitBlock(void) {
    /* --- Unconnected */
    return RTE_E_UNCONNECTED;
}

/** ------ PNJobFinished_SwcMem_Block1 */
//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PNJobFinished_SwcMem_Block1_JobFinished(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult) {
    return Rte_Call_SwcMemType_SwcMem_JobFinishedPIM1_JobFinished(ServiceId, JobResult);
}

/** ------ PNJobFinished_SwcMem_Block2 */
//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PNJobFinished_SwcMem_Block2_JobFinished(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult) {
    return Rte_Call_SwcMemType_SwcMem_JobFinishedPIM2_JobFinished(ServiceId, JobResult);
}

/** ------ PS_SwcMem_Block1 */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block1_EraseNvBlock(void) {
    return Rte_nvm_EraseNvBlock(2);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block1_GetDataIndex(/*OUT*/uint8 * DataIndexPtr) {
    return Rte_nvm_GetDataIndex(2, DataIndexPtr);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block1_GetErrorStatus(/*OUT*/NvM_RequestResultType * RequestResultPtr) {
    return Rte_nvm_GetErrorStatus(2, RequestResultPtr);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block1_InvalidateNvBlock(void) {
    return Rte_nvm_InvalidateNvBlock(2);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block1_ReadBlock(/*IN*/VoidPtr DstPtr) {
    return Rte_nvm_ReadBlock(2, DstPtr);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block1_RestoreBlockDefaults(/*IN*/VoidPtr DstPtr) {
    return Rte_nvm_RestoreBlockDefaults(2, DstPtr);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block1_SetDataIndex(/*IN*/uint8 DataIndex) {
    return Rte_nvm_SetDataIndex(2, DataIndex);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block1_SetRamBlockStatus(/*IN*/boolean BlockChanged) {
    return Rte_nvm_SetRamBlockStatus(2, BlockChanged);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block1_WriteBlock(/*IN*/ConstVoidPtr SrcPtr) {
    return Rte_nvm_WriteBlock(2, SrcPtr);
}

/** ------ PS_SwcMem_Block2 */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block2_EraseNvBlock(void) {
    return Rte_nvm_EraseNvBlock(3);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block2_GetDataIndex(/*OUT*/uint8 * DataIndexPtr) {
    return Rte_nvm_GetDataIndex(3, DataIndexPtr);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block2_GetErrorStatus(/*OUT*/NvM_RequestResultType * RequestResultPtr) {
    return Rte_nvm_GetErrorStatus(3, RequestResultPtr);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block2_InvalidateNvBlock(void) {
    return Rte_nvm_InvalidateNvBlock(3);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block2_ReadBlock(/*IN*/VoidPtr DstPtr) {
    return Rte_nvm_ReadBlock(3, DstPtr);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block2_RestoreBlockDefaults(/*IN*/VoidPtr DstPtr) {
    return Rte_nvm_RestoreBlockDefaults(3, DstPtr);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block2_SetDataIndex(/*IN*/uint8 DataIndex) {
    return Rte_nvm_SetDataIndex(3, DataIndex);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block2_SetRamBlockStatus(/*IN*/boolean BlockChanged) {
    return Rte_nvm_SetRamBlockStatus(3, BlockChanged);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_NvM_nvm_PS_SwcMem_Block2_WriteBlock(/*IN*/ConstVoidPtr SrcPtr) {
    return Rte_nvm_WriteBlock(3, SrcPtr);
}

#define Rte_STOP_SEC_CODE
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

//lint -restore
