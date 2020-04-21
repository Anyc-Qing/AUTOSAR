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
/** ------ JobFinishedPIM1 */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_SwcMemType_SwcMem_JobFinishedPIM1_JobFinished(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult) {
    return Rte_SwcMem_JobFinishedPIM1(ServiceId, JobResult);
}

/** ------ JobFinishedPIM2 */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_SwcMemType_SwcMem_JobFinishedPIM2_JobFinished(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult) {
    return Rte_SwcMem_JobFinishedPIM2(ServiceId, JobResult);
}

/** ------ Mode */

/** ------ ServicePIM1 */
//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_SwcMemType_SwcMem_ServicePIM1_SetRamBlockStatus(/*IN*/boolean BlockChanged) {
    return Rte_Call_NvM_nvm_PS_SwcMem_Block1_SetRamBlockStatus(BlockChanged);
}

/** ------ ServicePIM2 */
//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_SwcMemType_SwcMem_ServicePIM2_ReadBlock(/*IN*/VoidPtr DstPtr) {
    return Rte_Call_NvM_nvm_PS_SwcMem_Block2_ReadBlock(DstPtr);
}

//lint --e{818}
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_SwcMemType_SwcMem_ServicePIM2_WriteBlock(/*IN*/ConstVoidPtr SrcPtr) {
    return Rte_Call_NvM_nvm_PS_SwcMem_Block2_WriteBlock(SrcPtr);
}

/** ------ SwcMemRx */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Read_SwcMemType_SwcMem_SwcMemRx_command(/*OUT*/NvmCmdType * value) { /*lint -e818 AOUTOSAR API SWS_Rte_01091 */
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Unconnected */

    retVal = RTE_E_UNCONNECTED;

    return retVal;
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Read_SwcMemType_SwcMem_SwcMemRx_blockId(/*OUT*/uint8 * value) { /*lint -e818 AOUTOSAR API SWS_Rte_01091 */
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Unconnected */

    retVal = RTE_E_UNCONNECTED;

    return retVal;
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Read_SwcMemType_SwcMem_SwcMemRx_payload(/*OUT*/uint32 * value) { /*lint -e818 AOUTOSAR API SWS_Rte_01091 */
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Unconnected */

    retVal = RTE_E_UNCONNECTED;

    return retVal;
}

/** ------ SwcMemTx */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Write_SwcMemType_SwcMem_SwcMemTx_result(/*IN*/NvmResType value) {
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Unconnected */

    return retVal;
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Write_SwcMemType_SwcMem_SwcMemTx_blockId(/*IN*/uint8 value) {
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Unconnected */

    return retVal;
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Write_SwcMemType_SwcMem_SwcMemTx_payload(/*IN*/uint32 value) {
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Unconnected */

    return retVal;
}

#define Rte_STOP_SEC_CODE
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

//lint -restore
