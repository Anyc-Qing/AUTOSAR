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

#include "Rte_DoorSensor.h"

/** === Runnable Prototypes =======================================================================
 */

/** ------ leftDoorSensor -----------------------------------------------------------------------
 */
void Rte_leftDoorSensor_DoorSensorMain(void); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
/** ------ rightDoorSensor -----------------------------------------------------------------------
 */
void Rte_rightDoorSensor_DoorSensorMain(void); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */

/** === Inter-Runnable Variable Buffers ===========================================================
 */

/** === Inter-Runnable Variable Functions =========================================================
 */

/** === Implicit Buffer Instances =================================================================
 */
/*lint -e765 AUTOSAR API SWS_MemMap_00003 */
#define DoorSensor_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <DoorSensor_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_DE_DoorStatusImpl ImplDE_leftDoorSensor_DoorSensorMain_DoorStatus_status; /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
#define DoorSensor_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <DoorSensor_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define DoorSensor_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <DoorSensor_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_DE_DoorStatusImpl ImplDE_rightDoorSensor_DoorSensorMain_DoorStatus_status; /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
#define DoorSensor_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <DoorSensor_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Per Instance Memories =====================================================================
 */

/** === Component Data Structure Instances ========================================================
 */
#define DoorSensor_START_SEC_CONST_UNSPECIFIED
#include <DoorSensor_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_CDS_DoorSensor DoorSensor_leftDoorSensor = {
    .DoorSensorMain_DoorStatus_status = &ImplDE_leftDoorSensor_DoorSensorMain_DoorStatus_status,
    .DoorSwitchSignal = {
        .Call_Read = Rte_Call_DoorSensor_leftDoorSensor_DoorSwitchSignal_Read
    }
};
#define DoorSensor_STOP_SEC_CONST_UNSPECIFIED
#include <DoorSensor_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define DoorSensor_START_SEC_CONST_UNSPECIFIED
#include <DoorSensor_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_CDS_DoorSensor DoorSensor_rightDoorSensor = {
    .DoorSensorMain_DoorStatus_status = &ImplDE_rightDoorSensor_DoorSensorMain_DoorStatus_status,
    .DoorSwitchSignal = {
        .Call_Read = Rte_Call_DoorSensor_rightDoorSensor_DoorSwitchSignal_Read
    }
};
#define DoorSensor_STOP_SEC_CONST_UNSPECIFIED
#include <DoorSensor_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Runnables =================================================================================
 */

/** ------ leftDoorSensor -----------------------------------------------------------------------
 */

#define DoorSensor_START_SEC_CODE
#include <DoorSensor_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
void Rte_leftDoorSensor_DoorSensorMain(void) {

    Rte_Instance self = &DoorSensor_leftDoorSensor;
    /* PRE */

    /* MAIN */

    doorSensorMain(self);

    /* POST */

    Rte_Write_DoorSensor_leftDoorSensor_DoorStatus_status(ImplDE_leftDoorSensor_DoorSensorMain_DoorStatus_status.value); /*lint !e534 AUTOSAR API */

}
#define DoorSensor_STOP_SEC_CODE
#include <DoorSensor_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */   

/** ------ rightDoorSensor -----------------------------------------------------------------------
 */

#define DoorSensor_START_SEC_CODE
#include <DoorSensor_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
void Rte_rightDoorSensor_DoorSensorMain(void) {

    Rte_Instance self = &DoorSensor_rightDoorSensor;
    /* PRE */

    /* MAIN */

    doorSensorMain(self);

    /* POST */

    Rte_Write_DoorSensor_rightDoorSensor_DoorStatus_status(ImplDE_rightDoorSensor_DoorSensorMain_DoorStatus_status.value); /*lint !e534 AUTOSAR API */

}
#define DoorSensor_STOP_SEC_CODE
#include <DoorSensor_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */   

