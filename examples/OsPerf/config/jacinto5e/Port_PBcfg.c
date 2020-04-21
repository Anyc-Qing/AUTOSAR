

#include "Port.h"


static const ArcPort_PadConfigType PortPadConfigData[] = {
	{ /* Portpin_pwm7_e14, Ball: E14 */
		.pcrVal = (PORT_PULL_NONE  | PIN_FUNCTION_E14_PWM),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_E14
	},
	{ /* PortPin_j26, Ball: J26 */
		.pcrVal = (PORT_PULL_NONE  | PIN_FUNCTION_J26_DIO),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_J26
	},
	{ /* PortPin_k26, Ball: K26 */
		.pcrVal = (PORT_PULL_NONE  | PIN_FUNCTION_K26_DIO),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_K26
	},
	{ /* PortPin_k27, Ball: K27 */
		.pcrVal = (PORT_PULL_NONE  | PIN_FUNCTION_K27_DIO),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_K27
	},
	{ /* PortPin_dcan0_ad24, Ball: AD24 */
		.pcrVal = (PORT_PULL_NONE  | PIN_FUNCTION_AD24_CAN),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_AD24
	},
	{ /* PortPin_dcan0_ae24, Ball: AE24 */
		.pcrVal = (PORT_PULL_NONE  | PIN_FUNCTION_AE24_CAN),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_AE24
	},
	{ /* PortPin_dcan1_ae25, Ball: AE25 */
		.pcrVal = (PORT_PULL_NONE  | PIN_FUNCTION_AE25_CAN),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_AE25
	},
	{ /* PortPin_dcan1_af25, Ball: AF25 */
		.pcrVal = (PORT_PULL_NONE  | PIN_FUNCTION_AF25_CAN),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_AF25
	},
};

static const ArcPort_DioConfigType PortDioConfig[] = {
	{ /* PortPin_j26, Ball: J26 */
		.gpio = PIN_J26_GPIO,
		.gpioPin = PIN_J26_GPIO_PIN,
		.initLevel = PORT_PIN_LEVEL_LOW,
		.isOutput = TRUE,
	},
	{ /* PortPin_k26, Ball: K26 */
		.gpio = PIN_K26_GPIO,
		.gpioPin = PIN_K26_GPIO_PIN,
		.initLevel = PORT_PIN_LEVEL_LOW,
		.isOutput = FALSE,
	},
	{ /* PortPin_k27, Ball: K27 */
		.gpio = PIN_K27_GPIO,
		.gpioPin = PIN_K27_GPIO_PIN,
		.initLevel = PORT_PIN_LEVEL_LOW,
		.isOutput = TRUE,
	},
};

const Port_ConfigType PortConfigData = {
	.nofPins = 8,
	.padConfig = PortPadConfigData,
	.dioConfig = PortDioConfig,
	.nofDioPins = 3
};


