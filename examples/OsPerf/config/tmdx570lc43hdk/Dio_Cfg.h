
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

/* Generator version: 5.0.0
 * AUTOSAR version:   4.1.2
 */

#if !(((DIO_SW_MAJOR_VERSION == 5) && (DIO_SW_MINOR_VERSION == 0)) )
#error Dio: Configuration file expected BSW module version to be 5.0.*
#endif

#if !(((DIO_AR_RELEASE_MAJOR_VERSION == 4) && (DIO_AR_RELEASE_MINOR_VERSION == 1)) )
#error Dio: Configuration file expected AUTOSAR version to be 4.1.*
#endif


#ifndef DIO_CFG_H_
#define DIO_CFG_H_

#define DIO_VERSION_INFO_API    STD_OFF
#define DIO_DEV_ERROR_DETECT    STD_ON

#define DIO_END_OF_LIST  (0xFFu)


/**
* Dio Port Values
*/

#define  DIO_PORT_A 0
#define  DIO_PORT_B 1
#define  DIO_PORT_C 2
#define  DIO_PORT_D 3
#define  DIO_PORT_E 4

// Channels
#define DioConf_DioChannel_LED_D3 33

// Channel groups


// Ports
#define DioConf_DioPort_LED (DIO_PORT_C)

// Pointers for convenience.
// Channels	
extern const Dio_ChannelType DioChannelTypes[];

extern const Dio_PortType DioChannelToPortMap[];

// Channel group
extern const Dio_ChannelGroupType DioChannelConfigData[];

// Port
extern const Dio_PortType DioPortConfigData[];

#endif /*DIO_CFG_H_*/
