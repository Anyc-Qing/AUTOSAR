

#include "Port.h"


static const ArcPort_PadConfigType PortPadConfigData[] = {
	{ /* PortPin_ae6, Ball: AE6 */
		.pcrVal = (PORT_PULL_NONE  | PIN_FUNCTION_AE6_CAN),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_AE6
	},
	{ /* PortPin_af5, Ball: AF5 */
		.pcrVal = (PORT_PULL_NONE  | PIN_FUNCTION_AF5_CAN),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_AF5
	},
	{ /* PortPin_ag6, Ball: AG6 */
		.pcrVal = (PORT_PULL_NONE  | PIN_FUNCTION_AG6_CAN),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_AG6
	},
	{ /* PortPin_ah6, Ball: AH6 */
		.pcrVal = (PORT_PULL_NONE  | PIN_FUNCTION_AH6_CAN),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_AH6
	},
};

static const ArcPort_DioConfigType PortDioConfig[] = {
};

const Port_ConfigType PortConfigData = {
	.nofPins = 4,
	.padConfig = PortPadConfigData,
	.dioConfig = PortDioConfig,
	.nofDioPins = 0
};


