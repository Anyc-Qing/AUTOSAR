
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

/* Generator version: 5.0.1
 * AUTOSAR version:   4.1.2
 */

#include "Port.h"
#include "Port_MemMap.h"



static const ArcPort_PadConfigType PortPadConfigData[] = {

	{   /* Name: N2HET1_17_A13_OUT, signal: N2HET1_17_A13_OUT, pin: 12, pad: A13 */
		.regBit    = PIN_N2HET1_17_A13_OUT_REG_BIT,
		.extraBit = PIN_N2HET1_17_A13_OUT_MULTI_REG_BIT,
		.config    = (PORT_DIR_OUT | PORT_PULL_NONE  | PORT_PIN_LEVEL_LOW),
		.mode      = PORT_PIN_MODE_DIO,
		.regOffset = PIN_N2HET1_17_A13_OUT_REG_OFFSET,
		.extraOffset = PIN_N2HET1_17_A13_OUT_MULTI_REG_OFFSET,
		.pinDirectionChangeable = STD_OFF,
		.pinModeChangeable     =  STD_OFF
	},

};



const Port_ConfigType PortConfigData =
{
  .padConfig = PortPadConfigData,
};


