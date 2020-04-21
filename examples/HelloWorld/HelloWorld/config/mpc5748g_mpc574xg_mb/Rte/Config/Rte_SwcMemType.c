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

#include "Rte_SwcMemType.h"

/** === Runnable Prototypes =======================================================================
 */

/** ------ SwcMem -----------------------------------------------------------------------
 */
void Rte_SwcMem_Init(void); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_SwcMem_JobFinishedPIM1(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_SwcMem_JobFinishedPIM2(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
void Rte_SwcMem_Main(void); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */

/** === Inter-Runnable Variable Buffers ===========================================================
 */

/** === Inter-Runnable Variable Functions =========================================================
 */

/** === Implicit Buffer Instances =================================================================
 */
/*lint -e765 AUTOSAR API SWS_MemMap_00003 */
#define SwcMemType_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcMemType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_DE_NvmCmdType ImplDE_SwcMem_Main_SwcMemRx_command; /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
#define SwcMemType_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcMemType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define SwcMemType_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcMemType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_DE_uint8 ImplDE_SwcMem_Main_SwcMemRx_blockId; /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
#define SwcMemType_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcMemType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define SwcMemType_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcMemType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_DE_uint32 ImplDE_SwcMem_Main_SwcMemRx_payload; /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
#define SwcMemType_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcMemType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Per Instance Memories =====================================================================
 */
#define SwcMemType_START_SEC_VAR_INIT_UNSPECIFIED
#include <SwcMemType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_PimType_SwcMemType_PIM1Type Rte_Pim_SwcMemType_SwcMem_PIM1;
#define SwcMemType_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <SwcMemType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define SwcMemType_START_SEC_VAR_INIT_UNSPECIFIED
#include <SwcMemType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_PimType_SwcMemType_PIM2Type Rte_Pim_SwcMemType_SwcMem_PIM2;
#define SwcMemType_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <SwcMemType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Component Data Structure Instances ========================================================
 */
#define SwcMemType_START_SEC_CONST_UNSPECIFIED
#include <SwcMemType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_CDS_SwcMemType SwcMemType_SwcMem = {
    .Main_SwcMemRx_command = &ImplDE_SwcMem_Main_SwcMemRx_command,
    .Main_SwcMemRx_blockId = &ImplDE_SwcMem_Main_SwcMemRx_blockId,
    .Main_SwcMemRx_payload = &ImplDE_SwcMem_Main_SwcMemRx_payload,
    .Pim_PIM1 = &Rte_Pim_SwcMemType_SwcMem_PIM1,
    .Pim_PIM2 = &Rte_Pim_SwcMemType_SwcMem_PIM2
};
#define SwcMemType_STOP_SEC_CONST_UNSPECIFIED
#include <SwcMemType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define SwcMemType_START_SEC_CONST_UNSPECIFIED
#include <SwcMemType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_Instance Rte_Inst_SwcMemType = &SwcMemType_SwcMem;

#define SwcMemType_STOP_SEC_CONST_UNSPECIFIED
#include <SwcMemType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Runnables =================================================================================
 */

/** ------ SwcMem -----------------------------------------------------------------------
 */

#define SwcMemType_START_SEC_CODE
#include <SwcMemType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
void Rte_SwcMem_Init(void) {

    /* PRE */

    /* MAIN */

    SwcMem_Init();

    /* POST */

}
#define SwcMemType_STOP_SEC_CODE
#include <SwcMemType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define SwcMemType_START_SEC_CODE
#include <SwcMemType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_SwcMem_JobFinishedPIM1(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = SwcMem_JobFinishedPIM1(ServiceId, JobResult);

    /* POST */

    return retVal;
}
#define SwcMemType_STOP_SEC_CODE
#include <SwcMemType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define SwcMemType_START_SEC_CODE
#include <SwcMemType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_SwcMem_JobFinishedPIM2(/*IN*/uint8 ServiceId, /*IN*/NvM_RequestResultType JobResult) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = SwcMem_JobFinishedPIM2(ServiceId, JobResult);

    /* POST */

    return retVal;
}
#define SwcMemType_STOP_SEC_CODE
#include <SwcMemType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define SwcMemType_START_SEC_CODE
#include <SwcMemType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
void Rte_SwcMem_Main(void) {

    /* PRE */
    Rte_Read_SwcMemType_SwcMem_SwcMemRx_command(&ImplDE_SwcMem_Main_SwcMemRx_command.value); /*lint !e534 AUTOSAR API */

    Rte_Read_SwcMemType_SwcMem_SwcMemRx_blockId(&ImplDE_SwcMem_Main_SwcMemRx_blockId.value); /*lint !e534 AUTOSAR API */

    Rte_Read_SwcMemType_SwcMem_SwcMemRx_payload(&ImplDE_SwcMem_Main_SwcMemRx_payload.value); /*lint !e534 AUTOSAR API */

    /* MAIN */

    SwcMem_MainFunction();

    /* POST */

}
#define SwcMemType_STOP_SEC_CODE
#include <SwcMemType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */   

