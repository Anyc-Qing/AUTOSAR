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

#include "Rte_SwcReaderType.h"

/** === Runnable Prototypes =======================================================================
 */

/** ------ SwcReader -----------------------------------------------------------------------
 */
void Rte_SwcReader_Init(void); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
void Rte_SwcReader_SwcReaderRunnable(void); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */

/** === Inter-Runnable Variable Buffers ===========================================================
 */

/** === Inter-Runnable Variable Functions =========================================================
 */

/** === Implicit Buffer Instances =================================================================
 */
/*lint -e765 AUTOSAR API SWS_MemMap_00003 */
#define SwcReaderType_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcReaderType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_DE_sint32 ImplDE_SwcReader_SwcReaderRunnable_AdcResult_data1; /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
#define SwcReaderType_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcReaderType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define SwcReaderType_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcReaderType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_DE_uint32 ImplDE_SwcReader_SwcReaderRunnable_ReceiverPort_data1; /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
#define SwcReaderType_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcReaderType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define SwcReaderType_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcReaderType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_DE_TestCmdType ImplDE_SwcReader_SwcReaderRunnable_ReceiverPort_cmd; /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
#define SwcReaderType_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcReaderType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define SwcReaderType_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcReaderType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_DE_uint32 ImplDE_SwcReader_SwcReaderRunnable_ResultPort_data1; /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
#define SwcReaderType_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcReaderType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define SwcReaderType_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcReaderType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_DE_WdgMModeEnum ImplDE_SwcReader_SwcReaderRunnable_WdgM_StateReq_requestedMode; /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
#define SwcReaderType_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcReaderType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Per Instance Memories =====================================================================
 */

/** === Component Data Structure Instances ========================================================
 */
#define SwcReaderType_START_SEC_CONST_UNSPECIFIED
#include <SwcReaderType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_CDS_SwcReaderType SwcReaderType_SwcReader = {
    .SwcReaderRunnable_ReceiverPort_data1 = &ImplDE_SwcReader_SwcReaderRunnable_ReceiverPort_data1,
    .SwcReaderRunnable_ReceiverPort_cmd = &ImplDE_SwcReader_SwcReaderRunnable_ReceiverPort_cmd,
    .SwcReaderRunnable_ResultPort_data1 = &ImplDE_SwcReader_SwcReaderRunnable_ResultPort_data1,
    .SwcReaderRunnable_AdcResult_data1 = &ImplDE_SwcReader_SwcReaderRunnable_AdcResult_data1,
    .SwcReaderRunnable_WdgM_StateReq_requestedMode = &ImplDE_SwcReader_SwcReaderRunnable_WdgM_StateReq_requestedMode
};
#define SwcReaderType_STOP_SEC_CONST_UNSPECIFIED
#include <SwcReaderType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define SwcReaderType_START_SEC_CONST_UNSPECIFIED
#include <SwcReaderType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_Instance Rte_Inst_SwcReaderType = &SwcReaderType_SwcReader;

#define SwcReaderType_STOP_SEC_CONST_UNSPECIFIED
#include <SwcReaderType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Runnables =================================================================================
 */

/** ------ SwcReader -----------------------------------------------------------------------
 */

#define SwcReaderType_START_SEC_CODE
#include <SwcReaderType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
void Rte_SwcReader_Init(void) {

    /* PRE */

    /* MAIN */

    swcReaderInit();

    /* POST */

}
#define SwcReaderType_STOP_SEC_CODE
#include <SwcReaderType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define SwcReaderType_START_SEC_CODE
#include <SwcReaderType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
void Rte_SwcReader_SwcReaderRunnable(void) {

    /* PRE */
    Rte_Read_SwcReaderType_SwcReader_ReceiverPort_data1(&ImplDE_SwcReader_SwcReaderRunnable_ReceiverPort_data1.value); /*lint !e534 AUTOSAR API */

    Rte_Read_SwcReaderType_SwcReader_ReceiverPort_cmd(&ImplDE_SwcReader_SwcReaderRunnable_ReceiverPort_cmd.value); /*lint !e534 AUTOSAR API */

    /* MAIN */

    swcReaderRunnable();

    /* POST */

    Rte_Write_SwcReaderType_SwcReader_ResultPort_data1(ImplDE_SwcReader_SwcReaderRunnable_ResultPort_data1.value); /*lint !e534 AUTOSAR API */

    Rte_Write_SwcReaderType_SwcReader_AdcResult_data1(ImplDE_SwcReader_SwcReaderRunnable_AdcResult_data1.value); /*lint !e534 AUTOSAR API */

    Rte_Write_SwcReaderType_SwcReader_WdgM_StateReq_requestedMode(ImplDE_SwcReader_SwcReaderRunnable_WdgM_StateReq_requestedMode.value); /*lint !e534 AUTOSAR API */

}
#define SwcReaderType_STOP_SEC_CODE
#include <SwcReaderType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */   

