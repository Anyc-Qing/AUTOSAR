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

/* Generator version: 1.1.0
 * AUTOSAR version:   4.3.0
 */

#if !(((FIM_SW_MAJOR_VERSION == 1) && (FIM_SW_MINOR_VERSION == 1)) )
#error FiM: Configuration file expected BSW module version to be 1.1.*
#endif
#if !(((FIM_AR_RELEASE_MAJOR_VERSION == 4) && (FIM_AR_RELEASE_MINOR_VERSION == 3)) )
#error FiM: Configuration file expected AUTOSAR version to be 4.3.*
#endif

#ifndef FIM_CFG_H_
#define FIM_CFG_H_

#define FIM_DEV_ERROR_DETECT STD_ON
#define FIM_AVAILABILITY_SUPPORT STD_ON
#define FIM_EVENT_UPDATE_TRIGGERED_BY_DEM STD_ON
#define FIM_VERSION_INFO_API STD_OFF
#define FIM_POSTBUILD_MODE STD_OFF

#define FIM_MAX_INPUT_EVENTS_PER_SUMMARY_EVENTS 5u
#define FIM_MAX_EVENTS_PER_FID_INHIBIT_CONFIGURATION 5u
#define FIM_MAX_SUM_EVENTS_PER_FID_INHIBITION_CONFIGURATION 5u
#define FIM_MAX_FIM_INHIBIT_CONFIGURATIONS 1u

#define FIM_USE_SUMMARY_EVENT STD_ON
#define FIM_NOF_SUMMARY_EVENTS 1u
#define FIM_NO_DEM_EVENT_ID 6u
#define FIM_NO_INH_CFG 1u
#define FIM_NO_FID 0xFFFFu
#define FIM_NO_SUMMARY_EVENT 1u
#define FIM_NOF_INH_CFGS 1u
#define FIM_NOF_DEM_EVENTS 6u

/* @req SWS_Fim_00002 */
/* @req SWS_Fim_00007 */
#define FiMConf_FiMFID_FiMFID1 0u
#define FIM_NUM_FIDS 1u

extern const FiM_ConfigType FiM_Config;
#define FiMConfigSet &FiM_Config
#endif /*FIM_CFG_H_*/
