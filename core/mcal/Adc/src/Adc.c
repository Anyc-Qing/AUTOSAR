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

/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0|4.1.2  */
/** @tagSettings DEFAULT_ARCHITECTURE=TMS570|RH850F1H|JACINTO5|JACINTO6|MPC5607B|MPC5645S|PPC|MPC5748G|MPC5646B|MPC5744P|MPC5747C */

/** @file Adc.c
 *
 *  The Adc.c file will contain the generic implementation of all the API mentioned in Adc driver SWS document (ASR 4.3.0)
 *  The hardware specific implementations are done in Adc_Hw_* .c file (depends on the architecture).
 *  Each API will have the Det error check mentioned in section 7.3 (Adc driver SWS document) and will call the the hardware specific implementation function if the check passes.
 */
 /** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the Mcal
  *  @{
  */
 /** \addtogroup Adc
  *  This is the Mcal Adc Group
  *  @{
  */

#include "Adc.h"
#include "Adc_MemMap.h"
#include "Adc_Internal.h"
#if defined(USE_DET)
#include "Det.h"
#endif
#if defined(USE_DEM) || defined (WDG_USE_DEM)
#include "Dem.h"
#endif
#include "SchM_Adc.h"

/* ----------------------------[Version Check]-----------------*/
/**
  * @name    Module ID and Version Number
  * @{
  */
#if defined(CFG_TMS570LS12X) || defined(CFG_MPC5604B) || defined(CFG_MPC5668) || defined(CFG_MPC5744P) || defined(CFG_MPC5777M) || defined(CFG_MPC5748G) || defined(CFG_MPC5747C) || defined(CFG_MPC5746C) || defined(CFG_MPC5645S) || defined(CFG_MPC5646B) || defined(CFG_MPC5643L) || defined(CFG_SPC56XL70)
#define ADC_SW_MAJOR_VERSION_INT   3u /**< @brief Adc Module Software Major Version Number  */
#define ADC_SW_MINOR_VERSION_INT   0u /**< @brief Adc Module Software Minor Version Number  */
#define ADC_SW_PATCH_VERSION_INT   0u /**< @brief Adc Module Software Patch Version Number  */

#define ADC_AR_RELEASE_MAJOR_VERSION_INT   4u /**< @brief Adc Module Autosar Major Version Number  */
#define ADC_AR_RELEASE_MINOR_VERSION_INT   3u /**< @brief Adc Module Autosar Minor Version Number  */
#define ADC_AR_RELEASE_PATCH_VERSION_INT   0u /**< @brief Adc Module Autosar Patch Version Number  */

#else
/** @cond DOXYGEN_EXCLUDE */
#define ADC_SW_MAJOR_VERSION_INT   2u /**< @brief Adc Module Software Major Version Number for other architectures */
#define ADC_SW_MINOR_VERSION_INT   0u /**< @brief Adc Module Software Minor Version Number for other architectures */
#define ADC_SW_PATCH_VERSION_INT   0u /**< @brief Adc Module Software Patch Version Number for other architectures */

#define ADC_AR_RELEASE_MAJOR_VERSION_INT   4u /**< @brief Adc Module Autosar Major Version Number for other architectures */
#define ADC_AR_RELEASE_MINOR_VERSION_INT   1u /**< @brief Adc Module Autosar Minor Version Number for other architectures */
#define ADC_AR_RELEASE_PATCH_VERSION_INT   2u /**< @brief Adc Module Autosar Patch Version Number for other architectures */
/** @endcond */
#endif
/** @} */

#if (ADC_SW_MAJOR_VERSION != ADC_SW_MAJOR_VERSION_INT) || (ADC_SW_MINOR_VERSION != ADC_SW_MINOR_VERSION_INT)
#error "SW Version mismatch between Adc.c and Adc.h"
#endif

#if (ADC_AR_RELEASE_MAJOR_VERSION != ADC_AR_RELEASE_MAJOR_VERSION_INT) || (ADC_AR_RELEASE_MINOR_VERSION != ADC_AR_RELEASE_MINOR_VERSION_INT)
#error "AR Version mismatch between Adc.c and Adc.h"
#endif


/** @req 4.1.2|4.3.0/SWS_Adc_00078 The ADC module’s ISR´s, providing the “conversion completed events”, shall be responsible for resetting the interrupt flags (if needed by hardware) and calling the associated notification function. */
/** @req 4.1.2|4.3.0/SWS_Adc_00090 The ADC module shall allow grouping of one or more ADC channels into so called ADC Channel groups. */
/** @req 4.1.2|4.3.0/SWS_Adc_00091 The ADC module’s configuration shall be such that an ADC Channel group contains at least one ADC Channel.*/
/** @req 4.1.2|4.3.0/SWS_Adc_00092 The ADC module shall allow the assignment of an ADC channel to more than one group.*/
/** @req 4.1.2|4.3.0/SWS_Adc_00138 The ADC Driver shall support one or several ADC HW Units of the same type. The selection of ADC HW Unit shall be done by the configuration container AdcHwUnit.*/
/** @req 4.1.2|4.3.0/SWS_Adc_00140 The ADC module shall guarantee the consistency of the returned result value for each completed conversion.*/
/** @req 4.1.2|4.3.0/SWS_Adc_00155 The function Adc_StopGroupConversion shall automatically disable group notification for the requested group. */
/** @req 4.1.2|4.3.0/SWS_Adc_00246 If the hardware allows for only one usage of the register, the driver module implementing that functionality is responsible for initializing the register. */
/** @req 4.1.2|4.3.0/SWS_Adc_00247 If the register can affect several hardware modules and if it is an I/O register, it shall be initialized by the PORT driver. */
/** @req 4.1.2|4.3.0/SWS_Adc_00248 If the register can affect several hardware modules and if it is not an I/O register, it shall be initialized by the MCU driver. */
/** @req 4.1.2|4.3.0/SWS_Adc_00249 One-time writable registers that require initialization directly after reset shall be initialized by the startup code. */
/** @req 4.1.2|4.3.0/SWS_Adc_00250 All other registers shall be initialized by the startup code. */
/** @req 4.1.2|4.3.0/SWS_Adc_00277 The ADC module’s configuration shall be such that all channels contained in one ADC Channel group shall belong to the same ADC HW Unit.*/
/** @req 4.1.2|4.3.0/SWS_Adc_00280 The ADC module shall convert only one ADC Channel group per ADC HW Unit at a time. The ADC module shall not support the concurrent conversion of different (even exclusive) ADC Channel groups on the same ADC HW Unit. */
/** @req 4.1.2|4.3.0/SWS_Adc_00318 In single value access mode the result buffer shall have as many elements as channels belonging to the group. In this way each buffer element corresponds to a channel, in the order the channels are defined in the group. */
/** @req 4.1.2|4.3.0/SWS_Adc_00319 In streaming access mode the result buffer shall have m*n elements, where n is the number of channels belonging to the group, m the number of samples acquired per channel. In this way the first m elements belong to the first channel in the group, the second m elements to the second channel and so on. */
/** @req 4.1.2|4.3.0/SWS_Adc_00320 The dimension (in number of bits) of each buffer element (of type integer) shall be uniform, tailored on the largest (in number of bits) channel belonging to any group. */

/** @req 4.1.2|4.3.0/SWS_Adc_00380 The ADC module shall support the conversion mode “One-shot Conversion” for all ADC Channel groups. One-shot conversion means that exactly one conversion is executed for each channel configured for the group being converted.*/
/** @req 4.1.2|4.3.0/SWS_Adc_00381 The ADC module shall support the conversion mode “Continuous Conversion1” for all ADC Channel groups with trigger source software.*/
/** @req 4.1.2|4.3.0/SWS_Adc_00413 The ADC module functions shall be reentrant, if the functions are called for different channel groups. This requirement shall be applicable for all API functions, except Adc_Init, Adc_DeInit, Adc_GetVersionInfo, Adc_SetPowerState, Adc_GetTargetPowerState, Adc_GetCurrentPowerState and Adc_PreparePowerState. */
/** @req 4.1.2|4.3.0/SWS_Adc_00415 The ADC module shall not check the integrity (see Note SWS_Adc_00413) if several calls for the same ADC group are used during runtime in different tasks or ISRs. */



/* ----------------------------[Static Function]---------------*/
/**
 * @brief  validate function that will be used in API's that can be used to check the expression and report Det errors if ADC_DEV_ERROR_DETECT is STD_ON
 * @param[in] exp - Boolean expression to be verified
 * @param[in] apiid - AUTOSAR specified API Id for each module
 * @param[in] errid - AUTOSAR specified Error Id for each type of error specific to each API
 * @param[inout] _rvPtr - Returns the validity of the expression provided
 */
static inline void validate (boolean exp,uint8 apiid,uint8 errid, Std_ReturnType* _rvPtr){
	  if ((E_OK == *_rvPtr) && (exp == FALSE)) {
		#if (ADC_DEV_ERROR_DETECT == STD_ON)
			 /** @req 4.1.2|4.3.0/SWS_Adc_00377 Det_ReportError */
			 (void)Det_ReportError(ADC_MODULE_ID, 0u, apiid, errid);
		#endif
		 *_rvPtr = E_NOT_OK;
	  }
}


/* ----------------------------[Public Function]---------------*/
#if (ADC_DEINIT_API == STD_ON)
/* @brief API that returns all ADC HW Units to a state comparable to their power on reset state.
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         Synchronous
 *  @note  Non Reentrant
 */
void Adc_DeInit (void){
	Std_ReturnType validate_rv = E_OK;

    /** @req:TMS570 4.1.2|4.3.0/SWS_Adc_00154 If called before the module has been initialized, the function Adc_DeInit shall raise development error ADC_E_UNINIT and return without any action.*/
    validate((boolean)(Adc_Hw_GetAdcState() == ADC_STATE_INIT),ADC_DEINIT_ID,ADC_E_UNINIT, &validate_rv);

	/** @req 4.1.2|4.3.0/SWS_Adc_00112 If called while not all groups are either in state ADC_IDLE or state ADC_STREAM_COMPLETED, while no conversion is ongoing (ADC groups which are implicitly stopped), the function Adc_DeInit shall raise development error ADC_E_BUSY and return without any action.*/
    if(E_OK == validate_rv){
    	for (uint32 configId = 0u; configId < ADC_ARC_CTRL_CONFIG_CNT; configId++) {
    	    validate_rv = Adc_Hw_Validate_Group_Status(configId);
    	    if(validate_rv == E_NOT_OK){
    	    	break;
    	    }
    	}
    }

    if(E_OK == validate_rv){
    	/** @req 4.1.2|4.3.0/SWS_Adc_00110 The function Adc_DeInit shall return all ADC HW Units to a state comparable to their power on reset state. */
    	/** @req 4.1.2|4.3.0/SWS_Adc_00111 The function Adc_DeInit shall disable all used interrupts and notifications.*/
    	Adc_Hw_DeInit();
    }
}
#endif


/** @req 4.1.2|4.3.0/SWS_Adc_00056  The function Adc_Init shall only initialize the configured resources. Resources that are not contained in the configuration file shall not be touched.*/

/* @brief API that initializes the ADC hardware units and driver.
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         Synchronous
 *  @note  Non Reentrant
 *  @param[in] ConfigPtr - Pointer to configuration set in Variant PB
 */
void Adc_Init(const Adc_ConfigType *ConfigPtr) {
	Std_ReturnType validate_rv = E_OK;

    /** @req 4.1.2|4.3.0/SWS_Adc_00107 If called when the ADC driver and hardware are already initialized, the function Adc_Init shall raise development error ADC_E_ALREADY_INITIALIZED and return without any action. */
    validate((boolean)(Adc_Hw_GetAdcState() == ADC_STATE_UNINIT), ADC_INIT_ID, ADC_E_ALREADY_INITIALIZED, &validate_rv);

    validate((boolean)(ConfigPtr != NULL_PTR), ADC_INIT_ID, ADC_E_PARAM_CONFIG, &validate_rv);
    if(validate_rv == E_OK){
    	/** !req 4.1.2/SWS_Adc_00342 Variant PC*/
    	/** @req 4.1.2/SWS_Adc_00344 BSW Modules shall support link-time configuration*/
    	/** @req 4.1.2|4.3.0/SWS_Adc_00307 The function Adc_Init shall set all groups to ADC_IDLE state. */
    	Adc_Hw_Init(ConfigPtr);
    }
}


/* @brief API that initializes ADC driver with the group specific result buffer start address where the conversion results will be stored.
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         The application has to ensure that the application buffer, where DataBufferPtr points to, can hold all the conversion results of the specified group.
 *         The initialization with Adc_SetupResultBuffer is required after reset, before a group conversion can be started.
 *         Synchronous
 *  @note  Reentrant
 *  @param[in] Group - Numeric ID of requested ADC channel group.
 *  @param[in] DataBufferPtr - pointer to result data buffer.
 *  @return Std_ReturnType.
 *  @retval E_OK       result buffer pointer initialized correctly.
 * 	@retval E_NOT_OK   operation failed or development error occured.
 */
Std_ReturnType Adc_SetupResultBuffer(Adc_GroupType Group, Adc_ValueGroupType *DataBufferPtr) {
	Std_ReturnType validate_rv = E_OK;

    /** @req 4.1.2|4.3.0/SWS_Adc_00434 When called prior to initializing the driver, the function Adc_SetupResultBuffer shall raise development error ADC_E_UNINIT.*/
    validate((boolean)(Adc_Hw_GetAdcState() == ADC_STATE_INIT),ADC_SETUPRESULTBUFFER_ID,ADC_E_UNINIT, &validate_rv);

    /** @req 4.1.2|4.3.0/SWS_Adc_00423  If the channel group ID is non-existing, the function Adc_SetupResultBuffer shall raise development error ADC_E_PARAM_GROUP and return without any action.*/
    validate((boolean)(Adc_Hw_validGroupId(Group) == TRUE), ADC_SETUPRESULTBUFFER_ID, ADC_E_PARAM_GROUP, &validate_rv);

    if(Adc_Hw_getGroupPtr(Group) != NULL_PTR){
        /** @req 4.1.2|4.3.0/SWS_Adc_00433 If called while group is not in state ADC_IDLE, function Adc_SetupResultBuffer shall raise development error ADC_E_BUSY and return without any action. */
        validate((boolean)(Adc_Hw_getGroupStatus(Group) == ADC_IDLE), ADC_SETUPRESULTBUFFER_ID, ADC_E_BUSY, &validate_rv);
    }
    else{
    	validate_rv = E_NOT_OK;
    }

    /** @req 4.1.2|4.3.0/SWS_Adc_00457 When called with a NULL_PTR as DataBufferPtr, the function Adc_SetupResultBuffer shall raise development error ADC_E_PARAM_POINTER.*/
    validate((boolean)(DataBufferPtr != NULL_PTR),ADC_SETUPRESULTBUFFER_ID, ADC_E_PARAM_POINTER, &validate_rv);

    if(validate_rv == E_OK){
    	/** @req 4.1.2|4.3.0/SWS_Adc_00420 The function Adc_SetupResultBuffer shall initialize the result buffer pointer of the selected group with the address value passed as parameter. */
    	Adc_Hw_getGroupPtr(Group)->status->resultBufferPtr = DataBufferPtr;

    }
    return validate_rv;
}


#if (ADC_READ_GROUP_API == STD_ON)
/* @brief Reads the group conversion result of the last completed conversion round of the requested group and stores the channel values starting at the DataBufferPtr address.
 * 		   The group channel values are stored in ascending channel number order ( in contrast to the storage layout of the result buffer if streaming access is configured).
 *         Synchronous
 *  @note  Reentrant
 *  @param[in] Group - Numeric ID of requested ADC channel group.
 *  @param[in] DataBufferPtr - ADC results of all channels of the selected group are stored in the data buffer addressed with the pointer.
 *  @return Std_ReturnType.
 *  @retval E_OK       results are available and written to the data buffer.
 * 	@retval E_NOT_OK   no results are available or development error occured.
 */
Std_ReturnType Adc_ReadGroup (Adc_GroupType Group, Adc_ValueGroupType *DataBufferPtr){
	/** @req 4.1.2|4.3.0/SWS_Adc_00503 Simple read calls, as implemented in Adc_ReadGroup and Adc_GetGroupStatus, shall always be reentrant even if the functions are called for same channel groups. */
    uint16 channel;
    const Adc_ValueGroupType *resultBufPtr;
    Std_ReturnType validate_rv = E_OK;
    Adc_ArcStateChangeType validStatusChange;
    const Adc_GroupDefType *groupPtr = Adc_Hw_getGroupPtr(Group);

    /** @req 4.1.2|4.3.0/SWS_Adc_00296 When called prior to initializing the driver, the function Adc_ReadGroup shall raise development error ADC_E_UNINIT and return E_NOT_OK.*/
    validate((boolean)(Adc_Hw_GetAdcState() == ADC_STATE_INIT),ADC_READGROUP_ID,ADC_E_UNINIT, &validate_rv);

    /** @req 4.1.2|4.3.0/SWS_Adc_00152 If the group ID is non-existing, the function Adc_ReadGroup shall raise development error ADC_E_PARAM_GROUP and return E_NOT_OK.*/
    validate((boolean)(Adc_Hw_validGroupId(Group) == TRUE), ADC_READGROUP_ID, ADC_E_PARAM_GROUP, &validate_rv);

    validate((boolean)(DataBufferPtr != NULL_PTR),ADC_READGROUP_ID, ADC_E_PARAM_POINTER, &validate_rv);		// not listed in ASR 4.3.0 Specification

    if(groupPtr != NULL_PTR){
        /** @req 4.1.2|4.3.0/SWS_Adc_00388 When called while the group status is ADC_IDLE, raise error ADC_E_IDLE*/
        validate((boolean)(Adc_Hw_getGroupStatus(Group) != ADC_IDLE), ADC_READGROUP_ID, ADC_E_IDLE, &validate_rv);
		/* Group status change handling */
    	/** @req 4.1.2|4.3.0/SWS_Adc_00329  Calling function Adc_ReadGroup while group status is ADC_STREAM_COMPLETED shall trigger a state transition to ADC_BUSY for continuous conversion modes */
    	/** @req 4.1.2|4.3.0/SWS_Adc_00330  Calling function Adc_ReadGroup while group status is ADC_STREAM_COMPLETED shall trigger a state transition to ADC_IDLE for software triggered conversion modes which automatically stop the conversion */
    	validStatusChange = Adc_Hw_GroupStatusChange(Group);

    	validate((boolean)(validStatusChange != ADC_STATE_CHANGE_ERROR), ADC_READGROUP_ID, ADC_E_BUSY, &validate_rv);

        if(E_OK == validate_rv){

        /* Copy the result to application buffer. */

            for (channel = 0u; channel < (uint32)groupPtr->numberOfChannels; channel++) {

                    /* Remeber that the result buffer has the following layout: CH1_SMPL1, CH1_SMPL2, CH2_SMPL1, CH2_SMPL2 */
                    /** @req 4.1.2|4.3.0/SWS_Adc_00075 The function Adc_ReadGroup shall read the latest available conversion results of the requested group.*/
                    resultBufPtr = groupPtr->status->currResultBufPtr;		// Since the currResultBufPtr may change, use another pointer to get access to data
                    if( ADC_ACCESS_MODE_STREAMING == groupPtr->accessMode ) {		// Streaming access mode + SW trigger only occurs in continuous conversion, then resultBufPtr-- makes sense
                        if( ADC_STREAM_BUFFER_LINEAR == groupPtr->streamBufferMode ) {
                            resultBufPtr--;				// In interrupt handler, the currResultBufPtr is increased, so here should decrease, to point to the last converted result
                        }
                        else{
                            /* Handle buffer wrapping */
                            if( resultBufPtr > groupPtr->status->resultBufferPtr ) {/*lint !e946 MISRA:PERFORMANCE:Relational or subtract operator applied to pointers, working with pointer in a controlled way results more simplified and readable code:[MISRA 2012 Rule 18.2, required]*/
                                resultBufPtr--;
                            }
                            else {
                                resultBufPtr = groupPtr->status->resultBufferPtr + (groupPtr->streamNumSamples-1);/*lint !e9016 MISRA:PERFORMANCE:pointer arithmetic other than array indexing used, working with pointer in a controlled way results more simplified and readable code:[MISRA 2012 Rule 18.4, advisory]*/
                            }
                        }
                    }
                    DataBufferPtr[channel] = resultBufPtr[channel*groupPtr->streamNumSamples];
            }
	/*lint -restore */
        }
    }
    else{
        validate_rv = E_NOT_OK;
    }

    return validate_rv;
}
#endif


/* @brief Returns the number of valid samples per channel, stored in the result buffer. Reads a pointer, pointing to a position in the group result buffer.
 * 		   With the pointer position, the results of all group channels of the last completed conversion round can be accessed.
 * 		   With the pointer and the return value, all valid group conversion results can be accessed (the user has to take the layout of the result buffer into account).
 *         Synchronous
 *  @note  Reentrant
 *  @param[in] Group - Numeric ID of requested ADC channel group.
 *  @param[out] PtrToSamplePtr - Pointer to result buffer pointer.
 *  @return Adc_StreamNumSampleType.
 *  @retval Number of valid samples per channel.
 */
Adc_StreamNumSampleType Adc_GetStreamLastPointer(Adc_GroupType Group, Adc_ValueGroupType** PtrToSamplePtr) {
	Adc_StreamNumSampleType nofSample = 0u;
    const Adc_GroupDefType *groupPtr = Adc_Hw_getGroupPtr(Group);
    Std_ReturnType validate_rv = E_OK;
    Adc_ArcStateChangeType validStatusChange;

    /** @req 4.1.2|4.3.0/SWS_Adc_00302 If called prior to initializing the driver, the function Adc_GetStreamLastPointer shall raise development error ADC_E_UNINIT, set the pointer, passed as parameter (PtrToSamplePtr), to NULL and return 0 without any further action.*/
    validate((boolean)(Adc_Hw_GetAdcState() == ADC_STATE_INIT), ADC_GETSTREAMLASTPOINTER_ID, ADC_E_UNINIT, &validate_rv);
    *PtrToSamplePtr = NULL_PTR;

    /** @req 4.1.2|4.3.0/SWS_Adc_00218 If the group ID is non-existent, the function Adc_GetStreamLastPointer shall raise development error ADC_E_PARAM_GROUP, set the pointer, passed as parameter (PtrToSamplePtr), to NULL and return 0 without any further action.*/
    validate((boolean)(Adc_Hw_validGroupId(Group) == TRUE), ADC_GETSTREAMLASTPOINTER_ID, ADC_E_PARAM_GROUP, &validate_rv);

    if(groupPtr != NULL_PTR){
        /** @req 4.1.2|4.3.0/SWS_Adc_00215 when called while the group status is ADC_IDLE and the group conversion was not started (no results are available from previous conversions) , the function Adc_GetStreamLastPointer shall raise development error ADC_E_IDLE*/
        validate((boolean)(groupPtr->status->groupStatus != ADC_IDLE), ADC_GETSTREAMLASTPOINTER_ID, ADC_E_IDLE, &validate_rv);

        if(E_OK == validate_rv){
            /* here no det error report */
            /** @req 4.1.2|4.3.0/SWS_Adc_00216 When called while the group status is ADC_BUSY (a conversion of the group is in progress), the function Adc_GetStreamLastPointer shall set the pointer, passed as parameter (PtrToSamplePtr), to NULL and return 0.*/
    	/*lint -save -e613 LINT:OTHER:The warning is caused because the Null pointer check is done according to AUTOSAR*/
            if (groupPtr->status->groupStatus != ADC_BUSY) {

                /* Set resultPtr to application buffer. */

                /** @req 4.1.2|4.3.0/SWS_Adc_00214 The function Adc_GetStreamLastPointer shall set the pointer, passed as parameter (PtrToSamplePtr) to point in the ADC result buffer to the latest result of the first group channel of the last completed conversion round. */
                *PtrToSamplePtr = &groupPtr->status->currResultBufPtr[0u];
                nofSample = groupPtr->status->currSampleCount;
			/*lint -restore */
                /* Group status change handling */
                /** @req 4.1.2|4.3.0/SWS_Adc_00326 Calling function Adc_GetStreamLastPointer while group status is ADC_STREAM_COMPLETED shall trigger a state transition to ADC_BUSY. */
                /** @req 4.1.2|4.3.0/SWS_Adc_00327 Calling function Adc_GetStreamLastPointer while group status is ADC_STREAM_COMPLETED shall trigger a state transition to ADC_IDLE for software conversion modes which automatically stop the conversion */
                validStatusChange = Adc_Hw_GroupStatusChange(Group);
                validate((boolean)(validStatusChange != ADC_STATE_CHANGE_ERROR), ADC_READGROUP_ID, ADC_E_BUSY, &validate_rv);
            }
        }
    }

    /** @req 4.1.2|4.3.0/SWS_Adc_00387 The function Adc_GetStreamLastPointer shall return the number of valid samples per channel, stored in the ADC result buffer. */
    return nofSample;
}


#if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)
/* @brief API that starts the conversion of all channels of the requested ADC Channel group.
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         Asynchronous
 *  @note  Reentrant
 *  @param[in] Group - Numeric ID of requested ADC Channel group.
 */
void Adc_StartGroupConversion (Adc_GroupType Group){
    /*Implementation specific type: Adc_GroupDefType*/
	const Adc_GroupDefType *groupPtr = Adc_Hw_getGroupPtr(Group);
    Std_ReturnType validate_rv = E_OK;
    /** !req 4.1.2|4.3.0/SWS_Adc_00348 Related with priority*/
    /** !req 4.1.2|4.3.0/SWS_Adc_00427 Related with priority*/
    /** !req 4.1.2|4.3.0/SWS_Adc_00351 Related with priority*/
    /** !req 4.1.2|4.3.0/SWS_Adc_00428 Related with priority*/
    /** @req 4.1.2|4.3.0/SWS_Adc_00294 When called prior to initializing the driver, the function Adc_StartGroupConversion shall raise development error ADC_E_UNINIT.*/
    validate((boolean)(Adc_Hw_GetAdcState() == ADC_STATE_INIT),ADC_STARTGROUPCONVERSION_ID,ADC_E_UNINIT, &validate_rv);

    /** @req 4.1.2|4.3.0/SWS_Adc_00125 When called with a non-existing channel group ID, function Adc_StartGroupConversion shall raise development error ADC_E_PARAM_GROUP and return without any action.*/
    validate((boolean)(Adc_Hw_validGroupId(Group) == TRUE), ADC_STARTGROUPCONVERSION_ID, ADC_E_PARAM_GROUP, &validate_rv);

    if(groupPtr != NULL_PTR){
        /** @req 4.1.2|4.3.0/SWS_Adc_00424 , when called prior to initializing the result buffer pointer with function Adc_SetupResultBuffer, the function Adc_StartGroupConversion shall raise development error ADC_E_BUFFER_UNINIT.*/
        validate((boolean)(NULL_PTR != groupPtr->status->resultBufferPtr), ADC_STARTGROUPCONVERSION_ID, ADC_E_BUFFER_UNINIT, &validate_rv);

        /** @req 4.1.2|4.3.0/SWS_Adc_00133 , when called on a group with trigger source configured as hardware, function Adc_StartGroupConversion shall raise development error ADC_E_WRONG_TRIGG_SRC and return without any action.*/
        validate((boolean)(ADC_TRIGG_SRC_HW != groupPtr->triggerSrc), ADC_STARTGROUPCONVERSION_ID, ADC_E_WRONG_TRIGG_SRC, &validate_rv);

        /** @req 4.1.2|4.3.0/SWS_Adc_00346 when called while any of the groups, which can not be implicitly stopped, is not in state ADC_IDLE , the function Adc_StartGroupConversion shall raise development error ADC_E_BUSY and return without any action.*/
        /** @req 4.1.2|4.3.0/SWS_Adc_00426 when called while any of the groups, which can be implicitly stopped, is not in state ADC_IDLE and not in state ADC_STREAM_COMPLETED, the function Adc_StartGroupConversion shall raise development error ADC_E_BUSY and return without any action.*/
        validate((boolean)((ADC_IDLE == groupPtr->status->groupStatus) || ( ADC_STREAM_COMPLETED == groupPtr->status->groupStatus)),ADC_STARTGROUPCONVERSION_ID, ADC_E_BUSY, &validate_rv);

        if(E_OK == validate_rv){

            /* Set group state to BUSY. */
    	/*lint -save -e613 LINT:OTHER:The warning is caused because the Null pointer check is done according to AUTOSAR*/
            groupPtr->status->groupStatus = ADC_BUSY;
            groupPtr->status->currSampleCount = 0u;
            /** @req 4.1.2|4.3.0/SWS_Adc_00431 The function Adc_StartGroupConversion shall reset the internal result buffer pointer, that conversion result storage always starts, after calling Adc_StartGroupConversion, at the result buffer base address which was configured with Adc_SetupResultBuffer. */
            groupPtr->status->currResultBufPtr = groupPtr->status->resultBufferPtr;
    	/*lint -restore */
            /*set hardware registers*/
            /** @req 4.1.2|4.3.0/SWS_Adc_00156 The function Adc_StartGroupConversion shall NOT automatically enable the notification mechanism for that group (this has to be done by a separate API call).*/
            /** @req 4.1.2|4.3.0/SWS_Adc_00061 The function Adc_StartGroupConversion shall start the conversion of all channels of the requested ADC Channel group.*/
            Adc_Hw_StartGroupConversion(Group);
         }
    }
}


/* @brief API that stops the conversion of all channels of the requested ADC Channel group.
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         Synchronous
 *  @note  Reentrant
 *  @param[in] Group - Numeric ID of requested ADC Channel group.
 */
void Adc_StopGroupConversion (Adc_GroupType Group){
    const Adc_GroupDefType *groupPtr = Adc_Hw_getGroupPtr(Group);
    Std_ReturnType validate_rv= E_OK;
    /** @req 4.1.2|4.3.0/SWS_Adc_00295 If called prior to initializing the module, function Adc_StopGroupConversion shall raise development error ADC_E_UNINIT and return without any action.*/
    validate((boolean)(Adc_Hw_GetAdcState() == ADC_STATE_INIT),ADC_STOPGROUPCONVERSION_ID,ADC_E_UNINIT, &validate_rv);

    /** @req 4.1.2|4.3.0/SWS_Adc_00126 If the group ID is non-existing, the function Adc_StopGroupConversion shall raise development error ADC_E_PARAM_GROUP and return without any action.*/
    validate((boolean)(Adc_Hw_validGroupId(Group) == TRUE), ADC_STOPGROUPCONVERSION_ID, ADC_E_PARAM_GROUP, &validate_rv);

    if(groupPtr != NULL_PTR){
        /** @req 4.1.2|4.3.0/SWS_Adc_00164 If the group has a trigger source configured as hardware, function Adc_StopGroupConversion shall raise development error ADC_E_WRONG_TRIGG_SRC and return without any action. */
        validate((boolean)(ADC_TRIGG_SRC_HW != groupPtr->triggerSrc), ADC_STOPGROUPCONVERSION_ID, ADC_E_WRONG_TRIGG_SRC, &validate_rv);

        /** @req 4.1.2|4.3.0/SWS_Adc_00241 When called while the group is in state ADC_IDLE, the function Adc_StopGroupConversion shall raise development error ADC_E_IDLE and return without any action.*/
        validate((boolean)(ADC_IDLE != groupPtr->status->groupStatus), ADC_STOPGROUPCONVERSION_ID, ADC_E_IDLE, &validate_rv);

        if(E_OK == validate_rv){
            /*set hardware registers*/
            /** @req 4.1.2|4.3.0/SWS_Adc_00385 When the ADC Channel Group is in one-shot and software-trigger mode, the function Adc_StopGroupConversion shall stop an ongoing conversion of the group. */
            /** @req 4.1.2|4.3.0/SWS_Adc_00386 When the ADC Channel Group is in continuous-conversion and software-trigger mode, the function Adc_StopGroupConversion shall stop an ongoing conversion of the group. */
            Adc_Hw_StopGroupConversion(Group);
        /*lint -save -e613 LINT:OTHER:The warning is caused because the Null pointer check is done according to AUTOSAR*/
            /** @req 4.1.2|4.3.0/SWS_Adc_00360 The function Adc_StopGroupConversion shall set the group status to state ADC_IDLE. */
            groupPtr->status->groupStatus = ADC_IDLE;
#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
            /* Disable group notification if enabled. */
            if(1 == groupPtr->status->notifictionEnable) {
    		/*lint -restore */
                /** @req 4.1.2|4.3.0/SWS_Adc_00155 The function Adc_StopGroupConversion shall automatically disable group notification for the requested group. */
                Adc_DisableGroupNotification (Group);
            }
#endif
        }
    }
}
#endif


/* @brief API that enables the notification mechanism for the requested ADC Channel group.
 *         Synchronous
 *  @note  Reentrant
 *  @param[in] Group - Numeric ID of requested ADC Channel group.
 */
#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
void Adc_EnableGroupNotification (Adc_GroupType Group){
    const Adc_GroupDefType *groupPtr = Adc_Hw_getGroupPtr(Group);
    Std_ReturnType validate_rv = E_OK;

    /** @req 4.1.2|4.3.0/SWS_Adc_00299  If called prior to initializing the ADC module, Adc_EnableGroupNotification shall raise development error ADC_E_UNINIT and return without any action.*/
    validate((boolean)(Adc_Hw_GetAdcState() == ADC_STATE_INIT),ADC_ENABLEGROUPNOTIFICATION_ID,ADC_E_UNINIT, &validate_rv);

    /** @req 4.1.2|4.3.0/SWS_Adc_00130 If the channel group ID is non-existing, the function Adc_EnableGroupNotification shall raise development error ADC_E_PARAM_GROUP and return without any action.*/
    validate((boolean)(Adc_Hw_validGroupId(Group) == TRUE), ADC_ENABLEGROUPNOTIFICATION_ID, ADC_E_PARAM_GROUP, &validate_rv);

    if(groupPtr != NULL_PTR){
        /** @req 4.1.2|4.3.0/SWS_Adc_00165 if the group notification function pointer is NULL, the function Adc_EnableGroupNotification shall raise development error ADC_E_NOTIF_CAPABILITY and return without any action. */
        validate((boolean)(NULL_PTR != groupPtr->groupCallback), ADC_ENABLEGROUPNOTIFICATION_ID, ADC_E_NOTIF_CAPABILITY, &validate_rv);

        if(E_OK == validate_rv){
            /** @req 4.1.2|4.3.0/SWS_Adc_00057 The function Adc_EnableGroupNotification shall enable the notification mechanism for the requested ADC Channel group.*/
    	/*lint -e{613} LINT:OTHER:The warning is caused because the Null pointer check is done according to AUTOSAR*/
            groupPtr->status->notifictionEnable = 1u;
        }
    }
}


/* @brief API that disables the notification mechanism for the requested ADC Channel group.
 *         Synchronous
 *  @note  Reentrant
 *  @param[in] Group - Numeric ID of requested ADC Channel group.
 */
void Adc_DisableGroupNotification (Adc_GroupType Group){
    const Adc_GroupDefType *groupPtr = Adc_Hw_getGroupPtr(Group);
    Std_ReturnType validate_rv = E_OK;

    /** @req 4.1.2|4.3.0/SWS_Adc_00300 If called prior to initializing the ADC module, Adc_DisableGroupNotification shall raise development error ADC_E_UNINIT and return without any action.*/
    validate((boolean)(Adc_Hw_GetAdcState() == ADC_STATE_INIT),ADC_DISABLEGROUPNOTIFICATION_ID,ADC_E_UNINIT, &validate_rv);

    /** @req 4.1.2|4.3.0/SWS_Adc_00131 If the channel group ID is non-existing, the function Adc_DisableGroupNotification shall raise development error ADC_E_PARAM_GROUP and return without any action.*/
    validate((boolean)(Adc_Hw_validGroupId(Group) == TRUE), ADC_DISABLEGROUPNOTIFICATION_ID, ADC_E_PARAM_GROUP, &validate_rv);

    if(groupPtr != NULL_PTR){
        /** @req 4.1.2|4.3.0/SWS_Adc_00166 If the group notification function pointer is NULL, the function Adc_DisableGroupNotification shall raise development error ADC_E_NOTIF_CAPABILITY and return without any action.*/
        /** @req 4.1.2|4.3.0/SWS_Adc_00166 If the group notification function pointer is NULL, the function Adc_DisableGroupNotification shall raise development error ADC_E_NOTIF_CAPABILITY and return without any action.*/
        validate((boolean)(NULL_PTR != groupPtr->groupCallback), ADC_DISABLEGROUPNOTIFICATION_ID, ADC_E_NOTIF_CAPABILITY, &validate_rv);

        if(E_OK == validate_rv){
            /** @req 4.1.2|4.3.0/SWS_Adc_00058 The function Adc_DisableGroupNotification shall disable the notification mechanism for the requested ADC Channel group.*/
    	/*lint -e{613} LINT:OTHER:The warning is caused because the Null pointer check is done according to AUTOSAR*/
            groupPtr->status->notifictionEnable = 0u;
        }
    }
}
#endif


/* @brief Returns the conversion status of the requested ADC Channel group.
 *         Synchronous
 *  @note  Reentrant
 *  @param[in] Group - Numeric ID of requested ADC channel group.
 *  @return Adc_StatusType.
 *  @retval Conversion status for the requested group.
 */
Adc_StatusType Adc_GetGroupStatus(Adc_GroupType Group) {
    const Adc_GroupDefType *groupPtr = Adc_Hw_getGroupPtr(Group);
    Adc_StatusType ret_status = ADC_IDLE;
    Std_ReturnType validate_rv = E_OK;
    /** @req 4.1.2|4.3.0/SWS_Adc_00301 If called prior to initializing the ADC module, Adc_GetGroupStatus shall raise development error ADC_E_UNINIT and return ADC_IDLE without any action.*/
    validate((boolean)(Adc_Hw_GetAdcState() == ADC_STATE_INIT),ADC_GETGROUPSTATUS_ID,ADC_E_UNINIT, &validate_rv);

    /** @req 4.1.2|4.3.0/SWS_Adc_00225 If the channel group ID is non-existing, the function Adc_GetGroupStatus shall raise development error ADC_E_PARAM_GROUP and return ADC_IDLE without any action.*/
    validate((boolean)(Adc_Hw_validGroupId(Group) == TRUE), ADC_GETGROUPSTATUS_ID, ADC_E_PARAM_GROUP, &validate_rv);

    if(E_OK == validate_rv){
    	/** @req 4.1.2|4.3.0/SWS_Adc_00226 The function Adc_GetGroupStatus shall provide atomic access to the status data by the use of atomic instructions. */
    	ret_status = groupPtr->status->groupStatus;
    }
    /** @req 4.1.2|4.3.0/SWS_Adc_00224 The function Adc_GetGroupStatus shall return ADC_COMPLETED under certain condition*/
    /** @req:PPC|TMS570|MPC5607B|MPC5645S|MPC5748G|MPC5646B|MPC5744P|MPC5747C 4.1.2|4.3.0/SWS_Adc_00221 The function Adc_GetGroupStatus shall return ADC_IDLE in certain situation */
    /** @req:PPC|TMS570|MPC5607B|MPC5645S|MPC5748G|MPC5646B|MPC5744P|MPC5747C 4.1.2|4.3.0/SWS_Adc_00222 The function Adc_GetGroupStatus shall return ADC_BUSY in certain situation */
    /** @req:PPC|TMS570|MPC5607B|MPC5645S|MPC5748G|MPC5646B|MPC5744P|MPC5747C 4.3.0/SWS_Adc_00220 The function Adc_GetGroupStatus shall return the conversion status of the requested ADC Channel group. */
    return ret_status;
}


/* @brief API that returns the version information of this module.
 *         Synchronous
 *  @note  Reentrant
 *  @param[out] VersionInfoPtr - Pointer to where to store the version information of this module.
 */
#if (ADC_VERSION_INFO_API == STD_ON)
void Adc_GetVersionInfo( Std_VersionInfoType* VersionInfoPtr ) {
	Std_ReturnType validate_rv = E_OK;
	/** @req 4.1.2|4.3.0/SWS_Adc_00458 The function Adc_GetVersionInfo shall check the parameter versioninfo for not being NULL and shall raise the development error ADC_E_PARAM_POINTER if the check fails. */
	validate((boolean)(VersionInfoPtr != NULL_PTR), ADC_GETVERSIONINFO_ID, ADC_E_PARAM_POINTER, &validate_rv);
	if(E_OK == validate_rv){
		VersionInfoPtr->vendorID = ADC_VENDOR_ID;
		VersionInfoPtr->moduleID = ADC_MODULE_ID;
		VersionInfoPtr->sw_major_version = ADC_SW_MAJOR_VERSION;
		VersionInfoPtr->sw_minor_version = ADC_SW_MINOR_VERSION;
		VersionInfoPtr->sw_patch_version = ADC_SW_PATCH_VERSION;
	}
}
#endif


#if (STD_ON == ADC_HW_TRIGGER_API)
/** !req 4.1.2|4.3.0/SWS_Adc_00265 The function Adc_EnableHardwareTrigger shall be pre-compile time configurable On/Off by the configuration parameter AdcHwTriggerApi.*/
/** !req 4.1.2|4.3.0/SWS_Adc_00266 The function Adc_DisableHardwareTrigger shall be pre-compile time configurable On/Off by the configuration parameter AdcHwTriggerApi.*/
/** !req 4.1.2|4.3.0/SWS_Adc_00370 void Adc_EnableHardwareTrigger( Adc_GroupType Group )*/
/* @brief Enables the hardware trigger for the requested ADC Channel group.
 *         Synchronous
 *  @note  Reentrant
 *  @param[in] Group - Numeric ID of requested ADC Channel group.
 */
void Adc_EnableHardwareTrigger(Adc_GroupType Group) {
    uint32 i = 0u;
    uint8 busyStatus = 1u;
    uint32 configData;
    uint32 towClearFlags;
    const Adc_GroupDefType *groupPtr = Adc_Hw_getGroupPtr(group);

#if ( ADC_DEV_ERROR_DETECT == STD_ON )
    /** !req 4.1.2|4.3.0/SWS_Adc_00297 If called prior to initializing the driver, the function Adc_EnableHardwareTrigger shall raise development error ADC_E_UNINIT and return without any action.*/
    VALIDATE_NO_RV(adcState == ADC_STATE_INIT,ADC_ENABLEHARDWARETRIGGER_ID,ADC_E_UNINIT);

    /* Group Validation */
    /** !req 4.1.2|4.3.0/SWS_Adc_00128 If the channel group ID is invalid, the function Adc_EnableHardwareTrigger shall raise development error ADC_E_PARAM_GROUP and return without any action.*/
    VALIDATE_NO_RV(Adc_Hw_validGroupId(group), ADC_ENABLEHARDWARETRIGGER_ID, ADC_E_PARAM_GROUP);

    /** !req 4.1.2|4.3.0/SWS_Adc_00321 When called while any group with trigger source SW is not in state ADC_IDLE, the function Adc_EnableHardwareTrigger shall raise development error ADC_E_BUSY and return without any action.*/
    VALIDATE_NO_RV( (groupPtr->triggerSrc == ADC_TRIGG_SRC_SW) && (groupPtr->status->groupStatus == ADC_IDLE ) ,
            ADC_ENABLEHARDWARETRIGGER_ID, ADC_E_BUSY);

    /** !req 4.1.2|4.3.0/SWS_Adc_00349 If the HW trigger for the group is already enabled, the function Adc_EnableHardwareTrigger shall raise development error ADC_E_BUSY and return without any action.*/
    VALIDATE_NO_RV( groupPtr->status->hwTriggerEnable != 1 , ADC_ENABLEHARDWARETRIGGER_ID, ADC_E_BUSY);

    /** !req 4.1.2|4.3.0/SWS_Adc_00353 If the maximum number of available hardware triggers is already enabled (device and implementation specific), the function Adc_EnableHardwareTrigger shall raise development error ADC_E_BUSY and return without any action.*/
    /** !req 4.1.2|4.3.0/SWS_Adc_00425 When called prior to initializing the result buffer pointer with function Adc_SetupResultBuffer, the function Adc_EnableHardwareTrigger shall raise development error ADC_E_BUFFER_UNINIT.*/
    VALIDATE_NO_RV( (groupPtr->status->resultBufferPtr != NULL_PTR), ADC_ENABLEHARDWARETRIGGER_ID, ADC_E_BUFFER_UNINIT );

    for (uint32 configId = 0u; configId < ADC_ARC_CTRL_CONFIG_CNT; configId++) {
        if(Adc_Hw_GetConfigPTR(configId) != NULL_PTR) {
            const Adc_ConfigType *AdcConfigPtr = Adc_Hw_GetConfigPTR(configId);

            for (Adc_GroupType group = 0u; group < AdcConfigPtr->nbrOfGroups; group++) {
                const Adc_GroupDefType *gPtr = &AdcConfigPtr->groupConfigPtr[group];
                if( (ADC_TRIGG_SRC_SW == gPtr->triggerSrc) &&
                        (ADC_IDLE == gPtr->status->groupStatus)) {
                    (void)Det_ReportError(ADC_MODULE_ID,0,ADC_ENABLEHARDWARETRIGGER_ID, ADC_E_BUSY );
                    return;
                }
            }
        }
    }
#endif
    Adc_Hw_EnableHardwareTrigger(Group);
    groupPtr->status->hwTriggerEnable = 1;
    /* Set group state to BUSY. */
    groupPtr->status->groupStatus = ADC_BUSY;
}


/** !req 4.1.2|4.3.0/SWS_Adc_00371 void Adc_DisableHardwareTrigger( Adc_GroupType Group )*/
/* @brief Disables the hardware trigger for the requested ADC Channel group.
 *         Synchronous
 *  @note  Reentrant
 *  @param[in] Group - Numeric ID of requested ADC Channel group.
 */
void Adc_DisableHardwareTrigger(Adc_GroupType Group) {
    if( E_OK == Adc_CheckDisableHardwareTrigger(adcState, AdcConfigPtr, Group) )
    {
        /** !req 4.1.2|4.3.0/SWS_Adc_00116 The function Adc_DisableHardwareTrigger shall disable the hardware trigger for the requested ADC Channel group.*/
        /* IMPROVEMENT: */

        /** !req 4.1.2|4.3.0/SWS_Adc_00361 The function Adc_DisableHardwareTrigger shall set the group status to state ADC_IDLE.*/
        AdcConfigPtr->groupConfigPtr[Group].status->groupStatus = ADC_IDLE;

#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
        /* Disable group notification if enabled. */
        if( 0u != AdcConfigPtr->groupConfigPtr[Group].status->notifictionEnable ) {
            /** !req 4.1.2|4.3.0/SWS_Adc_00157 If enabled, the function Adc_DisableHardwareTrigger shall disable the notification mechanism for the requested group.*/
            Adc_DisableGroupNotification (Group);
        }
#endif
    }
}
#endif

/** @}*/
/** @}*/
