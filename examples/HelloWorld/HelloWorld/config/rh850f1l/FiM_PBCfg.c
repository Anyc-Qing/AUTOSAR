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
#include "FiM.h"
#include "Dem.h" /* @req SWS_Fim_00031 */
#include "CalibrationData.h"
#include "MemMap.h"

/* @req SWS_Fim_00013 */
/* @req SWS_Fim_00008 */

/* Indices for inhibit configurations */
#define FIM_INHIBIT_CONFIG_FIMINHIBITIONCONFIGURATION_INDEX 0u

/* Indices for summary events */
#define FIM_SUMMARY_EVENT_FIMSUMMARYEVENT_INDEX 0u

/* Indices for dem events */
#define FIM_DEM_EVENT_FLS_E_COMPARE_FAILED_INDEX 0u

#define FIM_DEM_EVENT_FLS_E_ERASE_FAILED_INDEX 1u

#define FIM_DEM_EVENT_FLS_E_READ_FAILED_INDEX 2u

#define FIM_DEM_EVENT_FLS_E_WRITE_FAILED_INDEX 3u

#define FIM_DEM_EVENT_CAN_E_TIMEOUT_INDEX 4u

#define FIM_DEM_EVENT_TESTEVENT_INDEX 5u

#define FiM_START_SEC_CALIB_UNSPECIFIED
#include "FiM_MemMap.h" /*lint !e9019 suppressed due to FiM_MemMap.h include is required */
ARC_DECLARE_CALIB(const uint16, SummaryEvent_FiMSummaryEvent_EventIndexList[FIM_MAX_INPUT_EVENTS_PER_SUMMARY_EVENTS])  = {
    FIM_DEM_EVENT_FLS_E_COMPARE_FAILED_INDEX,
    FIM_DEM_EVENT_FLS_E_ERASE_FAILED_INDEX,
    FIM_DEM_EVENT_FLS_E_READ_FAILED_INDEX,
    FIM_DEM_EVENT_FLS_E_WRITE_FAILED_INDEX,
    FIM_NO_DEM_EVENT_ID,
};
#define FiM_STOP_SEC_CALIB_UNSPECIFIED
#include "FiM_MemMap.h" /*lint !e9019 suppressed due to FiM_MemMap.h include is required */
/* @req SWS_Fim_00061 */
const FiM_SummaryEventCfgType FiMSummaryEvents[] = {
    {
        .EventIndexList = SummaryEvent_FiMSummaryEvent_EventIndexList,
        .Index = FIM_SUMMARY_EVENT_FIMSUMMARYEVENT_INDEX,
    },
};

#define FiM_START_SEC_CALIB_UNSPECIFIED
#include "FiM_MemMap.h" /*lint !e9019 suppressed due to FiM_MemMap.h include is required */
ARC_DECLARE_CALIB(const uint16, FiMInhibitionConfiguration_EventIdIndexList[FIM_MAX_EVENTS_PER_FID_INHIBIT_CONFIGURATION]) = {
    FIM_DEM_EVENT_CAN_E_TIMEOUT_INDEX,
    FIM_DEM_EVENT_TESTEVENT_INDEX,
    FIM_NO_DEM_EVENT_ID,
    FIM_NO_DEM_EVENT_ID,
    FIM_NO_DEM_EVENT_ID,
};
#define FiM_STOP_SEC_CALIB_UNSPECIFIED
#include "FiM_MemMap.h" /*lint !e9019 suppressed due to FiM_MemMap.h include is required */

#define FiM_START_SEC_CALIB_UNSPECIFIED
#include "FiM_MemMap.h" /*lint !e9019 suppressed due to FiM_MemMap.h include is required */
ARC_DECLARE_CALIB(const uint16, FiMInhibitionConfiguration_SummaryEventIndexList[FIM_MAX_SUM_EVENTS_PER_FID_INHIBITION_CONFIGURATION]) = {
    FIM_SUMMARY_EVENT_FIMSUMMARYEVENT_INDEX,
    FIM_NO_SUMMARY_EVENT,
    FIM_NO_SUMMARY_EVENT,
    FIM_NO_SUMMARY_EVENT,
    FIM_NO_SUMMARY_EVENT,
};
#define FiM_STOP_SEC_CALIB_UNSPECIFIED
#include "FiM_MemMap.h" /*lint !e9019 suppressed due to FiM_MemMap.h include is required */

#define FiM_START_SEC_CALIB_UNSPECIFIED
#include "FiM_MemMap.h" /*lint !e9019 suppressed due to FiM_MemMap.h include is required */
ARC_DECLARE_CALIB(const uint8, FiMInhibitionMaskList[FIM_MAX_FIM_INHIBIT_CONFIGURATIONS]) = {
    [FIM_INHIBIT_CONFIG_FIMINHIBITIONCONFIGURATION_INDEX] = FIM_TESTED_AND_FAILED,
};
#define FiM_STOP_SEC_CALIB_UNSPECIFIED
#include "FiM_MemMap.h" /*lint !e9019 suppressed due to FiM_MemMap.h include is required */

const FiM_InhibitionConfigurationType FiMInhibitionConfiguration[FIM_MAX_FIM_INHIBIT_CONFIGURATIONS] = {
    [FIM_INHIBIT_CONFIG_FIMINHIBITIONCONFIGURATION_INDEX] = {
        .EventIndexList = FiMInhibitionConfiguration_EventIdIndexList,
        .InhSumIndexList= FiMInhibitionConfiguration_SummaryEventIndexList,
        .InhibitionMask = &FiMInhibitionMaskList[FIM_INHIBIT_CONFIG_FIMINHIBITIONCONFIGURATION_INDEX],
        .FID = FiMConf_FiMFID_FiMFID1,
    },
};

const uint16 FiMFID1_InhCfgs[] = {
    FIM_INHIBIT_CONFIG_FIMINHIBITIONCONFIGURATION_INDEX,
    FIM_NO_INH_CFG,/* End marker */
};

#define FiM_START_SEC_CALIB_UNSPECIFIED
#include "FiM_MemMap.h" /*lint !e9019 suppressed due to FiM_MemMap.h include is required */
ARC_DECLARE_CALIB(const uint16, FLS_E_COMPARE_FAILED_AffectedInhCfgs[FIM_NOF_INH_CFGS]) = {
	FIM_INHIBIT_CONFIG_FIMINHIBITIONCONFIGURATION_INDEX,
};
#define FiM_STOP_SEC_CALIB_UNSPECIFIED
#include "FiM_MemMap.h" /*lint !e9019 suppressed due to FiM_MemMap.h include is required */

#define FiM_START_SEC_CALIB_UNSPECIFIED
#include "FiM_MemMap.h" /*lint !e9019 suppressed due to FiM_MemMap.h include is required */
ARC_DECLARE_CALIB(const uint16, FLS_E_ERASE_FAILED_AffectedInhCfgs[FIM_NOF_INH_CFGS]) = {
	FIM_INHIBIT_CONFIG_FIMINHIBITIONCONFIGURATION_INDEX,
};
#define FiM_STOP_SEC_CALIB_UNSPECIFIED
#include "FiM_MemMap.h" /*lint !e9019 suppressed due to FiM_MemMap.h include is required */

#define FiM_START_SEC_CALIB_UNSPECIFIED
#include "FiM_MemMap.h" /*lint !e9019 suppressed due to FiM_MemMap.h include is required */
ARC_DECLARE_CALIB(const uint16, FLS_E_READ_FAILED_AffectedInhCfgs[FIM_NOF_INH_CFGS]) = {
	FIM_INHIBIT_CONFIG_FIMINHIBITIONCONFIGURATION_INDEX,
};
#define FiM_STOP_SEC_CALIB_UNSPECIFIED
#include "FiM_MemMap.h" /*lint !e9019 suppressed due to FiM_MemMap.h include is required */

#define FiM_START_SEC_CALIB_UNSPECIFIED
#include "FiM_MemMap.h" /*lint !e9019 suppressed due to FiM_MemMap.h include is required */
ARC_DECLARE_CALIB(const uint16, FLS_E_WRITE_FAILED_AffectedInhCfgs[FIM_NOF_INH_CFGS]) = {
	FIM_INHIBIT_CONFIG_FIMINHIBITIONCONFIGURATION_INDEX,
};
#define FiM_STOP_SEC_CALIB_UNSPECIFIED
#include "FiM_MemMap.h" /*lint !e9019 suppressed due to FiM_MemMap.h include is required */

#define FiM_START_SEC_CALIB_UNSPECIFIED
#include "FiM_MemMap.h" /*lint !e9019 suppressed due to FiM_MemMap.h include is required */
ARC_DECLARE_CALIB(const uint16, CAN_E_TIMEOUT_AffectedInhCfgs[FIM_NOF_INH_CFGS]) = {
	FIM_INHIBIT_CONFIG_FIMINHIBITIONCONFIGURATION_INDEX,
};
#define FiM_STOP_SEC_CALIB_UNSPECIFIED
#include "FiM_MemMap.h" /*lint !e9019 suppressed due to FiM_MemMap.h include is required */

#define FiM_START_SEC_CALIB_UNSPECIFIED
#include "FiM_MemMap.h" /*lint !e9019 suppressed due to FiM_MemMap.h include is required */
ARC_DECLARE_CALIB(const uint16, TestEvent_AffectedInhCfgs[FIM_NOF_INH_CFGS]) = {
	FIM_INHIBIT_CONFIG_FIMINHIBITIONCONFIGURATION_INDEX,
};
#define FiM_STOP_SEC_CALIB_UNSPECIFIED
#include "FiM_MemMap.h" /*lint !e9019 suppressed due to FiM_MemMap.h include is required */

const FiM_EventInhCfgType FiMEventInhCfg[FIM_NOF_DEM_EVENTS] = {
    [FIM_DEM_EVENT_FLS_E_COMPARE_FAILED_INDEX] = {
        .AffectedInhCfgIndexList = FLS_E_COMPARE_FAILED_AffectedInhCfgs,
        .EventId = DemConf_DemEventParameter_FLS_E_COMPARE_FAILED,
    },
    [FIM_DEM_EVENT_FLS_E_ERASE_FAILED_INDEX] = {
        .AffectedInhCfgIndexList = FLS_E_ERASE_FAILED_AffectedInhCfgs,
        .EventId = DemConf_DemEventParameter_FLS_E_ERASE_FAILED,
    },
    [FIM_DEM_EVENT_FLS_E_READ_FAILED_INDEX] = {
        .AffectedInhCfgIndexList = FLS_E_READ_FAILED_AffectedInhCfgs,
        .EventId = DemConf_DemEventParameter_FLS_E_READ_FAILED,
    },
    [FIM_DEM_EVENT_FLS_E_WRITE_FAILED_INDEX] = {
        .AffectedInhCfgIndexList = FLS_E_WRITE_FAILED_AffectedInhCfgs,
        .EventId = DemConf_DemEventParameter_FLS_E_WRITE_FAILED,
    },
    [FIM_DEM_EVENT_CAN_E_TIMEOUT_INDEX] = {
        .AffectedInhCfgIndexList = CAN_E_TIMEOUT_AffectedInhCfgs,
        .EventId = DemConf_DemEventParameter_CAN_E_TIMEOUT,
    },
    [FIM_DEM_EVENT_TESTEVENT_INDEX] = {
        .AffectedInhCfgIndexList = TestEvent_AffectedInhCfgs,
        .EventId = DemConf_DemEventParameter_TestEvent,
    },
};

const Fim_FIDCfgType FimFIDCfg[] = {
    {
        .InhCfgIndexList = FiMFID1_InhCfgs,
        .FID = FiMConf_FiMFID_FiMFID1,
    },
};

const FiM_ConfigType FiM_Config = {
    .InhibitConfig = FiMInhibitionConfiguration,
    .FIDConfig = FimFIDCfg,
    .EventInhCfg = FiMEventInhCfg,
    .SummeryEventCfg = FiMSummaryEvents,
    .EventInhCfg_Size = 6u,
};

