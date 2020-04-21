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

#define MCU_DEV_ERROR_DETECT 	           STD_ON 
#define MCU_PERFORM_RESET_API 	           STD_OFF
#define MCU_VERSION_INFO_API 	           STD_OFF
#define MCU_NO_PLL                         STD_OFF
#define MCU_INIT_CLOCK                     STD_ON
#define MCU_GET_RAM_STATE                  STD_OFF
#define MCU_CLOCK_SRC_FAILURE_NOTIFICATION STD_OFF

/* High speed internal osc */
#define MCU_ARC_HS_INT_OSC_FREQUENCY		8000000uL

/* Low speed internal osc */	
#define MCU_ARC_LS_INT_OSC_FREQUENCY		240000uL


/** @req SWS_Mcu_00237 */
/* Mcu Modes (Symbolic name) */
#define McuConf_McuModeSettingConf_NORMAL (Mcu_ModeType)0u 
#define McuConf_McuModeSettingConf_RUN (Mcu_ModeType)1u 

/** @req SWS_Mcu_00232 */
/* Mcu Clock Types (Symbolic name) */
#define McuConf_McuClockSettingConfig_McuClockSettingConfig (Mcu_ClockType)0u  

/** @req SWS_Mcu_00239 */
/* Mcu Ram Sections */
	

/* Configuration Set Handle */
#define McuModuleConfiguration (McuConfigData)
#define Mcu_McuModuleConfiguration (McuConfigData)

struct Mcu_Hw_ClockSettings {
	uint32 pll0_VCOOUT;		/* VCO Frequency */
	uint32 pll0_Clk;		/* Clk Frequency */
	uint32 pll0_PLLxC;		/* Part of control register */

	uint32 pll1_VCOOUT;		/* VCO Frequency */
	uint32 pll1_Clk;		/* Clk Frequency */
	uint32 pll1_PLLxC;		/* Part of control register */
};
 
#endif /* MCU_CFG_H_ */

