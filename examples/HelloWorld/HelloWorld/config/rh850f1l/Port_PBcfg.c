
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

	/* CAN0RX_INTP0 */ {.PortPinId = 118, PIN_FUNCTION_REG_118_PORT_PIN_MODE_CAN0_CAN0RX_INTP0_PORT_PIN_IN, .flags.BITF.P = 0,  .flags.BITF.PDSC = 0, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* CAN0TX */ {.PortPinId = 119, PIN_FUNCTION_REG_119_PORT_PIN_MODE_CAN0_CAN0TX_PORT_PIN_OUT, .flags.BITF.P = 0,  .flags.BITF.PDSC = 0, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* CSIH0CSS2 */ {.PortPinId = 102, PIN_FUNCTION_REG_102_PORT_PIN_MODE_CSIH0_CSIH0CSS2_PORT_PIN_OUT, .flags.BITF.P = 0,  .flags.BITF.PDSC = 0, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* CSIH0SC */ {.PortPinId = 42, PIN_FUNCTION_REG_42_PORT_PIN_MODE_CSIH0_CSIH0SC_PORT_PIN_OUT, .flags.BITF.P = 0,  .flags.BITF.PDSC = 0, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* CSIH0SI */ {.PortPinId = 41, PIN_FUNCTION_REG_41_PORT_PIN_MODE_CSIH0_CSIH0SI_PORT_PIN_IN, .flags.BITF.P = 0,  .flags.BITF.PDSC = 0, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* CSIH0SO */ {.PortPinId = 43, PIN_FUNCTION_REG_43_PORT_PIN_MODE_CSIH0_CSIH0SO_PORT_PIN_OUT, .flags.BITF.P = 0,  .flags.BITF.PDSC = 0, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* P8_0 */ {.PortPinId = 98, PIN_FUNCTION_REG_98_PORT_PIN_MODE_DIO, .flags.BITF.P = 0, .flags.BITF.PM = 0, .flags.BITF.PBDC = 1,  .flags.BITF.PDSC = 0, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* P8_1 */ {.PortPinId = 99, PIN_FUNCTION_REG_99_PORT_PIN_MODE_DIO, .flags.BITF.P = 0, .flags.BITF.PM = 0, .flags.BITF.PBDC = 1,  .flags.BITF.PDSC = 0, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* P8_2 */ {.PortPinId = 100, PIN_FUNCTION_REG_100_PORT_PIN_MODE_DIO, .flags.BITF.P = 0, .flags.BITF.PM = 1, .flags.BITF.PIBC = 1,  .flags.BITF.PDSC = 0, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* P8_3 */ {.PortPinId = 101, PIN_FUNCTION_REG_101_PORT_PIN_MODE_DIO, .flags.BITF.P = 0, .flags.BITF.PM = 0, .flags.BITF.PBDC = 1,  .flags.BITF.PDSC = 0, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },
	/* TAUD0O5 */ {.PortPinId = 120, PIN_FUNCTION_REG_120_PORT_PIN_MODE_TAUD0_TAUD0O5_PORT_PIN_OUT, .flags.BITF.P = 0,  .flags.BITF.PDSC = 0, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },

        {.PortPinId = PORT_INVALID_REG}
};

const Port_ConfigType PortConfigData =
{
  .pinConfig = pinConfigs,
};

