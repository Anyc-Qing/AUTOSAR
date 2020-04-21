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
/** ------ UM_ComMUser */
Std_ReturnType Rte_Switch_ComM_comM_UM_ComMUser_currentMode(/*IN*/uint8 mode) {
    if (ComM_ModeMachines.comM.UM_ComMUser_currentMode.nextMode == RTE_TRANSITION_ComM_comM_UM_ComMUser_currentMode) {
        {
            SYS_CALL_SuspendOSInterrupts();
            ComM_ModeMachines.comM.UM_ComMUser_currentMode.nextMode = mode;
            SYS_CALL_ResumeOSInterrupts();
        }
        // Activate runnables
        SYS_CALL_SetEvent(TASK_ID_OsRteTask, EVENT_MASK_ComMFullComOsEvent); /*lint !e534 RTE Requirement */

        return RTE_E_OK;
    } else {
        return RTE_E_LIMIT;
    }
}

/** ------ UR_ComMUser */
/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_ComM_comM_UR_ComMUser_GetCurrentComMode(/*OUT*/ComM_ModeType * ComMode) {
    return Rte_comM_GetCurrentComMode(0, ComMode);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_ComM_comM_UR_ComMUser_GetMaxComMode(/*OUT*/ComM_ModeType * ComMode) {
    return Rte_comM_GetMaxComMode(0, ComMode);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_ComM_comM_UR_ComMUser_GetRequestedComMode(/*OUT*/ComM_ModeType * ComMode) {
    return Rte_comM_GetRequestedComMode(0, ComMode);
}

/*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required]*/
Std_ReturnType Rte_Call_ComM_comM_UR_ComMUser_RequestComMode(/*IN*/ComM_ModeType ComMode) {
    return Rte_comM_RequestComMode(0, ComMode);
}

#define Rte_STOP_SEC_CODE
#include <Rte_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

//lint -restore
