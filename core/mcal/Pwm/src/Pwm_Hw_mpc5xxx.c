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

/** @tagSettings DEFAULT_ARCHITECTURE=SPC56XL70|MPC5744P|MPC5604P|MPC5643L */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */

/** @file PwmFlex_mpc5xxx.c
 * 	The PwmFlex_mpc5xxx.c file will contain the HW specific implementation of the API's . */
/** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the Mcal
  *  @{
  */

 /** \addtogroup Pwm
  *  This is the Mcal Pwm Group
  *  @{
  */


/* NOTES
 * The PWMX is bound with submodule period. The PWM signals are generated in the following manner.
 * - The INIT and VAL1 registers define the PWM modulo/period. So the PWM counter counts from INIT to VAL1 and then reinit to INIT again etc.
 * - The VAL2 resp. VAL3 define the compare value when PWMA goes High resp. Low.
 * - The VAL4 resp. VAL5 define the compare value when PWMB goes High resp. Low.
 * - The VAL0 defines half cycle reload point and also define the time when PWMX signal is set and the local sync signal is reset.
 * - The VAL1 also causes PWMX reseting and asserting local sync.
 * So the usage of PMWA and PWMB signals is easy. The PWMX, if not use as input (for capture feature etc), can generate also the PWM signal
 * but you have to take into account that it represents the local sync signal, which is usually selected as sync source by INIT_SEL bits of CTRL2.
 *
 *      ,------,       ,------
 *      |      |       |
 *    --´      `-------´
 *      |<--- VAL1 --->|
 *      |      |
 *    VAL2    VAL3              PWMA
 *    VAL4    VAL5              PWMB
 *
 */

/* @req  SWS_Pwm_00105 Pwm_Notification service specification*/
/* @req  SWS_Pwm_00025 The Pwm module shall call the function Pwm_Notification_<#Channel> accordingly
 * to the last call of Pwm_EnableNotification and Pwm_DisableNotification for channel <#Channel>.*/


#include "arc_assert.h"
#include <string.h>

#include "Pwm.h"
#include "MemMap.h"
#if defined(USE_DET)
#include "Det.h"
#endif
#include "mpc55xx.h"
#include "Pwm_Internal.h"
#include "SchM_Pwm.h"
#include "Std_Types.h"
#include "Os.h"
#include "Mcu.h"
#if (PWM_NOTIFICATION_SUPPORTED==STD_ON)
#include "isr.h"
#include "irq.h"
#include "arc.h"
#endif

static uint32 configurChannel = 0;


/*lint -e923 MISRA:HARDWARE_ACCESS:Cast from unsigned int to pointer :[MISRA 2012 Rule 11.4, required] */
static volatile struct FLEXPWM_tag * const PLEXPWM[] = {&FLEXPWM_0, &FLEXPWM_1};
#define GET_FLEXPWM_HW(_index) PLEXPWM[((_index) / PWM_CHANNELS_PER_MODULE)]
#define GET_SUBMODULE(_index) (((_index) % PWM_CHANNELS_PER_MODULE) / FLEXPWM_SUB_MODULE_DIVIDER)
/*lint -e9006 PC-lint: 'sizeof' used on expression with side effect [MISRA 2012 Rule 13.6, required]*/
#define PWM_CHANNELS_PER_MODULE (((sizeof(FLEXPWM_0.SUB))/(sizeof(FLEXPWM_0.SUB[0]))) * FLEXPWM_SUB_MODULE_DIVIDER)
#define GET_SUB_START_CHANNEL(_hw, _sub) (((_hw)*PWM_CHANNELS_PER_MODULE) + ((_sub)*FLEXPWM_SUB_MODULE_DIVIDER))
#define IS_VALID_CHANNEL(_x) ((_x) < PWM_NUMBER_OF_CHANNELS)

#define FLEXPWM_SUB_MODULE_DIVIDER 3u

#define PWM_PERIOD_MAX_TICKS 0x7FFE
#define GET_HW_PTR(_hwUnit) PLEXPWM[(_hwUnit)]

#if ( PWM_DEV_ERROR_DETECT == STD_ON )
#define VALIDATE(_exp,_api,_err ) \
        if( !(_exp) ) { \
          Det_ReportError(PWM_MODULE_ID,0,_api,_err); \
          return; \
        }

#define VALIDATE_W_RV(_exp,_api,_err,_rv ) \
        if( !(_exp) ) { \
          Det_ReportError(PWM_MODULE_ID,0,_api,_err); \
          return (_rv); \
        }
#else
#define VALIDATE(_exp,_api,_err )
#define VALIDATE_W_RV(_exp,_api,_err,_rv )
#endif

const Pwm_ConfigType* PwmConfigPtr = NULL;

typedef enum {
    PWM_STATE_UNINITIALIZED, PWM_STATE_INITIALIZED
} Pwm_ModuleStateType;

typedef uint8 PwmT;

#define PWM_A 		0u
#define PWM_B  		1u
#define PWM_X  		2u

#if (PWM_NOTIFICATION_SUPPORTED==STD_ON)
typedef struct {
    Pwm_EdgeNotificationType EdgeNotification;
    boolean Locked;
}EdgeNotificationStatusType;
#endif

typedef struct {
    Pwm_ModuleStateType ModuleState;
#if (PWM_NOTIFICATION_SUPPORTED==STD_ON)
    EdgeNotificationStatusType ChannelEdgeNotification[PWM_NUMBER_OF_CHANNELS];
#endif
}PwmInternalType;

/*lint -e551 Lint :Configuration : Symbol 'PwmInternal' not accessed*/
static PwmInternalType PwmInternal = {
        .ModuleState = PWM_STATE_UNINITIALIZED,
};
typedef struct {
    uint8 dutyRegIndex;
    uint8 periodRegIndex;
}PwmRegIndexType;
/*lint -e9003 Misra :Configuration : could define variable 'PwmRegIndex' at block scope [MISRA 2012 Rule 8.9, advisory]*/
static const PwmRegIndexType PwmRegIndex[FLEXPWM_SUB_MODULE_DIVIDER] = {
        [PWM_A] = {
                .dutyRegIndex = 3u, /* VAL[3] */
                .periodRegIndex = 1u, /* VAL[1] */
        },
        [PWM_B] = {
                .dutyRegIndex = 5u, /* VAL[5] */
                .periodRegIndex = 1u, /* VAL[1] */
        },
        [PWM_X] = {
                .dutyRegIndex = 0u, /* VAL[0] */
                .periodRegIndex = 1u, /* VAL[1] */
        },
};

static void SetDutyCycle(Pwm_ChannelType Channel, uint16 DutyCycle);

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
static void Pwm_Isr(uint8 hwUnit, uint8 sub);
#if defined(NOTIFICATION_ON_CHANNEL_0_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_1_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_2_ENABLED)
ISR(Pwm_Isr_0_0){Pwm_Isr(0,0);}
#endif
#if defined(NOTIFICATION_ON_CHANNEL_3_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_4_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_5_ENABLED)
ISR(Pwm_Isr_0_1){Pwm_Isr(0,1);}
#endif
#if defined(NOTIFICATION_ON_CHANNEL_6_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_7_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_8_ENABLED)
ISR(Pwm_Isr_0_2){Pwm_Isr(0,2);}
#endif
#if defined(NOTIFICATION_ON_CHANNEL_9_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_10_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_11_ENABLED)
ISR(Pwm_Isr_0_3){Pwm_Isr(0,3);}
#endif
#if defined(NOTIFICATION_ON_CHANNEL_12_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_13_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_14_ENABLED)
ISR(Pwm_Isr_1_0){Pwm_Isr(1,0);}
#endif
#if defined(NOTIFICATION_ON_CHANNEL_15_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_16_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_17_ENABLED)
ISR(Pwm_Isr_1_1){Pwm_Isr(1,1);}
#endif
#if defined(NOTIFICATION_ON_CHANNEL_18_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_19_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_20_ENABLED)
ISR(Pwm_Isr_1_2){Pwm_Isr(1,2);}
#endif
#if defined(NOTIFICATION_ON_CHANNEL_21_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_22_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_23_ENABLED)
ISR(Pwm_Isr_1_3){Pwm_Isr(1,3);}
#endif
#endif

static void calcPeriodTicksAndPrescaler(
                const Pwm_ChannelConfigurationType* channelConfig,
                uint16_t* ticks, Pwm_ChannelPrescalerType* prescaler) {

    uint32_t f_in = Mcu_Arc_GetPeripheralClock( PERIPHERAL_CLOCK_FLEXPWM_0 );

    uint32_t f_target = channelConfig->frequency;

    Pwm_ChannelPrescalerType pre;
    uint32_t ticks_temp;


    if (channelConfig->prescaler == PWM_CHANNEL_PRESCALER_DIV_AUTO) {
        // Go from lowest to highest prescaler
    	/*lint -e9027 -e9032 :Unpermitted operand to operator '++' [MISRA 2012 Rule 10.7, required] */
        for (pre = PWM_CHANNEL_PRESCALER_DIV_1; pre <= PWM_CHANNEL_PRESCALER_DIV_128; pre++ ) {
            ticks_temp = (f_in / (f_target * (1u << (uint8_t)pre))); // Calc ticks
          if (ticks_temp > PWM_PERIOD_MAX_TICKS) {
            ticks_temp = PWM_PERIOD_MAX_TICKS;  // Prescaler too low
            } else {
                break;               // Prescaler ok
            }
        }
    } else {
        pre = channelConfig->prescaler; // Use config setting
        ticks_temp = f_in / (f_target * (1u << (uint8_t)pre)); // Calc ticks
        if (ticks_temp > PWM_PERIOD_MAX_TICKS) {
          ticks_temp = PWM_PERIOD_MAX_TICKS;  // Prescaler too low
        }
        }

    (*ticks) = (uint16_t) ticks_temp;
    (*prescaler) = pre;
}


static void configureChannel(Pwm_ChannelType Channel){

    const Pwm_ChannelConfigurationType *channelConfig = &PwmConfigPtr->Channels[Channel];
    volatile struct FLEXPWM_tag *flexHw = GET_FLEXPWM_HW(channelConfig->index);
    uint8 sub = (uint8)GET_SUBMODULE(channelConfig->index);
    PwmT pwm =  (PwmT)(channelConfig->index % FLEXPWM_SUB_MODULE_DIVIDER);
    Pwm_ChannelPrescalerType prescaler;
    uint16_t period_ticks;

    /*  Remove submodule unique so that it is not configured for all channels */

    /* All channels on same submodule must have same period. Should be checked by validation */
    calcPeriodTicksAndPrescaler( channelConfig, &period_ticks, &prescaler );

    // clear LDOK to be able to modify register settings
    flexHw->MCTRL.B.CLDOK |= 1u << sub;

    /* Prescaler */
    flexHw->SUB[sub].CTRL.B.PRSC = (uint8)prescaler;

    /* Edge aligned output, modulo count */
    flexHw->SUB[sub].INIT.R =   0x0000; /* INIT value */
    flexHw->SUB[sub].VAL[1].R = period_ticks; /* maximum count i.e. period NOTE! Valid for whole subgroup */

    flexHw->SUB[sub].DISMAP.R   = 0x0000;	/* disable fault pin condition */
    flexHw->SUB[sub].CTRL2.B.INDEP = 1; /* Run as independent channels */

    /* Polarity */
    switch(pwm)
    {
    case PWM_A: /* PWMA */
        flexHw->SUB[sub].VAL[2].R = 0x0000; /* PWMA rising edge */
        flexHw->SUB[sub].OCTRL.B.POLA = (channelConfig->polarity == PWM_LOW) ? 1u : 0u;
        break;
    case PWM_B: /* PWMB */
        flexHw->SUB[sub].VAL[4].R = 0x0000; /* PWMB rising edge */
        flexHw->SUB[sub].OCTRL.B.POLB = (channelConfig->polarity == PWM_LOW) ? 1u : 0u;
        break;
    case PWM_X: /* PWMX */
        flexHw->SUB[sub].VAL[0].R = 0x0000; /* PWMX rising edge */
        /* Since we can only set the rising edge for PWMX, we set the polarity
         * in the opposite way compared to PWMA and PWMB. */
        flexHw->SUB[sub].OCTRL.B.POLX = (channelConfig->polarity == PWM_LOW) ? 0u : 1u;
        break;
    default:
        break;

    }

    /* PWM009: The function Pwm_Init shall start all PWM channels with the configured
        default values. If the duty cycle parameter equals:
        􀂃 0% or 100% : Then the PWM output signal shall be in the state according to
            the configured polarity parameter
        􀂃 >0% and <100%: Then the PWM output signal shall be modulated according
        to parameters period, duty cycle and configured polarity. */
    SetDutyCycle(Channel, channelConfig->duty);
    // enable outputs when all configuration is done
    switch(pwm)
    {
    case PWM_A:
        flexHw->OUTEN.B.PWMA_EN |= 1u << sub;
        break;
    case PWM_B:
        flexHw->OUTEN.B.PWMB_EN |= 1u << sub;
        break;
    case PWM_X:
        flexHw->OUTEN.B.PWMX_EN |= 1u << sub;
        break;
    default:
        break;
     }
    flexHw->MCTRL.B.LDOK |= 1u << sub;
    flexHw->MCTRL.B.RUN |= 1u << sub;

    configurChannel |= (1u << (uint8)Channel);
}

/* @brief  	Test to see if a channel is configured
 * @note     	Reentrant
 * @param[in] 	channel 		channel number
 ******************************************************************************/
boolean Pwm_Hw_isChannelConfigured( Pwm_ChannelType channel ){
	return (0UL != (configurChannel & (1u << (uint8)channel) ));
}


#if (PWM_NOTIFICATION_SUPPORTED==STD_ON)
/**
 * Disables notifications for the channel
 * @param Channel
 */
static void disableNotification(Pwm_ChannelType Channel)
{
    uint8 disableMask = 3;
    const Pwm_ChannelConfigurationType* channelConfig = &PwmConfigPtr->Channels[Channel];
    volatile struct FLEXPWM_tag *flexHw = GET_FLEXPWM_HW(channelConfig->index);
    uint8 sub = GET_SUBMODULE(channelConfig->index);
    PwmT pwm =  (PwmT)(channelConfig->index % FLEXPWM_SUB_MODULE_DIVIDER);

    switch(pwm) {
    case PWM_A:
        disableMask <<= 2u;
        break;
    case PWM_B:
        disableMask <<= 4u;
        break;
    case PWM_X:
        disableMask <<= 0u;
        break;
    default:
        break;
    }
    // clear eventual pending notification
    flexHw->SUB[sub].STS.B.CMPF = ~disableMask;
    /* Clear flags on this submodule */
    flexHw->SUB[sub].INTEN.B.CMPIE &= ~disableMask;


}
/**
 * Tries to disable notifications for the channel.
 * @param Channel
 */
static void tryDisableNotification(Pwm_ChannelType Channel)
{
    if( !PwmInternal.ChannelEdgeNotification[Channel].Locked ) {
        disableNotification(Channel);
    }
    PwmInternal.ChannelEdgeNotification[Channel].EdgeNotification = (Pwm_EdgeNotificationType)PWM_NO_EDGES;
}
/**
 * Forces disabling of notification and locks the notifications
 * @param Channel
 */
static void forceDisableNotification(Pwm_ChannelType Channel)
{
    if( !PwmInternal.ChannelEdgeNotification[Channel].Locked ) {
        disableNotification(Channel);
        PwmInternal.ChannelEdgeNotification[Channel].Locked = TRUE;
    }
}
/**
 * Enables interrupts for the channel
 * @param Channel
 * @param Notification
 */
static void enableNotification(Pwm_ChannelType Channel, Pwm_EdgeNotificationType Notification)
{

    uint8 enableFlags = 0;
    uint8 mask = 3u;

    switch(Notification) {
        case PWM_FALLING_EDGE:
            enableFlags = 1u;
            break;
        case PWM_RISING_EDGE:
            enableFlags = 2u;
            break;
        case PWM_BOTH_EDGES:
            enableFlags = 3u;
            break;
        default:
            return;
    }

    const Pwm_ChannelConfigurationType* channelConfig = &PwmConfigPtr->Channels[Channel];
    volatile struct FLEXPWM_tag *flexHw = GET_FLEXPWM_HW(channelConfig->index);
    uint8 sub = GET_SUBMODULE(channelConfig->index);
    PwmT pwm =  (PwmT)(channelConfig->index % FLEXPWM_SUB_MODULE_DIVIDER);

    switch(pwm) {
    case PWM_A:
        enableFlags <<= 2u;
        mask <<= 2u;
        break;
    case PWM_B:
        enableFlags <<= 4u;
        mask <<= 4u;
        break;
    case PWM_X:
        enableFlags <<= 0u;
        break;
    default:
        break;
    }

    // clear eventual pending notification
    flexHw->SUB[sub].STS.B.CMPF = mask;
    flexHw->SUB[sub].INTEN.B.CMPIE = (flexHw->SUB[sub].INTEN.B.CMPIE & ~mask) | enableFlags;
}
/**
 * Tries to enable notification for the channel
 * @param Channel
 * @param Notification
 */
static void tryEnableNotification(Pwm_ChannelType Channel, Pwm_EdgeNotificationType Notification)
{
    if( !PwmInternal.ChannelEdgeNotification[Channel].Locked ) {
        enableNotification(Channel, Notification);
    }
    /* Store the requested notification */
    PwmInternal.ChannelEdgeNotification[Channel].EdgeNotification = Notification;
}

/**
 * Restores notifications to the state last requested
 * @param Channel
 */
static void restoreNotification(Pwm_ChannelType Channel)
{
    if(PWM_NO_EDGES != PwmInternal.ChannelEdgeNotification[Channel].EdgeNotification) {
        enableNotification(Channel, PwmInternal.ChannelEdgeNotification[Channel].EdgeNotification);
    }
    PwmInternal.ChannelEdgeNotification[Channel].Locked = FALSE;
}
#endif

#if  (PWM_SET_OUTPUT_TO_IDLE_API == STD_ON) || (PWM_DE_INIT_API==STD_ON)
static void setOutputToIdle(Pwm_ChannelType Channel)
{
    const Pwm_ChannelConfigurationType* channelConfig = &PwmConfigPtr->Channels[Channel];
    /* Use SetDutyCycle to set idle level */
    if(channelConfig->polarity == PwmConfigPtr->IdleState[Channel]) {
        SetDutyCycle(Channel, PWM_100_PERCENT);
    } else {
        SetDutyCycle(Channel, 0);
    }

}
#endif

/** @req SWS_Pwm_00007 - The function Pwm_Init shall initialize all internals variables and the used PWM structure
 * of the microcontroller according to the parameters specified in ConfigPtr. */
/** @req SWS_Pwm_00062 - he function Pwm_Init shall only initialize the configured resources and shall not touch resources that are not configured in the configuration file. */
/** @req SWS_Pwm_00052 - The function Pwm_Init shall disable all notifications. */
/** @req SWS_Pwm_10009 - The function Pwm_Init shall start all PWM channels with the configured default values.
 * If the duty cycle parameter equals:*/
/** @req SWS_Pwm_20009 - ⌈0% or 100% : Then the PWM output signal shall be in the state according to the configured polarity parameter*/
/** @req SWS_Pwm_30009 - >0% and <100%: Then the PWM output signal shall be modulated according to parameters period,
 * duty cycle and configured polarity.*/

Std_ReturnType Pwm_Hw_Init(const Pwm_ConfigType* ConfigPtr) {


    PwmConfigPtr = ConfigPtr;
    PwmInternal.ModuleState = PWM_STATE_INITIALIZED;

#if (PWM_NOTIFICATION_SUPPORTED==STD_ON)
    #if defined(NOTIFICATION_ON_CHANNEL_0_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_1_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_2_ENABLED)
    ISR_INSTALL_ISR2("PwmIsr", Pwm_Isr_0_0, (IrqType)(PWM0_COF0),PWM_ISR_PRIORITY, PWM_ARC_ISR_APP);
    #endif
    #if defined(NOTIFICATION_ON_CHANNEL_3_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_4_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_5_ENABLED)
    ISR_INSTALL_ISR2("PwmIsr", Pwm_Isr_0_1, (IrqType)(PWM0_COF1),PWM_ISR_PRIORITY, PWM_ARC_ISR_APP);
    #endif
    #if defined(NOTIFICATION_ON_CHANNEL_6_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_7_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_8_ENABLED)
    ISR_INSTALL_ISR2("PwmIsr", Pwm_Isr_0_2, (IrqType)(PWM0_COF2),PWM_ISR_PRIORITY, PWM_ARC_ISR_APP);
    #endif
    #if defined(NOTIFICATION_ON_CHANNEL_9_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_10_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_11_ENABLED)
    ISR_INSTALL_ISR2("PwmIsr", Pwm_Isr_0_3, (IrqType)(PWM0_COF3),PWM_ISR_PRIORITY, PWM_ARC_ISR_APP);
    #endif
    #if defined(NOTIFICATION_ON_CHANNEL_12_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_13_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_14_ENABLED)
    ISR_INSTALL_ISR2("PwmIsr", Pwm_Isr_1_0, (IrqType)(PWM1_COF0),PWM_ISR_PRIORITY, PWM_ARC_ISR_APP);
    #endif
    #if defined(NOTIFICATION_ON_CHANNEL_15_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_16_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_17_ENABLED)
    ISR_INSTALL_ISR2("PwmIsr", Pwm_Isr_1_1, (IrqType)(PWM1_COF1),PWM_ISR_PRIORITY, PWM_ARC_ISR_APP);
    #endif
    #if defined(NOTIFICATION_ON_CHANNEL_18_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_19_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_20_ENABLED)
    ISR_INSTALL_ISR2("PwmIsr", Pwm_Isr_1_2, (IrqType)(PWM1_COF2),PWM_ISR_PRIORITY, PWM_ARC_ISR_APP);
    #endif
    #if defined(NOTIFICATION_ON_CHANNEL_21_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_22_ENABLED) || defined(NOTIFICATION_ON_CHANNEL_23_ENABLED)
    ISR_INSTALL_ISR2("PwmIsr", Pwm_Isr_1_3, (IrqType)(PWM1_COF3),PWM_ISR_PRIORITY, PWM_ARC_ISR_APP);
    #endif
#endif

    for (Pwm_ChannelType i = 0; i < PWM_NUMBER_OF_CHANNELS; i++) {
#if (PWM_NOTIFICATION_SUPPORTED==STD_ON)
        PwmInternal.ChannelEdgeNotification[i].EdgeNotification = (Pwm_EdgeNotificationType)PWM_NO_EDGES;
        PwmInternal.ChannelEdgeNotification[i].Locked = FALSE;
#endif
        configureChannel( i );
    }

    return E_OK;
}

#if (PWM_DE_INIT_API==STD_ON)

 void Pwm_Hw_disableInt(Pwm_ChannelType Channel) {

    setOutputToIdle(Channel);


#if (PWM_NOTIFICATION_SUPPORTED==STD_ON)
    /* Try to enable notification. They have been forced disabled
     * by setOutputToIdle since it sets duty cycle to 0 or 100%. */
    tryDisableNotification(Channel);
#endif

}


/** @req 4.1.2|4.3.0/SWS_Pwm_00011 - Pwm_DeInit shall set the state of the PWM output signals to the idle state. */
/** @req 4.1.2|4.3.0/SWS_Pwm_00012 - The function Pwm_DeInit shall disable PWM interrupts and PWM signal edge notifications. */
void Pwm_Hw_Deinit(void) {
        /*lint -e525 -e725 Misra :Configuration : Negative indentation from line 541*/
        for (Pwm_ChannelType i = 0; i < PWM_NUMBER_OF_CHANNELS; i++) {
        const Pwm_ChannelConfigurationType* channelConfig = &PwmConfigPtr->Channels[i];
        volatile struct FLEXPWM_tag *flexHw = GET_FLEXPWM_HW(channelConfig->index);
        uint8 sub = (uint8)GET_SUBMODULE(channelConfig->index);
        PwmT pwm =  (PwmT)(channelConfig->index % FLEXPWM_SUB_MODULE_DIVIDER);
        Pwm_Hw_disableInt(i);
        // disable output
        switch(pwm)
        {
        case PWM_A: /* PWMA */
            flexHw->OUTEN.B.PWMA_EN &= ~(1u << sub);
            break;
        case PWM_B: /* PWMB */
            flexHw->OUTEN.B.PWMB_EN &= ~(1u << sub);
            break;
        case PWM_X: /* PWMX */
            flexHw->OUTEN.B.PWMX_EN &= ~(1u << sub);
            break;
    	default:
    		break;
        }
    }

    // Disable module
    for (Pwm_ChannelType i = 0; i < PWM_NUMBER_OF_CHANNELS; i++) {
        const Pwm_ChannelConfigurationType* channelConfig = &PwmConfigPtr->Channels[i];
        volatile struct FLEXPWM_tag *flexHw = GET_FLEXPWM_HW(channelConfig->index);
        uint8 sub = (uint8)GET_SUBMODULE(channelConfig->index);
        flexHw->MCTRL.B.CLDOK = (1u << sub);
        flexHw->MCTRL.B.RUN &= ~(1u << sub);
    }


    PwmInternal.ModuleState = PWM_STATE_UNINITIALIZED;
}
#endif

/* @brief  		Function read back the configured idle state for specific channel.
 * @param [in] 	Channel 		Channel number.
 * @return		configured idle state
 * @retval		PWM_LOW			low state.
 * @retval		PWM_HIGH		high state.
 ******************************************************************************/
Pwm_OutputStateType Pwm_Hw_getConfiguredIdleState(Pwm_ChannelType Channel){
	return PwmConfigPtr->IdleState[Channel];
}




/* @brief  		Function to set period and duty
 * @param[in] 	ChannelNumber 	Channel number
 * @return		channel type
 * @retval		PWM_VARIABLE_PERIOD			Variable period. The duty cycle and the period can be changed.
 * @retval		PWM_FIXED_PERIOD			Fixed period. Only the duty cycle can be changed.
 * @retval		PWM_FIXED_PERIOD_SHIFTED	Fixed shifted period. Impossible to change it.
 ******************************************************************************/
Pwm_ChannelClassType Pwm_Hw_getChannelClass(Pwm_ChannelType Channel){
		return PwmConfigPtr->ChannelClass[Channel];
}


#if (PWM_SET_PERIOD_AND_DUTY_API==STD_ON)
void Pwm_Hw_SetPeriodAndDuty(Pwm_ChannelType Channel, Pwm_PeriodType Period, uint16 DutyCycle) {


    const Pwm_ChannelConfigurationType* channelConfig = &PwmConfigPtr->Channels[Channel];
    volatile struct FLEXPWM_tag *flexHw = GET_FLEXPWM_HW(channelConfig->index);
    uint8 sub = GET_SUBMODULE(channelConfig->index);
    if(flexHw->SUB[sub].VAL[1].R != Period) { // only tests period 1 since all periods must be the same
        // clear eventual ldok flag
        flexHw->MCTRL.B.CLDOK = 1u << sub;
    	flexHw->SUB[sub].VAL[1].R = Period;
    }

    SetDutyCycle(Channel, DutyCycle);
}
#endif

/** @req SWS_Pwm_00014 - When the requested duty cycle is either 0% or 100%, Pwm_SetDutyCycle shall
 * set the PWM output state to either PWM_HIGH or PWM_LOW, with regard to both the configured polarity parameter and the requested duty cycle. */
/** @req SWS_Pwm_00016 - The function Pwm_SetDutyCycle shall modulate the PWM output signal according to parameters period, duty cycle and configured polarity */
/** @req SWS_Pwm_20086 - After the call of Pwm_SetOutputToIdle, channels shall be reactivated using
 * Pwm_SetDutyCycle( ) to activate the PWM channel with the old period.
 */
static void SetDutyCycle(Pwm_ChannelType Channel, uint16 DutyCycle)
{
    const Pwm_ChannelConfigurationType* channelConfig = &PwmConfigPtr->Channels[Channel];
    volatile struct FLEXPWM_tag *flexHw = GET_FLEXPWM_HW(channelConfig->index);
    uint8 sub = GET_SUBMODULE(channelConfig->index);
    PwmT pwm =  (PwmT)(channelConfig->index % FLEXPWM_SUB_MODULE_DIVIDER);

    uint16 leading_edge_position;
    uint32 period;

    /* Timer instant for leading edge */
    /** @req SWS_Pwm_00017 -
     * This requirement is to update duty cycle at the end of the period. That is the
     * default behaviour of the hardware, and this setting is changed in Pwm_Init if
     * PwmDutycycleUpdatedEndperiod was turned off
     */


	SchM_Enter_Pwm_EA_0();

    period = flexHw->SUB[sub].VAL[PwmRegIndex[pwm].periodRegIndex].R;
    leading_edge_position = (uint16) (( period  * (uint32) DutyCycle) / PWM_100_PERCENT );
    // clear eventual ldok flag
    flexHw->MCTRL.B.CLDOK = 1u << sub;
    if( PWM_100_PERCENT == DutyCycle ) {
        /* Increment to one above period to never get match on turn off (prevents glitch).
         * This may lead to  */
        leading_edge_position++;
    }
    if( PWM_X == pwm ) {
        /* Cannot get 0% duty cycle (according to reference manual you
         * can't get 100% on PWMX but we invert it so it).
         * But we can get 100% percent duty cycle so invert polarity
         * and set the duty cycle to 100%  */
        if( PWM_0_PERCENT == DutyCycle ) {
            flexHw->SUB[sub].OCTRL.B.POLX = (channelConfig->polarity == PWM_LOW) ? 1 : 0;
            leading_edge_position = (uint16)period + 1u;
        } else {
            /* Restore the polarity */
            flexHw->SUB[sub].OCTRL.B.POLX = (channelConfig->polarity == PWM_LOW) ? 0 : 1;
        }
    }
#if (PWM_NOTIFICATION_SUPPORTED==STD_ON)
    if( (PWM_100_PERCENT == DutyCycle) || (PWM_0_PERCENT == DutyCycle) || (period == 0) ) {
        /* Will not give edges so disable the notification */
        forceDisableNotification(Channel);
        flexHw->SUB[sub].VAL[PwmRegIndex[pwm].dutyRegIndex].R = 0xffff;
    } else {
        /* Restore the notification as requested */
        restoreNotification(Channel);
        flexHw->SUB[sub].VAL[PwmRegIndex[pwm].dutyRegIndex].R = leading_edge_position;
    }
#else
    flexHw->SUB[sub].VAL[PwmRegIndex[pwm].dutyRegIndex].R = leading_edge_position;
#endif


    // set ldok to ensure that new values are used at next reload
    flexHw->MCTRL.B.LDOK = 1u << sub;

    SchM_Exit_Pwm_EA_0();
}

/** @req SWS_Pwm_00013 - The function Pwm_SetDutyCycle shall set the duty cycle of the PWM
 * channel.
 *
 * @param Channel PWM channel to use. 0 <= Channel < PWM_NUMBER_OF_CHANNELS <= 16
 * @param DutyCycle 0 <= DutyCycle <= 0x8000
 */
#if (PWM_SET_DUTY_CYCLE_API==STD_ON)
void Pwm_Hw_setDutyCycle(Pwm_ChannelType Channel, uint16 DutyCycle)
{

    SetDutyCycle(Channel, DutyCycle);
}
#endif

#if  (PWM_SET_OUTPUT_TO_IDLE_API == STD_ON)
/*lint -e715 Misra :Configuration : Symbol 'state' (line 704) not referenced [MISRA 2012 Rule 2.7, advisory]*/
void Pwm_Hw_setOutputState(Pwm_ChannelType Channel, Pwm_OutputStateType state)
{
    setOutputToIdle(Channel);
}
#endif

#if (PWM_GET_OUTPUT_STATE_API==STD_ON)

Pwm_OutputStateType Pwm_GetOutputState(Pwm_ChannelType Channel)
{
    Pwm_OutputStateType res = PWM_LOW;

    VALIDATE_W_RV(PwmInternal.ModuleState == PWM_STATE_INITIALIZED, PWM_GETOUTPUTSTATE_SERVICE_ID, PWM_E_UNINIT, res);
    VALIDATE_W_RV(Channel < PWM_NUMBER_OF_CHANNELS, PWM_GETOUTPUTSTATE_SERVICE_ID, PWM_E_PARAM_CHANNEL, res);

    const Pwm_ChannelConfigurationType* channelConfig = &PwmConfigPtr->Channels[Channel];
    volatile struct FLEXPWM_tag *flexHw = GET_FLEXPWM_HW(channelConfig->index);
    uint8 sub = GET_SUBMODULE(channelConfig->index);
    PwmT pwm =  (PwmT)(channelConfig->index % FLEXPWM_SUB_MODULE_DIVIDER);

    switch(pwm)
    {
    case PWM_A:
        res = PWM_LOW;
        // not supported on this channel
        //res = (Pwm_OutputStateType)flexHw->SUB[sub].OCTRL.B.PWMA_IN;
        break;
    case PWM_B:
        res = PWM_LOW;
        // not supported on this channel
        //res = (Pwm_OutputStateType)flexHw->SUB[sub].OCTRL.B.PWMB_IN;
        break;
    case PWM_X:
        res = (Pwm_OutputStateType)flexHw->SUB[sub].OCTRL.B.PWMX_IN;
        break;
    default:
        break;
    }

    return res;
}
#endif

#if (PWM_NOTIFICATION_SUPPORTED==STD_ON)
void Pwm_Hw_DisableNotification(Pwm_ChannelType Channel)
{
    VALIDATE(PwmInternal.ModuleState == PWM_STATE_INITIALIZED, PWM_DISABLENOTIFICATION_SERVICE_ID, PWM_E_UNINIT);
    VALIDATE(Channel < PWM_NUMBER_OF_CHANNELS, PWM_DISABLENOTIFICATION_SERVICE_ID, PWM_E_PARAM_CHANNEL);
    /* Try to disable the notification. It may already be
     * disabled due to duty cycle 0% and 100%. */
    tryDisableNotification(Channel);
}

/** @req 4.1.2|4.3.0/SWS_PWM_00081 Pwm_EnableNotification shall cancel pending interrupts. */
/** @req 4.1.2|4.3.0/SWS_Pwm_00024 - The function Pwm_EnableNotification shall
* enable the PWM signal edge notification according to notification parameter.*/
void Pwm_Hw_EnableNotification(Pwm_ChannelType Channel, Pwm_EdgeNotificationType Notification)
{
    VALIDATE(PwmInternal.ModuleState == PWM_STATE_INITIALIZED, PWM_ENABLENOTIFICATION_SERVICE_ID, PWM_E_UNINIT);
    VALIDATE(Channel < PWM_NUMBER_OF_CHANNELS, PWM_ENABLENOTIFICATION_SERVICE_ID, PWM_E_PARAM_CHANNEL);
    /* Try to enable the notification. It may be disabled due to
     * duty cycle 0% and 100%. In this case the notifications will be
     * enbled laster when changing duty cycle to other than 0% or 100% */
    tryEnableNotification(Channel, Notification);
}

/** @req SWS_Pwm_00026 - The Pwm module shall reset the interrupt flag associated to the notification */
/** @req SWS_Pwm_30115 - The Pwm module shall reset the interrupt flag associated to the notification
 * only when the configuration parameter PwmNotificationSupported is ON. */
static void Pwm_Isr(uint8 hwUnit, uint8 sub)
{
    volatile struct FLEXPWM_tag *flexHw = GET_HW_PTR(hwUnit);
    uint8 cmpflags = flexHw->SUB[sub].STS.B.CMPF & flexHw->SUB[sub].INTEN.B.CMPIE;

    uint8 isr = 0u;
    for(PwmT pwm = (PwmT)0; pwm < FLEXPWM_SUB_MODULE_DIVIDER; pwm++) {
        isr = 0u;
        switch(pwm) {
        case PWM_A:
            isr = (0x3 << 2u) & cmpflags;
            break;
        case PWM_B:
            isr = (0x3 << 4u) & cmpflags;
            break;
        case PWM_X:
            isr = (0x3 << 0u) & cmpflags;
            break;
        }
        if ( isr ) {
            /* Flag set and the channel output. Find the corresponding channel.
             * IMPROVEMENT: Generate mapping from channel to config index to
             * avoid looping. */
            Pwm_ChannelType channel = GET_SUB_START_CHANNEL(hwUnit, sub) + pwm;
            for (Pwm_ChannelType i = 0; i < PWM_NUMBER_OF_CHANNELS; i++) {
                if( channel == PwmConfigPtr->Channels[i].index ) {
                    if( NULL != PwmConfigPtr->NotificationHandlers[i] ) {
                        PwmConfigPtr->NotificationHandlers[i]();
                    }
                    break;
                }
            }

        }
        // Clear Interrupt
#if (OS_SC3 == STD_ON) || (OS_SC4 == STD_ON)
        WritePeripheral16(0,&flexHw->SUB[sub].STS.R,isr);
#else
        flexHw->SUB[sub].STS.B.CMPF = isr;
#endif
    }
}
#endif /* PWM_NOTIFICATION_SUPPORED == STD_ON */


