
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

	{   /* Name: GIOA_2, signal: GIOA_2, pin: 9, pad: C1 */
		.regBit = PIN_GIOA_2_REG_BIT,
		.extraBit = PORT_FUNC_INVALID,
		.config    = (PORT_DIR_IN | PORT_PULL_NONE  | PORT_PIN_LEVEL_LOW), /*lint !e845 LINT:CONFIGURATION:<Configuration parameter is static and whenever 0> */
		.mode      = PORT_PIN_MODE_DIO,
		.regOffset = PIN_GIOA_2_REG_OFFSET,
		.extraOffset = PORT_FUNC_INVALID,
		.pinDirectionChangeable = STD_OFF,
		.pinModeChangeable     =  STD_OFF
	},
	{   /* Name: ETPWM1A, signal: ETPWM1A, pin: 14, pad: B5 */
		.regBit = PIN_ETPWM1A_REG_BIT,
		.extraBit = PORT_FUNC_INVALID,
		.config    = (PORT_DIR_OUT | PORT_PULL_NONE  | PORT_PIN_LEVEL_LOW), /*lint !e845 LINT:CONFIGURATION:<Configuration parameter is static and whenever 0> */
		.mode      = PORT_PIN_MODE_PWM,
		.regOffset = PIN_ETPWM1A_REG_OFFSET,
		.extraOffset = PORT_FUNC_INVALID,
		.pinDirectionChangeable = STD_OFF,
		.pinModeChangeable     =  STD_OFF
	},
	{   /* Name: GIOA_6_EPWMA1_IN, signal: GIOA_6, pin: 16, pad: H3 */
		.regBit = PIN_GIOA_6_REG_BIT,
		.extraBit = PORT_FUNC_INVALID,
		.config    = (PORT_DIR_IN | PORT_PULL_NONE  | PORT_PIN_LEVEL_LOW), /*lint !e845 LINT:CONFIGURATION:<Configuration parameter is static and whenever 0> */
		.mode      = PORT_PIN_MODE_DIO,
		.regOffset = PIN_GIOA_6_REG_OFFSET,
		.extraOffset = PORT_FUNC_INVALID,
		.pinDirectionChangeable = STD_OFF,
		.pinModeChangeable     =  STD_OFF
	},
	{   /* Name: ETPWM2A, signal: ETPWM2A, pin: 22, pad: M1 */
		.regBit = PIN_ETPWM2A_REG_BIT,
		.extraBit = PORT_FUNC_INVALID,
		.config    = (PORT_DIR_OUT | PORT_PULL_NONE  | PORT_PIN_LEVEL_LOW), /*lint !e845 LINT:CONFIGURATION:<Configuration parameter is static and whenever 0> */
		.mode      = PORT_PIN_MODE_PWM,
		.regOffset = PIN_ETPWM2A_REG_OFFSET,
		.extraOffset = PORT_FUNC_INVALID,
		.pinDirectionChangeable = STD_OFF,
		.pinModeChangeable     =  STD_OFF
	},
	{   /* Name: MIBSPI5NCS_0, signal: MIBSPI5NCS_0, pin: 32, pad: A5 */
		.regBit = PIN_MIBSPI5NCS_0_REG_BIT_DIO,
		.extraBit = PORT_FUNC_INVALID,
		.config    = (PORT_DIR_OUT | PORT_PULL_NONE  | PORT_PIN_LEVEL_LOW), /*lint !e845 LINT:CONFIGURATION:<Configuration parameter is static and whenever 0> */
		.mode      = PORT_PIN_MODE_DIO_SPI,
		.regOffset = PIN_MIBSPI5NCS_0_REG_OFFSET,
		.extraOffset = PORT_FUNC_INVALID,
		.pinDirectionChangeable = STD_OFF,
		.pinModeChangeable     =  STD_OFF
	},
	{   /* Name: N2HET1_07, signal: N2HET1_07, pin: 33, pad: T1 */
		.regBit = PIN_N2HET1_07_REG_BIT,
		.extraBit = PIN_N2HET1_07_MULTI_REG_BIT,
		.config    = (PORT_DIR_OUT | PORT_PULL_NONE  | PORT_PIN_LEVEL_LOW), /*lint !e845 LINT:CONFIGURATION:<Configuration parameter is static and whenever 0> */
		.mode      = PORT_PIN_MODE_DIO,
		.regOffset = PIN_N2HET1_07_REG_OFFSET,
		.extraOffset = PIN_N2HET1_07_MULTI_REG_OFFSET,
		.pinDirectionChangeable = STD_OFF,
		.pinModeChangeable     =  STD_OFF
	},
	{   /* Name: GIOB_2, signal: GIOB_2, pin: 55, pad: V10 */
		.regBit = PIN_GIOB_2_REG_BIT,
		.extraBit = PORT_FUNC_INVALID,
		.config    = (PORT_DIR_IN | PORT_PULL_NONE  | PORT_PIN_LEVEL_LOW), /*lint !e845 LINT:CONFIGURATION:<Configuration parameter is static and whenever 0> */
		.mode      = PORT_PIN_MODE_DIO,
		.regOffset = PIN_GIOB_2_REG_OFFSET,
		.extraOffset = PORT_FUNC_INVALID,
		.pinDirectionChangeable = STD_OFF,
		.pinModeChangeable     =  STD_OFF
	},
	{   /* Name: MIBSPI1SOMI_1, signal: MIBSPI1SOMI_1, pin: 105, pad: A5 */
		.regBit = PIN_MIBSPI1SOMI_1_REG_BIT,
		.extraBit = PORT_FUNC_INVALID,
		.config    = (PORT_DIR_IN | PORT_PULL_NONE  | PORT_PIN_LEVEL_LOW), /*lint !e845 LINT:CONFIGURATION:<Configuration parameter is static and whenever 0> */
		.mode      = PORT_PIN_MODE_SPI,
		.regOffset = PIN_MIBSPI1SOMI_1_REG_OFFSET,
		.extraOffset = PORT_FUNC_INVALID,
		.pinDirectionChangeable = STD_OFF,
		.pinModeChangeable     =  STD_OFF
	},
	{   /* Name: MIBSPI1SIMO_1, signal: MIBSPI1SIMO_1, pin: 106, pad: A5 */
		.regBit = PIN_MIBSPI1SIMO_1_REG_BIT,
		.extraBit = PORT_FUNC_INVALID,
		.config    = (PORT_DIR_OUT | PORT_PULL_NONE  | PORT_PIN_LEVEL_LOW), /*lint !e845 LINT:CONFIGURATION:<Configuration parameter is static and whenever 0> */
		.mode      = PORT_PIN_MODE_SPI,
		.regOffset = PIN_MIBSPI1SIMO_1_REG_OFFSET,
		.extraOffset = PORT_FUNC_INVALID,
		.pinDirectionChangeable = STD_OFF,
		.pinModeChangeable     =  STD_OFF
	},
	{   /* Name: MIBSPI1NCS_1, signal: MIBSPI1NCS_1, pin: 130, pad: A5 */
		.regBit = PIN_MIBSPI1NCS_1_REG_BIT,
		.extraBit = PORT_FUNC_INVALID,
		.config    = (PORT_DIR_OUT | PORT_PULL_NONE  | PORT_PIN_LEVEL_LOW), /*lint !e845 LINT:CONFIGURATION:<Configuration parameter is static and whenever 0> */
		.mode      = PORT_PIN_MODE_SPI,
		.regOffset = PIN_MIBSPI1NCS_1_REG_OFFSET,
		.extraOffset = PORT_FUNC_INVALID,
		.pinDirectionChangeable = STD_OFF,
		.pinModeChangeable     =  STD_OFF
	},
	{   /* Name: GIOA_3, signal: GIOA_3, pin: 203, pad:  */
		.regBit = PIN_GIOA_3_REG_BIT,
		.extraBit = PORT_FUNC_INVALID,
		.config    = (PORT_DIR_IN | PORT_PULL_NONE  | PORT_PIN_LEVEL_LOW), /*lint !e845 LINT:CONFIGURATION:<Configuration parameter is static and whenever 0> */
		.mode      = PORT_PIN_MODE_DIO,
		.regOffset = PIN_GIOA_3_REG_OFFSET,
		.extraOffset = PORT_FUNC_INVALID,
		.pinDirectionChangeable = STD_OFF,
		.pinModeChangeable     =  STD_OFF
	},
	{   /* Name: MIBSPI5SIMO_1, signal: MIBSPI5SIMO_1, pin: 236, pad: A5 */
		.regBit = PIN_MIBSPI5SIMO_1_REG_BIT_DIO,
		.extraBit = PORT_FUNC_INVALID,
		.config    = (PORT_DIR_OUT | PORT_PULL_NONE  | PORT_PIN_LEVEL_LOW), /*lint !e845 LINT:CONFIGURATION:<Configuration parameter is static and whenever 0> */
		.mode      = PORT_PIN_MODE_DIO_SPI,
		.regOffset = PIN_MIBSPI5SIMO_1_REG_OFFSET,
		.extraOffset = PORT_FUNC_INVALID,
		.pinDirectionChangeable = STD_OFF,
		.pinModeChangeable     =  STD_OFF
	},
	{   /* Name: MIBSPI5SIMO_2, signal: MIBSPI5SIMO_2, pin: 237, pad: A5 */
		.regBit = PIN_MIBSPI5SIMO_2_REG_BIT_DIO,
		.extraBit = PORT_FUNC_INVALID,
		.config    = (PORT_DIR_IN | PORT_PULL_NONE  | PORT_PIN_LEVEL_LOW), /*lint !e845 LINT:CONFIGURATION:<Configuration parameter is static and whenever 0> */
		.mode      = PORT_PIN_MODE_DIO_SPI,
		.regOffset = PIN_MIBSPI5SIMO_2_REG_OFFSET,
		.extraOffset = PORT_FUNC_INVALID,
		.pinDirectionChangeable = STD_OFF,
		.pinModeChangeable     =  STD_OFF
	},

};



const Port_ConfigType PortConfigData =
{
  .padConfig = PortPadConfigData,
};


