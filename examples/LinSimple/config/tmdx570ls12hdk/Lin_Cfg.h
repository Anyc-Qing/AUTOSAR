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

/* Generator version: 2.0.0
 * AUTOSAR version:   4.3.0
 */

#if !(((LIN_SW_MAJOR_VERSION == 2) && (LIN_SW_MINOR_VERSION == 0)) )
#error Lin: Configuration file expected BSW module version to be 2.0.X*
#endif

#if !(((LIN_AR_RELEASE_MAJOR_VERSION == 4) && (LIN_AR_RELEASE_MINOR_VERSION == 3)) )
#error Lin: Configuration file expected AUTOSAR version to be 4.3.*
#endif

/* File: Lin_Cfg.h
 * Declarations of the pre-compile time configurable parameters.
 */

#ifndef LIN_CFG_H_
#define LIN_CFG_H_

#include "Lin_ConfigTypes.h"

/*===========[LinGeneral]=====================================================*/

/* Switches the Development Error Detection and Notification ON or OFF. */
#define LIN_DEV_ERROR_DETECT              STD_ON


/* Specifies the InstanceId of this module instance. If only one instance is
 * present it shall have the Id 0. */
#define LIN_INDEX                         0 //One instance of Lindriver for all LinHwControllers


/* Specifies the maximum number of loops for blocking function until a timeout
 * is raised in short term wait loops. */
#define LIN_TIMEOUT_DURATION              0	// Not supported


/* Switches the Lin_GetVersionInfo function ON or OFF. */
#define LIN_VERSION_INFO_API              STD_ON

/* Is set if any wakeup source is defined */
#define LIN_REPORT_WAKEUP_SOURCE          STD_OFF

/* Standard ARC defines */
#define LIN_ARC_HW_UNIT_HIGH                0u
#define LIN_ARC_HW_UNIT_CNT                 (LIN_ARC_HW_UNIT_HIGH + 1)
#define LIN_ARC_LOG_UNIT_CNT                1u            


/*===========[Lin channel identifiers]========================================*/

/* Channels - Symbolic Names */
#define  LinConf_LinChannel_LinChannel1 (uint8)0

/* Number of all setup Lin channels */
#define LIN_CONTROLLER_CNT                         1u

#define LIN_CHANNEL_0_USED


 /*===========[External data]==================================================*/

/* Channel configuration data defined in Lin_Lcfg.c */

extern const Lin_ConfigType Lin_Config;

/* Configuration Set Handles */
#define LinGlobalConfig (Lin_Config)
#define Lin_LinGlobalConfig (Lin_Config)


#endif /* LIN_CFG_H_ */
