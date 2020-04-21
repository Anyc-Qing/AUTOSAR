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

/** === Generated API =============================================================================
 */

/** === Runnables =================================================================================
 */
extern void Rte_ledBlinkerSWC_LedBlinkerSWCMain(void);

/** === Tasks =====================================================================================
 */

/*lint -e522 lint does not understand that low level calls to void operator are needed */
/*lint -e160 warning only viable if in c++ */
/*lint -e950 asm command needs to be used*/
/*lint -e9008 The comma operator is acceptable even with loss of readability */

void OsRteTask(void) { /** @req SWS_Rte_02251 */
    EventMaskType Event;

    do {
      //  Rte_ledBlinkerSWC_LedBlinkerSWCMain();
        SYS_CALL_WaitEvent (EVENT_MASK_OsRteEvent); /*lint !e534 RTE Requirement */
        SYS_CALL_GetEvent(TASK_ID_OsRteTask, &Event); /*lint !e534 RTE Requirement */

        if ((Event & EVENT_MASK_OsRteEvent) != 0) {
            SYS_CALL_ClearEvent(EVENT_MASK_OsRteEvent);/*lint !e534 RTE Requirement */
            Rte_ledBlinkerSWC_LedBlinkerSWCMain();
        }
        
    } while (RTE_EXTENDED_TASK_LOOP_CONDITION != 0); /*lint !e506 RTE Requirement */
}

