
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

/*lint -save -e835 A zero has been given as argument to operator */
static const ArcPort_SLCR_MIOConfigType PortMIOConfig[] = {

	{23, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS18 | (uint32)SLOW_CMOS_EDGE | (uint32)PIN_CONTROL_REG(23, PORT_PIN_MODE_ETHERNET) | (uint32)1)},
	{24, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS18 | (uint32)SLOW_CMOS_EDGE | (uint32)PIN_CONTROL_REG(24, PORT_PIN_MODE_ETHERNET) | (uint32)1)},
	{25, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS18 | (uint32)SLOW_CMOS_EDGE | (uint32)PIN_CONTROL_REG(25, PORT_PIN_MODE_ETHERNET) | (uint32)1)},
	{26, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS18 | (uint32)SLOW_CMOS_EDGE | (uint32)PIN_CONTROL_REG(26, PORT_PIN_MODE_ETHERNET) | (uint32)1)},
	{22, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS18 | (uint32)SLOW_CMOS_EDGE | (uint32)PIN_CONTROL_REG(22, PORT_PIN_MODE_ETHERNET) | (uint32)1)},
	{27, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS18 | (uint32)SLOW_CMOS_EDGE | (uint32)PIN_CONTROL_REG(27, PORT_PIN_MODE_ETHERNET) | (uint32)1)},
	{17, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS18 | (uint32)SLOW_CMOS_EDGE | (uint32)PIN_CONTROL_REG(17, PORT_PIN_MODE_ETHERNET) | (uint32)0)},
	{19, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS18 | (uint32)SLOW_CMOS_EDGE | (uint32)PIN_CONTROL_REG(19, PORT_PIN_MODE_ETHERNET) | (uint32)0)},
	{18, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS18 | (uint32)SLOW_CMOS_EDGE | (uint32)PIN_CONTROL_REG(18, PORT_PIN_MODE_ETHERNET) | (uint32)0)},
	{20, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS18 | (uint32)SLOW_CMOS_EDGE | (uint32)PIN_CONTROL_REG(20, PORT_PIN_MODE_ETHERNET) | (uint32)0)},
	{16, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS18 | (uint32)SLOW_CMOS_EDGE | (uint32)PIN_CONTROL_REG(16, PORT_PIN_MODE_ETHERNET) | (uint32)0)},
	{21, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS18 | (uint32)SLOW_CMOS_EDGE | (uint32)PIN_CONTROL_REG(21, PORT_PIN_MODE_ETHERNET) | (uint32)0)},
	{8, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS18 | (uint32)SLOW_CMOS_EDGE | (uint32)PIN_CONTROL_REG(8, PORT_PIN_MODE_DIO) | (uint32)0)},
	{7, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS18 | (uint32)SLOW_CMOS_EDGE | (uint32)PIN_CONTROL_REG(7, PORT_PIN_MODE_DIO) | (uint32)0)},
};


static const ArcPort_OutConfigType GpioOutConfig[] = {
{
	.mask_data_lsw = 0xFFFF0000u ^ 0x1800000u,
	.mask_data_msw = 0xFFFF0000u ^ 0x0u,
	.dirm		   = 0x180u,
	.oen		   = 0x180u
},
{
	.mask_data_lsw = 0xFFFF0000u ^ 0x0u,
	.mask_data_msw = 0xFFFF0000u ^ 0x0u,
	.dirm		   = 0x0u,
	.oen		   = 0x0u
},
{
	.mask_data_lsw = 0xFFFF0000u ^ 0x0u,
	.mask_data_msw = 0xFFFF0000u ^ 0x0u,
	.dirm		   = 0x0u,
	.oen		   = 0x0u
},
{
	.mask_data_lsw = 0xFFFF0000u ^ 0x0u,
	.mask_data_msw = 0xFFFF0000u ^ 0x0u,
	.dirm		   = 0x0u,
	.oen		   = 0x0u
}
};
/*lint -restore*/

const Port_ConfigType PortConfigData =
{
	.PortConfig = & PortMIOConfig[0],
	.OutConfig  = & GpioOutConfig[0]
};




