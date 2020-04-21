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

/** @file Can_Irq.c
 *  This files holds the interrupt frame.
 */
/** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the TMS570 Mcal
  *  @{
  */

 /** \addtogroup Can
  *  This is the TMS570 Mcal Can Group
  *  @{
  */

#include "Os.h"
#include "isr.h"
#include "Can.h"
#include "Can_Internal.h"
#include "Can_Hw_tms570.h"
#include "irq_tms570.h"

ISR(Can1_Level0InterruptHandler);
ISR(Can2_Level0InterruptHandler);
ISR(Can3_Level0InterruptHandler);

/** @brief	Interrupt handler that service the CAN.
*			This handler handles the interrupt from DCAN1
 */
ISR(Can1_Level0InterruptHandler) {
    Can_InterruptHandler(DCAN1);
}

/** @brief	Interrupt handler that service the CAN.
*			This handler handles the interrupt from DCAN2
 */
ISR(Can2_Level0InterruptHandler) {
    Can_InterruptHandler(DCAN2);
}

/** @brief	Interrupt handler that service the CAN.
*			This handler handles the interrupt from DCAN3
 */
ISR(Can3_Level0InterruptHandler) {
    Can_InterruptHandler(DCAN3);
}

#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS)
/**
 * @brief Arccore specified function. Install interrupt handlers to OS.
 * @param[in] ctrl - Can controller config data pointer.
 */
void Can_InstallInterruptHandlers(const Can_ControllerConfigType * ctrl) {
    if (ctrl->CanHwUnitId == DCAN1) {
        ISR_INSTALL_ISR2("DCAN1Level0", Can1_Level0InterruptHandler, CAN1_LVL0_INT, CAN_IRQ_PRIORITY, CAN_ARC_ISR_APP );
    } else if (ctrl->CanHwUnitId == DCAN2) {
        ISR_INSTALL_ISR2("DCAN2Level0", Can2_Level0InterruptHandler, CAN2_LVL0_INT, CAN_IRQ_PRIORITY, CAN_ARC_ISR_APP );
    /* @CODECOV:IDENTICAL_HARDWARE_INTERRUPTS: Covered achieved by Can1_Level0InterruptHandler and Can2_Level0InterruptHandler */
    } else if (ctrl->CanHwUnitId == DCAN3) {
        ISR_INSTALL_ISR2("DCAN3Level0", Can3_Level0InterruptHandler, CAN3_LVL0_INT, CAN_IRQ_PRIORITY, CAN_ARC_ISR_APP );
    } else {
        /* Do nothing. */
    }

}

/**
 * @brief Arccore specified function. Install interrupt handlers to OS.
 * @param[in] ctrl - Can controller config data pointer.
 */
void Can_RemoveInterruptHandlers(const Can_ControllerConfigType * ctrl) {
    if (ctrl->CanHwUnitId == DCAN1) {
        Os_IsrRemove( CAN1_LVL0_INT, ISR_TYPE_2, CAN_IRQ_PRIORITY, 0 );
    } else if (ctrl->CanHwUnitId == DCAN2) {
        Os_IsrRemove( CAN2_LVL0_INT, ISR_TYPE_2, CAN_IRQ_PRIORITY, 0 );
    /* @CODECOV:IDENTICAL_HARDWARE_INTERRUPTS: Covered achieved by Can1_Level0InterruptHandler and Can2_Level0InterruptHandler */
    } else if (ctrl->CanHwUnitId == DCAN3) {
        Os_IsrRemove( CAN3_LVL0_INT, ISR_TYPE_2, CAN_IRQ_PRIORITY, 0 );
    } else {
        /* Do nothing. */
    }
}



#endif /* !defined(CFG_DRIVERS_USE_CONFIG_ISRS) */

/** @}*/
/** @}*/
