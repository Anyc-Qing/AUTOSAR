
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

#include "Port.h"
#include "Port_MemMap.h"



static const ArcPort_PadConfigType PortPadConfigData[] = {

	{   /* Name: N2HET1_27, signal: N2HET1_27, pin: 4, pad: A5 */
		.regBit = PIN_N2HET1_27_REG_BIT,
		.extraBit = PIN_N2HET1_27_MULTI_REG_BIT,
		.config    = (PORT_DIR_OUT | PORT_PULL_NONE  | PORT_PIN_LEVEL_LOW), /*lint !e845 LINT:CONFIGURATION:<Configuration parameter is static and whenever 0> */
		.mode      = PORT_PIN_MODE_DIO,
		.regOffset = PIN_N2HET1_27_REG_OFFSET,
		.extraOffset = PIN_N2HET1_27_MULTI_REG_OFFSET,
		.pinDirectionChangeable = STD_OFF,
		.pinModeChangeable     =  STD_OFF
	},
	{   /* Name: GIOA_7, signal: GIOA_7, pin: 11, pad: A5 */
		.regBit = PIN_GIOA_7_REG_BIT,
		.extraBit = PORT_FUNC_INVALID,
		.config    = (PORT_DIR_IN | PORT_PULL_NONE  | PORT_PIN_LEVEL_LOW), /*lint !e845 LINT:CONFIGURATION:<Configuration parameter is static and whenever 0> */
		.mode      = PORT_PIN_MODE_DIO,
		.regOffset = PIN_GIOA_7_REG_OFFSET,
		.extraOffset = PORT_FUNC_INVALID,
		.pinDirectionChangeable = STD_OFF,
		.pinModeChangeable     =  STD_OFF
	},
	{   /* Name: ETPWM1A, signal: ETPWM1A, pin: 14, pad: A5 */
		.regBit = PIN_ETPWM1A_REG_BIT,
		.extraBit = PORT_FUNC_INVALID,
		.config    = (PORT_DIR_OUT | PORT_PULL_NONE  | PORT_PIN_LEVEL_LOW), /*lint !e845 LINT:CONFIGURATION:<Configuration parameter is static and whenever 0> */
		.mode      = PORT_PIN_MODE_PWM,
		.regOffset = PIN_ETPWM1A_REG_OFFSET,
		.extraOffset = PORT_FUNC_INVALID,
		.pinDirectionChangeable = STD_OFF,
		.pinModeChangeable     =  STD_OFF
	},
	{   /* Name: N2HET1_05, signal: N2HET1_05, pin: 31, pad: A5 */
		.regBit = PIN_N2HET1_05_REG_BIT,
		.extraBit = PIN_N2HET1_05_MULTI_REG_BIT,
		.config    = (PORT_DIR_OUT | PORT_PULL_NONE  | PORT_PIN_LEVEL_LOW), /*lint !e845 LINT:CONFIGURATION:<Configuration parameter is static and whenever 0> */
		.mode      = PORT_PIN_MODE_DIO,
		.regOffset = PIN_N2HET1_05_REG_OFFSET,
		.extraOffset = PIN_N2HET1_05_MULTI_REG_OFFSET,
		.pinDirectionChangeable = STD_OFF,
		.pinModeChangeable     =  STD_OFF
	},
	{   /* Name: N2HET1_17, signal: N2HET1_17, pin: 130, pad: A5 */
		.regBit = PIN_N2HET1_17_REG_BIT,
		.extraBit = PIN_N2HET1_17_MULTI_REG_BIT,
		.config    = (PORT_DIR_OUT | PORT_PULL_NONE  | PORT_PIN_LEVEL_LOW), /*lint !e845 LINT:CONFIGURATION:<Configuration parameter is static and whenever 0> */
		.mode      = PORT_PIN_MODE_DIO,
		.regOffset = PIN_N2HET1_17_REG_OFFSET,
		.extraOffset = PIN_N2HET1_17_MULTI_REG_OFFSET,
		.pinDirectionChangeable = STD_OFF,
		.pinModeChangeable     =  STD_OFF
	},

};



const Port_ConfigType PortConfigData =
{
  .padConfig = PortPadConfigData,
};


