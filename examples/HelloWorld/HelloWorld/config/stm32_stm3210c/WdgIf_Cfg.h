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

/** @req SWS_BSW_00030 The file should be named <Module>_Cfg.h" */

#ifndef WDGIF_CFG_H_
#define WDGIF_CFG_H_

#include "WdgIf_Types.h"

#if !(((WDGIF_SW_MAJOR_VERSION == 2) && (WDGIF_SW_MINOR_VERSION == 0)) )
#error WdgIf: Configuration file expected BSW module version to be 2.0.*
#endif

#if !(((WDGIF_AR_RELEASE_MAJOR_VERSION == 4) && (WDGIF_AR_RELEASE_MINOR_VERSION == 3)) )
#error WdgIf: Configuration file expected AUTOSAR version to be 4.3.*
#endif


/* @req SWS_BSW_00031 Pre-compile time configuration parameters should be defines */
/* @req SWS_BSW_00202 Activation of development errors */
/* @req SWS_BSW_00235 DevErrorDetect should be configurable and default value should be disabled. */
#define WDGIF_DEV_ERROR_DETECT 		STD_ON
#define WDGIF_VERSION_INFO_API 		STD_ON

extern const WdgIf_DeviceType WdgIfDevices[];


#define WDGIF_DEVICES 1u

#endif /*WDGIF_CFG_H_*/

