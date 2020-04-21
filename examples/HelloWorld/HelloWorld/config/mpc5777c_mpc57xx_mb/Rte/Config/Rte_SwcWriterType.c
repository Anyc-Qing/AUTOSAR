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

#include "Rte_SwcWriterType.h"

/** === Runnable Prototypes =======================================================================
 */

/** ------ SwcWriter -----------------------------------------------------------------------
 */
void Rte_SwcWriter_FullCommunication(void); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
void Rte_SwcWriter_Init(void); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
void Rte_SwcWriter_SwcWriterRunnable(void); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */

/** === Inter-Runnable Variable Buffers ===========================================================
 */

/** === Inter-Runnable Variable Functions =========================================================
 */

/** === Implicit Buffer Instances =================================================================
 */
/*lint -e765 AUTOSAR API SWS_MemMap_00003 */
#define SwcWriterType_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_DE_ComMModeEnum ImplDE_SwcWriter_Init_ComMControl_requestedMode; /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
#define SwcWriterType_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define SwcWriterType_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_DE_TestCmdType ImplDE_SwcWriter_SwcWriterRunnable_CommandPort_cmd; /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
#define SwcWriterType_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define SwcWriterType_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_DE_uint32 ImplDE_SwcWriter_SwcWriterRunnable_InputPort_data1; /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
#define SwcWriterType_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define SwcWriterType_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_DE_uint32 ImplDE_SwcWriter_SwcWriterRunnable_SenderPort_data1; /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
#define SwcWriterType_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Per Instance Memories =====================================================================
 */

/** === Component Data Structure Instances ========================================================
 */
#define SwcWriterType_START_SEC_CONST_UNSPECIFIED
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_CDS_SwcWriterType SwcWriterType_SwcWriter = {
    .Init_ComMControl_requestedMode = &ImplDE_SwcWriter_Init_ComMControl_requestedMode,
    .SwcWriterRunnable_CommandPort_cmd = &ImplDE_SwcWriter_SwcWriterRunnable_CommandPort_cmd,
    .SwcWriterRunnable_InputPort_data1 = &ImplDE_SwcWriter_SwcWriterRunnable_InputPort_data1,
    .SwcWriterRunnable_SenderPort_data1 = &ImplDE_SwcWriter_SwcWriterRunnable_SenderPort_data1
};
#define SwcWriterType_STOP_SEC_CONST_UNSPECIFIED
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define SwcWriterType_START_SEC_CONST_UNSPECIFIED
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_Instance Rte_Inst_SwcWriterType = &SwcWriterType_SwcWriter;

#define SwcWriterType_STOP_SEC_CONST_UNSPECIFIED
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Runnables =================================================================================
 */

/** ------ SwcWriter -----------------------------------------------------------------------
 */

#define SwcWriterType_START_SEC_CODE
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
void Rte_SwcWriter_FullCommunication(void) {

    /* PRE */

    /* MAIN */

    SwcWriterCommunication();

    /* POST */

}
#define SwcWriterType_STOP_SEC_CODE
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define SwcWriterType_START_SEC_CODE
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
void Rte_SwcWriter_Init(void) {

    /* PRE */

    /* MAIN */

    SwcWriterInit();

    /* POST */

    Rte_Write_SwcWriterType_SwcWriter_ComMControl_requestedMode(ImplDE_SwcWriter_Init_ComMControl_requestedMode.value); /*lint !e534 AUTOSAR API */

}
#define SwcWriterType_STOP_SEC_CODE
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define SwcWriterType_START_SEC_CODE
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
void Rte_SwcWriter_SwcWriterRunnable(void) {

    /* PRE */
    Rte_Read_SwcWriterType_SwcWriter_CommandPort_cmd(&ImplDE_SwcWriter_SwcWriterRunnable_CommandPort_cmd.value); /*lint !e534 AUTOSAR API */

    Rte_Read_SwcWriterType_SwcWriter_InputPort_data1(&ImplDE_SwcWriter_SwcWriterRunnable_InputPort_data1.value); /*lint !e534 AUTOSAR API */

    /* MAIN */

    swcWriterRunnable();

    /* POST */

    Rte_Write_SwcWriterType_SwcWriter_SenderPort_data1(ImplDE_SwcWriter_SwcWriterRunnable_SenderPort_data1.value); /*lint !e534 AUTOSAR API */

}
#define SwcWriterType_STOP_SEC_CODE
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */   

