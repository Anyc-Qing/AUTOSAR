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
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */
/** @tagSettings DEFAULT_ARCHITECTURE=TMS570*/

/** @file Pwm_Irq.c
 *  This files contains implementations of interrupt service routines used for event triggered notifications.
 *  It is valid for all architectures, even only tms570 is mentioned.
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


/*lint -e553 MISRA:STANDARDIZED_INTERFACE:Undefined preprocessor variable, assumed 0:[MISRA 2012 Rule 20.9, required] */
#if PWM_NOTIFICATION_SUPPORTED==STD_ON

/** @req SWS_Pwm_00105 - Pwm_Notification_"Channel number" - The naming convention is not used but the functionality is supported.*/
/** @req SWS_Pwm_00025 - The Pwm module shall call the function Pwm_Notification_"Channel number"
 * accordingly to the last call of Pwm_EnableNotification and Pwm_DisableNotification for channel "Channel number". */
/** @req SWS_Pwm_70075 - Pwm_Irq.c shall include Pwm_MemMap.h and Pwm.h. */

#include "Pwm_MemMap.h"
#include "Pwm.h"
#include "Pwm_Internal.h"

#define PWM_CH_1	(0)		/**< @brief Identifier of channel1 */
#define PWM_CH_2	(1)		/**< @brief Identifier of channel2 */
#define PWM_CH_3	(2)		/**< @brief Identifier of channel3 */
#define PWM_CH_4	(3)		/**< @brief Identifier of channel4 */
#define PWM_CH_5	(4)		/**< @brief Identifier of channel5 */
#define PWM_CH_6	(5)		/**< @brief Identifier of channel6 */
#define PWM_CH_7	(6)		/**< @brief Identifier of channel7 */
#define PWM_CH_8	(7)		/**< @brief Identifier of channel8 */
#define PWM_CH_9	(8)		/**< @brief Identifier of channel9 */
#define PWM_CH_10	(9)		/**< @brief Identifier of channel10 */
#define PWM_CH_11	(10)	/**< @brief Identifier of channel11 */
#define PWM_CH_12	(11)	/**< @brief Identifier of channel12 */
#define PWM_CH_13	(12)	/**< @brief Identifier of channel13 */
#define PWM_CH_14	(13)	/**< @brief Identifier of channel14 */
#define PWM_CH_15	(14)	/**< @brief Identifier of channel15 */
#define PWM_CH_16	(15)	/**< @brief Identifier of channel16 */


/***************************************************************************//**
 * @brief  	Interrupt service routine for Pwm channel 1 notifications.
 * @note     	Reentrant
 ******************************************************************************/
void Pwm1_Isr(void){
	Pwm_Hw_Isr((Pwm_ChannelType)PWM_CH_1);
}

/***************************************************************************//**
 * @brief  	Interrupt service routine for Pwm channel 2 notifications.
 * @note     	Reentrant
 ******************************************************************************/
void Pwm2_Isr(void){
	Pwm_Hw_Isr((Pwm_ChannelType)PWM_CH_2);
}

/***************************************************************************//**
 * @brief  	Interrupt service routine for Pwm channel 3 notifications.
 * @note     	Reentrant
 ******************************************************************************/
void Pwm3_Isr(void){
	Pwm_Hw_Isr((Pwm_ChannelType)PWM_CH_3);
}

/***************************************************************************//**
 * @brief  	Interrupt service routine for Pwm channel 4 notifications.
 * @note     	Reentrant
 ******************************************************************************/
void Pwm4_Isr(void){
	Pwm_Hw_Isr((Pwm_ChannelType)PWM_CH_4);
}

/***************************************************************************//**
 * @brief  	Interrupt service routine for Pwm channel 5 notifications.
 * @note     	Reentrant
 ******************************************************************************/
void Pwm5_Isr(void){
	Pwm_Hw_Isr((Pwm_ChannelType)PWM_CH_5);
}

/***************************************************************************//**
 * @brief  	Interrupt service routine for Pwm channel 6 notifications.
 * @note     	Reentrant
 ******************************************************************************/
void Pwm6_Isr(void){
	Pwm_Hw_Isr((Pwm_ChannelType)PWM_CH_6);
}

/***************************************************************************//**
 * @brief  	Interrupt service routine for Pwm channel 7 notifications.
 * @note     	Reentrant
 ******************************************************************************/
void Pwm7_Isr(void){
	Pwm_Hw_Isr((Pwm_ChannelType)PWM_CH_7);
}


/* TMS570 supports only 7 notification channels */
#if !defined(CFG_TMS570LS12X)

/***************************************************************************//**
 * @brief  	Interrupt service routine for Pwm channel 8 notifications.
 * @note     	Reentrant
 ******************************************************************************/
void Pwm8_Isr(void){
	Pwm_Hw_Isr((Pwm_ChannelType)PWM_CH_8);
}

/***************************************************************************//**
 * @brief  	Interrupt service routine for Pwm channel 9 notifications.
 * @note     	Reentrant
 ******************************************************************************/
void Pwm9_Isr(void){
	Pwm_Hw_Isr((Pwm_ChannelType)PWM_CH_9);
}

/***************************************************************************//**
 * @brief  	Interrupt service routine for Pwm channel 10 notifications.
 * @note     	Reentrant
 ******************************************************************************/
void Pwm10_Isr(void){
	Pwm_Hw_Isr((Pwm_ChannelType)PWM_CH_10);
}

/***************************************************************************//**
 * @brief  	Interrupt service routine for Pwm channel 11 notifications.
 * @note     	Reentrant
 ******************************************************************************/
void Pwm11_Isr(void){
	Pwm_Hw_Isr((Pwm_ChannelType)PWM_CH_11);
}

/***************************************************************************//**
 * @brief  	Interrupt service routine for Pwm channel 12 notifications.
 * @note     	Reentrant
 ******************************************************************************/
void Pwm12_Isr(void){
	Pwm_Hw_Isr((Pwm_ChannelType)PWM_CH_12);
}

/***************************************************************************//**
 * @brief  	Interrupt service routine for Pwm channel 13 notifications.
 * @note     	Reentrant
 ******************************************************************************/
void Pwm13_Isr(void){
	Pwm_Hw_Isr((Pwm_ChannelType)PWM_CH_13);
}

/***************************************************************************//**
 * @brief  	Interrupt service routine for Pwm channel 14 notifications.
 * @note     	Reentrant
 ******************************************************************************/
void Pwm14_Isr(void){
	Pwm_Hw_Isr((Pwm_ChannelType)PWM_CH_14);
}

/***************************************************************************//**
 * @brief  	Interrupt service routine for Pwm channel 15 notifications.
 * @note     	Reentrant
 ******************************************************************************/
void Pwm15_Isr(void){
	Pwm_Hw_Isr((Pwm_ChannelType)PWM_CH_15);
}

/***************************************************************************//**
 * @brief  	Interrupt service routine for Pwm channel 16 notifications.
 * @note     	Reentrant
 ******************************************************************************/
void Pwm16_Isr(void){
	Pwm_Hw_Isr((Pwm_ChannelType)PWM_CH_16);
}

#endif

#endif	/* PWM_NOTIFICATION_SUPPORTED==STD_ON */

/** @}*/
/** @}*/
