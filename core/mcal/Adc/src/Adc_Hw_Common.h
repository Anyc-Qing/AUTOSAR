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

/** @tagSettings DEFAULT_ARCHITECTURE=TMS570|RH850F1H|JACINTO5 */

/** @file Adc_Hw_Common.h
 *  This file contains various helper functions used by some ADC implementations.
 */
/** \addtogroup Mcal
 * @brief This is the major Mcal folder
 *
 *  This group is for the Mcal
 *  @{
 */

/** \addtogroup Adc
 *  This is the Mcal Adc Group
 *  @{
 */

#ifndef ADC_HW_COMMON_H_
#define ADC_HW_COMMON_H_

/**
 * @brief  Common ISR handler function. To be called from
 *         hardware specific file.
 * @param  groupPtr Pointer to the group
 */
void Adc_Internal_Isr(const Adc_GroupDefType * groupPtr);

#endif /* ADC_HW_COMMON_H_ */

/** @}*/
/** @}*/

