
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
#include "Dio_MemMap.h"

const Dio_ChannelType DioChannelTypes[] = { 
	DioConf_DioChannel_Switch7,
	DioConf_DioChannel_LED2,
	DioConf_DioChannel_LED_D3,
	DioConf_DioChannel_LED1,
	DIO_END_OF_LIST
};

const Dio_PortType DioPortConfigData[] = { 
	DioConf_DioPort_PORT_A,
	DioConf_DioPort_PORT_NHET,
	DIO_END_OF_LIST
};

const Dio_ChannelGroupType DioChannelConfigData[] = {
	{ 
	  .port = DIO_END_OF_LIST, 
	  .mask = 0,
	  .offset = 0
	}
};

const Dio_ConfigType DioConfigData = {
    .ChannelConfig = DioChannelTypes,
    .GroupConfig = DioChannelConfigData,
    .PortConfig = DioPortConfigData
};

