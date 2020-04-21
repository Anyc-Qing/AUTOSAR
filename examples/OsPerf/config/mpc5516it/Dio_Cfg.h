
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

/* Generator version: 6.0.0
 * AUTOSAR version:   4.3.0
 */

#if !(((DIO_SW_MAJOR_VERSION == 6) && (DIO_SW_MINOR_VERSION == 0)) )
#error Dio: Configuration file expected BSW module version to be 6.0.*
#endif

#if !(((DIO_AR_RELEASE_MAJOR_VERSION == 4) && (DIO_AR_RELEASE_MINOR_VERSION == 3)) )
#error Dio: Configuration file expected AUTOSAR version to be 4.3.*
#endif


#ifndef DIO_CFG_H_
#define DIO_CFG_H_

#define DIO_VERSION_INFO_API    STD_ON
#define DIO_DEV_ERROR_DETECT    STD_ON

#define DIO_END_OF_LIST  (0xFFFFFFFFu)


// Physical ports for MPC55xx
typedef enum
{
  DIO_PORT_A = 0,
  DIO_PORT_B = 1,
  DIO_PORT_C = 2,
  DIO_PORT_D = 3,
  DIO_PORT_E = 4,
  DIO_PORT_F = 5,
  DIO_PORT_G = 6,
  DIO_PORT_H = 7,
  DIO_PORT_I = 8,
  DIO_PORT_J = 9,
  DIO_PORT_K = 10,
} Dio_PortTypesType;

// Channels
#define DioConf_DioChannel_LEDS_LED4 52
#define Dio_LEDS_LED4 DioConf_DioChannel_LEDS_LED4
#define DioConf_DioChannel_LEDS_LED5 53
#define Dio_LEDS_LED5 DioConf_DioChannel_LEDS_LED5
#define DioConf_DioChannel_OUTIN_0 80
#define Dio_OUTIN_0 DioConf_DioChannel_OUTIN_0
#define DioConf_DioChannel_OUTIN_1 81
#define Dio_OUTIN_1 DioConf_DioChannel_OUTIN_1
#define DioConf_DioChannel_S1 95
#define Dio_S1 DioConf_DioChannel_S1
#define DioConf_DioChannel_SPI_A_HOLD_M95256 97
#define Dio_SPI_A_HOLD_M95256 DioConf_DioChannel_SPI_A_HOLD_M95256
#define DioConf_DioChannel_SPI_A_HOLD_S25FL016 101
#define Dio_SPI_A_HOLD_S25FL016 DioConf_DioChannel_SPI_A_HOLD_S25FL016
#define DioConf_DioChannel_SPI_B_HOLD_M95256 102
#define Dio_SPI_B_HOLD_M95256 DioConf_DioChannel_SPI_B_HOLD_M95256

// Channel groups

#define DioConf_DioChannelGroup_LED_GRP_PTR (&DioConfigData.GroupConfig[0])
#define Dio_LED_GRP_PTR DioConf_DioChannelGroup_LED_GRP_PTR


// Ports
#define DioConf_DioPort_LED_PORT (DIO_PORT_D)
#define Dio_LED_PORT DioConf_DioPort_LED_PORT
#define DioConf_DioPort_MISC_PORT (DIO_PORT_E)
#define Dio_MISC_PORT DioConf_DioPort_MISC_PORT
#define DioConf_DioPort_PLAY (DIO_PORT_F)
#define Dio_PLAY DioConf_DioPort_PLAY
#define DioConf_DioPort_SPI_HOLD (DIO_PORT_G)
#define Dio_SPI_HOLD DioConf_DioPort_SPI_HOLD

/* Configuration Set Handles */
#define DioConfig (DioConfigData)
#define Dio_DioConfig (DioConfigData)

#endif /*DIO_CFG_H_*/
