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

/* Generator version: 3.1.0
 * AUTOSAR version:   4.3.0
 */

/** @req SWS_BSW_00030 The file should be named <Module>_Cfg.h" */
#ifndef ECUM_CFG_H_
#define ECUM_CFG_H_ 

/* @req SWS_BSW_00036 The BSW Module shall perform Inter Module Checks to avoid integration of incompatible files*/
#if !(((ECUM_SW_MAJOR_VERSION == 3) && (ECUM_SW_MINOR_VERSION == 1)) )
#error EcuM: Configuration file expected EcuMFixed module version to be 3.1.X*
#endif

/* @req SWS_BSW_00029 */
/* @req SWS_BSW_00031 Pre-compile time configuration parameters should be defines */
/* @req SWS_BSW_00236 to get Version Info */
/* @req SWS_BSW_00051 */
#define ECUM_VERSION_INFO_API          STD_OFF
/* @req SWS_EcuM_02983 */
/* @req SWS_BSW_00202 Activation of development errors */
/* @req SWS_BSW_00235 DevErrorDetect should be configurable and default value should be disabled. */
#define ECUM_DEV_ERROR_DETECT          STD_OFF

#define ECUM_MAIN_FUNCTION_PERIOD      (200)
#define ECUM_NVRAM_READALL_TIMEOUT     (10000)
#define ECUM_NVRAM_WRITEALL_TIMEOUT    (10000)
#define ECUM_NVRAM_MIN_RUN_DURATION    (10000)



#define ECUM_RESET_LOOP_DETECTION      STD_OFF

#define ECUM_VALIDATION_TIMEOUT 0

	 
#define EcuMConf_EcuMFixedUserConfig_User	0u
#define ECUM_USER_User	EcuMConf_EcuMFixedUserConfig_User
#define ECUM_USER_ENDMARK 1u


// EcuM Sleep Mode IDs 
/* @req SWS_EcuM_02957*/ /* @req SWS_EcuM_02959 */
#define ECUM_SLEEP_MODE_ECUMSLEEPMODE 0
#define EcuMConf_EcuMSleepMode_EcuMSleepMode  ECUM_SLEEP_MODE_ECUMSLEEPMODE


#define ECUM_SLEEP_MODE_CNT 1 
#define ECUM_SLEEP_MODE_FIRST	0

#define ECUM_COMM_NETWORKS_CNT 0
#define ECUM_WKSOURCE_POWER             (1uL)
#define ECUM_WKSOURCE_RESET             (1uL<<1u)
#define ECUM_WKSOURCE_INTERNAL_RESET    (1uL<<2u)
#define ECUM_WKSOURCE_INTERNAL_WDG      (1uL<<3u)
#define	ECUM_WKSOURCE_EXTERNAL_WDG      (1uL<<4u)
#define ECUM_WKSOURCE_HWTEST_RESET      (1uL<<5u)
/* @req SWS_EcuM_02165 */
/* @req SWS_EcuM_02166 */
#define EcuMConf_EcuMWakeupSource_EcuMWakeupSource  (1uL << 6u)

/* @req SWS_EcuM_04007 */

#define ECUM_CAUSE_UNKNOWN 		0
#define ECUM_CAUSE_ECU_STATE  	1
#define ECUM_CAUSE_WDGM			2
#define ECUM_CAUSE_DCM			3
/* @req SWS_EcuM_04005 */ /* @req SWS_EcuM_04006 */

#define ECUM_RESET_MCU  		0
#define ECUM_RESET_WDG			1
#define ECUM_RESET_IO			2

#define ECUM_WKSOURCE_SYSTEM_CNT 6
#define ECUM_WKSOURCE_USER_CNT   1 

#define ECUM_BACKWARD_COMPATIBLE

#endif /* ECUM_CFG_H_ */

