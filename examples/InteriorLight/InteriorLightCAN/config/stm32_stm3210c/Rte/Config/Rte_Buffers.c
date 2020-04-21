#include <Rte_Buffers.h>
#include <Rte_BswM_Type.h>
#include <Rte_ComM_Type.h>
#include <Rte_DoorSensor_Type.h>
#include <Rte_EcuM_Type.h>
#include <Rte_InteriorLightManager_Type.h>
#include <Rte_IoHwAb_Type.h>
#include <Rte_LightActuator_Type.h>
#include <Rte_ModeManager_Type.h>

/*lint -e451 AUTOSAR API SWS_MemMap_00003 */
/** === BswM Data =============================================================== */

#define BswM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <BswM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

ComMModeEnum Rte_Buffer_bswM_modeRequestPort_SwcStartCommunication_requestedMode;
#define BswM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <BswM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === ComM Data =============================================================== */

#define ComM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <ComM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
ComM_ModeMachinesType ComM_ModeMachines;
#define ComM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <ComM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === DoorSensor Data =============================================================== */

/** === EcuM Data =============================================================== */

#define EcuM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
EcuM_ModeMachinesType EcuM_ModeMachines;
#define EcuM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <EcuM_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === InteriorLightManager Data =============================================================== */

#define InteriorLightManager_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <InteriorLightManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

DoorStatusImpl Rte_Buffer_lightManager_LeftDoorStatus_status;
#define InteriorLightManager_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <InteriorLightManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
#define InteriorLightManager_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <InteriorLightManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

DoorStatusImpl Rte_Buffer_lightManager_RightDoorStatus_status;
#define InteriorLightManager_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <InteriorLightManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === IoHwAb Data =============================================================== */

/** === LightActuator Data =============================================================== */

#define LightActuator_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <LightActuator_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

LightStatusImpl Rte_Buffer_frontLightActuator_InteriorLightStatus_status;
#define LightActuator_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <LightActuator_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === ModeManager Data =============================================================== */

/** --- RTE Transformer Buffers ------------------------------------------------------------- */

#define Rte_START_SEC_CODE
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
void Rte_Internal_Init_Buffers(void) {
    // Init communication buffers

    // Init mode machine queues

}
#define Rte_STOP_SEC_CODE
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

