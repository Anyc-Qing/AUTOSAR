
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
 * AUTOSAR version:   4.1.2
 */

/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2 */
/** @tagSettings DEFAULT_ARCHITECTURE=ZYNQ */ 

#include "Wdg.h"
#include "Mcu.h"

#if !(((WDG_SW_MAJOR_VERSION == 2) && (WDG_SW_MINOR_VERSION == 0)) )
#error Wdg: Configuration file expected BSW module version to be 2.0.*
#endif

#if !(((WDG_AR_RELEASE_MAJOR_VERSION == 4) && (WDG_AR_RELEASE_MINOR_VERSION == 1)) )
#error Wdg: Configuration file expected AUTOSAR version to be 4.1.*
#endif

#ifndef WDG_CFG_H_
#define WDG_CFG_H_

#define	WDG_VERSION_INFO_API			STD_OFF
#define	WDG_DEV_ERROR_DETECT			STD_ON

/* @req SWS_Wdg_00171 */
typedef struct {
	WdgIf_ModeType Wdg_DefaultMode;
	uint16		   WdgSettingsFast;
	uint16		   WdgSettingsSlow;
}Wdg_ModeConfigType;

typedef struct
{
	const Wdg_ModeConfigType *Wdg_ModeConfig;
	boolean Wdg_ResetEnable;
	void (*Wdg_Notification) (void);
}Wdg_ConfigType;

extern const Wdg_ConfigType WdgConfig;
 

#define WdgConf_WdgIndex_WdgIndex 

/* Configuration Set Handles */
#define WdgSettingsConfig (WdgConfig)
#define Wdg_WdgSettingsConfig (WdgConfig)

#endif /* WDG_CFG_H_ */
