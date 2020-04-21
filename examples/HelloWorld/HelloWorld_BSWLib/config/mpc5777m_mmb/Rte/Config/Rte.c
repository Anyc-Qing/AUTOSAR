/**
 * Generated RTE
 *
 * @req SWS_Rte_01169
 */

/** === HEADER ====================================================================================
 */

/** @req SWS_Rte_01279 */
#include <Rte.h>

/** @req SWS_Rte_01257 */
#include <Os.h>

#if ((OS_AR_RELEASE_MAJOR_VERSION != RTE_AR_RELEASE_MAJOR_VERSION) || (OS_AR_RELEASE_MINOR_VERSION != RTE_AR_RELEASE_MINOR_VERSION))
#error Os version mismatch
#endif

/** @req SWS_Rte_03794 */
#include <Com.h>

#if ((COM_AR_RELEASE_MAJOR_VERSION != RTE_AR_RELEASE_MAJOR_VERSION) || (COM_AR_RELEASE_MINOR_VERSION != RTE_AR_RELEASE_MINOR_VERSION))
#error Com version mismatch
#endif

/** @req SWS_Rte_01326 */
#include <Rte_Hook.h>

#include <Rte_Internal.h>

#include <Ioc.h>

/** === Os Macros =================================================================================
 */

#define END_OF_TASK(taskName) SYS_CALL_TerminateTask()

#define ARC_STRINGIFY(value)  ARC_STRINGIFY2(value)
#define ARC_STRINGIFY2(value) #value

#if defined(ARC_INJECTED_HEADER_RTE_C)
#define  THE_INCLUDE ARC_STRINGIFY(ARC_INJECTED_HEADER_RTE_C)
#include THE_INCLUDE
#undef   THE_INCLUDE
#endif

#if !defined(RTE_EXTENDED_TASK_LOOP_CONDITION)
#define RTE_EXTENDED_TASK_LOOP_CONDITION 1
#endif

extern EcuM_ModeMachinesType EcuM_ModeMachines; /*lint -e9003 RTE Requirement */
extern WdgM_ModeMachinesType WdgM_ModeMachines; /*lint -e9003 RTE Requirement */

/** === Generated API =============================================================================
 */

/** === Runnables =================================================================================
 */
extern void Rte_SwcMem_Init(void);
extern void Rte_SwcReader_Init(void);
extern void Rte_SwcReader_SwcReaderRunnable(void);
extern void Rte_SwcWriter_Init(void);

/** === Tasks =====================================================================================
 */

/*lint -e522 lint does not understand that low level calls to void operator are needed */
/*lint -e160 warning only viable if in c++ */
/*lint -e950 asm command needs to be used*/
/*lint -e9008 The comma operator is acceptable even with loss of readability */

void OsRteTask(void) { /** @req SWS_Rte_02251 */
    EventMaskType Event;

    do {
        SYS_CALL_WaitEvent(EVENT_MASK_ModeSwitchOsEvent | EVENT_MASK_WatchdogModeSwitchEvent); /*lint !e534 RTE Requirement */
        SYS_CALL_GetEvent(TASK_ID_OsRteTask, &Event); /*lint !e534 RTE Requirement */

        if ((Event & (EVENT_MASK_ModeSwitchOsEvent)) != 0) {
            /* Check that a switch has been requested (nextMode is not a transition) */
            if (EcuM_ModeMachines.ecuM.currentMode_currentMode.nextMode != RTE_TRANSITION_EcuM_ecuM_currentMode_currentMode) {
                EcuM_ModeMachines.ecuM.currentMode_currentMode.previousMode = EcuM_ModeMachines.ecuM.currentMode_currentMode.currentMode;
                EcuM_ModeMachines.ecuM.currentMode_currentMode.currentMode = RTE_TRANSITION_EcuM_ecuM_currentMode_currentMode; /* Indicate ongoing transition */

                /* Activate runnables ON-EXIT */
                if (EcuM_ModeMachines.ecuM.currentMode_currentMode.previousMode == RTE_MODE_EcuM_ecuM_currentMode_currentMode_STARTUP) {
                    Rte_SwcMem_Init();
                }
                if (EcuM_ModeMachines.ecuM.currentMode_currentMode.previousMode == RTE_MODE_EcuM_ecuM_currentMode_currentMode_STARTUP) {
                    Rte_SwcReader_Init();
                }
                if (EcuM_ModeMachines.ecuM.currentMode_currentMode.previousMode == RTE_MODE_EcuM_ecuM_currentMode_currentMode_STARTUP) {
                    Rte_SwcWriter_Init();
                }
            }
        }
        if ((Event & (EVENT_MASK_WatchdogModeSwitchEvent)) != 0) {
            /* Check that a switch has been requested (nextMode is not a transition) */
            if (WdgM_ModeMachines.wdgm.mode_Supervised100msTask_currentMode.nextMode
                    != RTE_TRANSITION_WdgM_wdgm_mode_Supervised100msTask_currentMode) {
                WdgM_ModeMachines.wdgm.mode_Supervised100msTask_currentMode.previousMode =
                        WdgM_ModeMachines.wdgm.mode_Supervised100msTask_currentMode.currentMode;
                WdgM_ModeMachines.wdgm.mode_Supervised100msTask_currentMode.currentMode =
                        RTE_TRANSITION_WdgM_wdgm_mode_Supervised100msTask_currentMode; /* Indicate ongoing transition */

            }
        }

        if ((Event & (EVENT_MASK_ModeSwitchOsEvent)) != 0) {
            /* Check that a transition is ongoing */
            if (EcuM_ModeMachines.ecuM.currentMode_currentMode.currentMode == RTE_TRANSITION_EcuM_ecuM_currentMode_currentMode) {

                EcuM_ModeMachines.ecuM.currentMode_currentMode.currentMode = EcuM_ModeMachines.ecuM.currentMode_currentMode.nextMode;
                EcuM_ModeMachines.ecuM.currentMode_currentMode.nextMode = RTE_TRANSITION_EcuM_ecuM_currentMode_currentMode; /* Indicate that no transition is requested (nextMode can be a transition) */
                EcuM_ModeMachines.ecuM.currentMode_currentMode.transitionCompleted = TRUE;
            }
        }
        if ((Event & (EVENT_MASK_WatchdogModeSwitchEvent)) != 0) {
            /* Check that a transition is ongoing */
            if (WdgM_ModeMachines.wdgm.mode_Supervised100msTask_currentMode.currentMode
                    == RTE_TRANSITION_WdgM_wdgm_mode_Supervised100msTask_currentMode) {

                /* Activate runnables ON-ENTRY */
                if (WdgM_ModeMachines.wdgm.mode_Supervised100msTask_currentMode.nextMode
                        == RTE_MODE_WdgM_wdgm_mode_Supervised100msTask_currentMode_SUPERVISION_FAILED) {
                    Rte_SwcReader_SwcReaderRunnable();
                }

                WdgM_ModeMachines.wdgm.mode_Supervised100msTask_currentMode.currentMode =
                        WdgM_ModeMachines.wdgm.mode_Supervised100msTask_currentMode.nextMode;
                WdgM_ModeMachines.wdgm.mode_Supervised100msTask_currentMode.nextMode = RTE_TRANSITION_WdgM_wdgm_mode_Supervised100msTask_currentMode; /* Indicate that no transition is requested (nextMode can be a transition) */
                WdgM_ModeMachines.wdgm.mode_Supervised100msTask_currentMode.transitionCompleted = TRUE;
            }
        }
        /* Clear event set by ModeSwitch */
        if ((Event & EVENT_MASK_ModeSwitchOsEvent) != 0) {
            SYS_CALL_ClearEvent (EVENT_MASK_ModeSwitchOsEvent); /*lint !e534 RTE Requirement */
        }
        /* Clear event set by ModeSwitch */
        if ((Event & EVENT_MASK_WatchdogModeSwitchEvent) != 0) {
            SYS_CALL_ClearEvent (EVENT_MASK_WatchdogModeSwitchEvent); /*lint !e534 RTE Requirement */
        }

        EcuM_ModeMachines.ecuM.currentMode_currentMode.transitionCompleted = FALSE;
        WdgM_ModeMachines.wdgm.mode_Supervised100msTask_currentMode.transitionCompleted = FALSE;

    } while (RTE_EXTENDED_TASK_LOOP_CONDITION != 0); /*lint !e506 RTE Requirement */
}

