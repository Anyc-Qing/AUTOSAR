
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

#ifndef PORT_CFG_H_
#define PORT_CFG_H_

#include "Std_Types.h"
#include "Port_ConfigTypes.h"
#include "Port.h"

#if !(((PORT_SW_MAJOR_VERSION == 5) && (PORT_SW_MINOR_VERSION == 0)) )
#error Port: Configuration file expected BSW module version to be 5.0.*
#endif

#if !(((PORT_AR_RELEASE_MAJOR_VERSION == 4) && (PORT_AR_RELEASE_MINOR_VERSION == 1)) )
#error Port: Configuration file expected AUTOSAR version to be 4.1.*
#endif


#define	PORT_VERSION_INFO_API			STD_ON
#define	PORT_DEV_ERROR_DETECT			STD_ON
#define PORT_SET_PIN_DIRECTION_API		STD_ON
/** Allow Pin mode changes during runtime (not avail on this CPU) */
#define PORT_SET_PIN_MODE_API			STD_OFF


#define PortConf_PortPin_PE12		((Port_PinType)76)
#define Port_PE12	PortConf_PortPin_PE12
#define PortConf_PortPin_PE13		((Port_PinType)77)
#define Port_PE13	PortConf_PortPin_PE13
#define PortConf_PortPin_PortPin_A2		((Port_PinType)2)
#define Port_PortPin_A2	PortConf_PortPin_PortPin_A2
#define PortConf_PortPin_PortPin_A7		((Port_PinType)7)
#define Port_PortPin_A7	PortConf_PortPin_PortPin_A7
#define PortConf_PortPin_PortPin_A8		((Port_PinType)8)
#define Port_PortPin_A8	PortConf_PortPin_PortPin_A8
#define PortConf_PortPin_PortPin_B0		((Port_PinType)16)
#define Port_PortPin_B0	PortConf_PortPin_PortPin_B0
#define PortConf_PortPin_PortPin_B1		((Port_PinType)17)
#define Port_PortPin_B1	PortConf_PortPin_PortPin_B1
#define PortConf_PortPin_PortPin_B11		((Port_PinType)27)
#define Port_PortPin_B11	PortConf_PortPin_PortPin_B11
#define PortConf_PortPin_PortPin_B12		((Port_PinType)28)
#define Port_PortPin_B12	PortConf_PortPin_PortPin_B12
#define PortConf_PortPin_PortPin_B13		((Port_PinType)29)
#define Port_PortPin_B13	PortConf_PortPin_PortPin_B13
#define PortConf_PortPin_PortPin_B5		((Port_PinType)21)
#define Port_PortPin_B5	PortConf_PortPin_PortPin_B5
#define PortConf_PortPin_PortPin_B6		((Port_PinType)22)
#define Port_PortPin_B6	PortConf_PortPin_PortPin_B6
#define PortConf_PortPin_PortPin_B8		((Port_PinType)24)
#define Port_PortPin_B8	PortConf_PortPin_PortPin_B8
#define PortConf_PortPin_PortPin_C1		((Port_PinType)33)
#define Port_PortPin_C1	PortConf_PortPin_PortPin_C1
#define PortConf_PortPin_PortPin_C4		((Port_PinType)36)
#define Port_PortPin_C4	PortConf_PortPin_PortPin_C4
#define PortConf_PortPin_PortPin_D0		((Port_PinType)48)
#define Port_PortPin_D0	PortConf_PortPin_PortPin_D0
#define PortConf_PortPin_PortPin_D1		((Port_PinType)49)
#define Port_PortPin_D1	PortConf_PortPin_PortPin_D1
#define PortConf_PortPin_PortPin_D13		((Port_PinType)61)
#define Port_PortPin_D13	PortConf_PortPin_PortPin_D13
#define PortConf_PortPin_PortPin_D3		((Port_PinType)51)
#define Port_PortPin_D3	PortConf_PortPin_PortPin_D3
#define PortConf_PortPin_PortPin_D4		((Port_PinType)52)
#define Port_PortPin_D4	PortConf_PortPin_PortPin_D4
#define PortConf_PortPin_PortPin_D7		((Port_PinType)55)
#define Port_PortPin_D7	PortConf_PortPin_PortPin_D7

/** Instance of the top level configuration container */
extern const Port_ConfigType PortConfigData;

/* Configuration Set Handles */
#define PortConfigSet (PortConfigData)
#define Can_PortConfigSet (PortConfigData)


#endif /* PORT_CFG_H_ */
