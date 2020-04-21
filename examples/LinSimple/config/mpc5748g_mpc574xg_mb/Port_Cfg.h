
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

#ifndef PORT_CFG_H_
#define PORT_CFG_H_

#if !(((PORT_SW_MAJOR_VERSION == 5) && (PORT_SW_MINOR_VERSION == 0)) )
#error Port: Configuration file expected BSW module version to be 5.0.*
#endif

#if !(((PORT_AR_RELEASE_MAJOR_VERSION == 4) && (PORT_AR_RELEASE_MINOR_VERSION == 1)) )
#error Port: Configuration file expected AUTOSAR version to be 4.1.*
#endif


#define	PORT_VERSION_INFO_API			STD_OFF
#define	PORT_DEV_ERROR_DETECT			STD_ON
#define PORT_SET_PIN_MODE_API			STD_OFF
#define PORT_SET_PIN_DIRECTION_API		STD_OFF

#if defined(CFG_MPC5744P) || defined(CFG_MPC5777M) || defined (CFG_MPC5748G) || defined (CFG_MPC5747C) || defined (CFG_MPC5746C)
#define     PORT_PULL_UP        (3uL<<16u)
#define     PORT_PULL_DOWN      (1uL<<16u)
#define     PORT_PULL_NONE      0u
#define     PORT_SLEW_RATE_MIN  (0uL<<28u)
#define     PORT_SLEW_RATE_MED  (1uL<<28u)
#define     PORT_SLEW_RATE_MAX  (3uL<<28u)
#define     PORT_HYS_ENABLE     (1uL<<18u)
#define     PORT_IBE_ENABLE     (1uL<<19u)
#define     PORT_APC_ENABLE     (1uL<<22u)
#if !defined(CFG_MPC5777M)
#define     PORT_ODE_ENABLE     (1uL<<24u)
#define     PORT_OBE_ENABLE     (1uL<<25u)
#endif
#define     PORT_FUNC0          0u
#define     PORT_FUNC1          1u
#define     PORT_FUNC2          2u
#define     PORT_FUNC3          3u
#define     PORT_FUNC4          4u
#define     PORT_FUNC5          5u
#define     PORT_FUNC6          6u
#define     PORT_FUNC7          7u
#define     PORT_FUNC8          8u
#define     PORT_FUNC9          9u
#define     PORT_FUNC10         10u
#define     PORT_FUNC11         11u
#define     PORT_FUNC12         12u
#define     PORT_FUNC13         13u
#define     PORT_FUNC14         14u
#define     PORT_FUNC15         15u
#define     PORT_FUNCADC        PORT_APC_ENABLE

#elif defined(CFG_TMS570)
#define     PORT_FUNC0          0u
#define     PORT_FUNC1          1u
#define     PORT_FUNC2          2u
#define     PORT_FUNC3          3u

#else
#define     PORT_BIT0           (1uL<<15u)
#define     PORT_BIT1           (1uL<<14u)
#define     PORT_BIT2           (1uL<<13u)
#define     PORT_BIT3           (1uL<<12u)
#define     PORT_BIT4           (1uL<<11u)
#define     PORT_BIT5           (1uL<<10u)
#define     PORT_BIT6           (1uL<<9u)
#define     PORT_BIT7           (1uL<<8u)
#define     PORT_BIT8           (1uL<<7u)
#define     PORT_BIT9           (1uL<<6u)
#define     PORT_BIT10          (1uL<<5u)
#define     PORT_BIT11          (1uL<<4u)
#define     PORT_BIT12          (1uL<<3u)
#define     PORT_BIT13          (1uL<<2u)
#define     PORT_BIT14          (1uL<<1u)
#define     PORT_BIT15          (1uL<<0u)

#define     PORT_WPE_BIT        PORT_BIT14
#define     PORT_WPS_BIT        PORT_BIT15
#define     PORT_SRC0           PORT_BIT12
#define     PORT_SRC1           PORT_BIT13

#define     PORT_PULL_UP        (PORT_WPE_BIT|PORT_WPS_BIT)
#define     PORT_PULL_DOWN      (PORT_WPE_BIT)
#define     PORT_PULL_NONE      0u
#define     PORT_SLEW_RATE_MIN  0u
#define     PORT_SLEW_RATE_MED  PORT_BIT13
#define     PORT_SLEW_RATE_MAX  (PORT_BIT12|PORT_BIT13)
#define     PORT_HYS_ENABLE     PORT_BIT11
#define     PORT_ODE_ENABLE     PORT_BIT10
#define     PORT_IBE_ENABLE     PORT_BIT7
#define     PORT_OBE_ENABLE     PORT_BIT6
#define     PORT_IO             (0u)
#define     PORT_FUNC0          (0u)
#define     PORT_FUNC1          (PORT_BIT5)
#define     PORT_FUNC2          (PORT_BIT4)
#if defined(CFG_MPC5644A)
#define     PORT_FUNC3          (PORT_BIT3)
#else
#define     PORT_GPIO_APC       PORT_BIT2
#define     PORT_FUNC3          (PORT_BIT4|PORT_BIT5)
#endif
#define     PORT_FUNC4          (PORT_BIT3)

#endif

#if defined(CFG_MPC5777M)
#define		ODC_OFFSET				24
#define     PORT_OUTPUT_OPEN_DRAIN 	(1<<ODC_OFFSET)
#define     PORT_OUTPUT_PUSHPULL	(2<<ODC_OFFSET)
#define		ODC_MASK				(7<<ODC_OFFSET) 
#define     PORT_OUTPUT				PORT_OUTPUT_PUSHPULL
#define 	PORT_DIRECTION_CFG_MASK 	(ODC_MASK | PORT_IBE_ENABLE)
#else
#define     PORT_OUTPUT_OPEN_DRAIN	(PORT_OBE_ENABLE | PORT_ODE_ENABLE)
#define     PORT_OUTPUT				PORT_OBE_ENABLE
#define 	PORT_DIRECTION_CFG_MASK 	(PORT_OBE_ENABLE | PORT_IBE_ENABLE)
#endif
#define		PORT_GPDO_RESET		(0)
#define		PORT_GPDO_HIGH		(1)


/* Mode specific function resolving */
#include "PortDefs.h"
#if defined(CFG_MPC5744P) || defined(CFG_MPC5777M)  || defined(CFG_MPC5748G) || defined(CFG_MPC5747C) || defined(CFG_MPC5746C)
#define PIN_FUNCTION_REG(nr, mode, dir) (((dir == 0) && (PIN_FUNCTION_REG_ ## nr ## _ ## mode != PORT_FUNCADC))? PORT_FUNC0 : PIN_FUNCTION_REG_ ## nr ## _ ## mode)
#else
#define PIN_FUNCTION_REG(nr, mode, dir) PIN_FUNCTION_REG_ ## nr ## _ ## mode
#endif
#define PORT_INVALID_REG	((uint16)0xFFFF)

typedef struct {
	uint16  reg;
	uint8 config;
} ArcPort_InputSelectConfigType;

typedef struct {
	uint16  reg;
	boolean pinDirectionChangeable;
	boolean pinModeChangeable;
#if defined(CFG_MPC560X) || defined(CFG_MPC5645S) || defined(CFG_MPC5643L) || defined(CFG_SPC56XL70)
	uint16 config;
#else
	uint32 config;
#endif 
} ArcPort_PadConfigType;

typedef struct {
	uint16  reg;
	uint8 config;
} ArcPort_OutConfigType;

typedef struct
{
	const ArcPort_PadConfigType *padConfig;
	const ArcPort_OutConfigType *outConfig;
	const ArcPort_InputSelectConfigType *inputSelectConfig;
} Port_ConfigType;




#define PortConf_PortPin_SW3 ((Port_PinType)0)
#define PortConf_PortPin_SW4 ((Port_PinType)1)
#define PortConf_PortPin_CAN0TX ((Port_PinType)2)
#define PortConf_PortPin_CAN0RX ((Port_PinType)3)
#define PortConf_PortPin_LIN_0_LIN0TX ((Port_PinType)4)
#define PortConf_PortPin_LIN_0_LIN0RX ((Port_PinType)5)
#define PortConf_PortPin_LIN_1_LIN1TX ((Port_PinType)6)
#define PortConf_PortPin_LIN_1_LIN1RX ((Port_PinType)7)
#define PortConf_PortPin_LED1 ((Port_PinType)8)
#define PortConf_PortPin_LED2 ((Port_PinType)9)

#define PORT_NOF_PINS	10

extern const Port_ConfigType PortConfigData;

/* Configuration Set Handles */
#define PortConfigSet (PortConfigData)
#define Port_PortConfigSet (PortConfigData)


#endif /* PORT_CFG_H_ */
