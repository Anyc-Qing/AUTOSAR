
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
 * AUTOSAR version:   4.0.3
 */

/*lint -emacro(904,IOHWAB_VALIDATE_RETURN)*/ /*904 PC-Lint exception to MISRA 14.7 (validate DET macros)*/
#include "IoHwAb.h"
#include "IoHwAb_Internal.h"
#include "IoHwAb_Pwm.h"
#include "IoHwAb_Dcm.h"
#include "SchM_IoHwAb.h"


#if defined(USE_DET) 
#include "Det.h"
#else
#error Need to add DET module when ArcIoHwAbDevErrorDetect is enabled
#endif  

#define IS_VALID_DUTY_CYCLE(duty) (duty <= IOHWAB_DUTY_MAX)

/* Implemented in iohwab.c */
#if (IOHWAB_USING_PWM_FREQ == STD_ON)
extern Pwm_PeriodType IoHwAb_Pwm_ConvertToPeriod( Pwm_ChannelType channel, IoHwAb_FrequencyType frequency);
#endif

/* Pwm signal: PwmSignal_LED3 */
boolean IoHwAb_PwmSignal_LED3_Locked = FALSE;
IoHwAb_DutyType IoHwAb_PwmSignal_LED3_Saved = 0;
const IoHwAb_DutyType IoHwAb_PwmSignal_LED3_Default = 0;


static Std_ReturnType IoHwAb_Pwm_Set_Duty_PwmSignal_LED3(IoHwAb_DutyType duty, IoHwAb_StatusType *status) {

    Std_ReturnType rv = E_OK;

    IOHWAB_VALIDATE_RETURN(IS_VALID_DUTY_CYCLE(duty), IOHWAB_PWMDUTY_SET_ID, IOHWAB_E_PARAM_DUTY, E_NOT_OK);
    
    status->quality = IOHWAB_GOOD;
    
    if( FALSE == IoHwAb_PwmSignal_LED3_Locked ) {
        uint16 pwmDuty = (uint16)((0x8000 * duty) / IOHWAB_DUTY_MAX);
        Pwm_SetDutyCycle(PwmConf_PwmChannel_Channel_LED_3, pwmDuty);
        IoHwAb_PwmSignal_LED3_Saved = duty;
    }
    
    return rv;
}


/* Pwm signal: PwmSignal_LED3 */
/* @req ARCIOHWAB012 */
Std_ReturnType IoHwAb_Dcm_PwmSignal_LED3(uint8 action, uint8* value)
{
    Std_ReturnType ret = E_OK;
    IoHwAb_StatusType status;
    SchM_Enter_IoHwAb_EA_0();
    boolean tempLock = IoHwAb_PwmSignal_LED3_Locked;
    switch(action) {
    case IOHWAB_RETURNCONTROLTOECU:
        IoHwAb_PwmSignal_LED3_Locked = FALSE;
        break;
    case IOHWAB_RESETTODEFAULT:
        IoHwAb_PwmSignal_LED3_Locked = FALSE;
        if(E_OK != IoHwAb_Pwm_Set_Duty_PwmSignal_LED3(IoHwAb_PwmSignal_LED3_Default, &status)) {
            IoHwAb_PwmSignal_LED3_Locked = tempLock;
            ret = E_NOT_OK;
        } else {
            IoHwAb_PwmSignal_LED3_Saved = IoHwAb_PwmSignal_LED3_Default;
            IoHwAb_PwmSignal_LED3_Locked = TRUE;
        }
        break;
    case IOHWAB_FREEZECURRENTSTATE:
        IoHwAb_PwmSignal_LED3_Locked = TRUE;
        break;
    case IOHWAB_SHORTTERMADJUST:
        {
            IoHwAb_DutyType duty = GetU32FromPtr(value);
            if(IS_VALID_DUTY_CYCLE(duty)) {
                IoHwAb_PwmSignal_LED3_Locked = FALSE;
                if(E_OK != IoHwAb_Pwm_Set_Duty_PwmSignal_LED3(duty, &status)) {
                    IoHwAb_PwmSignal_LED3_Locked = tempLock;
                    ret = E_NOT_OK;
                } else {
                    IoHwAb_PwmSignal_LED3_Saved = duty;
                    IoHwAb_PwmSignal_LED3_Locked = TRUE;
                }
            } else {
                IOHWAB_DET_REPORT_ERROR(IOHWAB_PWM_IO_CONTROL_ID, IOHWAB_E_PARAM_DUTY);
                ret = E_NOT_OK;
            }
        }
        break;
    default:
        IOHWAB_DET_REPORT_ERROR(IOHWAB_PWM_IO_CONTROL_ID, IOHWAB_E_PARAM_ACTION);
        ret = E_NOT_OK;
        break;
    }
    SchM_Exit_IoHwAb_EA_0();
    return ret;
}


Std_ReturnType IoHwAb_Dcm_Read_PwmSignal_LED3(uint8* value) {
	SetU32ToPtr(IoHwAb_PwmSignal_LED3_Saved, value);
	return E_OK;
}




/* @req ARCIOHWAB010 */
Std_ReturnType IoHwAb_Pwm_Set_Duty(IoHwAb_SignalType signal, IoHwAb_DutyType duty, IoHwAb_StatusType *status) {

    Std_ReturnType ret = E_OK;
    switch (signal) {
 
    case IOHWAB_SIGNAL_PWMSIGNAL_LED3:
        ret = IoHwAb_Pwm_Set_Duty_PwmSignal_LED3(duty, status);
        break;
		
    default:
        IOHWAB_DET_REPORT_ERROR(IOHWAB_PWMDUTY_SET_ID, IOHWAB_E_PARAM_SIGNAL);
        ret = E_NOT_OK;
        break;
    }

	return ret;
}



