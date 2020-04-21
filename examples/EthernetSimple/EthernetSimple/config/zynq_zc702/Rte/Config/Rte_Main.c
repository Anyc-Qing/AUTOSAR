
#include <Rte_Buffers.h>
#include <Rte_Internal.h>
#include <Rte_Fifo.h>
#include <Rte_Calprms.h>
#include <Rte_Main.h>

/** === Lifecycle API =============================================================================
 */
Std_ReturnType Rte_Start(void) {
    // Initialize calibration parameters
    Rte_Init_Calprms();

    // Initialize buffers
    Rte_Internal_Init_Buffers();
    IocInit();

    // Initialize port status

    // Initialize update flags

    // Initialize mode machines
    ComM_ModeMachines.comM.UM_ComMUser_currentMode.currentMode = 1;
    ComM_ModeMachines.comM.UM_ComMUser_currentMode.nextMode = 3;
    ComM_ModeMachines.comM.UM_ComMUser_currentMode.previousMode = 3;
    ComM_ModeMachines.comM.UM_ComMUser_currentMode.transitionCompleted = FALSE;
    EcuM_ModeMachines.ecuM.currentMode_currentMode.currentMode = 4;
    EcuM_ModeMachines.ecuM.currentMode_currentMode.nextMode = 6;
    EcuM_ModeMachines.ecuM.currentMode_currentMode.previousMode = 6;
    EcuM_ModeMachines.ecuM.currentMode_currentMode.transitionCompleted = FALSE;

    // Initialize client-server sequence counters.
    /* @req SWS_Rte_02655 */

    // Initialize runnable minimum start interval alarm.

    RteInitialized = TRUE;
    return RTE_E_OK;
}

Std_ReturnType Rte_Stop(void) {
    RteInitialized = FALSE;
    return RTE_E_OK;
}
