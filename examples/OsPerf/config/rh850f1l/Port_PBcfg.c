
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

	/* P8_0 */ {.PortPinId = 98, PIN_FUNCTION_REG_98_PORT_PIN_MODE_DIO, .flags.BITF.P = 0, .flags.BITF.PM = 1, .flags.BITF.PIBC = 1,  .flags.BITF.PDSC = 0, .flags.BITF.PU = 0, .flags.BITF.PD = 0, .flags.BITF.PODC = 0  },

        {.PortPinId = PORT_INVALID_REG}
};

const Port_ConfigType PortConfigData =
{
  .pinConfig = pinConfigs,
};

