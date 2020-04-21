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

/* Generator version: 3.0.0
 * AUTOSAR version:   4.3.0
 */

/** @req SWS_BSW_00030 The file should be named <Module>_Cfg.h" */

#ifndef WDGM_CFG_H_
#define WDGM_CFG_H_

#if !(((WDGM_SW_MAJOR_VERSION == 3) && (WDGM_SW_MINOR_VERSION == 0)) )
#error WdgM: Configuration file expected BSW module version to be 3.0.*
#endif

#if !(((WDGM_AR_RELEASE_MAJOR_VERSION == 4) && (WDGM_AR_RELEASE_MINOR_VERSION == 3)) )
#error WdgM: Configuration file expected AUTOSAR version to be 4.3.*
#endif

#include "Std_Types.h"

/* @req SWS_WdgM_00104 */
/* @req SWS_BSW_00031 Pre-compile time configuration parameters should be defines */
/* @req SWS_BSW_00202 Activation of development errors */
/* @req SWS_BSW_00235 DevErrorDetect should be configurable and default value should be disabled. */
#define WDGM_DEV_ERROR_DETECT 					STD_ON
#define WDGM_IMMEDIATE_RESET					STD_OFF
#define WDGM_OFF_MODE_ENABLED					STD_ON
#define WDGM_VERSION_INFO_API					STD_ON
#define WDGM_DEM_ALIVE_SUPERVISION_REPORT		STD_OFF

/** Supervised entities */
/* @req SWS_WdgM_00148 */
#define WdgMConf_WdgMSupervisedEntity_Supervised100msTask (WdgM_SupervisedEntityIdType)0

/* @req SWS_WdgM_00178 */
#define WdgMConf_WdgMMode_WatchdogOn	(WdgM_ModeType)0
#define WdgMConf_WdgMMode_WatchdogOff	(WdgM_ModeType)1

/* @req SWS_WdgM_00146 */
#define	WdgMConf_WdgMCheckpoint_Supervised100msCheckpoint (WdgM_CheckpointIdType)0

#if defined(USE_RTE)
extern Std_ReturnType (*modeFunctionSwitchPointer[1u])(uint8);

#endif

#endif /*WDGM_CFG_H_*/

