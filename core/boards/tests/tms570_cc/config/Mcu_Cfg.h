
/* Target MCU: MPC551x */

/* @req MCU110 */

#if !(((MCU_SW_MAJOR_VERSION == 2) && (MCU_SW_MINOR_VERSION == 0)) )
#error Mcu: Configuration file expected BSW module version to be 2.0.*
#endif

#if !(((MCU_AR_RELEASE_MAJOR_VERSION == 4) && (MCU_AR_RELEASE_MINOR_VERSION == 1)) )
#error Mcu: Configuration file expected AUTOSAR version to be 4.1.*
#endif
f

#ifndef MCU_CFG_H_
#define MCU_CFG_H_

#define MCU_DEV_ERROR_DETECT               STD_ON
#define MCU_PERFORM_RESET_API              STD_ON
#define MCU_VERSION_INFO_API               STD_ON
#define MCU_NO_PLL                         STD_OFF
#define MCU_INIT_CLOCK                     STD_ON
#define MCU_GET_RAM_STATE                  STD_OFF
#define MCU_CLOCK_SRC_FAILURE_NOTIFICATION STD_OFF

/* @req MCU237 */
typedef enum {
   MCU_MODE_RUN = 0,
   MCU_MODE_SLEEP = 1,
   MCU_MODE_NORMAL = 2
} Mcu_ModeType;
#define MCU_NBR_OF_MCU_MODES	2

/* @req MCU232 */
typedef enum {
   MCU_CLOCKTYPE_EXT_REF_66MHZ = 0,
   MCU_CLOCKTYPE_EXT_REF_80MHZ = 1,
   MCU_CLOCKTYPE_XOSC_CAN = 2,
   MCU_NBR_OF_CLOCKS,
} Mcu_ClockType;

/* @req MCU239 */
#define MCU_NBR_OF_RAM_SECTIONS	0

#define MCU_DEFAULT_CONFIG McuConfigData[0]

#endif /* MCU_CFG_H_ */
