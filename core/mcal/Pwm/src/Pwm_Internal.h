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

/** @tagSettings DEFAULT_ARCHITECTURE=SPC56XL70|MPC5744P|MPC5604P|MPC5643L|TMS570 */

/** Pwm_Internal.h
 *  This files contains the hardware specific API definitions.
 */
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
#ifndef PWM_INTERNAL_H_
#define PWM_INTERNAL_H_

/* ----------------------------[Hardware Specific API's]-----------------*/
/***************************************************************************//**
 * @brief  Disables the pulse width modulation (PWM) interrupt
 * @note                reentrant
 * @param[in] 			channel  	number of channel to initialize
 ******************************************************************************/
void Pwm_Hw_disableInt(Pwm_ChannelType channel);

/***************************************************************************//**
 * @brief  		Hardware specific function which initializes the PWM hardware block.
 * @details 	This function is referenced from generic initialization service.
 * @note        Non-reentrant
 * @param[in]	ConfigPtr 	Pointer to configuration set
 * @return 		Success status
 * @retval 		E_OK				initialization successful
 * @retval		PWM_E_PARAM_CONFIG	configuration is not valid
 ******************************************************************************/
Std_ReturnType Pwm_Hw_Init( const Pwm_ConfigType *ConfigPtr );

/***************************************************************************//**
 * @brief  Sets duty and cycle of specified hardware channel
 * @note                Reentrant
 * @param[in] 			Channel		number of hardware channel
 * @param[in] 			DutyCycle	requested dutycycle
 ******************************************************************************/
void Pwm_Hw_setDutyCycle(Pwm_ChannelType Channel, uint16 DutyCycle);

/***************************************************************************//**
 * @brief  Sets output state of a PWM channel to requested state
 * @note    	reentrant
 * @param[in] 	channel  	Number of hardware PWM channel
 * @param[in] 	state    	Desired state
 ******************************************************************************/
void Pwm_Hw_setOutputState(Pwm_ChannelType channel, Pwm_OutputStateType state);

/***************************************************************************//**
 * @brief  	Interrupt service routine for implementing Pwm channel notifications.
 * @note     	Reentrant
 * @param[in] 	channel 		channel number
 ******************************************************************************/
void Pwm_Hw_Isr(Pwm_ChannelType channel);

/***************************************************************************//**
 * @brief  	Test to see if a channel is configured
 * @note     	Reentrant
 * @param[in] 	channel 		channel number
 ******************************************************************************/
boolean Pwm_Hw_isChannelConfigured( Pwm_ChannelType channel );

#if (PWM_GET_OUTPUT_STATE_API == STD_ON)
/***************************************************************************//**
 * @brief  	Hardware dependent function that gets output state of a channel
 * @details	For platforms on which this is not implemented it returns PWM_LOW.
 * @param[in] 	ChannelNumber	channel number
 * @return		State of the requested channel
 * @retval		PWM_LOW			Output state is low
 * @retval		PWM_HIGH		output state is high
 ******************************************************************************/
Pwm_OutputStateType Pwm_Hw_GetOutputState(Pwm_ChannelType ChannelNumber);
#endif

#if (PWM_DE_INIT_API == STD_ON )
/***************************************************************************//**
 * @brief  	Hardware dependent function for Pwm module de-initialization.
******************************************************************************/
void Pwm_Hw_Deinit( void );
#endif

#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
/***************************************************************************//**
 * @brief  	Hardware dependent function to set period and duty
 * @param[in] 	ChannelNumber 	Channel number
 * @param[in] 	Period 			Desired period
 * @param[in] 	DutyCycle 		Desired duty cycle
 ******************************************************************************/
void Pwm_Hw_SetPeriodAndDuty( Pwm_ChannelType ChannelNumber, Pwm_PeriodType Period, uint16 DutyCycle);

/***************************************************************************//**
 * @brief       Function to set period and duty
 * @param[in]   ChannelNumber   Channel number
 * @return      channel type
 * @retval      PWM_VARIABLE_PERIOD         Variable period. The duty cycle and the period can be changed.
 * @retval      PWM_FIXED_PERIOD            Fixed period. Only the duty cycle can be changed.
 * @retval      PWM_FIXED_PERIOD_SHIFTED    Fixed shifted period. Impossible to change it.
 ******************************************************************************/
Pwm_ChannelClassType Pwm_Hw_getChannelClass(Pwm_ChannelType ChannelNumber);
#endif

#if (PWM_SET_OUTPUT_TO_IDLE_API == STD_ON)
/***************************************************************************//**
 * @brief  		Function read back the configured idle state for specific channel.
 * @param[in] 	Channel 		Channel number.
 * @return		configured idle state
 * @retval		PWM_LOW			low state.
 * @retval		PWM_HIGH		high state.
 ******************************************************************************/
Pwm_OutputStateType Pwm_Hw_getConfiguredIdleState(Pwm_ChannelType Channel);
#endif

/***************************************************************************//**
 * @brief  		Enables notification for specified channel.
 * @param[in] 	ChannelNumber 	Channel number.
 * @param[in] 	Notification 	Desired notification type.
 ******************************************************************************/
void Pwm_Hw_EnableNotification(Pwm_ChannelType ChannelNumber, Pwm_EdgeNotificationType Notification);

/***************************************************************************//**
 * @brief  		Disables notification for specified channel.
 * @param[in] 	ChannelNumber 		Channel number.
 ******************************************************************************/
void Pwm_Hw_DisableNotification(Pwm_ChannelType ChannelNumber);

void Pwm1_Isr(void);
void Pwm2_Isr(void);
void Pwm3_Isr(void);
void Pwm4_Isr(void);
void Pwm5_Isr(void);
void Pwm6_Isr(void);
void Pwm7_Isr(void);

/* TMS570 supports only 7 notification channels */
#if !defined(CFG_TMS570LS12X)
void Pwm8_Isr(void);
void Pwm9_Isr(void);
void Pwm10_Isr(void);
void Pwm11_Isr(void);
void Pwm12_Isr(void);
void Pwm13_Isr(void);
void Pwm14_Isr(void);
void Pwm15_Isr(void);
void Pwm16_Isr(void);
#endif

#endif /* PWM_INTERNAL_H_ */
/** @}*/
/** @}*/
