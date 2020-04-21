#include <Rte_Buffers.h>
#include <Rte_BswM_Type.h>
#include <Rte_ComM_Type.h>
#include <Rte_Dcm_Type.h>
#include <Rte_Dem_Type.h>
#include <Rte_Det_Type.h>
#include <Rte_Dlt_Type.h>
#include <Rte_EcuM_Type.h>
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

/**
 * @a2l_measurement Rte_Buffer_bswm_modeRequestPort_SwcStartCommunication_requestedMode
 * @desc 
 * @min 0
 * @max 255
 * @type uint8
 * @vtab ComMModeEnum_def
 * @value 0 COMM_NO_COMMUNICATION
 * @value 1 COMM_SILENT_COMMUNICATION
 * @value 2 COMM_FULL_COMMUNICATION
 */
ComMModeEnum Rte_Buffer_bswm_modeRequestPort_SwcStartCommunication_requestedMode;
#define BswM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <BswM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
#define BswM_START_SEC_VAR_INIT_UNSPECIFIED
#include <BswM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/**
 * @a2l_measurement Rte_Buffer_bswm_modeRequestPort_WdgMMode_requestedMode
 * @desc 
 * @min 0
 * @max 255
 * @type uint8
 * @vtab WdgMModeEnum_def
 * @value 0 SUPERVISION_DEACTIVATED
 * @value 1 SUPERVISION_EXPIRED
 * @value 2 SUPERVISION_FAILED
 * @value 3 SUPERVISION_OK
 * @value 4 SUPERVISION_STOPPED
 */
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

/**
 * @a2l_measurement Rte_Buffer_dcm_DataServices_SRRead1_Data_Data
 * @desc 
 * @min 0
 * @max 65535
 * @type uint16
 * @compu IDENTICAL
 * @scaling f(x) = x
 */
SRRead1_Data_DataType Rte_Buffer_dcm_DataServices_SRRead1_Data_Data;
#define Dcm_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <Dcm_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
#define Dcm_START_SEC_VAR_INIT_UNSPECIFIED
#include <Dcm_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/**
 * @a2l_measurement Rte_Buffer_dcm_DataServices_SRRead2_Data_Data
 * @desc 
 * @min 0
 * @max 65535
 * @type uint16
 * @compu IDENTICAL
 * @scaling f(x) = x
 */
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

/** === IoHwAb Data =============================================================== */

/** === NvM Data =============================================================== */

/** === Os Data =============================================================== */

/** === SwcMemType Data =============================================================== */

/** === SwcReaderType Data =============================================================== */

/** === SwcWriterType Data =============================================================== */

#define SwcWriterType_START_SEC_VAR_INIT_UNSPECIFIED
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/**
 * @a2l_measurement Rte_Buffer_SwcWriter_InputPort_cmd
 * @desc 
 * @min 0
 * @max 255
 * @type uint8
 * @vtab TestCmdType_def
 * @value 0 TESTER_CMD_NONE
 * @value 1 TESTER_CMD_SHUTDOWN
 * @value 2 TESTER_CMD_ENABLE_WDG
 * @value 3 TESTER_CMD_DISABLE_WDG
 * @value 4 TESTER_CMD_STOP_WDG_KICK
 */
TestCmdType Rte_Buffer_SwcWriter_InputPort_cmd;
#define SwcWriterType_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
#define SwcWriterType_START_SEC_VAR_INIT_UNSPECIFIED
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/**
 * @a2l_measurement Rte_Buffer_SwcWriter_InputPort_data1
 * @desc 
 * @min 0
 * @max 4294967295
 * @type uint32
 * @compu IDENTICAL
 * @scaling f(x) = x
 */
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

