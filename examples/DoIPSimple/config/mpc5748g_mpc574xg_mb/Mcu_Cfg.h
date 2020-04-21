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

/* Generator version: 3.0.0
 * AUTOSAR version:   4.3.0
 */

#if !(((MCU_SW_MAJOR_VERSION == 3) && (MCU_SW_MINOR_VERSION == 0)) )
#error Mcu: Configuration file expected BSW module version to be 3.0.*
#endif

#if !(((MCU_AR_RELEASE_MAJOR_VERSION == 4) && (MCU_AR_RELEASE_MINOR_VERSION == 3)) )
#error Mcu: Configuration file expected AUTOSAR version to be 4.3.*
#endif

#ifndef MCU_CFG_H_
#define MCU_CFG_H_

#define MCU_DEV_ERROR_DETECT 	           STD_ON 
#define MCU_PERFORM_RESET_API 	           STD_ON
#define MCU_VERSION_INFO_API 	           STD_OFF
#define MCU_NO_PLL                         STD_OFF
#define MCU_INIT_CLOCK                     STD_ON
#define MCU_GET_RAM_STATE                  STD_OFF
#define MCU_CLOCK_SRC_FAILURE_NOTIFICATION STD_OFF


/* Mcu Modes (Symbolic name) */
#define McuConf_McuModeSettingConf_NORMAL (Mcu_ModeType)0u 
#define Mcu_NORMAL McuConf_McuModeSettingConf_NORMAL
#define McuConf_McuModeSettingConf_RUN (Mcu_ModeType)1u 
#define Mcu_RUN McuConf_McuModeSettingConf_RUN
#define McuConf_McuModeSettingConf_SLEEP (Mcu_ModeType)2u 
#define Mcu_SLEEP McuConf_McuModeSettingConf_SLEEP

/* Mcu Clock Types (Symbolic name) */
#define McuConf_McuClockSettingConfig_McuClockSettingConfig (Mcu_ClockType)0u  
#define Mcu_McuClockSettingConfig McuConf_McuClockSettingConfig_McuClockSettingConfig  

/* Mcu Ram Sections */
	

/* Configuration Set Handle */
#define McuModuleConfiguration (McuConfigData)
#define Mcu_McuModuleConfiguration (McuConfigData)

struct Mcu_Hw_ClockSettings {
	uint8 plldv_PREDIV;		
	uint8 plldv_MFD;		
	uint8 plldv_RFDPHI;
	uint8 plldv_RFDPHI1;	
	
	uint8  pllfm_MODEN;
	uint16 pllfm_INCSTP;
    uint16 pllfm_MODPRD;		
};

#endif /* MCU_CFG_H_ */

