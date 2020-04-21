#include <Rte_Buffers.h>
#include <Rte_BswM_Type.h>
#include <Rte_ComM_Type.h>
#include <Rte_Dlt_Type.h>
#include <Rte_EcuM_Type.h>
#include <Rte_IoHwAb_Type.h>
#include <Rte_SwcReaderType_Type.h>
#include <Rte_SwcWriterType_Type.h>

/*lint -e451 AUTOSAR API SWS_MemMap_00003 */
/** === BswM Data =============================================================== */

#define BswM_START_SEC_VAR_INIT_UNSPECIFIED
#include <BswM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

ComMModeEnum Rte_Buffer_bswm_modeRequestPort_SwcStartCommunication_requestedMode;
#define BswM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <BswM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === ComM Data =============================================================== */

#define ComM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <ComM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
ComM_ModeMachinesType ComM_ModeMachines;
#define ComM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <ComM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Dlt Data =============================================================== */

/** === EcuM Data =============================================================== */

#define EcuM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
EcuM_ModeMachinesType EcuM_ModeMachines;
#define EcuM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === IoHwAb Data =============================================================== */

/** === SwcReaderType Data =============================================================== */

/** === SwcWriterType Data =============================================================== */

#define SwcWriterType_START_SEC_VAR_INIT_UNSPECIFIED
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

uint32 Rte_Buffer_SwcWriter_InputPort_data1;
#define SwcWriterType_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <SwcWriterType_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** --- RTE Transformer Buffers ------------------------------------------------------------- */

#define Rte_START_SEC_CODE
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
void Rte_Internal_Init_Buffers(void) {
    // Init communication buffers

    // Init mode machine queues

}
#define Rte_STOP_SEC_CODE
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

