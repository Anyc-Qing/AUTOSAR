/*
 * Generator version: 2.0.0
 * AUTOSAR version:   4.1.2
 */

#include "Mcu.h"




const Mcu_ClockSettingConfigType Mcu_ClockSettingConfigData[] = {
   {
      .McuClockReferencePointFrequency = 16000000UL,
      .Pll1    = 3,
      .Pll2    = 83,
      .Pll3    = 5,
      .Pll1_1  = 0, /* Not used */
      .Pll2_1  = 0, /* Not used */
      .Pll3_1  = 0, /* Not used */
      .Pll4    = 0  /* Not used */
   }
,   {
      .McuClockReferencePointFrequency = 8000000UL,
      .Pll1    = 1,
      .Pll2    = 104,
      .Pll3    = 5,
      .Pll1_1  = 0, /* Not used */
      .Pll2_1  = 0, /* Not used */
      .Pll3_1  = 0, /* Not used */
      .Pll4    = 0  /* Not used */
   }
,   {
      .McuClockReferencePointFrequency = 8000000UL,
      .Pll1    = 0,
      .Pll2    = 0,
      .Pll3    = 0,
      .Pll1_1  = 0, /* Not used */
      .Pll2_1  = 0, /* Not used */
      .Pll3_1  = 0, /* Not used */
      .Pll4    = 0  /* Not used */
   }
};

const Mcu_ConfigType McuConfigData[] = {
   {
      .McuNumberOfMcuModes = 3u,
      .McuRamSectors = 0u,
      .McuClockSettings = 3u,
      .McuDefaultClockSettings = McuConf_McuClockSettingConfig_EXT_REF_80MHZ, 
      .McuClockSettingConfig = &Mcu_ClockSettingConfigData[0],
#if defined(USE_DEM)
      .McuClockFailure = DEM_EVENT_ID_NULL,
#endif      
      .McuRamSectorSettingConfig = NULL
   }
};

