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

#include "Rte_LightActuator.h"

/** === Runnable Prototypes =======================================================================
 */

/** ------ frontLightActuator -----------------------------------------------------------------------
 */
void Rte_frontLightActuator_LightActuatorMain(void); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */

/** === Inter-Runnable Variable Buffers ===========================================================
 */

/** === Inter-Runnable Variable Functions =========================================================
 */

/** === Implicit Buffer Instances =================================================================
 */
/*lint -e765 AUTOSAR API SWS_MemMap_00003 */
#define LightActuator_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <LightActuator_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_DE_LightStatusImpl ImplDE_frontLightActuator_LightActuatorMain_InteriorLightStatus_status; /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
#define LightActuator_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <LightActuator_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Per Instance Memories =====================================================================
 */

/** === Component Data Structure Instances ========================================================
 */
#define LightActuator_START_SEC_CONST_UNSPECIFIED
#include <LightActuator_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_CDS_LightActuator LightActuator_frontLightActuator = {
    .LightActuatorMain_InteriorLightStatus_status = &ImplDE_frontLightActuator_LightActuatorMain_InteriorLightStatus_status,
    .DigitalLight = {
        .Call_Write = Rte_Call_LightActuator_frontLightActuator_DigitalLight_Write
    }
};
#define LightActuator_STOP_SEC_CONST_UNSPECIFIED
#include <LightActuator_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Runnables =================================================================================
 */

/** ------ frontLightActuator -----------------------------------------------------------------------
 */

#define LightActuator_START_SEC_CODE
#include <LightActuator_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
void Rte_frontLightActuator_LightActuatorMain(void) {

    Rte_Instance self = &LightActuator_frontLightActuator;
    /* PRE */
    Rte_Read_LightActuator_frontLightActuator_InteriorLightStatus_status(
            &ImplDE_frontLightActuator_LightActuatorMain_InteriorLightStatus_status.value); /*lint !e534 AUTOSAR API */

    /* MAIN */

    lightActuatorMain(self);

    /* POST */

}
#define LightActuator_STOP_SEC_CODE
#include <LightActuator_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */   

