
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

	{14, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS33 | (uint32)FAST_CMOS_EDGE | (uint32)PIN_CONTROL_REG(14, PORT_PIN_MODE_ICU) | (uint32)1)},
	{55, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS33 | (uint32)FAST_CMOS_EDGE | (uint32)PIN_CONTROL_REG(55, PORT_PIN_MODE_ICU) | (uint32)1)},
	{8, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS33 | (uint32)FAST_CMOS_EDGE | (uint32)PIN_CONTROL_REG(8, PORT_PIN_MODE_DIO) | (uint32)0)},
	{54, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS33 | (uint32)FAST_CMOS_EDGE | (uint32)PIN_CONTROL_REG(54, PORT_PIN_MODE_DIO) | (uint32)0)},
	{11, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS33 | (uint32)FAST_CMOS_EDGE | (uint32)PIN_CONTROL_REG(11, PORT_PIN_MODE_DIO) | (uint32)0)},
	{1, ((uint32)ENABLE_INPUT_BUFFER | (uint32)ENABLE_PULLUP | (uint32)LVCMOS18 | (uint32)FAST_CMOS_EDGE | (uint32)PIN_CONTROL_REG(1, PORT_PIN_MODE_QSPI) | (uint32)0)},
	{2, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS18 | (uint32)FAST_CMOS_EDGE | (uint32)PIN_CONTROL_REG(2, PORT_PIN_MODE_QSPI) | (uint32)0)},
	{3, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS18 | (uint32)FAST_CMOS_EDGE | (uint32)PIN_CONTROL_REG(3, PORT_PIN_MODE_QSPI) | (uint32)0)},
	{4, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS18 | (uint32)FAST_CMOS_EDGE | (uint32)PIN_CONTROL_REG(4, PORT_PIN_MODE_QSPI) | (uint32)0)},
	{5, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS18 | (uint32)FAST_CMOS_EDGE | (uint32)PIN_CONTROL_REG(5, PORT_PIN_MODE_QSPI) | (uint32)0)},
	{6, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS18 | (uint32)FAST_CMOS_EDGE | (uint32)PIN_CONTROL_REG(6, PORT_PIN_MODE_QSPI) | (uint32)0)},
	{46, ((uint32)ENABLE_INPUT_BUFFER | (uint32)ENABLE_PULLUP | (uint32)LVCMOS18 | (uint32)SLOW_CMOS_EDGE | (uint32)PIN_CONTROL_REG(46, PORT_PIN_MODE_CAN) | (uint32)1)},
	{47, ((uint32)ENABLE_INPUT_BUFFER | (uint32)ENABLE_PULLUP | (uint32)LVCMOS18 | (uint32)SLOW_CMOS_EDGE | (uint32)PIN_CONTROL_REG(47, PORT_PIN_MODE_CAN) | (uint32)0)},
	{9, ((uint32)ENABLE_INPUT_BUFFER | (uint32)DISABLE_PULLUP | (uint32)LVCMOS18 | (uint32)SLOW_CMOS_EDGE | (uint32)PIN_CONTROL_REG(9, PORT_PIN_MODE_DIO) | (uint32)0)},
};


static const ArcPort_OutConfigType GpioOutConfig[] = {
{
	.mask_data_lsw = 0xFFFF0000u ^ 0xb000000u,
	.mask_data_msw = 0xFFFF0000u ^ 0x0u,
	.dirm		   = 0xb00u,
	.oen		   = 0xb00u
},
{
	.mask_data_lsw = 0xFFFF0000u ^ 0x0u,
	.mask_data_msw = 0xFFFF0000u ^ 0x0u,
	.dirm		   = 0x0u,
	.oen		   = 0x0u
},
{
	.mask_data_lsw = 0xFFFF0000u ^ 0x10000u,
	.mask_data_msw = 0xFFFF0000u ^ 0x0u,
	.dirm		   = 0x1u,
	.oen		   = 0x1u
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




