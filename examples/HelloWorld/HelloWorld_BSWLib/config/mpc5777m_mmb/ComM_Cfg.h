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

/* Generator version: 3.0.1
 * AUTOSAR version:   4.0.3
 */

#if !(((COMM_SW_MAJOR_VERSION == 3) && (COMM_SW_MINOR_VERSION == 0)) )
#error ComM: Configuration file expected BSW module version to be 3.0.*
#endif

#if !(((COMM_AR_RELEASE_MAJOR_VERSION == 4) && (COMM_AR_RELEASE_MINOR_VERSION == 0)) )
#error ComM: Configuration file expected AUTOSAR version to be 4.0.*
#endif

#ifndef COMM_CFG_H_
#define COMM_CFG_H_ 

#define ARC_COMM_ASR_COMPATIBILITY_LESS_THAN_4_2  STD_ON
#define ARC_COMM_PNC_VECTOR_OFFSET                0
#define COMM_DEV_ERROR_DETECT                     STD_ON
#define COMM_VERSION_INFO_API                     STD_ON
#define COMM_MODE_LIMITATION_ENABLED              STD_OFF
#define COMM_NO_COM                               STD_OFF
#define COMM_RESET_AFTER_FORCING_NO_COMM          STD_OFF      // Not supported
#define COMM_SYNCHRONOUS_WAKE_UP                  STD_OFF      // Not supported
#define COMM_PNC_SUPPORT					      STD_OFF
#define	COMM_PNC_NUM					 	      0u
#define COMM_PNC_COMSIGNAL_VECTOR_LEN		      0
#define COMM_T_MIN_FULL_COM_MODE_DURATION         5000
#define COMM_T_PNC_PREPARE_SLEEP			      0
#define COMM_PNC_GATEWAY_ENABLED			      STD_OFF
  
#define COMM_CHANNEL_COUNT 					1  
#define COMM_USER_COUNT      				1
 

#define COMM_NETWORK_HANDLE_ComMChannel 0u
#define ComMConf_ComMChannel_ComMChannel 0u

#define INVALID_NETWORK_HANDLE 0xFFu
#define INVALID_SIGNAL_HANDLE 0xFFFFu
#define COMM_USER_HANDLE_ComMUser ((ComM_UserHandleType)0)
#define ComMConf_ComMUser_ComMUser 0u

void ComM_MainFunction_ComMChannel(void);





#endif /* COMM_CFG_H_ */
