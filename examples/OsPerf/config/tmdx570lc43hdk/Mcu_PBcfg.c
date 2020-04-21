
#include "Mcu.h"



const Mcu_ClockSettingConfigType Mcu_ClockSettingConfigData[] = {
   {
      .McuClockReferencePointFrequency = 16000000UL,
	  .NR    = 8,
      .NF    = 150,
      .ODPLL = 1,
      .R     = 1
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

