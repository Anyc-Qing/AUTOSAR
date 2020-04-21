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

/** @file Adc_Irq.c
 *  This files holds the interrupt frame, refer to section 5.1.1 of Adc SWS specification (ASR4.3.0).
 */
/** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the TMS570 Mcal
  *  @{
  */

 /** \addtogroup Adc
  *  This is the TMS570 Mcal Adc Group
  *  @{
  */

#include "Adc.h"
#include "Adc_MemMap.h"
#include "Adc_Internal.h"
#include "Adc_Hw_tms570.h"
#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS)
#include "isr.h"
#endif

/**
  * @name    Index macros
  * @{
  */
#define ADC_HW_CNTR0_INDEX	0uL		/**< @brief ADC hardware controller 0 index */
#define ADC_HW_CNTR1_INDEX	1uL		/**< @brief ADC hardware controller 1 index */
#define ADC_GROUP0_INDEX	0uL		/**< @brief ADC group 0 index, this is related with the HW group */
#define ADC_GROUP1_INDEX	1uL		/**< @brief ADC group 1 index, this is related with the HW group */
#define ADC_GROUP2_INDEX	2uL		/**< @brief ADC group 2 index, this is related with the HW group */
/** @} */


ISR( ADC1Grp1ConversionComplete_Isr);
ISR( ADC1Grp2ConversionComplete_Isr);
ISR( ADC2Grp1ConversionComplete_Isr);
ISR( ADC2Grp2ConversionComplete_Isr);

/** @brief	Interrupt handler that service the ADC.
*			This handler handles the interrupt from group 1 in ADC controller 0
 */
ISR( ADC1Grp1ConversionComplete_Isr) {
	Adc_Hw_ADCConversionComplete_Isr(ADC_HW_CNTR0_INDEX, ADC_GROUP0_INDEX);
}

/** @brief	Interrupt handler that service the ADC.
*			This handler handles the interrupt from group 2 in ADC controller 0
 */
ISR( ADC1Grp2ConversionComplete_Isr) {
	Adc_Hw_ADCConversionComplete_Isr(ADC_HW_CNTR0_INDEX, ADC_GROUP1_INDEX);
}


/** @brief	Interrupt handler that service the ADC.
*			This handler handles the interrupt from group 1 in ADC controller 1
 */
ISR( ADC2Grp1ConversionComplete_Isr) {
	Adc_Hw_ADCConversionComplete_Isr(ADC_HW_CNTR1_INDEX, ADC_GROUP0_INDEX);
}


/** @brief	Interrupt handler that service the ADC.
*			This handler handles the interrupt from group 2 in ADC controller 1
 */
ISR( ADC2Grp2ConversionComplete_Isr) {
	Adc_Hw_ADCConversionComplete_Isr(ADC_HW_CNTR1_INDEX, ADC_GROUP1_INDEX);
}

/** @}*/
/** @}*/
