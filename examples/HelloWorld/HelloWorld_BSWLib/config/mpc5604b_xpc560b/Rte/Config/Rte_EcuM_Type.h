/**
 * Application Types Header File
 *
 * @req SWS_Rte_07122
 */

/** === HEADER ====================================================================================
 */

#ifndef RTE_ECUM_TYPE_H_
#define RTE_ECUM_TYPE_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/** --- Includes ----------------------------------------------------------------------------------
 * @req SWS_Rte_07127
 */
#include <Rte_Type.h>

/** === BODY ====================================================================================
 */

/** --- ENUMERATION DATA TYPES ------------------------------------------------------------------ */

/** Enum literals for EcuM_BootTargetType */
#ifndef ECUM_BOOT_TARGET_APP
#define ECUM_BOOT_TARGET_APP 0U
#endif /* ECUM_BOOT_TARGET_APP */

#ifndef ECUM_BOOT_TARGET_OEM_BOOTLOADER
#define ECUM_BOOT_TARGET_OEM_BOOTLOADER 1U
#endif /* ECUM_BOOT_TARGET_OEM_BOOTLOADER */

#ifndef ECUM_BOOT_TARGET_SYS_BOOTLOADER
#define ECUM_BOOT_TARGET_SYS_BOOTLOADER 2U
#endif /* ECUM_BOOT_TARGET_SYS_BOOTLOADER */

/** Enum literals for EcuM_StateType */
#ifndef ECUM_STATE_STARTUP
#define ECUM_STATE_STARTUP 16U
#endif /* ECUM_STATE_STARTUP */

#ifndef ECUM_STATE_STARTUP_ONE
#define ECUM_STATE_STARTUP_ONE 17U
#endif /* ECUM_STATE_STARTUP_ONE */

#ifndef ECUM_STATE_STARTUP_TWO
#define ECUM_STATE_STARTUP_TWO 18U
#endif /* ECUM_STATE_STARTUP_TWO */

#ifndef ECUM_STATE_WAKEUP
#define ECUM_STATE_WAKEUP 32U
#endif /* ECUM_STATE_WAKEUP */

#ifndef ECUM_STATE_WAKEUP_ONE
#define ECUM_STATE_WAKEUP_ONE 33U
#endif /* ECUM_STATE_WAKEUP_ONE */

#ifndef ECUM_STATE_WAKEUP_VALIDATION
#define ECUM_STATE_WAKEUP_VALIDATION 34U
#endif /* ECUM_STATE_WAKEUP_VALIDATION */

#ifndef ECUM_STATE_WAKEUP_REACTION
#define ECUM_STATE_WAKEUP_REACTION 35U
#endif /* ECUM_STATE_WAKEUP_REACTION */

#ifndef ECUM_STATE_WAKEUP_TWO
#define ECUM_STATE_WAKEUP_TWO 36U
#endif /* ECUM_STATE_WAKEUP_TWO */

#ifndef ECUM_STATE_WAKEUP_WAKESLEEP
#define ECUM_STATE_WAKEUP_WAKESLEEP 37U
#endif /* ECUM_STATE_WAKEUP_WAKESLEEP */

#ifndef ECUM_STATE_WAKEUP_TTII
#define ECUM_STATE_WAKEUP_TTII 38U
#endif /* ECUM_STATE_WAKEUP_TTII */

#ifndef ECUM_STATE_RUN
#define ECUM_STATE_RUN 48U
#endif /* ECUM_STATE_RUN */

#ifndef ECUM_STATE_APP_RUN
#define ECUM_STATE_APP_RUN 50U
#endif /* ECUM_STATE_APP_RUN */

#ifndef ECUM_STATE_APP_POST_RUN
#define ECUM_STATE_APP_POST_RUN 51U
#endif /* ECUM_STATE_APP_POST_RUN */

#ifndef ECUM_STATE_SHUTDOWN
#define ECUM_STATE_SHUTDOWN 64U
#endif /* ECUM_STATE_SHUTDOWN */

#ifndef ECUM_STATE_PREP_SHUTDOWN
#define ECUM_STATE_PREP_SHUTDOWN 68U
#endif /* ECUM_STATE_PREP_SHUTDOWN */

#ifndef ECUM_STATE_GO_SLEEP
#define ECUM_STATE_GO_SLEEP 73U
#endif /* ECUM_STATE_GO_SLEEP */

#ifndef ECUM_STATE_GO_OFF_ONE
#define ECUM_STATE_GO_OFF_ONE 77U
#endif /* ECUM_STATE_GO_OFF_ONE */

#ifndef ECUM_STATE_GO_OFF_TWO
#define ECUM_STATE_GO_OFF_TWO 78U
#endif /* ECUM_STATE_GO_OFF_TWO */

#ifndef ECUM_STATE_SLEEP
#define ECUM_STATE_SLEEP 80U
#endif /* ECUM_STATE_SLEEP */

#ifndef ECUM_STATE_OFF
#define ECUM_STATE_OFF 128U
#endif /* ECUM_STATE_OFF */

#ifndef ECUM_STATE_RESET
#define ECUM_STATE_RESET 144U
#endif /* ECUM_STATE_RESET */

/** --- MODE TYPES ------------------------------------------------------------------------------ */

#ifndef RTE_MODETYPE_EcuM_Mode
#define RTE_MODETYPE_EcuM_Mode
typedef uint8 Rte_ModeType_EcuM_Mode;
#endif

#ifndef RTE_TRANSITION_EcuM_Mode
#define RTE_TRANSITION_EcuM_Mode 6U
#endif

#ifndef RTE_MODE_EcuM_Mode_POST_RUN
#define RTE_MODE_EcuM_Mode_POST_RUN 0U
#endif

#ifndef RTE_MODE_EcuM_Mode_RUN
#define RTE_MODE_EcuM_Mode_RUN 1U
#endif

#ifndef RTE_MODE_EcuM_Mode_SHUTDOWN
#define RTE_MODE_EcuM_Mode_SHUTDOWN 2U
#endif

#ifndef RTE_MODE_EcuM_Mode_SLEEP
#define RTE_MODE_EcuM_Mode_SLEEP 3U
#endif

#ifndef RTE_MODE_EcuM_Mode_STARTUP
#define RTE_MODE_EcuM_Mode_STARTUP 4U
#endif

#ifndef RTE_MODE_EcuM_Mode_WAKE_SLEEP
#define RTE_MODE_EcuM_Mode_WAKE_SLEEP 5U
#endif

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_07126 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_ECUM_TYPE_H_ */
