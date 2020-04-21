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
/*lint -w2*/
#include "Mcu.h"
 



const Mcu_ClockSettingConfigType Mcu_ClockSettingConfigData[] = {
   {
      .McuClockReferencePointFrequency = 25000000UL,
	  .Pll1    = 9,
      .Pll2    = 8,
      .Pll3    = 0,
   }
};

const Mcu_PerClockConfigType McuPerClockConfigData =
{ 
.AHBClocksEnable  = 0,
.APB1ClocksEnable = 0,
.APB2ClocksEnable =  RCC_APB2Periph_GPIOB };

const Mcu_ConfigType McuConfigData[] = {
   {
      .McuNumberOfMcuModes = 3u,
      .McuRamSectors = 0u,
      .McuClockSettings = 1u,
      .McuDefaultClockSettings = McuConf_McuClockSettingConfig_McuClockSettingConfig, 
      .McuClockSettingConfig = &Mcu_ClockSettingConfigData[0],	

      .McuRamSectorSettingConfig = NULL

   }
};

