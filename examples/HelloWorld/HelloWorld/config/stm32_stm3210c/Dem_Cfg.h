
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

/* Generator version: 5.18.0
 * AUTOSAR version:   4.0.3
 */

#if !(((DEM_SW_MAJOR_VERSION == 5) && (DEM_SW_MINOR_VERSION == 18)) )
#error Dem: Configuration file expected BSW module version to be 5.18.*
#endif

#if !(((DEM_AR_RELEASE_MAJOR_VERSION == 4) && (DEM_AR_RELEASE_MINOR_VERSION == 0)) )
#error DEM: Configuration file expected AUTOSAR version to be 4.0.*
#endif



#ifndef DEM_CFG_H_
#define DEM_CFG_H_

#define DEM_VERSION_INFO_API    			STD_OFF
#define DEM_DEV_ERROR_DETECT				STD_ON
#define DEM_TRIGGER_DLT_REPORTS				STD_ON
#define DEM_TRIGGER_FIM_REPORTS				STD_ON
#define DEM_OBD_SUPPORT						STD_OFF
#define DEM_PTO_SUPPORT						STD_OFF
#define DEM_TYPE_OF_DTC_SUPPORTED			DEM_DTC_TRANSLATION_ISO14229_1
#define DEM_CLEAR_ALL_EVENTS				STD_OFF
#define DEM_USE_NVM							STD_OFF
#define DEM_MAX_NUMBER_EVENT_ENTRY_MIR		0u
#define DEM_MAX_NUMBER_EVENT_ENTRY_PER		0u
#define DEM_MAX_NUMBER_EVENT_ENTRY_PRI		5u
#define DEM_MAX_NUMBER_EVENT_ENTRY_SEC		1u
#define DEM_MAX_NUMBER_EVENT_ENTRY			MAX(DEM_MAX_NUMBER_EVENT_ENTRY_PRI, DEM_MAX_NUMBER_EVENT_ENTRY_SEC) 

#define DEM_USE_PRIMARY_MEMORY_SUPPORT      STD_ON
#define DEM_USE_SECONDARY_MEMORY_SUPPORT    STD_OFF
#define DEM_USE_PERMANENT_MEMORY_SUPPORT	STD_OFF

#define DEM_MAX_NUMBER_PRESTORED_FF			0u	/* Max nr of prestored FreezeFrames. 0=Not supported. */
#define DEM_DTC_STATUS_AVAILABILITY_MASK 	127
#define DEM_TEST_FAILED_STORAGE				STD_OFF
#define DEM_NUM_ENABLECONDITIONS			0u
/* @req DEM444 */
#define DEM_ENABLE_CONDITION_SUPPORT		STD_OFF
/* @req DEM401 */
#define DEM_EVENT_DISPLACEMENT_SUPPORT		STD_OFF
#define DEM_OBD_DISPLACEMENT_SUPPORT		STD_OFF
#define DEM_IMMEDIATE_NV_STORAGE_LIMIT		0u
#define DEM_IMMEDIATE_NV_STORAGE			STD_OFF


#define DEM_STORE_UDS_STATUS_BIT_SUBSET_FOR_ALL_EVENTS STD_ON

#define DEM_DTC_SUPPRESSION_SUPPORT			STD_OFF
#define DEM_NOF_DTCS						1u

#define DEM_SET_EVENT_AVAILABLE_PREINIT STD_OFF

/* Freeze frame capture *//* @req DEM461 */
#define DEM_FREEZE_FRAME_CAPTURE_NO_CAPTURE
/* Extended data capture *//* @req DEM467 */
#define DEM_EXTENDED_DATA_CAPTURE_NO_CAPTURE
/*
 * Size limitations of the types derived from DemGeneral
 */
#define DEM_MAX_NR_OF_RECORDS_IN_EXTENDED_DATA	 1u	/* 0..253 according to Autosar */
#define DEM_MAX_NR_OF_EVENT_DESTINATION			 1u	/* 0..4 according to Autosar */

#define DEM_MAX_NR_OF_DIDS_IN_FREEZEFRAME_DATA 	2u	/* Maximum number of dids referred by one freeze frame */
#define DEM_MAX_NR_OF_PIDS_IN_FREEZEFRAME_DATA 	0u

/*
 * Size limitations of storage area
 */
/* Maximum number of freeze frame record numbers one event may have */
#define DEM_MAX_RECORD_NUMBERS_IN_FF_REC_NUM_CLASS 0

#define DEM_MAX_SIZE_FF_DATA					37u /* Max number of bytes in one freeze frame */
#define DEM_MAX_SIZE_EXT_DATA					1u	/* Max number of bytes in one extended data record */
#define DEM_MAX_NUMBER_EVENT					6u	/* Max number of events to keep status on */

#define DEM_MAX_NUMBER_FF_DATA_PRE_INIT			0u /* Max number of freeze frames to store before init */

#define DEM_MAX_NUMBER_EXT_DATA_PRE_INIT		0u  /* Max number of extended data to store before init */
/* Primary Memory */
/* @req DEM162 */
#define DEM_MAX_NUMBER_EVENT_PRI_MEM			(DEM_MAX_NUMBER_EVENT_ENTRY_PRI)	/* Max number of events status to store in primary memory */
#define DEM_PRI_MEM_EVENT_BUFFER_SIZE			48u /* Size of priMemEventBuffer */
#define DEM_MAX_NUMBER_FF_DATA_PRI_MEM			0u /* Maximum number of freeze frame records to store in primary memory */
#define DEM_PRI_MEM_FREEZEFRAME_BUFFER_SIZE		0u /* Size of priMemFreezeFrameBuffer */
#define DEM_MAX_NUMBER_EXT_DATA_PRI_MEM			5u /* Max number of extended data to store in primary memory */
#define DEM_PRI_MEM_EXTDATA_BUFFER_SIZE			20u /* Size of priMemExtDataBuffer */


/* Secondary memory */
#define DEM_MAX_NUMBER_EVENT_SEC_MEM			(DEM_MAX_NUMBER_EVENT_ENTRY_SEC)	/* Max number of events status to store in secondary memory */
#define DEM_SEC_MEM_EVENT_BUFFER_SIZE			8u /* Size of secMemEventBufferBuffer */
#define DEM_MAX_NUMBER_FF_DATA_SEC_MEM			0u /* Maximum number of freeze frame records to store in secondary memory */
#define DEM_SEC_MEM_FREEZEFRAME_BUFFER_SIZE		0u /* Size of secMemFreezeFrameBuffer */
#define DEM_MAX_NUMBER_EXT_DATA_SEC_MEM			1u /* Max number of extended data to store in secondary memory */
#define DEM_SEC_MEM_EXTDATA_BUFFER_SIZE			4u /* Size of secMemExtDataBuffer */

/* Permanent memory */
#define DEM_MAX_NUMBER_EVENT_PERM_MEM			0u	/* Max number of events status to store in permanent memory */
#define DEM_PERMANENT_MEM_EVENT_BUFFER_SIZE		0u /* Size of permMemEventBuffer */

#define DEM_FREEZEFRAME_DEFAULT_VALUE			0xFFu
#define DEM_DID_IDENTIFIER_SIZE_OF_BYTES		2u
#define DEM_FREEZEFRAME_RECORD_NUMBER_EOL		0xFFu

#define DEM_HIGHEST_EXT_DATA_REC_NUM			1u
#define DEM_HIGHEST_FF_REC_NUM					0u

/* Indicators */
#define DEM_NOF_INDICATORS 0u
#define DEM_MIL_INIDICATOR_ID DEM_INVALID_INDICATOR

#define DEM_NOF_EVENT_INDICATORS 0u
#define DEM_INVALID_INDICATOR_INDEX DEM_NOF_EVENT_INDICATORS

#define DEM_MEM_INDICATOR_BUFFER_SIZE 0u
#define DEM_MEM_STATUSBIT_BUFFER_SIZE 3u

/* NvM handles and blocks sizes*/


#ifndef DEM_EVENT_PRIMARY_NVM_BLOCK_HANDLE 
#define DEM_EVENT_PRIMARY_NVM_BLOCK_HANDLE 0u
#endif 
#ifndef DEM_EVENT_PRIMARY_NVM_BLOCK_SIZE 
#define DEM_EVENT_PRIMARY_NVM_BLOCK_SIZE 0u
#endif 
#ifndef DEM_EVENT_SECONDARY_NVM_BLOCK_HANDLE 
#define DEM_EVENT_SECONDARY_NVM_BLOCK_HANDLE 0u
#endif 
#ifndef DEM_EVENT_SECONDARY_NVM_BLOCK_SIZE 
#define DEM_EVENT_SECONDARY_NVM_BLOCK_SIZE 0u
#endif 
#ifndef DEM_FREEZE_FRAME_PRIMARY_NVM_BLOCK_HANDLE 
#define DEM_FREEZE_FRAME_PRIMARY_NVM_BLOCK_HANDLE 0u
#endif 
#ifndef DEM_FREEZE_FRAME_PRIMARY_NVM_BLOCK_SIZE 
#define DEM_FREEZE_FRAME_PRIMARY_NVM_BLOCK_SIZE 0u
#endif 
#ifndef DEM_FREEZE_FRAME_SECONDARY_NVM_BLOCK_HANDLE 
#define DEM_FREEZE_FRAME_SECONDARY_NVM_BLOCK_HANDLE 0u
#endif 
#ifndef DEM_FREEZE_FRAME_SECONDARY_NVM_BLOCK_SIZE 
#define DEM_FREEZE_FRAME_SECONDARY_NVM_BLOCK_SIZE 0u
#endif 
#ifndef DEM_EXTENDED_DATA_PRIMARY_NVM_BLOCK_HANDLE 
#define DEM_EXTENDED_DATA_PRIMARY_NVM_BLOCK_HANDLE 0u
#endif 
#ifndef DEM_EXTENDED_DATA_PRIMARY_NVM_BLOCK_SIZE 
#define DEM_EXTENDED_DATA_PRIMARY_NVM_BLOCK_SIZE 0u
#endif 
#ifndef DEM_EXTENDED_DATA_SECONDARY_NVM_BLOCK_HANDLE 
#define DEM_EXTENDED_DATA_SECONDARY_NVM_BLOCK_HANDLE 0u
#endif 
#ifndef DEM_EXTENDED_DATA_SECONDARY_NVM_BLOCK_SIZE 
#define DEM_EXTENDED_DATA_SECONDARY_NVM_BLOCK_SIZE 0u
#endif 
#ifndef DEM_INDICATOR_NVM_BLOCK_HANDLE 
#define DEM_INDICATOR_NVM_BLOCK_HANDLE 0u
#endif 
#ifndef DEM_INDICATOR_NVM_BLOCK_SIZE 
#define DEM_INDICATOR_NVM_BLOCK_SIZE 0u
#endif 
#ifndef DEM_STATUSBIT_NVM_BLOCK_HANDLE 
#define DEM_STATUSBIT_NVM_BLOCK_HANDLE 0u
#endif 
#ifndef DEM_STATUSBIT_NVM_BLOCK_SIZE 
#define DEM_STATUSBIT_NVM_BLOCK_SIZE 0u
#endif 
#ifndef DEM_PERMANENT_NVM_BLOCK_HANDLE 
#define DEM_PERMANENT_NVM_BLOCK_HANDLE 0u
#endif 
#ifndef DEM_PERMANENT_NVM_BLOCK_SIZE 
#define DEM_PERMANENT_NVM_BLOCK_SIZE 0u
#endif 

#define DEM_DISPLACEMENT_PROCESSING_DEM_INTERNAL
#define DEM_AGING_PROCESSING_DEM_INTERNAL
#define DEM_FAILURE_PROCESSING_DEM_INTERNAL
#define DEM_AGING_COUNTER_CLEAR_ON_FAIL_DURING_FAILURE_CYCLE
#define DEM_HEALING_COUNTER_CLEAR_ON_FAIL_DURING_FAILURE_CYCLE

#define DEM_NO_DTC 0xFFFFFFFFuL

typedef struct {
    uint32  UDSDTC;
    uint32  OBDDTC;
    boolean DTCUsed;
    boolean ImmediateNvStorage;/* @req DEM550 */
} Arc_Dem_DTC;

typedef struct {
    boolean JumpUp;/* @req DEM422 */
    boolean JumpDown;/* @req DEM424 */
    uint16  IncrementStepSize;
    uint16  DecrementStepSize;
    sint16  JumpDownValue;
    sint16  JumpUpValue;
    sint16  FailedThreshold;/* @req DEM416 */
    sint16  PassedThreshold;/* @req DEM417 */
} Dem_PreDebounceCounterBasedType;

#define DEM_GENERAL_EVENT_DATA_CB   STD_OFF
#define DEM_GENERAL_EVENT_STATUS_CB STD_OFF 


#define DEM_NOF_TIME_BASE_PREDEB 0
#define DEM_TASK_TIME 100UL

/* DTC indexes (for dem internal use) */
#define DEM_DTC_TestEvent_DTC_INDEX 0u

/* FF indexes (for dem internal use) */
#define DEM_FF_DemFreezeFrameClass_INDEX 0u

/* DID indexes (for dem internal use) */
#define DEM_DID_DemDidClass_INDEX 0u
#define DEM_DID_DemDidClass_Adc_INDEX 1u

/* Ext data rec class indexes (for dem internal use) */
#define DEM_EXT_DATA_REC_CLASS_DemExtendedDataRecordClass_INDEX 0u

/* Enable condition indexes (for dem internal use) */

/* DTC Groups */

#endif /*DEM_CFG_H_*/
