/*-------------------------------- Arctic Core ------------------------------
 * Copyright (C) 2013, ArcCore AB, Sweden, www.arccore.com.
 * Contact: <contact@arccore.com>
 * 
 * You may ONLY use this file:
 * 1)if you have a valid commercial ArcCore license and then in accordance with  
 * the terms contained in the written license agreement between you and ArcCore, 
 * or alternatively
 * 2)if you follow the terms found in GNU General Public License version 2 as 
 * published by the Free Software Foundation and appearing in the file 
 * LICENSE.GPL included in the packaging of this file or here 
 * <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>
 *-------------------------------- Arctic Core -----------------------------*/

/* Generator version: 2.0.0
 * AUTOSAR version:   4.1.2
 */

#if !(((MCU_SW_MAJOR_VERSION == 2) && (MCU_SW_MINOR_VERSION == 0)) )
#error Mcu: Configuration file expected BSW module version to be 2.0.*
#endif

#if !(((MCU_AR_RELEASE_MAJOR_VERSION == 4) && (MCU_AR_RELEASE_MINOR_VERSION == 1)) )
#error Mcu: Configuration file expected AUTOSAR version to be 4.1.*
#endif

#ifndef MCU_CFG_H_
#define MCU_CFG_H_

#define MCU_DEV_ERROR_DETECT               STD_ON
#define MCU_PERFORM_RESET_API              STD_ON
#define MCU_VERSION_INFO_API               STD_ON
#define MCU_NO_PLL                         STD_OFF /* Not supported */
#define MCU_INIT_CLOCK                     STD_ON
#define MCU_GET_RAM_STATE                  STD_OFF /* Not supported */
#define MCU_CLOCK_SRC_FAILURE_NOTIFICATION STD_OFF /* Not supported */


/* Mcu Modes (Symbolic name) */
#define McuConf_McuModeSettingConf_NORMAL (Mcu_ModeType)0u 
#define McuConf_McuModeSettingConf_RUN (Mcu_ModeType)1u 
#define McuConf_McuModeSettingConf_SLEEP (Mcu_ModeType)2u 

/* Mcu Clock Types (Symbolic name) */
#define McuConf_McuClockSettingConfig_McuClockSettingConfig (Mcu_ClockType)0u


/* Configuration Set Handle */
#define McuModuleConfiguration (McuConfigData)
#define Mcu_McuModuleConfiguration (McuConfigData)

/* Peripheral Clock Enable Settings */
#define Mcu_Enable_Timer_1 STD_OFF
#define Mcu_Enable_Timer_2 STD_OFF
#define Mcu_Enable_Timer_3 STD_OFF
#define Mcu_Enable_Timer_4 STD_OFF
#define Mcu_Enable_Timer_5 STD_OFF
#define Mcu_Enable_Timer_6 STD_OFF
#define Mcu_Enable_Timer_7 STD_OFF
#define Mcu_Enable_Timer_8 STD_OFF
#define Mcu_Enable_Timer_9 STD_OFF
#define Mcu_Enable_Timer_10 STD_OFF
#define Mcu_Enable_Timer_11 STD_OFF
#define Mcu_Enable_Timer_12 STD_OFF
#define Mcu_Enable_Timer_13 STD_OFF
#define Mcu_Enable_Timer_14 STD_OFF
#define Mcu_Enable_Timer_15 STD_OFF
#define Mcu_Enable_Timer_16 STD_OFF
#define MCU_CAN0_EN STD_OFF
#define MCU_CAN1_EN STD_OFF

#endif /* MCU_CFG_H_ */

