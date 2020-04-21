

#include "Port.h"


static const ArcPort_PadConfigType PortPadConfigData[] = {
	{ /* gpio6_14, Ball: E21 */
		.pcrVal = (PORT_OUTPUT | PORT_PULL_NONE | PORT_SLEW_FAST  | PIN_FUNCTION_E21_DIO),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_E21
	},
};

static const ArcPort_DioConfigType PortDioConfig[] = {
	{ /* gpio6_14, Ball: E21 */
		.gpio = PIN_E21_GPIO,
		.gpioPin = PIN_E21_GPIO_PIN,
		.initLevel = PORT_PIN_LEVEL_LOW,
		.isOutput = TRUE,
	},
};

const Port_ConfigType PortConfigData = {
	.nofPins = 1,
	.padConfig = PortPadConfigData,
	.dioConfig = PortDioConfig,
	.nofDioPins = 1
};


