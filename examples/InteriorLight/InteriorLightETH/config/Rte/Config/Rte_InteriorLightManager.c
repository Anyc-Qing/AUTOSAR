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

#include "Rte_InteriorLightManager.h"

/** === Runnable Prototypes =======================================================================
 */

/** ------ lightManager -----------------------------------------------------------------------
 */
void Rte_lightManager_InteriorLightManagerMain(void); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */

/** === Inter-Runnable Variable Buffers ===========================================================
 */

/** === Inter-Runnable Variable Functions =========================================================
 */

/** === Implicit Buffer Instances =================================================================
 */
/*lint -e765 AUTOSAR API SWS_MemMap_00003 */
#define InteriorLightManager_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <InteriorLightManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_DE_LightStatusImpl ImplDE_lightManager_InteriorLightManagerMain_FrontLightStatus_status; /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
#define InteriorLightManager_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <InteriorLightManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define InteriorLightManager_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <InteriorLightManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_DE_DoorStatusImpl ImplDE_lightManager_InteriorLightManagerMain_LeftDoorStatus_status; /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
#define InteriorLightManager_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <InteriorLightManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define InteriorLightManager_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <InteriorLightManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_DE_IntImpl ImplDE_lightManager_InteriorLightManagerMain_LightStatusOnCommMedia_message; /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
#define InteriorLightManager_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <InteriorLightManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define InteriorLightManager_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <InteriorLightManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_DE_IntImpl ImplDE_lightManager_InteriorLightManagerMain_RearDoorStatus_message; /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
#define InteriorLightManager_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <InteriorLightManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define InteriorLightManager_START_SEC_VAR_CLEARED_UNSPECIFIED
#include <InteriorLightManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Rte_DE_DoorStatusImpl ImplDE_lightManager_InteriorLightManagerMain_RightDoorStatus_status; /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
#define InteriorLightManager_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include <InteriorLightManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Per Instance Memories =====================================================================
 */

/** === Component Data Structure Instances ========================================================
 */
#define InteriorLightManager_START_SEC_CONST_UNSPECIFIED
#include <InteriorLightManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_CDS_InteriorLightManager InteriorLightManager_lightManager = {
    .InteriorLightManagerMain_RearDoorStatus_message = &ImplDE_lightManager_InteriorLightManagerMain_RearDoorStatus_message,
    .InteriorLightManagerMain_RightDoorStatus_status = &ImplDE_lightManager_InteriorLightManagerMain_RightDoorStatus_status,
    .InteriorLightManagerMain_LeftDoorStatus_status = &ImplDE_lightManager_InteriorLightManagerMain_LeftDoorStatus_status,
    .InteriorLightManagerMain_FrontLightStatus_status = &ImplDE_lightManager_InteriorLightManagerMain_FrontLightStatus_status,
    .InteriorLightManagerMain_LightStatusOnCommMedia_message = &ImplDE_lightManager_InteriorLightManagerMain_LightStatusOnCommMedia_message
};
#define InteriorLightManager_STOP_SEC_CONST_UNSPECIFIED
#include <InteriorLightManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define InteriorLightManager_START_SEC_CONST_UNSPECIFIED
#include <InteriorLightManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_Instance Rte_Inst_InteriorLightManager = &InteriorLightManager_lightManager;

#define InteriorLightManager_STOP_SEC_CONST_UNSPECIFIED
#include <InteriorLightManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Runnables =================================================================================
 */

/** ------ lightManager -----------------------------------------------------------------------
 */

#define InteriorLightManager_START_SEC_CODE
#include <InteriorLightManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
void Rte_lightManager_InteriorLightManagerMain(void) {

    /* PRE */
    Rte_Read_InteriorLightManager_lightManager_RearDoorStatus_message(&ImplDE_lightManager_InteriorLightManagerMain_RearDoorStatus_message.value); /*lint !e534 AUTOSAR API */

    Rte_Read_InteriorLightManager_lightManager_RightDoorStatus_status(&ImplDE_lightManager_InteriorLightManagerMain_RightDoorStatus_status.value); /*lint !e534 AUTOSAR API */

    Rte_Read_InteriorLightManager_lightManager_LeftDoorStatus_status(&ImplDE_lightManager_InteriorLightManagerMain_LeftDoorStatus_status.value); /*lint !e534 AUTOSAR API */

    /* MAIN */

    interiorLightManagerMain();

    /* POST */

    Rte_Write_InteriorLightManager_lightManager_FrontLightStatus_status(ImplDE_lightManager_InteriorLightManagerMain_FrontLightStatus_status.value); /*lint !e534 AUTOSAR API */

    Rte_Write_InteriorLightManager_lightManager_LightStatusOnCommMedia_message(
            ImplDE_lightManager_InteriorLightManagerMain_LightStatusOnCommMedia_message.value); /*lint !e534 AUTOSAR API */

}
#define InteriorLightManager_STOP_SEC_CODE
#include <InteriorLightManager_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */   

