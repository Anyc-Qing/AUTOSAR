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
/** @tagSettings DEFAULT_ARCHITECTURE=TMS570|JACINTO5|RH850F1H|MPC5744P */

/* ----------------------------[includes]------------------------------------*/
#include "Adc.h"
#include "Adc_Internal.h"
#include "Adc_Hw_Common.h"
#if defined(USE_DET)
#include "Det.h"
#endif

/* ----------------------------[private define]------------------------------*/
/* ----------------------------[private macro]-------------------------------*/
/* ----------------------------[private typedef]-----------------------------*/
/* ----------------------------[private function prototypes]-----------------*/
/* ----------------------------[private variables]---------------------------*/
/* ----------------------------[private functions]---------------------------*/

/** @brief Validates the group ID
 * @param[in] Group - Numeric ID of an ADC channel group.
 * @return Boolean
 * @retval TRUE Group ID is valid
 * @retval FALSE    Group ID is invalid
 */
#if !defined(CFG_MPC5744P)
boolean Adc_Hw_validGroupId(Adc_GroupType group) {
    return (Adc_Hw_getGroupPtr(group) != NULL_PTR) ? TRUE : FALSE;
}

/** @brief Change group state from ADC_STREAM_COMPLETED to ADC_BUSY.
 *         It is called in Adc_GetStreamLastPointer and Adc_ReadGroup when group status is ADC_STREAM_COMPLETED.
 * @param[in] GroupPtr - Numeric ID of requested ADC channel group.
 * @return Adc_ArcStateChangeType
 * @retval ADC_STATE_CHANGE_NOT       Group state is not changed.
 * @retval ADC_STATE_CHANGE_NO_ERROR  Group state is changed with no error.
 * @retval ADC_STATE_CHANGE_ERROR      Group state is not changed and error occurs.
 */
static Adc_ArcStateChangeType Adc_Hw_StreamCompleted_To_Busy(const Adc_GroupDefType *GroupPtr) {
    Adc_ArcStateChangeType state_change_flag = ADC_STATE_CHANGE_NOT;
    /* @req 4.1.2|4.3.0/SWS_Adc_00326 Calling function Adc_GetStreamLastPointer while group status is ADC_STREAM_COMPLETED shall trigger a state transition to ADC_BUSY for continuous conversion modes (single access mode or circular streaming buffer mode) and hardware triggered groups in single access mode or circular streaming access mode.*/
    /* @req 4.1.2|4.3.0/SWS_Adc_00329 Calling function Adc_ReadGroup while group status is ADC_STREAM_COMPLETED shall trigger a state transition to ADC_BUSY for continuous conversion modes (single access mode or circular streaming buffer mode) and hardware triggered groups in single access mode or circular streaming access mode.*/
    if (ADC_STREAM_COMPLETED == GroupPtr->status->groupStatus) {
#if (ADC_HW_TRIGGER_API == STD_ON)
        if (ADC_TRIGG_SRC_SW == GroupPtr->triggerSrc) { // design doc: continuous conversion mode
#endif
        if (((ADC_ACCESS_MODE_SINGLE == GroupPtr->accessMode)
                && (ADC_CONV_MODE_CONTINUOUS == GroupPtr->conversionMode))
                || ((ADC_ACCESS_MODE_STREAMING == GroupPtr->accessMode)
                        && (ADC_STREAM_BUFFER_CIRCULAR == GroupPtr->streamBufferMode))) { // For SW trigger, streaming access only occur in continuous mode(ASR4.3.0 Sec7.3.2)
            GroupPtr->status->groupStatus = ADC_BUSY;
            state_change_flag = ADC_STATE_CHANGE_NO_ERROR;
        }
#if (ADC_HW_TRIGGER_API == STD_ON)
    }
    else if (ADC_TRIGG_SRC_HW == GroupPtr->triggerSrc) { // HW trigger source is not supported
        if ((ADC_ACCESS_MODE_SINGLE == GroupPtr->accessMode)
                || ((ADC_ACCESS_MODE_STREAMING == GroupPtr->accessMode)
                        && (ADC_STREAM_BUFFER_CIRCULAR
                                == GroupPtr->streamBufferMode))) {
            GroupPtr->status->groupStatus = ADC_BUSY;
            state_change_flag = ADC_STATE_CHANGE_NO_ERROR;
        }
    }
    else {
        /* Error*/
        state_change_flag = ADC_STATE_CHANGE_ERROR;
    }
#endif
    }
    return state_change_flag;
}

/** @brief Change group state from ADC_STREAM_COMPLETED to ADC_IDLE
 *         It is called in Adc_GetStreamLastPointer and Adc_ReadGroup when group status is ADC_STREAM_COMPLETED.
 * @param[in] GroupPtr - Numeric ID of requested ADC channel group.
 * @return Adc_ArcStateChangeType
 * @retval ADC_STATE_CHANGE_NOT       Group state is not changed.
 * @retval ADC_STATE_CHANGE_NO_ERROR  Group state is changed with no error.
 * @retval ADC_STATE_CHANGE_ERROR      Group state is not changed and error occurs.
 */
static Adc_ArcStateChangeType Adc_Hw_StreamCompleted_To_Idle(const Adc_GroupDefType *GroupPtr) {
    Adc_ArcStateChangeType state_change_flag = ADC_STATE_CHANGE_NOT;
    /* @req 4.1.2|4.3.0/SWS_Adc_00327 Calling function Adc_GetStreamLastPointer while group status is ADC_STREAM_COMPLETED shall trigger a state transition to ADC_IDLE for software conversion modes which automatically stop the conversion (streaming buffer with linear access mode or one-shot conversion mode with single access) and for the hardware triggered conversion mode in combination with linear streaming access mode.*/
    /* @req 4.1.2|4.3.0/SWS_Adc_00330 Calling function Adc_ReadGroup while group status is ADC_STREAM_COMPLETED shall trigger a state transition to ADC_IDLE for software triggered conversion modes which automatically stop the conversion (streaming buffer with linear access mode or one-shot conversion mode with single access) and for the hardware triggered conversion mode in combination with linear streaming access mode.*/
    if (ADC_STREAM_COMPLETED == GroupPtr->status->groupStatus) {
#if (ADC_HW_TRIGGER_API == STD_ON)
        if (ADC_TRIGG_SRC_SW == GroupPtr->triggerSrc) { // SW trigger && [(streaming linear buffer) || (oneshot)]
#endif

        /* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: Other set of configuration will be checked in "Adc_Hw_StreamCompleted_To_Busy" in Adc_Hw_GroupStatusChange function */
        if (((ADC_STREAM_BUFFER_LINEAR == GroupPtr->streamBufferMode)
                && (ADC_ACCESS_MODE_STREAMING == GroupPtr->accessMode)) // For SW trigger, streaming access only occur in continuous mode(ASR4.3.0 Sec7.3.2)
        || ((ADC_CONV_MODE_ONESHOT == GroupPtr->conversionMode))) {
            GroupPtr->status->groupStatus = ADC_IDLE;
            state_change_flag = ADC_STATE_CHANGE_NO_ERROR;
        }

#if (ADC_HW_TRIGGER_API == STD_ON)
    }
    else if (ADC_TRIGG_SRC_HW == GroupPtr->triggerSrc) { // HW trigger && streaming linear buffer
        if ((ADC_ACCESS_MODE_STREAMING == GroupPtr->accessMode)
                && (ADC_STREAM_BUFFER_LINEAR == GroupPtr->streamBufferMode)) {
            GroupPtr->status->groupStatus = ADC_IDLE;
            state_change_flag = ADC_STATE_CHANGE_NO_ERROR;
        }
    }
    else {
        /* Error*/
        state_change_flag = ADC_STATE_CHANGE_ERROR;
    }
#endif
    }
    return state_change_flag;
}

/** @brief Change group state from ADC_COMPLETED to ADC_BUSY
 *         It is called in Adc_GetStreamLastPointer and Adc_ReadGroup when group status is ADC_COMPLETED.
 * @param[in] GroupPtr - Numeric ID of requested ADC channel group.
 * @return Adc_ArcStateChangeType
 * @retval ADC_STATE_CHANGE_NOT       Group state is not changed.
 * @retval ADC_STATE_CHANGE_NO_ERROR  Group state is changed with no error.
 * @retval ADC_STATE_CHANGE_ERROR      Group state is not changed and error occurs.
 */
static Adc_ArcStateChangeType Adc_Hw_ADCCompleted_To_Busy(const Adc_GroupDefType *GroupPtr) {
    Adc_ArcStateChangeType state_change_flag = ADC_STATE_CHANGE_NOT;
    if (ADC_COMPLETED == GroupPtr->status->groupStatus) {
        /* @req 4.1.2|4.3.0/SWS_Adc_00328 Calling function Adc_GetStreamLastPointer while group status is ADC_COMPLETED shall trigger a state transition to ADC_BUSY.*/
        /* @req 4.1.2|4.3.0/SWS_Adc_00331 Calling function Adc_ReadGroup while group status is ADC_COMPLETED shall trigger a state transition to ADC_BUSY.*/
        GroupPtr->status->groupStatus = ADC_BUSY;
        state_change_flag = ADC_STATE_CHANGE_NO_ERROR;
    }
    return state_change_flag;
}

/** @brief Changes the status of a group, it calls functions: Adc_Hw_StreamCompleted_To_Busy, Adc_Hw_StreamCompleted_To_Idle, Adc_Hw_ADCCompleted_To_Busy
 * @param[in] Group - Numeric ID of an ADC channel group.
 * @return Adc_ArcStateChangeType
 * @retval ADC_STATE_CHANGE_NOT         The group status is not changed
 * @retval ADC_STATE_CHANGE_NO_ERROR    The group status is changed and no error occurs in the process
 * @retval ADC_STATE_CHANGE_ERROR       The group status is not changed and error occurs in the process
 */

Adc_ArcStateChangeType Adc_Hw_GroupStatusChange(Adc_GroupType Group) {               // This implementation depends on the following certain status change calling sequence
    const Adc_GroupDefType *groupPtr = Adc_Hw_getGroupPtr(Group);
    Adc_ArcStateChangeType state_change_flag;                                        // 3 changes: stream completed --> busy, stream completed --> idle, adc completed --> busy
                                                                                     // Flags if any of this changes is performed
    Adc_ArcStateChangeType overall_change_flag = ADC_STATE_CHANGE_NO_ERROR;          // Flags if the state of the Adc module is changed or not

    state_change_flag = Adc_Hw_StreamCompleted_To_Busy(groupPtr);                    // Status change: stream completed --> busy
    if (ADC_STATE_CHANGE_NOT == state_change_flag) {
        state_change_flag = Adc_Hw_StreamCompleted_To_Idle(groupPtr);                // Status change: stream completed --> idle
        if (ADC_STATE_CHANGE_NOT == state_change_flag) {
            state_change_flag = Adc_Hw_ADCCompleted_To_Busy(groupPtr);               // Status change: adc completed --> busy
            if (state_change_flag == ADC_STATE_CHANGE_NOT) {
                overall_change_flag = ADC_STATE_CHANGE_ERROR;
            }
        }

        /* @CODECOV:CONFIG_LIMITATION: state_change_flag will be set to ADC_STATE_CHANGE_ERROR only if the trigger source is neither hardware trigger source nor software trigger source. So this condition cannot be configured. */
        else if (ADC_STATE_CHANGE_ERROR == state_change_flag) {
            overall_change_flag = ADC_STATE_CHANGE_ERROR;
        }
        else {
            ;   // do nothing
        }
    }

    /* @CODECOV:CONFIG_LIMITATION: state_change_flag will be set to ADC_STATE_CHANGE_ERROR only if the trigger source is neither hardware trigger source nor software trigger source. So this condition cannot be configured. */
    else if (ADC_STATE_CHANGE_ERROR == state_change_flag) {
        overall_change_flag = ADC_STATE_CHANGE_ERROR;
    }
    else {
        ;   // do nothing
    }
    return overall_change_flag;
}

/* ----------------------------[public functions]----------------------------*/
/** Adc_Internal_Isr function is used in JACINTO , RH850 and in AdcOnSpi.
 * TMS570 doesn't use this function
 */
#if !defined(CFG_TMS570)
void Adc_Internal_Isr(const Adc_GroupDefType * groupPtr) {

    if (groupPtr != NULL_PTR) {
        if (ADC_ACCESS_MODE_SINGLE == groupPtr->accessMode) {

            groupPtr->status->currSampleCount = 1u;
            /* @req 4.1.2|4.3.0/SWS_Adc_00325 The function Adc_GetGroupStatus shall return ADC_STREAM_COMPLETED*/
            groupPtr->status->groupStatus = ADC_STREAM_COMPLETED;

            if ((groupPtr->conversionMode == ADC_CONV_MODE_CONTINUOUS)
                    || ((groupPtr->conversionMode == ADC_CONV_MODE_ONESHOT)
                            && (ADC_TRIGG_SRC_HW == groupPtr->triggerSrc))) {
                Adc_Hw_IsrPost(groupPtr, TRUE);
            }
            else {
                Adc_Hw_IsrPost(groupPtr, FALSE);
            }
        }
        else {
            /*
             * ADC_ACCESS_MODE_STREAMING access mode
             */
            if (ADC_STREAM_BUFFER_LINEAR == groupPtr->streamBufferMode) {
                groupPtr->status->currSampleCount++;
                if (groupPtr->status->currSampleCount < groupPtr->streamNumSamples) {
                    groupPtr->status->currResultBufPtr++;
                    /* @req 4.1.2|4.3.0/SWS_Adc_00224 The function Adc_GetGroupStatus shall return ADC_COMPLETED*/
                    groupPtr->status->groupStatus = ADC_COMPLETED;

                    Adc_Hw_IsrPost(groupPtr, TRUE);
                }
                else {
                    /* All samples completed */
                    /* @req 4.1.2|4.3.0/SWS_Adc_00325 The function Adc_GetGroupStatus shall return ADC_STREAM_COMPLETED*/
                    groupPtr->status->groupStatus = ADC_STREAM_COMPLETED;
                    Adc_Hw_IsrPost(groupPtr, FALSE);
                }
            }
            else if (ADC_STREAM_BUFFER_CIRCULAR == groupPtr->streamBufferMode) {

                groupPtr->status->currResultBufPtr++;

                /* Check for buffer wrapping */
                /*lint -e{9016} MISRA:OTHER:correct arithmetic even if Array index is not used:[MISRA 2012 Rule 18.4, advisory]*/
                /*lint -e{946} MISRA:PERFORMANCE:Need pointer arithmetic to determine size of struct - crc value:[MISRA 2012 Rule 18.3, required]*/
                /* working with pointer in a controlled way results more simplified and readable code*/
                if (groupPtr->status->currResultBufPtr
                        >= (groupPtr->status->resultBufferPtr + groupPtr->streamNumSamples)) {
                    groupPtr->status->currResultBufPtr = groupPtr->status->resultBufferPtr;
                }

                groupPtr->status->currSampleCount++;
                if (groupPtr->status->currSampleCount < groupPtr->streamNumSamples) {
                    /* @req 4.1.2|4.3.0/SWS_Adc_00224 The function Adc_GetGroupStatus shall return ADC_COMPLETED*/
                    groupPtr->status->groupStatus = ADC_COMPLETED;
                }
                else {
                    groupPtr->status->currSampleCount = groupPtr->streamNumSamples;
                    /* All samples completed */
                    /* @req 4.1.2|4.3.0/SWS_Adc_00325 The function Adc_GetGroupStatus shall return ADC_STREAM_COMPLETED*/
                    groupPtr->status->groupStatus = ADC_STREAM_COMPLETED;
                }

                /* Turn on the end of stream/conversion interrupt again */
                Adc_Hw_IsrPost(groupPtr, TRUE);
            }
            else {
                ;/*do nothing*/
            }
        }
        /* Call notification if enabled. */
#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
        if ( (FALSE != groupPtr->status->notifictionEnable) && (groupPtr->groupCallback != NULL_PTR) )
        {
            groupPtr->groupCallback();
        }
#endif
    }
}
#endif
#endif
/** @brief Returns the status of a group specified by group ID
 * @param[in] Group - Numeric ID of an ADC channel group.
 * @return Adc_StatusType
 * @retval ADC_IDLE             The group is in IDLE status, no conversion is going on
 * @retval ADC_BUSY             The group is in BUSY status, conversion is going on
 * @retval ADC_COMPLETED            A conversion round (which is not the final one) of the specified group has been finished. A result is available for all channels of the group.
 * @retval ADC_STREAM_COMPLETED The result buffer is completely filled - For each channel of the selected group the number of samples to be acquired is available.
 */
Adc_StatusType Adc_Hw_getGroupStatus(Adc_GroupType group) {
    const Adc_GroupDefType * tmpPtr = Adc_Hw_getGroupPtr(group);
    return tmpPtr->status->groupStatus;
}

/**
 * @brief  validate function that will be used in API's that can be used to check the expression and report Det errors if ADC_DEV_ERROR_DETECT is STD_ON
 * @param[in] exp - Boolean expression to be verified
 * @param[in] apiid - AUTOSAR specified API Id for each module
 * @param[in] errid - AUTOSAR specified Error Id for each type of error specific to each API
 * @param[out] Returns the validity of the expression provided
 * @retval E_OK      Expression passed is OK
 * @retval E_NOT_OK  Expression passed is NOT OK (FALSE)
 */
#if !defined(CFG_MPC5744P)
static Std_ReturnType validate(boolean exp, uint8 apiid, uint8 errid) {
    Std_ReturnType validVal = E_OK;
    if (FALSE == exp) {
#if (ADC_DEV_ERROR_DETECT == STD_ON)
        /* @req:TMS570 4.1.2|4.3.0/SWS_Adc_00377 Det_ReportError */
        (void)Det_ReportError(ADC_MODULE_ID, 0u, apiid, errid);
#endif
        validVal = E_NOT_OK;
    }
    return validVal;
}

/** @brief Validate the group status, if the status is ADC_IDLE or ADC_STREAM_COMPLETED
 * @param[in] ConfigId - Numeric ID of an ADC channel.
 * @return Std_ReturnType
 * @retval E_OK             The group status is either ADC_IDLE or ADC_STREAM_COMPLETED
 * @retval E_NOT_OK         The group status is neither ADC_IDLE nor ADC_STREAM_COMPLETED
 */
Std_ReturnType Adc_Hw_Validate_Group_Status(uint32 configId) {
    Std_ReturnType validVal = E_OK;
    boolean exp;

    /* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: Already validated during code generation */
    if (Adc_Hw_GetConfigPTR(configId) != NULL_PTR) {
        const Adc_ConfigType *AdcConfigPtr = Adc_Hw_GetConfigPTR(configId);

        /* Loop over the group in the controller */
        for (Adc_GroupType group = 0u; group < AdcConfigPtr->nbrOfGroups; group++) {
            Adc_GroupStatus * statusPtr = AdcConfigPtr->groupConfigPtr[group].status;
            exp = ((ADC_IDLE == statusPtr->groupStatus)
                    || (ADC_STREAM_COMPLETED == statusPtr->groupStatus)) ?
            TRUE : FALSE;
            /** The current group status is ADC_BUSY?
             * TRUE: break the loop, then do nothing
             * FALSE: continue the loop, check next group.
             *        If all groups are checked for one specific controller, check next controller
             */
            validVal = validate(exp, ADC_DEINIT_ID, ADC_E_BUSY);
            if (E_OK == validVal) {
                /* Set group status to idle. */
                statusPtr->groupStatus = ADC_IDLE;
            }
            else {
                break;
            }
        }
    }
    else {
        validVal = E_NOT_OK;
    }
    return validVal;
}

/** @brief Returns the Adc_GroupDefType pointer which points to the group specified by group ID
 * @param[in] Group - Numeric ID of an ADC channel group.
 * @return Adc_GroupDefType pointer
 * @retval Constant pointer to Adc_GroupDefType
 */
const Adc_GroupDefType * Adc_Hw_getGroupPtr(Adc_GroupType Group) {
    const Adc_GroupDefType* grpConfigPtr = NULL_PTR;
    for (uint32 configId = 0uL; configId < ADC_ARC_CTRL_CONFIG_CNT; configId++) {
        /* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: Already validated during code generation */
        if (Adc_Hw_GetConfigPTR(configId) != NULL_PTR) {
            if ((Adc_Hw_GetConfigPTR(configId)->hwConfigPtr->hwUnitId == (Group / ADC_NOF_GROUP_PER_CONTROLLER))) { // ADC_NOF_GROUP_PER_CONTROLLER 100
                if (Adc_Hw_GetConfigPTR(configId)->nbrOfGroups > (Group % ADC_NOF_GROUP_PER_CONTROLLER)) {
                    grpConfigPtr = &(Adc_Hw_GetConfigPTR(configId)->groupConfigPtr[Group
                            % ADC_NOF_GROUP_PER_CONTROLLER]);
                }
            }
        }
    }
    return grpConfigPtr;
}
#endif
