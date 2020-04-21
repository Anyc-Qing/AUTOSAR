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
/** @tagSettings DEFAULT_ARCHITECTURE=TMS570 */

/** @file Wdg_Irq.c
 *  This files holds the interrupt frame, refer to section 5.1.1 of Wdg SWS specification (ASR4.3.0).
 */
/** \addtogroup Mcal
 * @brief This is the major Mcal folder
 *
 *  This group is for the TMS570 Mcal
 *  @{
 */

/** \addtogroup Wdg
 *  This is the TMS570 Mcal Wdg Group
 *  @{
 */

#include "Wdg.h"
#include "Wdg_MemMap.h"
#include "Wdg_Internal.h"
#ifdef CFG_TMS570
#include "os_trap.h"
#endif

/* ---------------------[Function Declaration]-----------------*/
ISR( Wdg_Isr);

/*---------------------[Function Implementation]--------------*/
/** @req:TMS570 4.1.2|4.3.0/SWS_Wdg_00166 The routine servicing an internal watchdog shall be implemented as an interrupt routine driven by a hardware timer */
/** @brief	Interrupt handler that service the watchdog.
 * 		   	The watchdog servicing fot TMS570 is implemented as interrupt routine.
 * 		   	The handler decreases the trigger counter, and write RTIWDKEY register to restart watchdog timer.
 */
ISR( Wdg_Isr) {
    /** !req:TMS570 4.1.2|4.3.0/SWS_Wdg_00035
     * When development error detection is enabled for the Wdg Driver module: the watchdog servicing routine shall check whether the
     * Wdg module’s state is WDG_IDLE (meaning the watchdog driver and hardware are initialized and the watchdog is currently not being
     * triggered or switched).*/

    Wdg_Hw_KickWdg();
    /** !req:TMS570 4.1.2|4.3.0/SWS_Wdg_00052 -  When development error detection is enabled for the Wdg Driver module: the watchdog servicing routine shall set the Wdg module’s state to WDG_BUSY
     * during its execution (indicating, that the module is busy) and shall reset the module’s state to WDG_IDLE (indicating, that the module is
     * initialized and not busy) as last operation before it returns.*/
}

/** @}*/
/** @}*/
