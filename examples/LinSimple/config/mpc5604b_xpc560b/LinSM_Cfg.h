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

/* Generator version: 2.4.0
 * AUTOSAR version:   4.0.3
 */

/** @req LINSM007 */
#if !(((LINSM_SW_MAJOR_VERSION == 2) && (LINSM_SW_MINOR_VERSION == 4)) )
#error LinSM: Configuration file expected BSW module version to be 2.4.X*
#endif

/* @req LINSM209 *//* @req LINSM208 */
#if !(((LINSM_AR_RELEASE_MAJOR_VERSION == 4) && (LINSM_AR_RELEASE_MINOR_VERSION == 0)) )
#error LinSM: Configuration file expected AUTOSAR version to be 4.0.*
#endif

/* File: LinSM_Cfg.h
 * Declarations of the pre-compile time configurable parameters.
 */

#ifndef LINSM_CFG_H_
#define LINSM_CFG_H_

#include "LinSM_ConfigTypes.h"

/*===========[LinSMGeneral]===================================================*/


/* Switches the Development Error Detection and Notification ON or OFF. */
#define LINSM_DEV_ERROR_DETECT           STD_ON

/* Switches the LINSM_GetVersionInfo function ON or OFF. */
#define LINSM_VERSION_INFO_API           STD_ON

/* LinSMMainProcessingPeriod in milliseconds */
#define LINSM_MAIN_PROCESSING_PERIOD     100


/*===========[Constants and sizes]============================================*/


/* Number of all setup LinSm channels */
#define LINSM_CHANNEL_CNT                1

/* Number of all setup LinSMSchedule objects */
#define LINSM_SCHEDULE_CNT               1


/*===========[LinSMSchedule IDs]==============================================*/

/* Symbolic name reference to LinIfScheduleTable. */

/* LinSMSchedule objects assigned to channel LinSMChannel1 */
#define LinSMConf_LinSMSchedule_LinSMSchedule1 LinIfConf_LinIfScheduleTable_SCHEDULE_01



/*===========[LinSM configuration data]=======================================*/

/* LinSM module configuration. */
extern const LinSM_ConfigType LinSM_Config;

#endif /*LINSM_CFG_H_*/
