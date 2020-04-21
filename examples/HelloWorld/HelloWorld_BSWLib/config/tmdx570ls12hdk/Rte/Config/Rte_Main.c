
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
    Dcm_ModeMachines.dcm.DcmEcuReset_DcmEcuReset.currentMode = 5;
    Dcm_ModeMachines.dcm.DcmEcuReset_DcmEcuReset.nextMode = 7;
    Dcm_ModeMachines.dcm.DcmEcuReset_DcmEcuReset.previousMode = 7;
    Dcm_ModeMachines.dcm.DcmEcuReset_DcmEcuReset.transitionCompleted = FALSE;
    Dcm_ModeMachines.dcm.DcmRapidPowerShutDown_DcmRapidPowerShutDown.currentMode = 1;
    Dcm_ModeMachines.dcm.DcmRapidPowerShutDown_DcmRapidPowerShutDown.nextMode = 2;
    Dcm_ModeMachines.dcm.DcmRapidPowerShutDown_DcmRapidPowerShutDown.previousMode = 2;
    Dcm_ModeMachines.dcm.DcmRapidPowerShutDown_DcmRapidPowerShutDown.transitionCompleted = FALSE;
    Dcm_ModeMachines.dcm.DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel.currentMode = 10;
    Dcm_ModeMachines.dcm.DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel.nextMode = 12;
    Dcm_ModeMachines.dcm.DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel.previousMode = 12;
    Dcm_ModeMachines.dcm.DcmCommunicationControl_ComMChannel_DcmCommunicationControl_ComMChannel.transitionCompleted = FALSE;
    Dcm_ModeMachines.dcm.DcmControlDTCSetting_DcmControlDTCSetting.currentMode = 1;
    Dcm_ModeMachines.dcm.DcmControlDTCSetting_DcmControlDTCSetting.nextMode = 2;
    Dcm_ModeMachines.dcm.DcmControlDTCSetting_DcmControlDTCSetting.previousMode = 2;
    Dcm_ModeMachines.dcm.DcmControlDTCSetting_DcmControlDTCSetting.transitionCompleted = FALSE;
    Dcm_ModeMachines.dcm.DcmDiagnosticSessionControl_DcmDiagnosticSessionControl.currentMode = 0;
    Dcm_ModeMachines.dcm.DcmDiagnosticSessionControl_DcmDiagnosticSessionControl.nextMode = 1;
    Dcm_ModeMachines.dcm.DcmDiagnosticSessionControl_DcmDiagnosticSessionControl.previousMode = 1;
    Dcm_ModeMachines.dcm.DcmDiagnosticSessionControl_DcmDiagnosticSessionControl.transitionCompleted = FALSE;
    EcuM_ModeMachines.ecuM.currentMode_currentMode.currentMode = 4;
    EcuM_ModeMachines.ecuM.currentMode_currentMode.nextMode = 6;
    EcuM_ModeMachines.ecuM.currentMode_currentMode.previousMode = 6;
    EcuM_ModeMachines.ecuM.currentMode_currentMode.transitionCompleted = FALSE;
    WdgM_ModeMachines.wdgm.mode_Supervised100msTask_currentMode.currentMode = 3;
    WdgM_ModeMachines.wdgm.mode_Supervised100msTask_currentMode.nextMode = 255;
    WdgM_ModeMachines.wdgm.mode_Supervised100msTask_currentMode.previousMode = 255;
    WdgM_ModeMachines.wdgm.mode_Supervised100msTask_currentMode.transitionCompleted = FALSE;
    WdgM_ModeMachines.wdgm.globalMode_currentMode.currentMode = 3;
    WdgM_ModeMachines.wdgm.globalMode_currentMode.nextMode = 255;
    WdgM_ModeMachines.wdgm.globalMode_currentMode.previousMode = 255;
    WdgM_ModeMachines.wdgm.globalMode_currentMode.transitionCompleted = FALSE;

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
