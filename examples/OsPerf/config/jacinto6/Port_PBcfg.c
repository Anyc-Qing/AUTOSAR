

#include "Port.h"


static const ArcPort_PadConfigType PortPadConfigData[] = {
	{ /* PortPin_pwm6_a11, Ball: A11 */
		.pcrVal = (PORT_OUTPUT | PORT_PULL_NONE | PORT_SLEW_FAST  | PIN_FUNCTION_A11_PWM),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_A11
	},
	{ /* PortPin_d9, Ball: D9 */
		.pcrVal = (PORT_OUTPUT | PORT_PULL_NONE | PORT_SLEW_FAST  | PIN_FUNCTION_D9_DIO),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_D9
	},
	{ /* PortPin_e7, Ball: E7 */
		.pcrVal = (PORT_OUTPUT | PORT_PULL_NONE | PORT_SLEW_FAST  | PIN_FUNCTION_E7_DIO),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_E7
	},
	{ /* PortPin_e8, Ball: E8 */
		.pcrVal = (PORT_INPUT | PORT_PULL_NONE | PORT_SLEW_FAST  | PIN_FUNCTION_E8_DIO),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_E8
	},
	{ /* dcan2_tx_e21, Ball: E21 */
		.pcrVal = (PORT_OUTPUT | PORT_PULL_NONE | PORT_SLEW_FAST  | PIN_FUNCTION_E21_CAN),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_E21
	},
	{ /* dcan2_rx_f20, Ball: F20 */
		.pcrVal = (PORT_INPUT | PORT_PULL_NONE | PORT_SLEW_FAST  | PIN_FUNCTION_F20_CAN),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_F20
	},
	{ /* dcan1_tx_g20, Ball: G20 */
		.pcrVal = (PORT_OUTPUT | PORT_PULL_NONE | PORT_SLEW_FAST  | PIN_FUNCTION_G20_CAN),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_G20
	},
	{ /* dcan1_rx_h_ad17, Ball: AD17 */
		.pcrVal = (PORT_INPUT | PORT_PULL_NONE | PORT_SLEW_FAST  | PIN_FUNCTION_AD17_CAN),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_AD17
	},
};

static const ArcPort_DioConfigType PortDioConfig[] = {
	{ /* PortPin_d9, Ball: D9 */
		.gpio = PIN_D9_GPIO,
		.gpioPin = PIN_D9_GPIO_PIN,
		.initLevel = PORT_PIN_LEVEL_LOW,
		.isOutput = TRUE,
	},
	{ /* PortPin_e7, Ball: E7 */
		.gpio = PIN_E7_GPIO,
		.gpioPin = PIN_E7_GPIO_PIN,
		.initLevel = PORT_PIN_LEVEL_LOW,
		.isOutput = TRUE,
	},
	{ /* PortPin_e8, Ball: E8 */
		.gpio = PIN_E8_GPIO,
		.gpioPin = PIN_E8_GPIO_PIN,
		.initLevel = PORT_PIN_LEVEL_LOW,
		.isOutput = FALSE,
	},
};

const Port_ConfigType PortConfigData = {
	.nofPins = 8,
	.padConfig = PortPadConfigData,
	.dioConfig = PortDioConfig,
	.nofDioPins = 3
};


