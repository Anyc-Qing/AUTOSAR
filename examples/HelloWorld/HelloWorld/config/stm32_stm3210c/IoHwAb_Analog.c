
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
#include "IoHwAb_Analog.h"
#include "IoHwAb_Dcm.h"
#include "SchM_IoHwAb.h"
#ifdef USE_DEM
#include "Dem.h" 
#endif

#if defined(USE_DET) 
#include "Det.h"
#else
#error Need to add DET module when ArcIoHwAbDevErrorDetect is enabled
#endif  




/* Signals states for I/O-control */
/* Analog signal: AnalogSignal */
static boolean IoHwAb_AnalogSignal_Locked = FALSE;
static IoHwAb_VoltType IoHwAb_AnalogSignal_Saved = 0;
const IoHwAb_VoltType IoHwAb_AnalogSignal_Default =  0;




/* Internal scaling functions */
/* @req ARCIOHWAB008 */
static IoHwAb_VoltType IoHwAb_Scaling_VoltScaling(Adc_ValueGroupType adcValue, Adc_ValueGroupType adcMaxValue) {

    IoHwAb_VoltType scaledValue;

    /* 
     * scaledValue = 
     *   (adcValue / adcMaxValue) * adcMaxVoltage * scale * 1000 + (offset * 1000) =
     *   adcValue * (adcMaxVoltage * scale * 1000) / adcMaxValue + (offset * 1000) =
     *   adcValue * (5.0 * 1.0 * 1000) / adcMaxValue + (0.0 * 1000) =
     *   adcValue * 5000 / adcMaxValue + 0.0
     */

    scaledValue = adcValue;
    scaledValue *= 5000;
    scaledValue /= adcMaxValue;
    scaledValue += 0;

    return scaledValue;
}



/* Exported functions */
Std_ReturnType IoHwAb_Analog_Read_AnalogSignal(IoHwAb_VoltType* value, IoHwAb_StatusType *status);
Std_ReturnType IoHwAb_Analog_Read_AnalogSignal(IoHwAb_VoltType* value, IoHwAb_StatusType *status)
{ 

    Std_ReturnType rv = E_OK;
    Adc_ValueGroupType adcValue;
    status->quality = IOHWAB_GOOD;

    if( FALSE == IoHwAb_AnalogSignal_Locked ) {
        adcValue = IoHwAb_Adc_ReadSignal(AdcConf_AdcGroup_AdcGroup1,
                                         (Adc_ChannelType)AdcChannel1,
                                         status);

        *value = IoHwAb_Scaling_VoltScaling(adcValue, 4096);  
    } else {
        *value = IoHwAb_AnalogSignal_Saved;
    }

    return rv;
}



/* Analog signal: AnalogSignal */
/* @req ARCIOHWAB009 */
Std_ReturnType IoHwAb_Dcm_AnalogSignal(uint8 action, uint8* value)
{
    IoHwAb_StatusType status;
    Std_ReturnType ret = E_OK;
    SchM_Enter_IoHwAb_EA_0();
    boolean tempLock = IoHwAb_AnalogSignal_Locked;
    switch(action) {
    case IOHWAB_RETURNCONTROLTOECU:
        IoHwAb_AnalogSignal_Locked = FALSE;
        break;
    case IOHWAB_RESETTODEFAULT:
        IoHwAb_AnalogSignal_Saved = IoHwAb_AnalogSignal_Default; 
        IoHwAb_AnalogSignal_Locked = TRUE;
        break;
    case IOHWAB_FREEZECURRENTSTATE:
        IoHwAb_AnalogSignal_Locked = FALSE;
        if(E_OK != IoHwAb_Analog_Read_AnalogSignal(&IoHwAb_AnalogSignal_Saved, &status)) {
            IoHwAb_AnalogSignal_Locked = tempLock;
            ret = E_NOT_OK;
        } else {
            IoHwAb_AnalogSignal_Locked = TRUE;
        }
        break;
    case IOHWAB_SHORTTERMADJUST:
        {
            IoHwAb_AnalogSignal_Saved = GetS32FromPtr(value);
            IoHwAb_AnalogSignal_Locked = TRUE;
        }
        break;
    default:
        IOHWAB_DET_REPORT_ERROR(IOHWAB_ANALOG_IO_CONTROL_ID, IOHWAB_E_PARAM_ACTION);
        ret = E_NOT_OK;
        break;
    }
    SchM_Exit_IoHwAb_EA_0();
    return ret;
}


Std_ReturnType IoHwAb_Dcm_Read_AnalogSignal(uint8* value)
{
    Std_ReturnType ret;
    IoHwAb_StatusType status;
    IoHwAb_VoltType level;
    SchM_Enter_IoHwAb_EA_0();
    boolean tempLock = IoHwAb_AnalogSignal_Locked;
    IoHwAb_AnalogSignal_Locked = FALSE;
    ret = IoHwAb_Analog_Read_AnalogSignal(&level, &status);
    SetS32ToPtr(level, value);
    IoHwAb_AnalogSignal_Locked = tempLock;
    SchM_Exit_IoHwAb_EA_0();
    return ret;
}



Std_ReturnType IoHwAb_Analog_Read(IoHwAb_SignalType signal, IoHwAb_AnalogValueType *value, IoHwAb_StatusType *status)
{
    IOHWAB_VALIDATE_RETURN((NULL != value), IOHWAB_ANALOG_READ_ID, IOHWAB_E_PARAM_PTR, E_NOT_OK);
    IOHWAB_VALIDATE_RETURN((NULL != status), IOHWAB_ANALOG_READ_ID, IOHWAB_E_PARAM_PTR, E_NOT_OK);

    Std_ReturnType ret = E_NOT_OK;

    switch( signal ) {
    case IOHWAB_SIGNAL_ANALOGSIGNAL:
        ret = IoHwAb_Analog_Read_AnalogSignal(value, status);
        break;
    default:
        IOHWAB_DET_REPORT_ERROR(IOHWAB_ANALOG_READ_ID, IOHWAB_E_PARAM_SIGNAL);
        break;
    }
    return ret;
}

