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
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2 */
/** @tagSettings DEFAULT_ARCHITECTURE=RH850F1H */

/* ----------------------------[includes]------------------------------------*/

#include "Pwm.h"
#include "Pwm_Internal.h"
#include "Mcu.h"
#if defined(USE_DET)
#include "Det.h"
#endif

#include "os.h"
#include "isr.h"
#include "Pwm_Hw_taud.h"
#include <string.h>
/* ----------------------------[private define]------------------------------*/

typedef uint8 Pwm_Hw_ChannelType;

typedef struct {
    const Pwm_ConfigType (*config)[PWM_ARC_LOG_UNIT_CNT];
    /* Maps the a physical channel id to configured channel index */
    Pwm_ChannelType channelMap[PWM_ARC_HW_UNIT_CNT];
    Pwm_Hw_ChannelType channelToHwChannel[PWM_ARC_LOG_UNIT_CNT];
    boolean Pwm_NotifEnable[PWM_ARC_LOG_UNIT_CNT];
    boolean Pwm_WakUpEnable[PWM_ARC_LOG_UNIT_CNT];
} Pwm_GlobalType;

Pwm_GlobalType Pwm_Global;

const uint32_t Pwm_PrescaleMap[4] = {2U^0U,2U^5U,2U^10U,400U};

const Pwm_ConfigType *PwmConfigPtr = NULL;

uint32 Pwm_Clock;

#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS)    /*lint -e961 */

static void installChannelInterrupt(uint8 Chnl) {
    switch (Chnl) {
        case 0:
            ISR_INSTALL_ISR2("Gpt", Pwm1_Isr, (IrqType )(IRQ_INTTAUD0I0), PWM_ISR_PRIORITY, 0);
            break;
        case 1:
            ISR_INSTALL_ISR2("Gpt", Pwm2_Isr, (IrqType )(IRQ_INTTAUD0I1), PWM_ISR_PRIORITY, 0);
            break;
        case 2:
            ISR_INSTALL_ISR2("Gpt", Pwm3_Isr, (IrqType )(IRQ_INTTAUD0I2), PWM_ISR_PRIORITY, 0);
            break;
        case 3:
            ISR_INSTALL_ISR2("Gpt", Pwm4_Isr, (IrqType )(IRQ_INTTAUD0I3), PWM_ISR_PRIORITY, 0);
            break;
        case 4:
            ISR_INSTALL_ISR2("Gpt", Pwm5_Isr, (IrqType )(IRQ_INTTAUD0I4), PWM_ISR_PRIORITY, 0);
            break;
        case 5:
            ISR_INSTALL_ISR2("Gpt", Pwm6_Isr, (IrqType )(IRQ_INTTAUD0I5), PWM_ISR_PRIORITY, 0);
            break;
        case 6:
            ISR_INSTALL_ISR2("Gpt", Pwm7_Isr, (IrqType )(IRQ_INTTAUD0I6), PWM_ISR_PRIORITY, 0);
            break;
        case 7:
            ISR_INSTALL_ISR2("Gpt", Pwm8_Isr, (IrqType )(IRQ_INTTAUD0I7), PWM_ISR_PRIORITY, 0);
            break;
        case 8:
            ISR_INSTALL_ISR2("Gpt", Pwm9_Isr, (IrqType )(IRQ_INTTAUD0I8), PWM_ISR_PRIORITY, 0);
            break;
        case 9:
            ISR_INSTALL_ISR2("Gpt", Pwm10_Isr, (IrqType )(IRQ_INTTAUD0I9), PWM_ISR_PRIORITY, 0);
            break;
        case 10:
            ISR_INSTALL_ISR2("Gpt", Pwm11_Isr, (IrqType )(IRQ_INTTAUD0I10), PWM_ISR_PRIORITY, 0);
            break;
        case 11:
            ISR_INSTALL_ISR2("Gpt", Pwm12_Isr, (IrqType )(IRQ_INTTAUD0I11), PWM_ISR_PRIORITY, 0);
            break;
        case 12:
            ISR_INSTALL_ISR2("Gpt", Pwm13_Isr, (IrqType )(IRQ_INTTAUD0I12), PWM_ISR_PRIORITY, 0);
            break;
        case 13:
            ISR_INSTALL_ISR2("Gpt", Pwm14_Isr, (IrqType )(IRQ_INTTAUD0I13), PWM_ISR_PRIORITY, 0);
            break;
        case 14:
            ISR_INSTALL_ISR2("Gpt", Pwm15_Isr, (IrqType )(IRQ_INTTAUD0I14), PWM_ISR_PRIORITY, 0);
            break;
        case 15:
            ISR_INSTALL_ISR2("Gpt", Pwm16_Isr, (IrqType )(IRQ_INTTAUD0I15), PWM_ISR_PRIORITY, 0);
            break;
        default:
            break;
    }
}
#endif


void Pwm_Hw_Isr( Pwm_Hw_ChannelType ch ) {
    (void)ch;   /*lint !e920 */

}

static void setDuty(uint8 hwCh, Pwm_PeriodType periodTicks, uint16 dutyCycle ) {
    if( dutyCycle == PWM_100_PERCENT ) {
        /* TAUDnCDRm (slave) setting > TAUDnCDRm (master) setting + 1, */
        Pwm_HwReg->CDRm[hwCh + 1U].R = (uint16)(periodTicks + 1UL);
    } else {
        Pwm_HwReg->CDRm[hwCh + 1U].R = (uint16)((periodTicks * dutyCycle) / (PWM_100_PERCENT));
    }
}


static void changePeriodAndDuty(uint8 hwCh, Pwm_PeriodType periodTicks, uint16 dutyCycle)
{
    if( periodTicks == 0u )
    {
        /* If the period is set to zero the setting of the duty-cycle is not
         * relevant. In this case the output shall be zero (zero percent duty-cycle)
         */
        setDuty( hwCh, Pwm_HwReg->CDRm[hwCh].R, 0u );

    } else {
        Pwm_HwReg->CDRm[hwCh].R = periodTicks;    /* Set the period time */
        setDuty( hwCh, periodTicks, dutyCycle );
    }
}



static void changeDuty(uint8 hwCh, uint16 dutyCycle)
{
    uint16 periodTicks = Pwm_HwReg->CDRm[hwCh].R;
    setDuty( hwCh, periodTicks, dutyCycle );
}

/** !req SWS_Pwm_00052  disable all notifications */
Std_ReturnType Pwm_Hw_Init(const Pwm_ConfigType* ConfigPtr) {
    uint8 hwCh;
    uint8 slaveHwCh;
    uint32 clock;
    uint32 freq;
    uint16 periodTicks;

    PwmConfigPtr = ConfigPtr;

	memset(Pwm_Global.channelMap,0xff, sizeof(Pwm_Global.channelMap) );
	memset(Pwm_Global.channelToHwChannel,0xff, sizeof(Pwm_Global.channelToHwChannel) );

	for (uint8 ch = 0; ch < PWM_ARC_LOG_UNIT_CNT; ch++) {
		hwCh = PwmConfigPtr->Channels[ch].channel;
		Pwm_Global.channelToHwChannel[ch] = hwCh;
		Pwm_Global.channelMap[hwCh] = ch;
		Pwm_Global.Pwm_NotifEnable[ch] = FALSE;
	}


	/* Set the fixed pre-scalers, CK0 - 2^0, CK1 - 2^5, CK2 - 2^ 10, CK3 - (2^2)*100 */
    Pwm_HwReg->TPS = 0x2950u;

    Pwm_HwReg->BRS = 99;

    /* Re-write registers, make sure they are 0 */
    Pwm_HwReg->TOM = 0u;
    Pwm_HwReg->TOC = 0u;
    Pwm_HwReg->TOL = 0u;
    Pwm_HwReg->TDE = 0u;
    Pwm_HwReg->TDM = 0u;
    Pwm_HwReg->TDL = 0u;
    Pwm_HwReg->TRE = 0u;
    Pwm_HwReg->TRC = 0u;
    Pwm_HwReg->TRO = 0u;
    Pwm_HwReg->TME = 0u;
    Pwm_HwReg->TOE = 0u;

    Pwm_HwReg->RDE = 0u;
    Pwm_HwReg->RDS = 0u;
    Pwm_HwReg->RDM = 0u;
    Pwm_HwReg->RDC = 0u;


    clock = Mcu_Arc_GetPeripheralClock(C_ISO_PERI1);
    Pwm_Clock = clock;

    for (uint8 ch = 0; ch < PWM_ARC_LOG_UNIT_CNT; ch++) {
        const Pwm_ChannelConfigurationType* chPtr = &ConfigPtr->Channels[ch];
        hwCh = Pwm_Global.channelToHwChannel[ch];
        slaveHwCh = hwCh+1u;

        /* Setup the master channel */
        Pwm_HwReg->CMORm[hwCh].R = (uint16)((chPtr->prescaler<<14UL) |
                                            (1UL<<11U) |    /* Master = 1 */
                                            1UL);

        /* Setup the slave channel */
        Pwm_HwReg->CMORm[slaveHwCh].R = (uint16)((chPtr->prescaler<<14U) |
                                                (0UL<<11U) |    /* Slave = 0 */ /*lint !e845 Readability */
                                                (4UL<<8U) |     /* Trigger = master */
                                                (4UL<<1U) |     /* One count mode */
                                                1UL);

        /* Slave, Re-write registers */
        Pwm_HwReg->TOM |= (uint16)(1UL<<slaveHwCh);        /* Synchrone operation */
        Pwm_HwReg->TOE |= (uint16)(1UL<<slaveHwCh);        /* Enables the independent timer output function */

        freq = chPtr->frequency;

        periodTicks = (uint16)(((clock/freq) - 1UL) / (uint32)Pwm_PrescaleMap[chPtr->prescaler]);

        changePeriodAndDuty(hwCh,periodTicks,chPtr->duty);

        /* Write "reload" counters
         * ,-----,       ,-----,       ,-----,
         *       |       |     |       |     |
         *       ´-------`     ´-------`
         * |<-     P   ->|<-     P   ->|
         *               |<-D->|
         * P - Period
         * D - Duty
         * */

        Pwm_HwReg->TS |= (uint16)((1UL<<hwCh) | (1UL<<slaveHwCh));

        installChannelInterrupt(hwCh);
        installChannelInterrupt(slaveHwCh);
    }
    return E_OK;
}

#if (PWM_DE_INIT_API==STD_ON)
/** @req SWS_Pwm_00010 Does not deinitialize the hardware but the module is effectively deinitialized
 * (according to the idle states of the channels). */
/** !req SWS_Pwm_00012 Pwm_DeInit shall disable PWM interrupts and PWM signal edge notifications */
void Pwm_Hw_Deinit( void ) {
    /* Not Supported */
    if(PwmConfigPtr==NULL){
        return;
    }

    /* Stop all channels */
    Pwm_HwReg->TT = 0xffffu;

    Pwm_ChannelType channel_iterator;
    for (channel_iterator = 0; channel_iterator < PWM_NUMBER_OF_CHANNELS; channel_iterator++) {
        const Pwm_ChannelConfigurationType* channelConfig = &PwmConfigPtr->Channels[channel_iterator];

        Pwm_Hw_setOutputState(channelConfig->channel, channelConfig->idleState);
    }

#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
    for (uint8 channel_iterator = 0; channel_iterator < PWM_ARC_LOG_UNIT_CNT; channel_iterator++) {
        Pwm_Global.Pwm_NotifEnable[channel_iterator] = FALSE;
    }
#endif /* (PWM_NOTIFICATION_SUPPORTED == STD_ON) */
}
#endif

#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
void Pwm_Hw_SetPeriodAndDuty(Pwm_ChannelType hwCh, Pwm_PeriodType Period, uint16 DutyCycle) {
    changePeriodAndDuty((uint8)hwCh, Period, DutyCycle);
}
#endif

#if (PWM_SET_DUTY_CYCLE_API == STD_ON)
void Pwm_Hw_setDutyCycle(Pwm_ChannelType ChannelNumber, uint16 DutyCycle) {
	changeDuty(ChannelNumber, DutyCycle);
}
#endif

#if ( PWM_SET_OUTPUT_TO_IDLE_API == STD_ON )
void Pwm_Hw_setOutputState(Pwm_ChannelType ChannelNumber, Pwm_OutputStateType IdleState) {

    if( IdleState == PWM_HIGH){
        /* idle state high == neg polarity (for 0% duty) */
        Pwm_Hw_setDutyCycle(ChannelNumber, 0);
    }
    else{
        Pwm_Hw_setDutyCycle(ChannelNumber, 0);
    }
}
#endif

#if (PWM_GET_OUTPUT_STATE_API == STD_ON)
Pwm_OutputStateType Pwm_Hw_GetOutputState(Pwm_ChannelType ChannelNumber) {

    Pwm_OutputStateType state;

    /* +1 since it's the slave channel that outputs the PWM */
    if( (((uint32)Pwm_HwReg->TO >> (ChannelNumber+1UL)) & 1UL) == 1UL ) {
        state = PWM_HIGH;
    } else {
        state = PWM_LOW;
    }

    return state;
}
#endif

#if (PWM_NOTIFICATION_SUPPORTED==STD_ON)
void Pwm_Hw_DisableNotification(Pwm_ChannelType ChannelNumber) {
    /* Not Supported */
    (void)ChannelNumber;	/*lint !e715 */
    Pwm_ChannelType logCh = Pwm_Global.channelMap[ChannelNumber];
    Pwm_Global.Pwm_NotifEnable[logCh] = FALSE;
}

void Pwm_Hw_EnableNotification(Pwm_ChannelType ChannelNumber, Pwm_EdgeNotificationType Notification,
        Pwm_OutputStateType Polarity) {
    /* Not Supported */
    (void)Notification;		/*lint !e715 */
    (void)Polarity;			/*lint !e715 */

    Pwm_ChannelType logCh = Pwm_Global.channelMap[ChannelNumber];
    Pwm_Global.Pwm_NotifEnable[logCh] = TRUE;
}
#endif


#if (PWM_ARC_PERIOD_API==STD_ON)
uint32 Pwm_Arc_Tick2us( Pwm_ChannelType ChannelNumber,Pwm_PeriodType ticks)
{
    uint8 ch = Pwm_Global.channelMap[(Pwm_Hw_ChannelType)ChannelNumber];
    return ( (((uint32)ticks) * 1000UL) / (Pwm_Clock/(Pwm_PrescaleMap[PwmConfigPtr->Channels[ch].prescaler]*1000UL)) );
}

Pwm_PeriodType Pwm_Arc_us2Tick( Pwm_ChannelType ChannelNumber, uint32 us)
{
    uint8 ch = Pwm_Global.channelMap[(Pwm_Hw_ChannelType)ChannelNumber];
    return (Pwm_PeriodType)(((us) * (Pwm_Clock/1000000UL)) / (Pwm_PrescaleMap[PwmConfigPtr->Channels[ch].prescaler]));
}
#endif

/* @brief  		Function to set period and duty
 * @param[in] 	ChannelNumber 	Channel number
 * @return		PWM_VARIABLE_PERIOD			Variable period. The duty cycle and the period can be changed.
 * @return		PWM_FIXED_PERIOD			Fixed period. Only the duty cycle can be changed.
 * @return		PWM_FIXED_PERIOD_SHIFTED	Fixed shifted period. Impossible to change it.
 ******************************************************************************/
Pwm_ChannelClassType Pwm_Hw_getChannelClass(Pwm_ChannelType ChannelNumber){
	Pwm_ChannelType logCh = Pwm_Global.channelMap[ChannelNumber];
	return PwmConfigPtr->Channels[logCh].class;
}

/* @brief  		Function read back the configured idle state for specific channel.
 * @param[in] 	ChannelNumber 	Channel number.
 * @return		configured idle state
 * @retval		PWM_LOW			low state.
 * @retval		PWM_HIGH		high state.
 ******************************************************************************/
Pwm_OutputStateType Pwm_Hw_getConfiguredIdleState(Pwm_ChannelType Channel){
	Pwm_ChannelType logCh = Pwm_Global.channelMap[Channel];
	return PwmConfigPtr->Channels[logCh].idleState;
}

void Pwm_Hw_disableInt(Pwm_ChannelType channel){
	/* Not Supported */
	(void)channel;	/*lint !e715 */
}

boolean Pwm_Hw_isChannelConfigured( Pwm_ChannelType channel ){
	return ((channel <= PWM_ARC_HW_UNIT_HIGH) && (Pwm_Global.channelMap[channel] < PWM_ARC_LOG_UNIT_CNT));
}
