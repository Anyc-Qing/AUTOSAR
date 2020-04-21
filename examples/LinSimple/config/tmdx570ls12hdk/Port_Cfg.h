
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

#if !(((PORT_SW_MAJOR_VERSION == 6) && (PORT_SW_MINOR_VERSION == 0)) )
#error Port: Configuration file expected BSW module version to be 6.0.*
#endif

#if !(((PORT_AR_RELEASE_MAJOR_VERSION == 4) && (PORT_AR_RELEASE_MINOR_VERSION == 3)) )
#error Port: Configuration file expected AUTOSAR version to be 4.3.*
#endif

#ifndef PORT_CFG_H_
#define PORT_CFG_H_

#include "PortDefs.h"

#define	PORT_VERSION_INFO_API			STD_ON
#define	PORT_DEV_ERROR_DETECT			STD_ON
#define PORT_SET_PIN_MODE_API			STD_OFF
#define PORT_SET_PIN_DIRECTION_API		STD_ON
 
#define PORT_DIR_IN         (1u << 0)
#define PORT_DIR_OUT        ((uint32)1 << 1)
#define PORT_ODE_ENABLE     ((uint32)1u << 2)
#define PORT_PULL_NONE		((uint32)1u << 3)
#define PORT_PULL_UP        ((uint32)1u << 4)
#define PORT_PULL_DOWN      (1u << 5)
#define PORT_PIN_LEVEL_HIGH ((uint32)1u << 6)
#define PORT_PIN_LEVEL_LOW  ((uint32)0u << 6)
#define PORT_PIN_N2HET2  	(1u << 7)

#define PORT_PIN_DIO_SPI1 		(0u << 8u)
#define PORT_PIN_DIO_SPI2 		(1u << 8u)
#define PORT_PIN_DIO_SPI3		(2u << 8u)
#define PORT_PIN_DIO_SPI4 		(3u << 8u)
#define PORT_PIN_DIO_SPI5 		(4u << 8u)

#define PORT_FUNC0          0u
#define PORT_FUNC1          1u
#define PORT_FUNC2          2u
#define PORT_FUNC3          3u

#define PORT_FUNC_INVALID   (0xFFu)



#define	PORT_GPDO_RESET		(0)
#define	PORT_GPDO_HIGH		(1)

#define PORT_PIN_MODE_DIO 0
#define PORT_PIN_MODE_DIO_SPI 1
#define PORT_PIN_MODE_DIO_ADC 2
#define PORT_PIN_MODE_PWM 3 
#define PORT_PIN_MODE_SPI 4 

/* Mode specific function resolving */
#define PORT_INVALID_REG	((uint16)0xFFFFu)
/**
  * @brief   Pad Configuration Type - Arccore Internal
  */
typedef struct {
	uint32 regBit;     /**< @brief Used as pin for GIO ports and as bit for PINMMR regs.  */
	uint32 extraBit;   /**< @brief Used for PINMMR bit for some multiplexed func/GIO pins */
	uint32 config;     /**< @brief Configuration value used for GIO ports used while initializing port pin */
	uint8 mode;        /**< @brief Mode of the pin */
	uint8 regOffset;   /**< @brief Used as identifier of GIO port reg number and PINMMR reg number */
	uint8 extraOffset; /**< @brief Used for PINMMR register for some multiplexed func/GIO pins */
	boolean pinDirectionChangeable;/**< @brief Parameter to indicate whether the direction of the pin is changeable or not*/
	boolean pinModeChangeable;     /**< @brief Parameter to indicate whether the mode of the pin is changeable or not*/
} ArcPort_PadConfigType;

/**
  * @brief  Port_ConfigType - Type of the external data structure containing the initialization data for this module 
  */
typedef struct
{
	const ArcPort_PadConfigType *padConfig; /**< @brief Pointer that holds all the values used for configuring the port pins */
} Port_ConfigType;


#define PortConf_PortPin_GIOA_2 ((Port_PinType)0)
#define PortConf_PortPin_ETPWM1A ((Port_PinType)1)
#define PortConf_PortPin_GIOA_6_EPWMA1_IN ((Port_PinType)2)
#define PortConf_PortPin_ETPWM2A ((Port_PinType)3)
#define PortConf_PortPin_MIBSPI5NCS_0 ((Port_PinType)4)
#define PortConf_PortPin_N2HET1_07 ((Port_PinType)5)
#define PortConf_PortPin_GIOB_2 ((Port_PinType)6)
#define PortConf_PortPin_MIBSPI1SOMI_1 ((Port_PinType)7)
#define PortConf_PortPin_MIBSPI1SIMO_1 ((Port_PinType)8)
#define PortConf_PortPin_MIBSPI1NCS_1 ((Port_PinType)9)
#define PortConf_PortPin_GIOA_3 ((Port_PinType)10)
#define PortConf_PortPin_MIBSPI5SIMO_1 ((Port_PinType)11)
#define PortConf_PortPin_MIBSPI5SIMO_2 ((Port_PinType)12)

#define PORT_NR_PINS	13u

extern const Port_ConfigType PortConfigData;

/* Configuration Set Handles */
#define PortConfigSet (&PortConfigData)
#define Port_PortConfigSet (&PortConfigData)


#endif /* PORT_CFG_H_ */
