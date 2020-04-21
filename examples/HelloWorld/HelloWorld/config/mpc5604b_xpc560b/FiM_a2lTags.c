
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

/* Measurements */

/* @req SWS_Fim_00009 */
/**
* @a2l_measurement FiMFunctionPermissionStatus
* @desc Permission status for FIDs
* @elements 1
* @min 0
* @max 1
* @type uint8
*/

/**
* @a2l_measurement FiMFID1_PermissionStatus
* @alias_for FiMFunctionPermissionStatus[0]
*/

/**
* @a2l_measurement FiMMonitorStatus
* @desc Monitor status
* @elements 6
* @struct_size 3
* @field_name MonitorStatus
* @min 0
* @max 3
* @type uint8
* @field_name RefreshNeeded
* @min 0
* @max 1
* @type uint8
* @field_name StatusValid
* @min 0
* @max 1
* @type uint8
*/

/**
* @a2l_measurement FLS_E_COMPARE_FAILED_MonitorStatus
* @alias_for FiMMonitorStatus[0]
* @a2l_measurement FLS_E_ERASE_FAILED_MonitorStatus
* @alias_for FiMMonitorStatus[1]
* @a2l_measurement FLS_E_READ_FAILED_MonitorStatus
* @alias_for FiMMonitorStatus[2]
* @a2l_measurement FLS_E_WRITE_FAILED_MonitorStatus
* @alias_for FiMMonitorStatus[3]
* @a2l_measurement CAN_E_TIMEOUT_MonitorStatus
* @alias_for FiMMonitorStatus[4]
* @a2l_measurement TestEvent_MonitorStatus
* @alias_for FiMMonitorStatus[5]
*/

/**
* @a2l_measurement FiMInhibitConfigStatus
* @desc Inhibit configuration status (match with mask)
* @elements 1
* @min 0
* @max 1
* @type uint8
*/

/**
* @a2l_measurement FiMInhibitionConfiguration_Status
* @alias_for FiMInhibitConfigStatus[0]
*/

/**
* @a2l_measurement FiMFunctionAvailable
* @desc Function availability
* @elements 1
* @min 0
* @max 1
* @type uint8
*/

/**
* @a2l_measurement FiMFID1_Available
* @alias_for FiMFunctionAvailable[0]
*/

/* Calibrations */

/**
* @a2l_characteristic SummaryEvent_FiMSummaryEvent_EventIndexList
* @desc Events used by FiM Summary Event FiMSummaryEvent
* @elements 5
* @min 0
* @max 6
* @type uint16
* @compu Compu_FiMEventList
*/

/**
* @a2l_characteristic FiMInhibitionConfiguration_EventIdIndexList
* @desc Events used by FiM Inhibition Configuration FiMInhibitionConfiguration
* @elements 5
* @min 0
* @max 6
* @type uint16
* @compu Compu_FiMEventList
*/

/**
 * @vtab Compu_FiMEventList
 * @default_value FIM_NO_DEM_EVENT
 * @value 0 FIM_DEM_EVENT_FLS_E_COMPARE_FAILED
 * @value 1 FIM_DEM_EVENT_FLS_E_ERASE_FAILED
 * @value 2 FIM_DEM_EVENT_FLS_E_READ_FAILED
 * @value 3 FIM_DEM_EVENT_FLS_E_WRITE_FAILED
 * @value 4 FIM_DEM_EVENT_CAN_E_TIMEOUT
 * @value 5 FIM_DEM_EVENT_TESTEVENT
 * @value 6 FIM_NO_DEM_EVENT_ID
 */
 
/**
* @a2l_characteristic FiMInhibitionConfiguration_SummaryEventIndexList
* @desc Summary Events used by FiM Inhibition Configuration FiMInhibitionConfiguration
* @elements 5
* @min 0
* @max 1
* @type uint16
* @compu Compu_SummaryEventList
*/

/**
 * @vtab Compu_SummaryEventList
 * @default_value FIM_NO_SUMMARY_EVENT
 * @value 0 FIM_SUMMARY_EVENT_FIMSUMMARYEVENT
 * @value 1 FIM_NO_SUMMARY_EVENT
 */
 
/**
* @a2l_characteristic FLS_E_COMPARE_FAILED_AffectedInhCfgs
* @desc Inhibit configurations affected by  FLS_E_COMPARE_FAILED
* @elements 1
* @min 0
* @max 1
* @type uint16
* @compu Compu_AffectedInhibitConfigList
*/

/**
* @a2l_characteristic FLS_E_ERASE_FAILED_AffectedInhCfgs
* @desc Inhibit configurations affected by  FLS_E_ERASE_FAILED
* @elements 1
* @min 0
* @max 1
* @type uint16
* @compu Compu_AffectedInhibitConfigList
*/

/**
* @a2l_characteristic FLS_E_READ_FAILED_AffectedInhCfgs
* @desc Inhibit configurations affected by  FLS_E_READ_FAILED
* @elements 1
* @min 0
* @max 1
* @type uint16
* @compu Compu_AffectedInhibitConfigList
*/

/**
* @a2l_characteristic FLS_E_WRITE_FAILED_AffectedInhCfgs
* @desc Inhibit configurations affected by  FLS_E_WRITE_FAILED
* @elements 1
* @min 0
* @max 1
* @type uint16
* @compu Compu_AffectedInhibitConfigList
*/

/**
* @a2l_characteristic CAN_E_TIMEOUT_AffectedInhCfgs
* @desc Inhibit configurations affected by  CAN_E_TIMEOUT
* @elements 1
* @min 0
* @max 1
* @type uint16
* @compu Compu_AffectedInhibitConfigList
*/

/**
* @a2l_characteristic TestEvent_AffectedInhCfgs
* @desc Inhibit configurations affected by  TestEvent
* @elements 1
* @min 0
* @max 1
* @type uint16
* @compu Compu_AffectedInhibitConfigList
*/

 /**
 * @vtab Compu_AffectedInhibitConfigList
 * @default_value FIM_NO_INH_CFG
 * @value 0 FIM_INHIBIT_CONFIG_FIMINHIBITIONCONFIGURATION
 * @value 1 FIM_NO_INH_CFG
 */
 
 /**
* @a2l_characteristic FiMInhibitionMaskList
* @desc Inhibition masks used by inhibit configurations
* @elements 1
* @min 0
* @max 3
* @type uint8
* @compu Compu_FiMInhibitionMask
*/

/**
* @a2l_characteristic FiMInhibitionConfiguration_InhibitionMask
* @alias_for FiMInhibitionMaskList[0]
*/

 /**
 * @vtab Compu_FiMInhibitionMask
 * @default_value FIM_LAST_FAILED
 * @value 0 FIM_LAST_FAILED
 * @value 1 FIM_NOT_TESTED
 * @value 2 FIM_TESTED
 * @value 3 FIM_TESTED_AND_FAILED
 */

 
