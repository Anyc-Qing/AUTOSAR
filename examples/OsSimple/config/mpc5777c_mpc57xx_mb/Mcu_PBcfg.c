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

#include "Mcu.h"



const struct Mcu_Hw_ClockSettings Mcu_Hw_ClockSettingConfig[] = {
	{
      .pll0_PREDIV    = 5, /* PLL0_PREDIV */
	  .pll0_MFD    = 60,    /* PLL_0MFD */  
      .pll0_RFDPHI    = 3,  /* PLL0_RFDPHI */ 
      .pll1_MFD  = 30,    /* PLL1_MFD */
	  .pll1_RFDPHI  = 3,  /* PLL1_RFDPHI */

      .pll1fm_MODEN  = FALSE,  /* PLL1FM_MODEN */
	  .pll1fm_MODPRD  = 0,  /* PLL1FM_MODPRD */
	  .pll1fm_INCSTP  = 0,  /* PLL1FM_INCSTP */

	},
};

const Mcu_ClockSettingConfigType Mcu_ClockSettingConfigData[] = {
   {
      .McuClockReferencePointFrequency = 40000000UL,
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
      .McuClockFailure = DEM_EVENT_ID_NULL,
#endif
      .McuRamSectorSettingConfig = NULL
   }
};

