
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

#ifndef DIO_CFG_H_
#define DIO_CFG_H_

#include "Dio.h"

#if !(((DIO_SW_MAJOR_VERSION == 5) && (DIO_SW_MINOR_VERSION == 0)) )
#error Dio: Configuration file expected BSW module version to be 5.0.*
#endif

#if !(((DIO_AR_RELEASE_MAJOR_VERSION == 4) && (DIO_AR_RELEASE_MINOR_VERSION == 1)) )
#error Dio: Configuration file expected AUTOSAR version to be 4.1.*
#endif


#define DIO_VERSION_INFO_API    STD_ON
#define DIO_DEV_ERROR_DETECT    STD_ON

#define DIO_END_OF_LIST  (0xFFFFFFFFu)

typedef enum {
	DIO_PORT_A,
	DIO_PORT_B,
	DIO_PORT_C,
	DIO_PORT_D,
	DIO_PORT_E,
	DIO_PORT_F,
} Dio_Hw_PortType;

// Channels
#define DioConf_DioChannel_LED1 55
#define Dio_LED1 DioConf_DioChannel_LED1
#define DioConf_DioChannel_LED2 51
#define Dio_LED2 DioConf_DioChannel_LED2
#define DioConf_DioChannel_LED3 61
#define Dio_LED3 DioConf_DioChannel_LED3
#define DioConf_DioChannel_LED4 52
#define Dio_LED4 DioConf_DioChannel_LED4

// Channel groups


// Ports
#define DioConf_DioPort_LED_PORT (uint32)(DIO_PORT_D)
#define Dio_LED_PORT DioConf_DioPort_LED_PORT

/* Configuration Set Handles */
#define DioConfig (DioConfigData)
#define Dio_DioConfig (DioConfigData)

#endif /*DIO_CFG_H_*/
