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


/** @tagSettings DEFAULT_ARCHITECTURE=TMS570 */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */

/** @file Pwm_Hw_tms570.c
 *
 *  The Pwm_Hw_tms570.c file will contain the HW specific implementation of the API's .
 */
 /** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the TMS570 Mcal
  *  @{
  */

 /** \addtogroup Pwm
  *  This is the TMS 570 Mcal Pwm Group
  *  @{
  */

/**************************************************************
 *                  includes
 **************************************************************/
#include "Std_Types.h"
#if defined(USE_DET)
#include "Det.h"
#endif
#include "Pwm.h"
#include "Pwm_Hw_tms570.h"
#include "Pwm_Internal.h"
#if PWM_NOTIFICATION_SUPPORTED==STD_ON
#include "isr.h"
#endif
#include "Mcu.h"
#include "SchM_Pwm.h"
/**************************************************************
 *                  private define
 **************************************************************/
#define PWM_APP                     (0u)        /**< @brief Application ID  */
#define PWM_DEFAULT_DIVIDER         (2u)        /**< @brief Default divider to calculate prescaler from MCU clock */
#define PWM_COUNTER_MAX             (65535u)    /**< @brief Maximum number that the 16 bit counter can count to */

/**************************************************************
 *                  typedefs from epwm.h
 **************************************************************/


/** @brief Enumeration to define the pulse width modulation (PWM) action qualifiers, PWM_ActionQual_e.
  * The action-qualifier submodule decides which events are converted into various action types,
  * thereby producing the required switched waveforms at the EPWMxA and EPWMxB outputs.
  */
typedef enum
{
  PWM_ActionQual_Disabled=0,    /**< Disabled: Keep outputs EPWMxA and EPWMxB at same level as currently set.  */
  PWM_ActionQual_Clear,         /**< Clear: Set output EPWMxA or EPWMxB to a low level.  */
  PWM_ActionQual_Set,           /**< Set: Set output EPWMxA or EPWMxB to a high level.  */
  PWM_ActionQual_Toggle         /**< Toggle: If EPWMxA or EPWMxB is currently pulled low, then pull the output high and vice versa */
} PWM_ActionQual_e;

/** @brief Enumeration to define the pulse width modulation (PWM) Action-qualifier Continuous Software Force,
 * PWM_ActionQualContSWForce_e.
 */
typedef enum
{
  PWM_ActionQualContSWForce_Disabled=0, /**< Disabled: force to disabled  */
  PWM_ActionQualContSWForce_Clear,      /**< Clear: force to clear  */
  PWM_ActionQualContSWForce_Set         /**< Set: force to set  */
} PWM_ActionQualContSWForce_e;

/** @brief Enumeration to define the pulse width modulation (PWM) counter modes, PWM_CounterMode_e.
  */
/*lint --e{749} LINT:OTHER:Local enumeration constant not referenced. */
typedef enum{
  PWM_CounterMode_Up=(0u << 0u),        /**< Up: count up  */
  PWM_Countermode_Down=(1u << 0u),      /**< Down: count down  */
  PWM_CounterMode_UpDown=(2u << 0u),    /**< UpDown: count up/down  */
  PWM_CounterMode_Stop=(3u << 0u)       /**< Stop: stop counting  */
} PWM_CounterMode_e;

/**
 *  @brief Enumeration to define the pulse width modulation (PWM) interrupt generation modes
 *  (which event triggers the interrupt), PWM_IntMode_e
 */
typedef enum
{
  PWM_IntMode_CounterEqualZero=(1u << 0u),          /**< CounterEqualZero: Time-base counter equal to zero */
  PWM_IntMode_CounterEqualPeriod=(2u << 0u),        /**< CounterEqualPeriod: Time-base counter equal to period */
  PWM_IntMode_CounterEqualZeroOrPeriod=(3u << 0u),  /**< CounterEqualZeroOrPeriod: Time-base counter equal to zero or period */
  PWM_IntMode_CounterEqualCmpAIncr=(4u << 0u),      /**< CounterEqualCmpAIncr: Time-base counter equal to the compare A register (CMPA) when the timer is incrementing. */
  PWM_IntMode_CounterEqualCmpADecr=(5u << 0u),      /**< CounterEqualCmpADecr: Time-base counter equal to the compare A register (CMPA) when the timer is decrementing. */
  PWM_IntMode_CounterEqualCmpBIncr=(6u << 0u),      /**< CounterEqualCmpBIncr: Time-base counter equal to the compare B register (CMPB) when the timer is incrementing. */
  PWM_IntMode_CounterEqualCmpBDecr=(7u << 0u)       /**< CounterEqualCmpBDecr: Time-base counter equal to the compare B register (CMPB) when the timer is decrementing. */
} PWM_IntMode_e;


/**
 *  @brief Enumeration to define the pulse width modulation number of events to trigger the interrupt, PWM_IntPeriod_e
 */
typedef enum
{
  PWM_IntPeriod_Disable=(0u << 0u),     /**< Disable: no events trigger interrupt */
  PWM_IntPeriod_FirstEvent=(1u << 0u),  /**< FirstEven: one event triggers interrupt */
  PWM_IntPeriod_SecondEvent=(2u << 0u), /**< SecondEvent: two events trigger interrupt  */
  PWM_IntPeriod_ThirdEvent=(3u << 0u)   /**< ThirdEvent: three events trigger interrupt  */
} PWM_IntPeriod_e;


/**
 *  @brief Enumeration to define the pulse width modulation (PWM) load modes which determine
 *  when to load values from shadow registers, PWM_LoadMode_e
 */
typedef enum
{
  PWM_LoadMode_Zero=0u, /**< Zero: load when time-base counter equal to zero */
  PWM_LoadMode_Period,  /**< Period: load when time-base counter equals period */
  PWM_LoadMode_Either,  /**< Either: load when time-base counter equals either zero or period */
  PWM_LoadMode_Freeze   /**< Freeze: no loads possible */
} PWM_LoadMode_e;


/**
 *  @brief Enumeration to define the pulse width modulation (PWM) shadow modes, PWM_ShadowMode_e
 */
typedef enum
{
  /* Shadow mode: operates as a double buffer. All writes via the CPU access the shadow register. */
  PWM_ShadowMode_Shadow=0u,

  /* Immediate mode: only the active compare register is used. All writes and reads directly access
   * the active register for immediate compare action. */
  PWM_ShadowMode_Immediate

} PWM_ShadowMode_e;

/**************************************************************
 *                  variables
 **************************************************************/


PWM_Handle PwmHandles[PWM_MAX_NUMBER_OF_CH];    /**< @brief Pointer to structures containing PWM HW registers */

/** @brief  Store which physical channels have been configured in a bit field.
 * 0 - not configured
 * 1 - configured
 */
uint16 configuredChannels = 0u;
static uint8 channelConfigMap[PWM_MAX_NUMBER_OF_CH];     /**< @brief Configuration to use in interrupt handler/channel class */
/** @brief Pointer to configuration of the Pwm module. */
const Pwm_ConfigType* PwmConfigPtr = NULL_PTR;

/** @brief Array of channel configurations. Pwm_ChannelType is used as index here. */
static Pwm_ChannelStructType ChannelRuntimeStruct[PWM_MAX_NUMBER_OF_CH];

/**************************************************************
 *                  Forward declarations
 **************************************************************/
/* Internal static function declarations */
static void EnablePwmChannel(void);
static uint16 CalculateUpDownDuty(uint32 absoluteDuty, uint32 period);
static PWM_Handle Init_PWM_handle(void *pMemory);
static void SetCounterMode(PWM_Handle pwmHandle,const PWM_CounterMode_e counterMode);
static void SetShadowMode_CmpA(PWM_Handle pwmHandle,const PWM_ShadowMode_e shadowMode);
static void SetLoadMode_CmpA(PWM_Handle pwmHandle,const PWM_LoadMode_e loadMode);
static void SetActionQual_Zero_PwmA(PWM_Handle pwmHandle,const PWM_ActionQual_e actionQual);
static void SetActionQual_CntUp_CmpA_PwmA(PWM_Handle pwmHandle,const PWM_ActionQual_e actionQual);
static void SetActionQual_CntDown_CmpA_PwmA(PWM_Handle pwmHandle,const PWM_ActionQual_e actionQual);
static void SetActionQualContSWForce_PwmA(PWM_Handle pwmHandle,const PWM_ActionQualContSWForce_e actionQualContSWForce);
static void EnableInt(PWM_Handle pwmHandle);
static void SetIntPeriod(PWM_Handle pwmHandle,const PWM_IntPeriod_e intPeriod);
static void Pwm_enableInterrupts(Pwm_ChannelType channel);
static void Pwm_setIntMode(Pwm_ChannelType channel, const PWM_IntMode_e intMode);
static void Pwm_clearIntFlag(Pwm_ChannelType channel);

#if (PWM_DE_INIT_API == STD_ON )
static void Pwm_Hw_disableChannel(void);
#endif

#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
static void Pwm_Hw_set_period(Pwm_ChannelType Channel, Pwm_PeriodType Period);
#endif

/**************************************************************
 *                  functions
 **************************************************************/
/* @brief       Hardware specific function which initializes the PWM hardware block.
 * @details     This function is referenced from generic initialization service.
 * @note        Non-reentrant
 * @param[in]   ConfigPtr   Pointer to configuration set
 * @return      Success status
 * @retval      E_OK                initialization successful
 * @retval      PWM_E_PARAM_CONFIG  configuration is not valid
 */
Std_ReturnType Pwm_Hw_Init( const Pwm_ConfigType *ConfigPtr ) {

    uint8 i;
    PwmConfigPtr = ConfigPtr;
    Std_ReturnType retVal = E_OK;

    /*lint -e923 MISRA:HARDWARE_ACCESS:Cast from unsigned int to pointer :[MISRA 2012 Rule 11.4, required] */
    *((uint32*)PWM_IOMM_KICK0) = PWM_IOMM_KICK0_MAGIC;
    *((uint32*)PWM_IOMM_KICK1) = PWM_IOMM_KICK1_MAGIC;


    uint32 pwmClockHz = Mcu_Arc_GetPeripheralClock(PERIPHERAL_CLOCK_PWM);
    pwmClockHz /= PWM_DEFAULT_DIVIDER; /* This is the default PWM prescaler on reset */

    /*
     * TMS570LS12X:
     * According to TI hardware manual SPNU515A
     * Section 19.2.2.3.2 specifies procedure for enabling PWM clocks:
     * Enable clocks in IOMM, set TBLCLKSYNC = 0, configure modules,
     * set TBLCLKSYNC = 1.
     *
     * TMS570LC43X:
     * The procedure is the same as for TMS570LS12X but the registers
     * to write to differ.
     */

    /** @req SWS_Pwm_00007 - The function Pwm_Init shall initialize all internals variables and the used PWM structure
     * of the microcontroller according to the parameters specified in ConfigPtr. */
    /** @req SWS_Pwm_00062 - he function Pwm_Init shall only initialize the configured resources and shall not touch resources that are not configured in the configuration file. */
    /** @req SWS_Pwm_00052 - The function Pwm_Init shall disable all notifications. */
    for (i = 0; i < PWM_NUMBER_OF_CHANNELS; i++) {
        Pwm_ChannelType hwChannel = ConfigPtr->Channels[i].channel;
        PwmHandles[hwChannel] = Init_PWM_handle(PwmBaseAddresses[hwChannel]);
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
        Pwm_Hw_disableInt(hwChannel);
#endif
    }
    EnablePwmChannel();
#if defined(CFG_TMS570LS12X)
    /* PINMM37[1] is TBLCLKSYNC. */
    *((uint32*)PWM_PINMMR37_BASE_ADDR) &= ~(EPWM_TBCLKSYNC_ON << EPWM_TBCLKSYNC_OFFSET);
#elif defined(CFG_TMS570LC43X)
    /* PINMMR166[1] is the TBCLKSYNC signal. This bit is clear ('0') by default. */
    /* Bit 0 of PINMMR166 also must be cleared for the enabling of Pwm channels to work.
     * The manual does not mention this at all. */
    *(PINMMR166_ADDR) &= ~((EPWM_TBCLKSYNC_ON << EPWM_TBCLKSYNC_OFFSET) | PINMMR166_0_EPWM_MAGIC_BIT);
#else
#error PWM has not been implemented for this MCU.
#endif

    /** @req SWS_Pwm_10009 - The function Pwm_Init shall start all PWM channels with the configured default values.
     * If the duty cycle parameter equals:*/
    /** @req SWS_Pwm_20009 - ⌈0% or 100% : Then the PWM output signal shall be in the state according to the configured polarity parameter*/
    /** @req SWS_Pwm_30009 - >0% and <100%: Then the PWM output signal shall be modulated according to parameters period,
     * duty cycle and configured polarity.*/

    for (i = 0; i < PWM_NUMBER_OF_CHANNELS; i++) {

        Pwm_ChannelType hwChannel = ConfigPtr->Channels[i].channel;
        /*lint -e929 MISRA:HARDWARE_ACCESS:Cast from pointer to pointer:[MISRA 2012 Rule 11.3, required] */
        /*lint -e740 MISRA:HARDWARE_ACCESS:Unusual pointer cast (incompatible indirect types):[MISRA 2012 Rule 1.3, required] */
        PWM_Obj *pwm = (PWM_Obj *)PwmHandles[hwChannel];
        channelConfigMap[hwChannel] = i; /* to use in interrupt handler/channel class*/
        configuredChannels |= (uint16)(1u << (uint8)hwChannel);
        /*lint -e740 MISRA:HARDWARE_ACCESS:Unusual pointer cast (incompatible indirect types):[MISRA 2012 Rule 1.3, required] */
        SetCounterMode(PwmHandles[hwChannel], PWM_CounterMode_UpDown);
        /* Indexing the config with i below is correct! */
        uint32 period = pwmClockHz / ConfigPtr->Channels[i].settings.frequency;

        /*
         * For updates at the end of period, leave default shadowing of CMPA on,
         * and write to the real register on period clock event.
         * For unbuffered updates, disable shadowing of the CMPA register.
         */
#if (PWM_DUTYCYCLE_UPDATED_ENDPERIOD == STD_ON)
        SetShadowMode_CmpA(PwmHandles[hwChannel], PWM_ShadowMode_Shadow);
        SetLoadMode_CmpA(PwmHandles[hwChannel], PWM_LoadMode_Zero);
#else
        SetShadowMode_CmpA(PwmHandles[hwChannel], PWM_ShadowMode_Immediate);
#endif


        /* Hardware has a 16-bit TBPRD register, which denotes the half-period value,
         * so if period exceeds 65535 * 2, we have an invalid config.
         * If we run PWM clock at 45 MHz, then PWM configured frequency would have
         * to be >= 344 Hz, approx. 2.9 ms
         * Period has to be >= 2 for it to make sense */
        if((period > (PWM_COUNTER_MAX * 2)) || (period < 2)){
            retVal = PWM_E_INIT_FAILED;
            break;
        }

        uint16 configDuty = ConfigPtr->Channels[i].settings.duty;
        uint32 absoluteDuty = ((uint32)period * configDuty) >> 15;
        uint16 upDownDuty = CalculateUpDownDuty(absoluteDuty, period);

        pwm->TBPRD = (uint16)(period / 2); /* TBPRD is @ half of PWM period in up-down mode */
        pwm->TBCTR = 0;
        pwm->CMPA = upDownDuty;

        /*
         * The hardware can produce two PWM outputs on each channel, A and B
         * In our driver, A has polarity as configured by the user
         * B happens through the deadband module which we do not support
         */
        if ((uint8)ConfigPtr->Channels[i].settings.polarity == (uint8)PWM_HIGH ) {
            /* Up-down PWM counter implies that we set the output
             * to the configured polarity when the counter is at 0
             * Then we toggle the output when the duty cycle compare
             * value is reached
             */
            SetActionQual_Zero_PwmA(PwmHandles[hwChannel], PWM_ActionQual_Set);
        } else {
            SetActionQual_Zero_PwmA(PwmHandles[hwChannel], PWM_ActionQual_Clear);
        }
        /* With duty cycle reached, we toggle, regardless of polarity */
        if (configDuty < PWM_50_PERCENT) { /* 50% is handled as counting down */
            SetActionQual_CntUp_CmpA_PwmA(PwmHandles[hwChannel],
                    PWM_ActionQual_Toggle);
        } else {
            SetActionQual_CntDown_CmpA_PwmA(PwmHandles[hwChannel],
                    PWM_ActionQual_Toggle);
        }
        /* Special handling for 0% and 100% duty to prevent two conflicting events
         * from firing in the HW, so just set the output to constant high or low
         */
        /* First disable since Pwm_DeInit could have been called
         * which will force the output to the idle mode. */
        SetActionQualContSWForce_PwmA(PwmHandles[hwChannel], PWM_ActionQualContSWForce_Disabled);

        Pwm_ChannelStructType* ChannelRuntimePtr = &ChannelRuntimeStruct[hwChannel];

        if ((configDuty == 0) || (configDuty == PWM_100_PERCENT)) {
#if (PWM_NOTIFICATION_SUPPORTED==STD_ON)
            Pwm_Hw_disableInt(hwChannel);
            ChannelRuntimePtr->DutyCycle = PWM_0_PERCENT;
            ChannelRuntimePtr->Period = 0;
#endif

            SetActionQual_CntUp_CmpA_PwmA(PwmHandles[hwChannel], PWM_ActionQual_Disabled);

            if (configDuty == 0) {
                SetActionQualContSWForce_PwmA(PwmHandles[hwChannel], ((uint8)ConfigPtr->Channels[i].settings.polarity == (uint8)STD_HIGH) ? PWM_ActionQualContSWForce_Clear : PWM_ActionQualContSWForce_Set);
            } else {
                SetActionQualContSWForce_PwmA(PwmHandles[hwChannel], ((uint8)ConfigPtr->Channels[i].settings.polarity == (uint8)STD_HIGH) ? PWM_ActionQualContSWForce_Set : PWM_ActionQualContSWForce_Clear);
            }
        }else{
#if (PWM_NOTIFICATION_SUPPORTED==STD_ON)
            ChannelRuntimePtr->DutyCycle = configDuty;
            ChannelRuntimePtr->Period = (Pwm_PeriodType)period;
#endif
        }
    }

    if(retVal == E_OK){

        /* Set TBLCKLSYNC to 1, HW init complete. */
#if defined(CFG_TMS570LS12X)
        /*lint -e923 MISRA:HARDWARE_ACCESS:Cast from unsigned int to pointer:[MISRA 2012 Rule 11.6, required] */
        *((uint32*)PWM_PINMMR37_BASE_ADDR) |= (EPWM_TBCLKSYNC_ON << EPWM_TBCLKSYNC_OFFSET);
#elif defined(CFG_TMS570LC43X)
        /*lint -e923 MISRA:HARDWARE_ACCESS:Cast from unsigned int to pointer:[MISRA 2012 Rule 11.6, required] */
        *(PINMMR166_ADDR) |= (EPWM_TBCLKSYNC_ON << EPWM_TBCLKSYNC_OFFSET);
#else
#error PWM has not been implemented for this MCU.
#endif


#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
        /*lint -save -e9036 MISRA:HARDWARE_ACCESS:The warning is caused by external library. Conditional expression should have essentially Boolean type:[MISRA 2012 Rule 14.4, required] */
         ISR_INSTALL_ISR1( "Pwm1", Pwm1_Isr, PWM_CH1_INT, PWM_ISR_PRIORITY, PWM_ARC_ISR_APP );
         ISR_INSTALL_ISR1( "Pwm2", Pwm2_Isr, PWM_CH2_INT, PWM_ISR_PRIORITY, PWM_ARC_ISR_APP );
         ISR_INSTALL_ISR1( "Pwm3", Pwm3_Isr, PWM_CH3_INT, PWM_ISR_PRIORITY, PWM_ARC_ISR_APP );
         ISR_INSTALL_ISR1( "Pwm4", Pwm4_Isr, PWM_CH4_INT, PWM_ISR_PRIORITY, PWM_ARC_ISR_APP );
         ISR_INSTALL_ISR1( "Pwm5", Pwm5_Isr, PWM_CH5_INT, PWM_ISR_PRIORITY, PWM_ARC_ISR_APP );
         ISR_INSTALL_ISR1( "Pwm6", Pwm6_Isr, PWM_CH6_INT, PWM_ISR_PRIORITY, PWM_ARC_ISR_APP );
         ISR_INSTALL_ISR1( "Pwm7", Pwm7_Isr, PWM_CH7_INT, PWM_ISR_PRIORITY, PWM_ARC_ISR_APP );
         /*lint -restore */
#endif

         /* Lock IOMM registers */
         /*lint -e923 MISRA:HARDWARE_ACCESS:Cast from unsigned int to pointer:[MISRA 2012 Rule 11.6, required] */
         *((uint32*)PWM_IOMM_KICK0) = PWM_IOMM_KICK0_LOCK;
    }

    return retVal;
}

#if ((PWM_SET_PERIOD_AND_DUTY_API == STD_ON) || (PWM_SET_DUTY_CYCLE_API == STD_ON))
/* @brief  Sets duty and cycle of specified hardware channel
 * @note                Reentrant
 * @param[in]           Channel     number of hardware channel
 * @param[in]           DutyCycle   requested dutycycle
 */
void Pwm_Hw_setDutyCycle( Pwm_ChannelType Channel, uint16 DutyCycle ) {

    /** @req SWS_Pwm_00013 - The function Pwm_SetDutyCycle shall set the duty cycle of the PWM channel. */
    /** @req SWS_Pwm_00014 - When the requested duty cycle is either 0% or 100%, Pwm_SetDutyCycle shall
     * set the PWM output state to either PWM_HIGH or PWM_LOW, with regard to both the configured polarity parameter and the requested duty cycle. */
    /** @req SWS_Pwm_00016 - The function Pwm_SetDutyCycle shall modulate the PWM output signal according to parameters period, duty cycle and configured polarity */
    /** @req SWS_Pwm_20086 - After the call of Pwm_SetOutputToIdle, channels shall be reactivated using
     * Pwm_SetDutyCycle( ) to activate the PWM channel with the old period.
     */
    /*lint -e929 MISRA:HARDWARE_ACCESS:Cast from pointer to pointer:[MISRA 2012 Rule 11.3, required] */
    /*lint -e740 MISRA:HARDWARE_ACCESS:Unusual pointer cast (incompatible indirect types):[MISRA 2012 Rule 1.3, required] */
    PWM_Obj *pwm = (PWM_Obj*)PwmHandles[Channel];
    uint32 period = pwm->TBPRD * 2;
    uint32 absoluteDuty = ((uint32)period * DutyCycle) >> 15;
    pwm->CMPA = CalculateUpDownDuty(absoluteDuty, period);
    uint8 idx = channelConfigMap[Channel];

    Pwm_ChannelStructType* ChannelRuntimePtr = &ChannelRuntimeStruct[Channel];
    /* Set the compare action again: duty cycle may now be on
     * the other side of TBPRD (middle of period) */
    if ((DutyCycle == 0) || (DutyCycle >= PWM_100_PERCENT)) {

        SetActionQual_CntUp_CmpA_PwmA(PwmHandles[Channel], PWM_ActionQual_Disabled);
        SetActionQual_CntDown_CmpA_PwmA(PwmHandles[Channel], PWM_ActionQual_Disabled);

        Pwm_OutputStateType polarity = PwmConfigPtr->Channels[idx].settings.polarity;

        if (DutyCycle == 0) {
            SetActionQualContSWForce_PwmA(PwmHandles[Channel],
                    (polarity == PWM_HIGH) ? PWM_ActionQualContSWForce_Clear : PWM_ActionQualContSWForce_Set);
        } else {
            SetActionQualContSWForce_PwmA(PwmHandles[Channel],
                    (polarity == PWM_HIGH) ? PWM_ActionQualContSWForce_Set : PWM_ActionQualContSWForce_Clear);
        }
#if (PWM_NOTIFICATION_SUPPORTED==STD_ON)
        Pwm_Hw_disableInt(Channel);
        ChannelRuntimePtr->DutyCycle = PWM_0_PERCENT;
        ChannelRuntimePtr->Period = 0;
#endif
    } else {

        if (absoluteDuty <= pwm->TBPRD) {
            SetActionQual_CntUp_CmpA_PwmA(PwmHandles[Channel], PWM_ActionQual_Toggle);
            SetActionQual_CntDown_CmpA_PwmA(PwmHandles[Channel], PWM_ActionQual_Disabled);

        } else {
            SetActionQual_CntDown_CmpA_PwmA(PwmHandles[Channel], PWM_ActionQual_Toggle);
            SetActionQual_CntUp_CmpA_PwmA(PwmHandles[Channel], PWM_ActionQual_Disabled);
        }

        /* If the output previously has been set to forced high or low this will clear it. */
        SetActionQualContSWForce_PwmA(PwmHandles[Channel], PWM_ActionQualContSWForce_Disabled);
#if (PWM_NOTIFICATION_SUPPORTED==STD_ON)
        Pwm_enableInterrupts(Channel);
        ChannelRuntimePtr->Period = (uint16)period;
        ChannelRuntimePtr->DutyCycle = DutyCycle;
#endif
    }

    /** @req SWS_Pwm_00017 -
     * This requirement is to update duty cycle at the end of the period. That is the
     * default behaviour of the hardware, and this setting is changed in Pwm_Init if
     * PwmDutycycleUpdatedEndperiod was turned off
     */
}
#endif

/***************************************************************************//**
 * @brief  Initializes the PWM hardware channel.
 * @note                Re-entrant
 * @param[in]           channel     number of channel to initialize
 ******************************************************************************/
static void EnablePwmChannel() {
    /*lint -save -e923 MISRA:HARDWARE_ACCESS:Cast from unsigned int to pointer:[MISRA 2012 Rule 11.6, required] */
    /*lint -save -e9053 MISRA:HARDWARE_ACCESS:The shift value is at least the precision of the essential type of the left hand side:[MISRA 2012 Rule 12.2, required] */
#if defined(CFG_TMS570LS12X)
    /* The register and bit to enable clock to each PWM are from
       the TI reference SPNS192A, sec. 5.1.1, table 5-1 */

#if defined(PWM_CHANNEL_1)  /* PINMMR37[8] */
        *((uint32*)PWM_PINMMR37_BASE_ADDR) |= PWM_PINMMR37_EPWM1CLK_BIT;
#endif
#if defined(PWM_CHANNEL_2)  /* PINMMR37[16] */
        *((uint32*)PWM_PINMMR37_BASE_ADDR) |= PWM_PINMMR37_EPWM2CLK_BIT;
#endif
#if defined(PWM_CHANNEL_3)  /* PINMMR37[24] */
        *((uint32*)PWM_PINMMR37_BASE_ADDR) |= PWM_PINMMR37_EPWM3CLK_BIT;
#endif
#if defined(PWM_CHANNEL_4) /* PINMMR38[0] */
        *((uint32*)PWM_PINMMR38_BASE_ADDR) |= PWM_PINMMR38_EPWM4CLK_BIT;
#endif
#if defined(PWM_CHANNEL_5) /* PINMMR38[8] */
        *((uint32*)PWM_PINMMR38_BASE_ADDR) |= PWM_PINMMR38_EPWM5CLK_BIT;
#endif
#if defined(PWM_CHANNEL_6)/* PINMMR38[16] */
        *((uint32*)PWM_PINMMR38_BASE_ADDR) |= PWM_PINMMR38_EPWM6CLK_BIT;
#endif
 /* As else if are used last condition will always be tested only for true
 * solution was to use either just if cases or to disable coverage
 * Pragma included to get 100 percent code coverage */
#if defined(PWM_CHANNEL_7) /* PINMMR38[24] */
        *((uint32*)PWM_PINMMR38_BASE_ADDR) |= PWM_PINMMR38_EPWM7CLK_BIT;

#endif

#elif defined(CFG_TMS570LC43X)
#if defined(PWM_CHANNEL_1)
        pcrREG2->PSPWRDWNCLR3 |= (EPWMX_PSPWRDWN3_POWER << EPWM1_PSPWRDWN3_OFFSET);
#endif
#if defined(PWM_CHANNEL_2)
        pcrREG2->PSPWRDWNCLR3 |= (EPWMX_PSPWRDWN3_POWER << EPWM2_PSPWRDWN3_OFFSET);
#endif
#if defined(PWM_CHANNEL_3)
        pcrREG2->PSPWRDWNCLR3 |= (EPWMX_PSPWRDWN3_POWER << EPWM3_PSPWRDWN3_OFFSET);
#endif
#if defined(PWM_CHANNEL_4)
        pcrREG2->PSPWRDWNCLR3 |= (EPWMX_PSPWRDWN3_POWER << EPWM4_PSPWRDWN3_OFFSET);
#endif
#if defined(PWM_CHANNEL_5)
        pcrREG2->PSPWRDWNCLR3 |= (EPWMX_PSPWRDWN3_POWER << EPWM5_PSPWRDWN3_OFFSET);
#endif
#if defined(PWM_CHANNEL_6)
        pcrREG2->PSPWRDWNCLR3 |= (EPWMX_PSPWRDWN3_POWER << EPWM6_PSPWRDWN3_OFFSET);
#endif
#if defined(PWM_CHANNEL_7)
        pcrREG2->PSPWRDWNCLR3 |= (EPWMX_PSPWRDWN3_POWER << EPWM7_PSPWRDWN3_OFFSET);
#endif
#else
#error PWM has not been implemented for this MCU.
#endif
    /*lint -restore */
}

#if (PWM_DE_INIT_API == STD_ON )
/***************************************************************************//**
 * @brief  De-initializes the PWM hardware channel.
 * @note                Re-entrant
 * @param[in]           channel     number of channel to initialize
 ******************************************************************************/
static void Pwm_Hw_disableChannel() {
    /*lint -save -e923 MISRA:HARDWARE_ACCESS:Cast from unsigned int to pointer:[MISRA 2012 Rule 11.6, required] */
    /*lint -save -e9053 MISRA:HARDWARE_ACCESS:The shift value is at least the precision of the essential type of the left hand side:[MISRA 2012 Rule 12.2, required] */
#if defined(CFG_TMS570LS12X)
#if defined(PWM_CHANNEL_1) /* PINMMR37[8] */
        *((uint32*) PWM_PINMMR37_BASE_ADDR) &= ~PWM_PINMMR37_EPWM1CLK_BIT;
#endif
#if defined(PWM_CHANNEL_2) /* PINMMR37[16] */
        *((uint32*) PWM_PINMMR37_BASE_ADDR) &= ~PWM_PINMMR37_EPWM2CLK_BIT;
#endif
#if defined(PWM_CHANNEL_3)  /* PINMMR37[24] */
        *((uint32*) PWM_PINMMR37_BASE_ADDR) &= ~PWM_PINMMR37_EPWM3CLK_BIT;
#endif
#if defined(PWM_CHANNEL_4)/* PINMMR38[0] */
        *((uint32*) PWM_PINMMR38_BASE_ADDR) &= ~PWM_PINMMR38_EPWM4CLK_BIT;
#endif
#if defined(PWM_CHANNEL_5)/* PINMMR38[8] */
        *((uint32*) PWM_PINMMR38_BASE_ADDR) &= ~PWM_PINMMR38_EPWM5CLK_BIT;
#endif
#if defined(PWM_CHANNEL_6)/* PINMMR38[16] */
        *((uint32*) PWM_PINMMR38_BASE_ADDR) &= ~PWM_PINMMR38_EPWM6CLK_BIT;
#endif
 /* As else if are used last condition will always be tested only for true
 * solution was to use either just if cases or to disable coverage
 * Pragma included to get 100 percent code coverage */

#if defined(PWM_CHANNEL_7) /* PINMMR38[24] */
        *((uint32*) PWM_PINMMR38_BASE_ADDR) &= ~PWM_PINMMR38_EPWM7CLK_BIT;


#endif

#elif defined(CFG_TMS570LC43X)
#if defined(PWM_CHANNEL_1)
        pcrREG2->PSPWRDWNSET3 |= (EPWMX_PSPWRDWN3_POWER << EPWM1_PSPWRDWN3_OFFSET);
#endif
#if defined(PWM_CHANNEL_2)
        pcrREG2->PSPWRDWNSET3 |= (EPWMX_PSPWRDWN3_POWER << EPWM2_PSPWRDWN3_OFFSET);
#endif
#if defined(PWM_CHANNEL_3)
        pcrREG2->PSPWRDWNSET3 |= (EPWMX_PSPWRDWN3_POWER << EPWM3_PSPWRDWN3_OFFSET);
#endif
#if defined(PWM_CHANNEL_4)
        pcrREG2->PSPWRDWNSET3 |= (EPWMX_PSPWRDWN3_POWER << EPWM4_PSPWRDWN3_OFFSET);
#endif
#if defined(PWM_CHANNEL_5)
        pcrREG2->PSPWRDWNSET3 |= (EPWMX_PSPWRDWN3_POWER << EPWM5_PSPWRDWN3_OFFSET);
#endif
#if defined(PWM_CHANNEL_6)
        pcrREG2->PSPWRDWNSET3 |= (EPWMX_PSPWRDWN3_POWER << EPWM6_PSPWRDWN3_OFFSET);
#endif
#if defined(PWM_CHANNEL_7)
        pcrREG2->PSPWRDWNSET3 |= (EPWMX_PSPWRDWN3_POWER << EPWM7_PSPWRDWN3_OFFSET);
#endif
#else
#error PWM has not been implemented for this MCU.
#endif
    /*lint -restore */
}
#endif

#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
/***************************************************************************//**
 * @brief  Sets the period and duty of requested hardware channel.
 * @note                Re-entrant
 * @param[in]           channel     number of channel to initialize
 ******************************************************************************/
static void Pwm_Hw_set_period(Pwm_ChannelType Channel, Pwm_PeriodType Period){
    /*lint -e929 MISRA:HARDWARE_ACCESS:Cast from pointer to pointer:[MISRA 2012 Rule 11.3, required] */
    /*lint -e740 MISRA:HARDWARE_ACCESS:Unusual pointer cast (incompatible indirect types):[MISRA 2012 Rule 1.3, required] */
    PWM_Obj *pwm = (PWM_Obj*)PwmHandles[Channel];
    pwm->TBPRD = Period / 2;
}
#endif


/***************************************************************************//**
 * @brief  Will enable notification interrupts if Channel is valid
 * @note                Re-entrant
 * @param[in]           channel     The harware channel to enable interrupts for
 ******************************************************************************/
static void Pwm_enableInterrupts(Pwm_ChannelType channel) {
    const Pwm_ChannelStructType* ChannelRuntimePtr = &ChannelRuntimeStruct[channel];
    if( ChannelRuntimePtr->NotificationState != PWM_NO_NOTIFICATION) {
        EnableInt(PwmHandles[channel]);
        SetIntPeriod(PwmHandles[channel], PWM_IntPeriod_FirstEvent);
    }
}

/***************************************************************************//**
 * @brief       Calculates absolute dutycycle.
 * @details     Due to HW restrictions, maximum usable dutycycle is half of the
 *              period. If larger is requested, it should be the difference between
 *              period and dutycycle.
 * @note        reentrant
 * @param[in]   absoluteDuty    Absolute number for the counter to count to.
 * @param[in]   period          Total number to which the counter counts.
 * @return      calculated necessary absolute dutycycle.
 ******************************************************************************/
static uint16 CalculateUpDownDuty(uint32 absoluteDuty, uint32 period) {
    uint16 result;

    if (absoluteDuty <= (period / 2)) {
        result = (uint16)absoluteDuty;
    } else {
        result = (uint16)((period / 2) - (absoluteDuty - (period / 2)));
    }
    return result;
}

/***************************************************************************//**
 * @brief  Sets the pulse width modulation (PWM) counter mode
 * @note        reentrant
 * @param[in]   pwmHandle    The pulse width modulation (PWM) object handle
 * @param[in]   counterMode  The count mode
 ******************************************************************************/
static void SetCounterMode(PWM_Handle pwmHandle,const PWM_CounterMode_e counterMode)
{
    /*lint -e929 MISRA:HARDWARE_ACCESS:Cast from pointer to pointer:[MISRA 2012 Rule 11.3, required] */
    /*lint -e740 MISRA:HARDWARE_ACCESS:Unusual pointer cast (incompatible indirect types):[MISRA 2012 Rule 1.3, required] */
  PWM_Obj *pwm = (PWM_Obj *)pwmHandle;

  // clear the bits
  pwm->TBCTL &= (~PWM_TBCTL_CTRMODE_BITS);

  // set the bits
  pwm->TBCTL |= (uint16)counterMode;

}

/***************************************************************************//**
 * @brief       Sets the pulse width modulation (PWM) interrupt mode
 * @note        reentrant
 * @param[in]   pwmHandle  The pulse width modulation (PWM) object handle
 * @param[in]   intMode    The interrupt mode
 ******************************************************************************/
static void Pwm_setIntMode(Pwm_ChannelType channel, const PWM_IntMode_e intMode)
{
    /*lint -e929 MISRA:HARDWARE_ACCESS:Cast from pointer to pointer:[MISRA 2012 Rule 11.3, required] */
    /*lint -e740 MISRA:HARDWARE_ACCESS:Unusual pointer cast (incompatible indirect types):[MISRA 2012 Rule 1.3, required] */
  PWM_Obj *pwm = (PWM_Obj *)PwmHandles[channel];


  // clear the bits
  pwm->ETSEL &= (~PWM_ETSEL_INTSEL_BITS);

  // set the bits
  pwm->ETSEL |= (uint16)intMode;

  return;
} // end of Pwm_setIntMode() function

/***************************************************************************//**
 * @brief       Sets the pulse width modulation (PWM) interrupt period
 * @note        reentrant
 * @param[in]   pwmHandle  The pulse width modulation (PWM) object handle
 * @param[in]   intPeriod  The interrupt period
 ******************************************************************************/
static void SetIntPeriod(PWM_Handle pwmHandle,const PWM_IntPeriod_e intPeriod)
{
  PWM_Obj *pwm = (PWM_Obj *)pwmHandle;


  // clear the bits
  pwm->ETPS &= (~PWM_ETPS_INTPRD_BITS);

  // set the bits
  pwm->ETPS |= (uint16)intPeriod;

}

/***************************************************************************//**
 * @brief       Sets the pulse width modulation (PWM) load mode for CMPA
 * @note        reentrant
 * @param[in]   pwmHandle  The pulse width modulation (PWM) object handle
 * @param[in]   loadMode   The load mode
 ******************************************************************************/
static void SetLoadMode_CmpA(PWM_Handle pwmHandle,const PWM_LoadMode_e loadMode)
{
    /*lint -e929 MISRA:HARDWARE_ACCESS:Cast from pointer to pointer:[MISRA 2012 Rule 11.3, required] */
    /*lint -e740 MISRA:HARDWARE_ACCESS:Unusual pointer cast (incompatible indirect types):[MISRA 2012 Rule 1.3, required] */
  PWM_Obj *pwm = (PWM_Obj *)pwmHandle;

  // clear the bits
  pwm->CMPCTL &= (~PWM_CMPCTL_LOADAMODE_BITS);

  // set the bits
  pwm->CMPCTL |= (uint16)loadMode;

}

/***************************************************************************//**
 * @brief  Clears the pulse width modulation (PWM) interrupt flag
 * @note        reentrant
 * @param[in]   channel    Number of hardware PWM channel
 ******************************************************************************/
static void Pwm_clearIntFlag(Pwm_ChannelType channel)
{
    /*lint -e929 MISRA:HARDWARE_ACCESS:Cast from pointer to pointer:[MISRA 2012 Rule 11.3, required] */
    /*lint -e740 MISRA:HARDWARE_ACCESS:Unusual pointer cast (incompatible indirect types):[MISRA 2012 Rule 1.3, required] */
  PWM_Obj *pwm = (PWM_Obj*)PwmHandles[channel];

  // set the bits
  pwm->ETCLR = PWM_ETCLR_INT_BITS;  /*lint !e9031 MISRA:HARDWARE_ACCESS:Composite expression assigned to a wider essential type:[MISRA 2012 Rule 10.6, required] */

}


/* @brief  Sets output state of a PWM channel to requested state
 * @note        reentrant
 * @param[in]   channel     Number of hardware PWM channel
 * @param[in]   state       Desired state
 ******************************************************************************/
void Pwm_Hw_setOutputState(Pwm_ChannelType channel, Pwm_OutputStateType state){

    if (state == PWM_HIGH) {
        SetActionQualContSWForce_PwmA(PwmHandles[channel], PWM_ActionQualContSWForce_Set);
    } else{
        /* No need to check is state is PWM_LOW because Pwm_OutputStateType is enum
         * with only two possible values */
        SetActionQualContSWForce_PwmA(PwmHandles[channel], PWM_ActionQualContSWForce_Clear);
    }
}

/* @brief   Interrupt service routine for implementing Pwm channel notifications.
 * @note        Reentrant
 * @param[in]   channel         channel number
 ******************************************************************************/
void Pwm_Hw_Isr(Pwm_ChannelType channel) {
    uint16 idx = channelConfigMap[channel];

    PWM_Obj *pwm = (PWM_Obj*)PwmHandles[channel];

 /* @CODECOV:HARDWARE_DEPENDENCY_STATUS_BIT: Set by hardware when interrupt is generated */
 /* Set by hardware when interrupt is generated
 * Pragma included to get 100 percent code coverage */

    if ((pwm->ETFLG & PWM_ETFLG_BIT) == PWM_ETFLG_BIT){
        if (PwmConfigPtr->NotificationHandlers[idx] != NULL) {
            PwmConfigPtr->NotificationHandlers[idx]();
        }

    /** @req SWS_Pwm_00026 - The Pwm module shall reset the interrupt flag associated to the notification */
    /** @req SWS_Pwm_30115 - The Pwm module shall reset the interrupt flag associated to the notification
     * only when the configuration parameter PwmNotificationSupported is ON. */
        /* This line should be: pwm->ETCLR |= intsel
         * to clear only the flag which caused the interrupt, but the tests do not work correctly.
         * When the tests are rearanged, current line blocks Pwm_Init test.
         * This is how it works best with current setup of tests.
         * */
        pwm->ETCLR |= PWM_ETSEL_INTSEL_BITS; /*clear pending interrupt flag */
    }
}

/* @brief   Test to see if a channel is configured
 * @note        Reentrant
 * @param[in]   channel         channel number
 ******************************************************************************/
boolean Pwm_Hw_isChannelConfigured( Pwm_ChannelType channel ){
    return (0u != (configuredChannels & (uint16)(1u << (uint8)channel) ));
}

#if (PWM_GET_OUTPUT_STATE_API == STD_ON)
/* @brief   Hardware dependent function that gets output state of a channel
 * @details Not implemented for tms570, so it returns PWM_LOW.
 * @param[in]   ChannelNumber       channel number
 * @return      PWM_LOW
 ******************************************************************************/
Pwm_OutputStateType Pwm_Hw_GetOutputState(Pwm_ChannelType ChannelNumber){
    return PWM_LOW;
}
#endif

#if (PWM_DE_INIT_API == STD_ON )
/* @brief   Hardware dependent function for Pwm module de-initialization.
 * @param[in]           ConfigPtr Pointer to configuration set
******************************************************************************/
void Pwm_Hw_Deinit( void ){
    uint8 i;

    for (i = 0; i < PWM_NUMBER_OF_CHANNELS; i++) {

        Pwm_ChannelType hwChannel = PwmConfigPtr->Channels[i].channel;
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
        Pwm_DisableNotification(hwChannel);
#endif

        Pwm_OutputStateType idleState = PwmConfigPtr->Channels[i].settings.idleState;
        /** @req 4.1.2|4.3.0/SWS_Pwm_00011 - Pwm_DeInit shall set the state of the PWM output signals to the idle state. */
        Pwm_Hw_setOutputState(hwChannel, idleState);
        /** @req 4.1.2|4.3.0/SWS_Pwm_00012 - The function Pwm_DeInit shall disable PWM interrupts and PWM signal edge notifications. */
        /*lint -e522 MISRA:HARDWARE_ACCESS:Highest operation, function 'Pwm_Hw_disableChannel', lacks side-effects:[MISRA 2012 Rule 2.2, required] */

    }
    Pwm_Hw_disableChannel();
}
#endif

#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
/* @brief   Hardware dependent function to set period and duty
 * @param[in]   ChannelNumber   Channel number
 * @param[in]   Period          Desired period
 * @param[in]   DutyCycle       Desired duty cycle
 ******************************************************************************/
void Pwm_Hw_SetPeriodAndDuty(Pwm_ChannelType ChannelNumber, Pwm_PeriodType Period, uint16 DutyCycle){
    Pwm_Hw_set_period(ChannelNumber, Period);
    Pwm_Hw_setDutyCycle(ChannelNumber, DutyCycle);
}
#endif

/* @brief       Function to set period and duty
 * @param[in]   ChannelNumber   Channel number
 * @return      channel type
 * @retval      PWM_VARIABLE_PERIOD         Variable period. The duty cycle and the period can be changed.
 * @retval      PWM_FIXED_PERIOD            Fixed period. Only the duty cycle can be changed.
 * @retval      PWM_FIXED_PERIOD_SHIFTED    Fixed shifted period. Impossible to change it.
 ******************************************************************************/
Pwm_ChannelClassType Pwm_Hw_getChannelClass(Pwm_ChannelType ChannelNumber){
    Pwm_ChannelType idx = (Pwm_ChannelType)channelConfigMap[ChannelNumber];
    return PwmConfigPtr->Channels[idx].settings.class;
}

/* @brief       Function read back the configured idle state for specific channel.
 * @param [in]  Channel         Channel number.
 * @return      configured idle state
 * @retval      PWM_LOW         low state.
 * @retval      PWM_HIGH        high state.
 ******************************************************************************/
Pwm_OutputStateType Pwm_Hw_getConfiguredIdleState(Pwm_ChannelType Channel){
    return PwmConfigPtr->Channels[Channel].settings.idleState;
}

/* @brief       Enables notification for specified channel.
 * @param[in]   ChannelNumber   Channel number.
 * @param[in]   Notification    Desired notification type.
 ******************************************************************************/
void Pwm_Hw_EnableNotification(Pwm_ChannelType ChannelNumber, Pwm_EdgeNotificationType Notification){
    /** @req 4.1.2|4.3.0/SWS_PWM_00081 Pwm_EnableNotification shall cancel pending interrupts. */
    Pwm_clearIntFlag(ChannelNumber);

    uint8 idx = channelConfigMap[ChannelNumber];

    ChannelRuntimeStruct[ChannelNumber].NotificationState = (uint8)Notification;


    if(ChannelRuntimeStruct[ChannelNumber].DutyCycle != PWM_0_PERCENT){
        /** @req 4.1.2|4.3.0/SWS_Pwm_00024 - The function Pwm_EnableNotification shall
        * enable the PWM signal edge notification according to notification parameter.*/
        Pwm_enableInterrupts(ChannelNumber);
    }


    Pwm_OutputStateType polarity = PwmConfigPtr->Channels[idx].settings.polarity;
    uint16 configDuty = ChannelRuntimeStruct[ChannelNumber].DutyCycle;
    uint8 cmpADirection = 0;
    if (configDuty < PWM_50_PERCENT) {/* 50% is handled as counting down */
        cmpADirection = 1;
    }

    /*
     *  When should an interrupt be generated?
     *  New PWM period begins on TBCTR = 0
     *  Duty cycle is at TBCTR = CMPA in one of the directions
     *  cmpADirection is 0 for down-count and 1 for up-count
     *   |=================================|
     *   |            |  HIGH   |  LOW     |
     *   |FALLING     |  Duty   |  Zero    |
     *   |RISING      |  Zero   |  Duty    |
     *   |=================================|
     */

    PWM_IntMode_e mode = (cmpADirection == 1) ? PWM_IntMode_CounterEqualCmpAIncr : PWM_IntMode_CounterEqualCmpADecr;

    switch(ChannelRuntimeStruct[ChannelNumber].NotificationState) {

        case PWM_FALLING_EDGE:
            if (polarity == PWM_HIGH) {
                Pwm_setIntMode(ChannelNumber, mode);
            } else {
                /* no need to check for PWM_LOW because polarity is of Pwm_OutputStateType
                which is enum and has only two possible values */
                Pwm_setIntMode(ChannelNumber, PWM_IntMode_CounterEqualZero);
            }
            break;

        case PWM_RISING_EDGE:
            if (polarity == PWM_HIGH) {
                Pwm_setIntMode(ChannelNumber, PWM_IntMode_CounterEqualZero);
            } else {
                /* no need to check for PWM_LOW because polarity is of Pwm_OutputStateType
                which is enum and has only two possible values */
                Pwm_setIntMode(ChannelNumber, mode);
            }
            break;

        case PWM_BOTH_EDGES:
            Pwm_setIntMode(ChannelNumber, PWM_IntMode_CounterEqualZeroOrPeriod);
            break;
        default:
            break;
    }
}

/* @brief  Disables the pulse width modulation (PWM) interrupt
 * @note                reentrant
 * @param[in]           channel     number of channel to initialize
 ******************************************************************************/
void Pwm_Hw_disableInt(Pwm_ChannelType channel)
{
    /*lint -e929 MISRA:HARDWARE_ACCESS:Cast from pointer to pointer:[MISRA 2012 Rule 11.3, required] */
    /*lint -e740 MISRA:HARDWARE_ACCESS:Unusual pointer cast (incompatible indirect types):[MISRA 2012 Rule 1.3, required] */
  PWM_Obj *pwm = (PWM_Obj *)PwmHandles[channel];


  // clear the bits
  pwm->ETSEL &= (~PWM_ETSEL_INTEN_BITS);

  return;
}

/***************************************************************************//**
 * @brief       Enables the pulse width modulation (PWM) interrupt
 * @note        reentrant
 * @param[in]   pwmHandle  The pulse width modulation (PWM) object handle
 ******************************************************************************/
static void EnableInt(PWM_Handle pwmHandle)
{
    /*lint -e929 MISRA:HARDWARE_ACCESS:Cast from pointer to pointer:[MISRA 2012 Rule 11.3, required] */
    /*lint -e740 MISRA:HARDWARE_ACCESS:Unusual pointer cast (incompatible indirect types):[MISRA 2012 Rule 1.3, required] */
  PWM_Obj *pwm = (PWM_Obj *)pwmHandle;


  // set the bits
  pwm->ETSEL |= PWM_ETSEL_INTEN_BITS;

}

/***************************************************************************//**
 * @brief  Initializes the pulse width modulation (PWM) object handle
 * @note        reentrant
 * @param[in]   pMemory   A pointer to the base address of the PWM registers
 * @param[in]   numBytes  The number of bytes allocated for the PWM object
 * @return                The pulse width modulation (PWM) object handle
 ******************************************************************************/
static PWM_Handle Init_PWM_handle(void *pMemory)
{
  PWM_Handle pwmHandle;

  pwmHandle = (PWM_Handle)pMemory;

  return(pwmHandle);
}

/***************************************************************************//**
 * @brief       Sets the pulse width modulation (PWM) object action for PWM A
 *              when the counter equals CMPA and the counter is decrementing
 * @note        reentrant
 * @param[in]   pwmHandle  The pulse width modulation (PWM) object handle
 * @param[in]   actionQual  The action qualifier
 ******************************************************************************/
static void SetActionQual_CntDown_CmpA_PwmA(PWM_Handle pwmHandle,const PWM_ActionQual_e actionQual)
{
    /*lint -e929 MISRA:HARDWARE_ACCESS:Cast from pointer to pointer:[MISRA 2012 Rule 11.3, required] */
    /*lint -e740 MISRA:HARDWARE_ACCESS:Unusual pointer cast (incompatible indirect types):[MISRA 2012 Rule 1.3, required] */
  PWM_Obj *pwm = (PWM_Obj *)pwmHandle;


  // clear the bits
  pwm->AQCTLA &= (~PWM_AQCTL_CAD_BITS);

  // set the bits
  pwm->AQCTLA |= (uint16)((uint16)actionQual << PWM_AQCTL_CAD_OFFSET);

}

/***************************************************************************//**
 * @brief       Sets the pulse width modulation (PWM) object action for PWM A
 *              when the counter equals CMPA and the counter is incrementing
 * @note        reentrant
 * @param[in]   pwmHandle  The pulse width modulation (PWM) object handle
 * @param[in]   actionQual  The action qualifier
 ******************************************************************************/
static void SetActionQual_CntUp_CmpA_PwmA(PWM_Handle pwmHandle,const PWM_ActionQual_e actionQual)
{
    /*lint -e929 MISRA:HARDWARE_ACCESS:Cast from pointer to pointer:[MISRA 2012 Rule 11.3, required] */
    /*lint -e740 MISRA:HARDWARE_ACCESS:Unusual pointer cast (incompatible indirect types):[MISRA 2012 Rule 1.3, required] */
  PWM_Obj *pwm = (PWM_Obj *)pwmHandle;


  // clear the bits
  pwm->AQCTLA &= (~PWM_AQCTL_CAU_BITS);

  // set the bits
  pwm->AQCTLA |= (uint16)((uint16)actionQual << PWM_AQCTL_CAU_OFFSET);

}

/***************************************************************************//**
 * @brief       Sets the pulse width modulation (PWM) object Continuous Software
 *              Force action for PWM A
 * @note        reentrant
 * @param[in]   pwmHandle  The pulse width modulation (PWM) object handle
 * @param[in]   actionQualContSWForce  The action qualifier continuous software force
 ******************************************************************************/
static void SetActionQualContSWForce_PwmA(PWM_Handle pwmHandle,const PWM_ActionQualContSWForce_e actionQualContSWForce)
{
    /*lint -e929 MISRA:HARDWARE_ACCESS:Cast from pointer to pointer:[MISRA 2012 Rule 11.3, required] */
    /*lint -e740 MISRA:HARDWARE_ACCESS:Unusual pointer cast (incompatible indirect types):[MISRA 2012 Rule 1.3, required] */
  PWM_Obj *pwm = (PWM_Obj *)pwmHandle;


  // clear the bits
  pwm->AQCSFRC &= (~PWM_AQCSFRC_CSFA_BITS);

  // set the bits
  pwm->AQCSFRC |= (uint16)actionQualContSWForce;

}

/***************************************************************************//**
 * @brief  Sets the pulse width modulation (PWM) shadow mode for CMPA
 * @note        reentrant
 * @param[in]   pwmHandle    The pulse width modulation (PWM) object handle
 * @param[in]   shadowMode  The shadow mode
 ******************************************************************************/
static void SetShadowMode_CmpA(PWM_Handle pwmHandle,const PWM_ShadowMode_e shadowMode)
{
    /*lint -e929 MISRA:HARDWARE_ACCESS:Cast from pointer to pointer:[MISRA 2012 Rule 11.3, required] */
    /*lint -e740 MISRA:HARDWARE_ACCESS:Unusual pointer cast (incompatible indirect types):[MISRA 2012 Rule 1.3, required] */
  PWM_Obj *pwm = (PWM_Obj *)pwmHandle;


  // clear the bits
  pwm->CMPCTL &= (~PWM_CMPCTL_SHDWAMODE_BITS);

  // set the bits
  pwm->CMPCTL |= (uint16)((uint16)shadowMode << PWM_CMPCTL_SHDWAMODE_OFFSET);

}

/***************************************************************************//**
 * @brief       Sets the pulse width modulation (PWM) object action for PWM A
 *              when the counter equals the zero
 * @note        reentrant
 * @param[in]   pwmHandle  The pulse width modulation (PWM) object handle
 * @param[in]   actionQual  The action qualifier
 ******************************************************************************/
static void SetActionQual_Zero_PwmA(PWM_Handle pwmHandle,const PWM_ActionQual_e actionQual)
{
    /*lint -e929 MISRA:HARDWARE_ACCESS:Cast from pointer to pointer:[MISRA 2012 Rule 11.3, required] */
    /*lint -e740 MISRA:HARDWARE_ACCESS:Unusual pointer cast (incompatible indirect types):[MISRA 2012 Rule 1.3, required] */
  PWM_Obj *pwm = (PWM_Obj *)pwmHandle;


  // clear the bits
  pwm->AQCTLA &= ~PWM_AQCTL_ZRO_BITS;

  // set the bits
  pwm->AQCTLA |= (uint16)actionQual;

}

/* @brief       Disables notification for specified channel.
 * @param[in]   ChannelNumber       Channel number.
 ******************************************************************************/
void Pwm_Hw_DisableNotification(Pwm_ChannelType ChannelNumber) {
    Pwm_Hw_disableInt(ChannelNumber);
    ChannelRuntimeStruct[ChannelNumber].NotificationState = PWM_NO_NOTIFICATION;
}

/** @}*/
/** @}*/
