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

/* Generator version: 1.0.0
 * AUTOSAR version:   4.0.3
 */
/* @req SWS_Dlt_00500 */
#if !(((DLT_SW_MAJOR_VERSION == 1) && (DLT_SW_MINOR_VERSION == 0)) )
#error Dlt: Configuration file expected BSW module version to be 1.1.*
#endif

#if !(((DLT_AR_MAJOR_VERSION == 4) && (DLT_AR_MINOR_VERSION == 0)) )
#error Dlt: Expected AUTOSAR version to be 4.0.*
#endif

#ifndef DLT_CFG_H_
#define DLT_CFG_H_

#define DLT_VERSION_INFO_API  STD_ON  
#define DLT_DEV_ERROR_DETECT STD_ON

/* @req SWS_Dlt_00014 */
#define DLT_USE_VERBOSE_MODE STD_ON
#define DLT_HEADER_USE_ECU_ID STD_ON
#define DLT_HEADER_USE_EXTENDED_HEADER STD_ON
#define DLT_HEADER_USE_MSBF STD_ON
#define DLT_HEADER_USE_SESSION_ID STD_ON
#define DLT_HEADER_USE_TIMESTAMP STD_OFF

#define DLT_IMPLEMENT_FILTER_MESSAGES STD_ON
#define DLT_FILTER_MESSAGES STD_ON
#define DLT_DEFAULT_MAX_LOG_LEVEL 0

#define DLT_MESSAGE_BUFFERSIZE 300
#define DLT_MAX_MESSAGE_LENGTH 100

extern const Dlt_ConfigType Dlt_Config;

#endif /* DLT_CFG_H_ */

