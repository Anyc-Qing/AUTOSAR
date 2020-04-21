
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

/* Generator version: 3.2.0
 * AUTOSAR version:   4.0.3
 */

#if !(((CANSM_SW_MAJOR_VERSION == 3) && (CANSM_SW_MINOR_VERSION == 2)) )
#error CanSM: Configuration file expected BSW module version to be 3.2.*
#endif

#if !(((CANSM_AR_RELEASE_MAJOR_VERSION == 4) && (CANSM_AR_RELEASE_MINOR_VERSION == 0)) )
#error CanSM: Configuration file expected AUTOSAR version to be 4.0.*
#endif

#ifndef CANSM_CFG_H
#define CANSM_CFG_H

/* @req CANSM010 */
#define CANSM_DEV_ERROR_DETECT		STD_ON
#define CANSM_VERSION_INFO_API		STD_OFF
#define CANSM_CAN_TRCV_SUPPORT		STD_OFF

#define NOF_CANSM_CANIF_CONTROLLERS	1
#define CANSM_NETWORK_COUNT 1

/* CanSM module configuration. */
extern const CanSM_ConfigType CanSM_Config;

#endif /*CANSM_CFG_H*/

