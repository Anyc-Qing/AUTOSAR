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



#define DIV1_SH		20u
#define DIV0_SH		8u
#define ACT0_SH		0u
#define ACT1_SH		1u
#define SRCSEL_SH       4u
#define MIO             0u
#define EMIO            1u
#define UNSET           0u

/*lint -save -e835 -e845
 * A zero has been given as left argument to operator '<<'
 * A zero has been given as right argument to operator '+'
 * The right argument to operator '+' is certain to be 0 */
const Mcu_ClockSettingConfigType Mcu_ClockSettingConfigData[] = {
   {
      .McuClockReferencePointFrequency = 33000000UL,

		//	1320000000 Hz 
		.ARM_PLL_CFG =	((uint32)250<<12u) +  	
						((uint32)2<<8u) + 
						((uint32)2<<4u),
		.ARM_PLL_CTRL = ((uint32)40<<12u),

		//	990000000 Hz
		.IO_PLL_CFG =	((uint32)325<<12u) +  	
						((uint32)2<<8u) + 
						((uint32)12<<4u),
		.IO_PLL_CTRL = 	((uint32)30<<12u),

		/* CAN */
		.CAN_CLK_CTRL 	= 	((uint32)0<<DIV0_SH) + ((uint32)0<<DIV1_SH) +
							((uint32)0<<ACT0_SH) + ((uint32)0<<ACT1_SH), 
		.CAN_MIOCLK_CTRL = 	(0), 
		
		/* CPU */
		.ARM_CLK_CTRL 	= 	((uint32)1<<28u) +
							((uint32)1<<27u) +
							((uint32)1<<26u) +
							((uint32)1<<25u) +
							((uint32)1<<24u) +
							((uint32)2<<DIV0_SH),		
							
		.GEM0_CLK_CTRL = 	((uint32)5<<DIV1_SH) +
							((uint32)8<<DIV0_SH) +
							(1),							 	
		.GEM0_RCLK_CTRL = 	((uint32)MIO<<SRCSEL_SH) +	
		                                       (1), 						 	

		.GEM1_CLK_CTRL = 	((uint32)0<<DIV1_SH) +
							((uint32)0<<DIV0_SH) +
							(0),							 	

		.GEM1_RCLK_CTRL = 	((uint32)UNSET<<SRCSEL_SH) +
							(0),							 	

		.SMC_CLK_CTRL = 	((uint32)0<<DIV0_SH) +
							(0),							 	

		.LQSPI_CLK_CTRL = 	((uint32)0<<DIV0_SH) +
							(0),

		.SDIO_CLK_CTRL = 	((uint32)0<<DIV0_SH) +
							(0) +
							((uint32)0<<ACT1_SH),

		.UART_CLK_CTRL = 	((uint32)0<<DIV0_SH) +
							(0) +
							((uint32)0<<ACT1_SH),

		.SPI_CLK_CTRL = 	((uint32)1<<DIV0_SH) +
							(0) +
							((uint32)0<<ACT1_SH),

		.PCAP_CLK_CTRL = 	((uint32)0<<DIV0_SH) +
							(0),
   }
};
/*lint -restore*/

const Mcu_ConfigType McuConfigData[] = {
   {
      .McuNumberOfMcuModes = 3u,
      .McuRamSectors = 0u,
      .McuClockSettings = 1u,
      .McuDefaultClockSettings = McuConf_McuClockSettingConfig_Cpu667Mhz, 
      .McuClockSettingConfig = &Mcu_ClockSettingConfigData[0],
#if defined (USE_DEM)
      .McuClockFailure = 0u,
#endif
      .McuRamSectorSettingConfig = NULL
   }
};

