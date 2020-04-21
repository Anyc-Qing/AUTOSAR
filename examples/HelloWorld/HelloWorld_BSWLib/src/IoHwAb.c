/*-------------------------------- Arctic Core ------------------------------
 * Copyright (C) 2014, ArcCore AB, Sweden, www.arccore.com.
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

#include "IoHwAb.h"
#include "Adc.h"
#include "Cpu.h"
#include "Os.h"

#define MAX_NOF_FAILED_ADC_START 5

static Adc_ValueGroupType ADC_GROUP_1_adcVal[ADC_NBR_OF_ADCHWUNIT_ADCGROUP1_CHANNELS];
static Adc_ValueGroupType adcBuf_Group1[ADC_NBR_OF_ADCHWUNIT_ADCGROUP1_CHANNELS];
static boolean Initilized = FALSE;

/* Callback */
void IoHwAb_AdcConversionComplete( void )
{
    Adc_ReadGroup(AdcConf_AdcGroup_AdcGroup1, ADC_GROUP_1_adcVal);
}



void IoHwAb_Init( void )
{
    Adc_EnableGroupNotification(AdcConf_AdcGroup_AdcGroup1);
    Adc_SetupResultBuffer(AdcConf_AdcGroup_AdcGroup1, adcBuf_Group1);
    Adc_StartGroupConversion(AdcConf_AdcGroup_AdcGroup1);
    Initilized = TRUE;
}

void IoHwAb_MainFunction( void )
{

    static uint8 nofFailTry = 0;
    if( Initilized ){
        Adc_StatusType state = Adc_GetGroupStatus(AdcConf_AdcGroup_AdcGroup1);

        if( ADC_IDLE == state ||
            ADC_STREAM_COMPLETED == state){
            Adc_StartGroupConversion(AdcConf_AdcGroup_AdcGroup1);
            nofFailTry = 0;
        }else{
            nofFailTry++;
            if(nofFailTry >= MAX_NOF_FAILED_ADC_START){
                /* Re-Init ADC */
                Adc_StopGroupConversion(AdcConf_AdcGroup_AdcGroup1);
                Adc_DeInit();
#if defined(CFG_ZYNQ)
                Adc_Init(Adc_GlobalConfig);
#else
                Adc_Init(AdcConfig);
#endif
                IoHwAb_Init();
                nofFailTry = 0;
            }
        }
    }
}


/* Only support for ADC_CH32, all other channels will return 0 */
Adc_ValueGroupType IoHwAb_Adc_ReadSignal( Adc_GroupType group, Adc_ChannelType channel, IoHwAb_StatusType * status ) {

    imask_t state;
    Adc_ValueGroupType adcVal = 0;
    if (channel == AdcChannel1 ) {
    	SuspendOSInterrupts();
        adcVal = ADC_GROUP_1_adcVal[0];
        ResumeOSInterrupts();
    } else {
        adcVal = 0;
    }

    status->quality = IOHWAB_GOOD;
    return adcVal;
}

#if defined(CFG_MPC5777M)
#include "Pwm.h"
void Pwm_Init(const Pwm_ConfigType* ConfigPtr) {
}

void Pwm_DeInit(void) {
}

void Pwm_SetDutyCycle(Pwm_ChannelType Channel, uint16 DutyCycle){
}
#endif
