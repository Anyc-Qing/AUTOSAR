
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

#ifndef DIO_CFG_H_
#define DIO_CFG_H_

#if !(((DIO_SW_MAJOR_VERSION == 6) && (DIO_SW_MINOR_VERSION == 0)) )
#error Dio: Configuration file expected BSW module version to be 6.0.*
#endif

#if !(((DIO_AR_RELEASE_MAJOR_VERSION == 4) && (DIO_AR_RELEASE_MINOR_VERSION == 3)) )
#error Dio: Configuration file expected AUTOSAR version to be 4.3.*
#endif

#define DIO_VERSION_INFO_API    STD_OFF
#define DIO_DEV_ERROR_DETECT    STD_ON

#define DIO_END_OF_LIST  (0xFFFFFFFFu)




// Physical ports for MPC55xx
#define DIO_PORT_A   (Dio_PortType)0
#define DIO_PORT_B   (Dio_PortType)1
#define DIO_PORT_C   (Dio_PortType)2
#define DIO_PORT_D   (Dio_PortType)3
#define DIO_PORT_E   (Dio_PortType)4
#define DIO_PORT_F   (Dio_PortType)5
#define DIO_PORT_G   (Dio_PortType)6
#define DIO_PORT_H   (Dio_PortType)7
#define DIO_PORT_I   (Dio_PortType)8
#define DIO_PORT_J   (Dio_PortType)9
#define DIO_PORT_K   (Dio_PortType)10
#define DIO_PORT_L   (Dio_PortType)11
#define DIO_PORT_M   (Dio_PortType)12
#define DIO_PORT_N   (Dio_PortType)13
#define DIO_PORT_O   (Dio_PortType)14
#define DIO_PORT_P   (Dio_PortType)15
#define DIO_PORT_Q   (Dio_PortType)16
#define DIO_PORT_R   (Dio_PortType)17
#define DIO_PORT_S   (Dio_PortType)18
#define DIO_PORT_T   (Dio_PortType)19
#define DIO_PORT_U   (Dio_PortType)20


 

// Channels
#define DioConf_DioChannel_LED1 64u
#define Dio_LED1 DioConf_DioChannel_LED1
#define DioConf_DioChannel_LED2 65u
#define Dio_LED2 DioConf_DioChannel_LED2
#define DioConf_DioChannel_SpiCs 115u
#define Dio_SpiCs DioConf_DioChannel_SpiCs

// Channel groups


// Ports
#define DioConf_DioPort_PE (DIO_PORT_E)
#define Dio_PE DioConf_DioPort_PE
#define DioConf_DioPort_PH (DIO_PORT_H)
#define Dio_PH DioConf_DioPort_PH

/* Configuration Set Handles */
#define DioConfig (DioConfigData)
#define Dio_DioConfig (DioConfigData)

#endif /*DIO_CFG_H_*/
