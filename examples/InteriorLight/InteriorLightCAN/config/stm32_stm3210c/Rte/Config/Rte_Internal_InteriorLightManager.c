#include <Rte_Internal.h>
#include <Rte_Calprms.h>
#include <Rte_Assert.h>
#include <Rte_Fifo.h>
#include <Com.h>
#include <Os.h>
#include <Ioc.h>
#include <Rte_Buffers.h>

/*lint -e522 lint does not understand that low level calls to void operator are needed */
/*lint -e160 warning only viable if in c++ */
/*lint -e950 asm command needs to be used */
/*lint -e9008 The comma operator is acceptable even with loss of readability */
/*lint -e451 AUTOSAR API */
/*lint -e515 Variable amount of Arguments for SYS_CALLS */
/*lint -e970 Use of types and modifiers acceptable outside of typedefs */
/*lint -e843 AUTOSAR API for memory wrapping */
/*lint -e838 all values must have an assigned value on initialization even if unused */
/*lint -e9018 AUTOSAR API for Union types */
/*lint -e516 Variable argument types for SYS_CALLS */
/*lint -e545 Sending pointer address is legal in ANSI C */

/*lint -e957 Should be fixed, most functions are missing these prototypes */
/** --- SERVER ACTIVATIONS ------------------------------------------------------------------ */

/** --- FUNCTIONS --------------------------------------------------------------------------- */
//lint -save -e715 Ignore unconnected functions
#define Rte_START_SEC_CODE
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
/** ------ FrontLightStatus */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Write_InteriorLightManager_lightManager_FrontLightStatus_status(/*IN*/LightStatusImpl value) {
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Sender (lightManager_FrontLightStatus_to_frontLightActuator_InteriorLightStatus) */
    {
        SYS_CALL_AtomicCopy32(Rte_Buffer_frontLightActuator_InteriorLightStatus_status, value);
    }

    return retVal;
}

/** ------ LeftDoorStatus */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Read_InteriorLightManager_lightManager_LeftDoorStatus_status(/*OUT*/DoorStatusImpl * value) {
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Receiver (leftDoorSensor_DoorStatus_to_lightManager_LeftDoorStatus) */
    {
        SYS_CALL_AtomicCopyBoolean(*value, Rte_Buffer_lightManager_LeftDoorStatus_status);
    }

    return retVal;
}

/** ------ LightStatusOnCommMedia */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Write_InteriorLightManager_lightManager_LightStatusOnCommMedia_message(/*IN*/IntImpl value) {
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Sender (TxMessageiSignal) @req SWS_Rte_04505, @req SWS_Rte_06023 */

    retVal |= Com_SendSignal(ComConf_ComSignal_LightStatus, &value);

    return retVal;
}

/** ------ RearDoorStatus */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Read_InteriorLightManager_lightManager_RearDoorStatus_message(/*OUT*/IntImpl * value) {
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Receiver (RxMessageiSignal) @req SWS_Rte_04505, @req SWS_Rte_06023 */

    retVal |= Com_ReceiveSignal(ComConf_ComSignal_DoorStatus, value);

    return retVal;
}

/** ------ RightDoorStatus */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Read_InteriorLightManager_lightManager_RightDoorStatus_status(/*OUT*/DoorStatusImpl * value) {
    Std_ReturnType retVal = RTE_E_OK;

    /* --- Receiver (rightDoorSensor_DoorStatus_to_lightManager_RightDoorStatus) */
    {
        SYS_CALL_AtomicCopyBoolean(*value, Rte_Buffer_lightManager_RightDoorStatus_status);
    }

    return retVal;
}

#define Rte_STOP_SEC_CODE
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

//lint -restore
