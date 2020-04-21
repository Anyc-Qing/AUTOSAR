#include <Rte_Buffers.h>
#include <Rte_BswM_Type.h>
#include <Rte_ComM_Type.h>
#include <Rte_Dcm_Type.h>
#include <Rte_Dem_Type.h>
#include <Rte_Det_Type.h>
#include <Rte_Dlt_Type.h>
#include <Rte_EcuM_Type.h>
#include <Rte_FiM_Type.h>
#include <Rte_IoHwAb_Type.h>
#include <Rte_NvM_Type.h>
#include <Rte_Os_Type.h>
#include <Rte_SwcMemType_Type.h>
#include <Rte_SwcReaderType_Type.h>
#include <Rte_SwcWriterType_Type.h>
#include <Rte_WdgM_Type.h>

/*lint -e451 AUTOSAR API SWS_MemMap_00003 */
/** === BswM Data =============================================================== */

#define BswM_START_SEC_VAR_INIT_UNSPECIFIED
#include <BswM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

ComMModeEnum Rte_Buffer_bswm_modeRequestPort_SwcStartCommunication_requestedMode;
#define BswM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <BswM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
#define BswM_START_SEC_VAR_INIT_UNSPECIFIED
#include <BswM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

WdgMModeEnum Rte_Buffer_bswm_modeRequestPort_WdgMMode_requestedMode;
#define BswM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <BswM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === ComM Data =============================================================== */

#define ComM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <ComM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
ComM_ModeMachinesType ComM_ModeMachines;
#define ComM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <ComM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Dcm Data =============================================================== */

#define Dcm_START_SEC_VAR_INIT_UNSPECIFIED
#include <Dcm_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

SRRead1_Data_DataType Rte_Buffer_dcm_DataServices_SRRead1_Data_Data;
#define Dcm_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <Dcm_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
#define Dcm_START_SEC_VAR_INIT_UNSPECIFIED
#include <Dcm_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

SRRead2_Data_DataType Rte_Buffer_dcm_DataServices_SRRead2_Data_Data;
#define Dcm_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <Dcm_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define Dcm_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <Dcm_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Dcm_ModeMachinesType Dcm_ModeMachines;
#define Dcm_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <Dcm_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Dem Data =============================================================== */

/** === Det Data =============================================================== */

/** === Dlt Data =============================================================== */

/** === EcuM Data =============================================================== */

#define EcuM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
EcuM_ModeMachinesType EcuM_ModeMachines;
#define EcuM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === FiM Data =============================================================== */

/** === IoHwAb Data =============================================================== */

/** === NvM Data =============================================================== */

/** === Os Data =============================================================== */

/** === SwcMemType Data =============================================================== */

/** === SwcReaderType Data =============================================================== */

/** === SwcWriterType Data =============================================================== */

#define SwcWriterType_START_SEC_VAR_INIT_UNSPECIFIED
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

TestCmdType Rte_Buffer_SwcWriter_InputPort_cmd;
#define SwcWriterType_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
#define SwcWriterType_START_SEC_VAR_INIT_UNSPECIFIED
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

uint32 Rte_Buffer_SwcWriter_InputPort_data1;
#define SwcWriterType_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === WdgM Data =============================================================== */

#define WdgM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <WdgM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
WdgM_ModeMachinesType WdgM_ModeMachines;
#define WdgM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <WdgM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** --- RTE Transformer Buffers ------------------------------------------------------------- */

#define Rte_START_SEC_CODE
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
void Rte_Internal_Init_Buffers(void) {
    // Init communication buffers

    // Init mode machine queues

}
#define Rte_STOP_SEC_CODE
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

