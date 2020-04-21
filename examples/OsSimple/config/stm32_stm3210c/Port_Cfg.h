
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


#define	PORT_VERSION_INFO_API			STD_OFF
#define	PORT_DEV_ERROR_DETECT			STD_OFF
#define PORT_SET_PIN_DIRECTION_API		STD_OFF
/** Allow Pin mode changes during runtime (not avail on this CPU) */
#define PORT_SET_PIN_MODE_API			STD_OFF


#define PortConf_PortPin_LED1		((Port_PinType)17)
#define Port_LED1	PortConf_PortPin_LED1

/** Instance of the top level configuration container */
extern const Port_ConfigType PortConfigData;

/* Configuration Set Handles */
#define PortConfigSet (PortConfigData)
#define Can_PortConfigSet (PortConfigData)


#endif /* PORT_CFG_H_ */
