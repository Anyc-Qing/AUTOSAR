

#include "Port.h"


static const ArcPort_PadConfigType PortPadConfigData[] = {
	{ /* eth_mdio_u4, Ball: U4 */
		.pcrVal = (PORT_INPUT | PORT_PULL_UP | PORT_SLEW_FAST  | PIN_FUNCTION_U4_ETH_MDIO),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_U4
	},
	{ /* eth_rgmii0_rxc_u5, Ball: U5 */
		.pcrVal = (PORT_INPUT | PORT_PULL_NONE | PORT_SLEW_FAST  | PIN_FUNCTION_U5_ETH_RGMII),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_U5
	},
	{ /* eth_rgmii0_txd0_u6, Ball: U6 */
		.pcrVal = (PORT_OUTPUT | PORT_PULL_NONE | PORT_SLEW_FAST  | PIN_FUNCTION_U6_ETH_RGMII),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_U6
	},
	{ /* eth_rgmii0_txd2_u7, Ball: U7 */
		.pcrVal = (PORT_OUTPUT | PORT_PULL_NONE | PORT_SLEW_FAST  | PIN_FUNCTION_U7_ETH_RGMII),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_U7
	},
	{ /* eth_mdc_v1, Ball: V1 */
		.pcrVal = (PORT_OUTPUT | PORT_PULL_NONE | PORT_SLEW_FAST  | PIN_FUNCTION_V1_ETH_MDIO),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_V1
	},
	{ /* eth_rgmii0_rxd2_v3, Ball: V3 */
		.pcrVal = (PORT_INPUT | PORT_PULL_NONE | PORT_SLEW_FAST  | PIN_FUNCTION_V3_ETH_RGMII),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_V3
	},
	{ /* eth_rgmii0_rxd3_v4, Ball: V4 */
		.pcrVal = (PORT_INPUT | PORT_PULL_NONE | PORT_SLEW_FAST  | PIN_FUNCTION_V4_ETH_RGMII),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_V4
	},
	{ /* eth_rgmii0_rxctl_v5, Ball: V5 */
		.pcrVal = (PORT_INPUT | PORT_PULL_NONE | PORT_SLEW_FAST  | PIN_FUNCTION_V5_ETH_RGMII),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_V5
	},
	{ /* eth_rgmii0_txd1_v6, Ball: V6 */
		.pcrVal = (PORT_OUTPUT | PORT_PULL_NONE | PORT_SLEW_FAST  | PIN_FUNCTION_V6_ETH_RGMII),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_V6
	},
	{ /* eth_rgmii0_txd3_v7, Ball: V7 */
		.pcrVal = (PORT_OUTPUT | PORT_PULL_NONE | PORT_SLEW_FAST  | PIN_FUNCTION_V7_ETH_RGMII),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_V7
	},
	{ /* eth_rgmii0_txctl_v9, Ball: V9 */
		.pcrVal = (PORT_OUTPUT | PORT_PULL_NONE | PORT_SLEW_FAST  | PIN_FUNCTION_V9_ETH_RGMII),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_V9
	},
	{ /* eth_rgmii0_rxd0_w2, Ball: W2 */
		.pcrVal = (PORT_INPUT | PORT_PULL_NONE | PORT_SLEW_FAST  | PIN_FUNCTION_W2_ETH_RGMII),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_W2
	},
	{ /* eth_rgmii0_txc_w9, Ball: W9 */
		.pcrVal = (PORT_OUTPUT | PORT_PULL_NONE | PORT_SLEW_FAST  | PIN_FUNCTION_W9_ETH_RGMII),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_W9
	},
	{ /* eth_rgmii0_rxd1_y2, Ball: Y2 */
		.pcrVal = (PORT_INPUT | PORT_PULL_NONE | PORT_SLEW_FAST  | PIN_FUNCTION_Y2_ETH_RGMII),
		.pcrRegAddr = PIN_CTRL_REG_ADDR_Y2
	},
};

static const ArcPort_DioConfigType PortDioConfig[] = {
};

const Port_ConfigType PortConfigData = {
	.nofPins = 14,
	.padConfig = PortPadConfigData,
	.dioConfig = PortDioConfig,
	.nofDioPins = 0
};


