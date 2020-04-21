
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

/* Generator version: 6.0.0
 * AUTOSAR version:   4.3.0
 */

#include "Dio.h"
#include "Dio_Cfg.h"

const Dio_ChannelType DioChannelConfigData[] = { 
	DioConf_DioChannel_LEDS_LED4,
	DioConf_DioChannel_LEDS_LED5,
	DioConf_DioChannel_OUTIN_0,
	DioConf_DioChannel_OUTIN_1,
	DioConf_DioChannel_S1,
	DioConf_DioChannel_SPI_A_HOLD_M95256,
	DioConf_DioChannel_SPI_A_HOLD_S25FL016,
	DioConf_DioChannel_SPI_B_HOLD_M95256,
	DIO_END_OF_LIST
};

const Dio_PortType DioPortConfigData[] = { 
	DioConf_DioPort_LED_PORT,
	DioConf_DioPort_MISC_PORT,
	DioConf_DioPort_PLAY,
	DioConf_DioPort_SPI_HOLD,
	DIO_END_OF_LIST
};

const Dio_ChannelGroupType DioGroupConfigData[] = {
	{
	  .port = DioConf_DioPort_LED_PORT,
	  .mask = 0x30,
	  .offset = 4 /* Calculated from mask */
	},
	{ 
	  .port = DIO_END_OF_LIST, 
	  .mask = 0,
	  .offset = 0
	}
};

const Dio_ConfigType DioConfigData = {
	.ChannelConfig = DioChannelConfigData,
	.GroupConfig = DioGroupConfigData,
	.PortConfig = DioPortConfigData
};

