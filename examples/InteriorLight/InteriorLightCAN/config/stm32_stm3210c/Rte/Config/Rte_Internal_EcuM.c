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
/** ------ SR_User */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_EcuM_ecuM_SR_User_ReleasePOSTRUN(void) {
    return Rte_ecuM_ReleasePOSTRUN(0);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_EcuM_ecuM_SR_User_ReleaseRUN(void) {
    return Rte_ecuM_ReleaseRUN(0);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_EcuM_ecuM_SR_User_RequestPOSTRUN(void) {
    return Rte_ecuM_RequestPOSTRUN(0);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_EcuM_ecuM_SR_User_RequestRUN(void) {
    return Rte_ecuM_RequestRUN(0);
}

/** ------ bootTarget */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_EcuM_ecuM_bootTarget_GetBootTarget(/*OUT*/EcuM_BootTargetType * target) {
    return Rte_ecuM_GetBootTarget(target);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_EcuM_ecuM_bootTarget_SelectBootTarget(/*IN*/EcuM_BootTargetType target) {
    return Rte_ecuM_SelectBootTarget(target);
}

/** ------ currentMode */
Std_ReturnType Rte_Switch_EcuM_ecuM_currentMode_currentMode(/*IN*/uint8 mode) {
    if (EcuM_ModeMachines.ecuM.currentMode_currentMode.nextMode == RTE_TRANSITION_EcuM_ecuM_currentMode_currentMode) {
        {
            SYS_CALL_SuspendOSInterrupts();
            EcuM_ModeMachines.ecuM.currentMode_currentMode.nextMode = mode;
            SYS_CALL_ResumeOSInterrupts();
        }
        // Activate runnables
        SYS_CALL_SetEvent(TASK_ID_OsRteTask, EVENT_MASK_OsInitEvent); /*lint !e534 RTE Requirement */

        return RTE_E_OK;
    } else {
        return RTE_E_LIMIT;
    }
}

/** ------ shutdownTarget */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_EcuM_ecuM_shutdownTarget_GetLastShutdownTarget(/*OUT*/EcuM_StateType * target, /*OUT*/uint8 * mode) {
    return Rte_ecuM_GetLastShutdownTarget(target, mode);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_EcuM_ecuM_shutdownTarget_GetShutdownTarget(/*OUT*/EcuM_StateType * target, /*OUT*/uint8 * mode) {
    return Rte_ecuM_GetShutdownTarget(target, mode);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_EcuM_ecuM_shutdownTarget_SelectShutdownTarget(/*IN*/EcuM_StateType target, /*IN*/uint8 mode) {
    return Rte_ecuM_SelectShutdownTarget(target, mode);
}

#define Rte_STOP_SEC_CODE
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

//lint -restore
