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

#include "Mcu.h"



const struct Mcu_Hw_ClockSettings Mcu_Hw_ClockSettingConfig[] = {
	{ 
	/*------ PLL1 -----*/  
	/* Crystal = 16000000.0 */
	/* PLLN = 39 */
	/* PLLM 1 */
    .pll_VCOOUT  =	 320000000uL,

	/* PLL Freq = (crystal * (PLLN+1)) /  {4,6,8,16}[PLLP-2] (PLLP=2,3,4,5) */
	.pll_Clk	 = 80000000uL,
     
    /*------ PLL registers -----*/    
    /*lint -save -e835 Note: A zero has been given as left argument to operator. 
     * This is OK, Mcu.chk will create an error if a value is not allowed to be 0. */
    /*lint -save -e845 Note: The right argument to operator '+' is certain to be 0.
     * This is OK, Mcu.chk will create an error if a value is not allowed to be 0. */
			 
	.pll_PLLxC = ((1uL<<11uL) + \
			  (2uL<<8uL) + \
			  (39uL))
	}
	/*lint -restore -e845 */
	/*lint -restore -e835 */
};

const Mcu_ClockSettingConfigType Mcu_ClockSettingConfigData[] = {
   {
      .McuClockReferencePointFrequency = 16000000UL,
		
	  .Mcu_Hw_ClockSettings = &Mcu_Hw_ClockSettingConfig[0],	
	}

};

const Mcu_ConfigType McuConfigData[] = {
   {
      .McuNumberOfMcuModes = 3u,
      .McuRamSectors = 0u,
      .McuClockSettings = 1u,
      .McuDefaultClockSettings = McuConf_McuClockSettingConfig_McuClockSettingConfig, 
      .McuClockSettingConfig = &Mcu_ClockSettingConfigData[0],
#if defined (USE_DEM)
      .McuClockFailure = 0,
#endif
      .McuRamSectorSettingConfig = NULL
   }
};

