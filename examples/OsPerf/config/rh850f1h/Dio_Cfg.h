
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

#if !(((DIO_SW_MAJOR_VERSION == 5) && (DIO_SW_MINOR_VERSION == 0)) )
#error Dio: Configuration file expected BSW module version to be 5.0.*
#endif

#if !(((DIO_AR_RELEASE_MAJOR_VERSION == 4) && (DIO_AR_RELEASE_MINOR_VERSION == 1)) )
#error Dio: Configuration file expected AUTOSAR version to be 4.1.*
#endif

#define DIO_VERSION_INFO_API    STD_ON
#define DIO_DEV_ERROR_DETECT    STD_ON

#define DIO_END_OF_LIST  (-1u)

// Channels
#define DioConf_DioChannel_DioChannel1 80
#define Dio_DioChannel1 DioConf_DioChannel_DioChannel1
#define DioConf_DioChannel_DioChannel2 81
#define Dio_DioChannel2 DioConf_DioChannel_DioChannel2
#define DioConf_DioChannel_DioChannel3 38
#define Dio_DioChannel3 DioConf_DioChannel_DioChannel3
#define DioConf_DioChannel_DioChannel4 82
#define Dio_DioChannel4 DioConf_DioChannel_DioChannel4

// Channel groups

#define DioConf_DioChannelGroup_DioChannelGroup_1 (&DioConfigData.GroupConfig[0])
#define Dio_DioChannelGroup_1 DioConf_DioChannelGroup_DioChannelGroup_1


// Ports
#define DioConf_DioPort_DioPort_1 3
#define Dio_DioPort_1 DioConf_DioPort_DioPort_1

/* Configuration Set Handles */
#define DioConfig (DioConfigData)
#define Dio_DioConfig (DioConfigData)

#endif /*DIO_CFG_H_*/
