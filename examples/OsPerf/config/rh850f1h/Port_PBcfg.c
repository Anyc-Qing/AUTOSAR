
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

const ArcPort_PinConfig pinConfigs[] = {

	/* CAN0RX */ {.PortPinId = 174, PIN_FUNCTION_REG_174_PORT_PIN_MODE_CAN, .flags.BITF.P = 0,  .flags.BITF.PDSC = 1, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* CAN0TX */ {.PortPinId = 175, PIN_FUNCTION_REG_175_PORT_PIN_MODE_CAN, .flags.BITF.P = 0,  .flags.BITF.PDSC = 1, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* CAN1RX */ {.PortPinId = 20, PIN_FUNCTION_REG_20_PORT_PIN_MODE_CAN, .flags.BITF.P = 0,  .flags.BITF.PDSC = 1, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* CAN1TX */ {.PortPinId = 21, PIN_FUNCTION_REG_21_PORT_PIN_MODE_CAN, .flags.BITF.P = 0,  .flags.BITF.PDSC = 1, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* CAN3RX */ {.PortPinId = 32, PIN_FUNCTION_REG_32_PORT_PIN_MODE_CAN, .flags.BITF.P = 0,  .flags.BITF.PDSC = 1, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* CAN3TX */ {.PortPinId = 33, PIN_FUNCTION_REG_33_PORT_PIN_MODE_CAN, .flags.BITF.P = 0,  .flags.BITF.PDSC = 1, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* FLX0CLK */ {.PortPinId = 156, PIN_FUNCTION_REG_156_PORT_PIN_MODE_FLEXRAY, .flags.BITF.P = 1,  .flags.BITF.PDSC = 1, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* FLX0RXDA */ {.PortPinId = 160, PIN_FUNCTION_REG_160_PORT_PIN_MODE_FLEXRAY, .flags.BITF.P = 0,  .flags.BITF.PDSC = 1, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* FLX0RXDB */ {.PortPinId = 155, PIN_FUNCTION_REG_155_PORT_PIN_MODE_FLEXRAY, .flags.BITF.P = 1,  .flags.BITF.PDSC = 1, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* FLX0STPWT */ {.PortPinId = 158, PIN_FUNCTION_REG_158_PORT_PIN_MODE_FLEXRAY, .flags.BITF.P = 1,  .flags.BITF.PDSC = 1, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* FLX0TXDA */ {.PortPinId = 161, PIN_FUNCTION_REG_161_PORT_PIN_MODE_FLEXRAY, .flags.BITF.P = 1,  .flags.BITF.PDSC = 1, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* FLX0TXDB */ {.PortPinId = 154, PIN_FUNCTION_REG_154_PORT_PIN_MODE_FLEXRAY, .flags.BITF.P = 1,  .flags.BITF.PDSC = 0, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* FLX0TXENA */ {.PortPinId = 157, PIN_FUNCTION_REG_157_PORT_PIN_MODE_FLEXRAY, .flags.BITF.P = 1,  .flags.BITF.PDSC = 1, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* FLX0TXENB */ {.PortPinId = 159, PIN_FUNCTION_REG_159_PORT_PIN_MODE_FLEXRAY, .flags.BITF.P = 1,  .flags.BITF.PDSC = 1, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* P8_0 */ {.PortPinId = 80, PIN_FUNCTION_REG_80_PORT_PIN_MODE_DIO, .flags.BITF.P = 0, .flags.BITF.PM = 0, .flags.BITF.PBDC = 1,  .flags.BITF.PDSC = 0, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 1  },
	/* P8_1 */ {.PortPinId = 81, PIN_FUNCTION_REG_81_PORT_PIN_MODE_DIO, .flags.BITF.P = 0, .flags.BITF.PM = 0, .flags.BITF.PBDC = 1,  .flags.BITF.PDSC = 0, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 1  },
	/* P8_2 */ {.PortPinId = 38, PIN_FUNCTION_REG_38_PORT_PIN_MODE_DIO, .flags.BITF.P = 0, .flags.BITF.PM = 0, .flags.BITF.PBDC = 1,  .flags.BITF.PDSC = 0, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 1  },
	/* P8_3 */ {.PortPinId = 82, PIN_FUNCTION_REG_82_PORT_PIN_MODE_DIO, .flags.BITF.P = 0, .flags.BITF.PM = 0, .flags.BITF.PBDC = 1,  .flags.BITF.PDSC = 0, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 1  },
	/* P8_4 */ {.PortPinId = 83, PIN_FUNCTION_REG_83_PORT_PIN_MODE_DIO, .flags.BITF.P = 0, .flags.BITF.PM = 0, .flags.BITF.PBDC = 1,  .flags.BITF.PDSC = 0, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 1  },
	/* P8_5 */ {.PortPinId = 84, PIN_FUNCTION_REG_84_PORT_PIN_MODE_DIO, .flags.BITF.P = 0, .flags.BITF.PM = 0, .flags.BITF.PBDC = 1,  .flags.BITF.PDSC = 0, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 1  },

        {.PortPinId = PORT_INVALID_REG}
};

const Port_ConfigType PortConfigData =
{
  .pinConfig = pinConfigs,
};

