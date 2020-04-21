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
/**
 * @file    sys_tick.c
 * @brief   Implements the system tick (SYS_TICK)
 *
 * @addtogroup os
 * @details
 * @{
 */
/* ----------------------------[includes]------------------------------------*/

#include "Os.h"
#include "os_i.h"
#include "hw_tms570.h"
#include "irq_types.h"
#include "isr.h"
#include "arc.h"
#include "os_counter_i.h"
#include "Mcu.h"

/* ----------------------------[private define]------------------------------*/

#if !defined(OS_SYSTICK_APP)
#define OS_SYSTICK_APP  0
#endif

#define RTICLK_PRESCALER			10


/* ----------------------------[private macro]-------------------------------*/
/* ----------------------------[private typedef]-----------------------------*/
/* ----------------------------[private function prototypes]-----------------*/
void CortexR4OsTick( void );
/* ----------------------------[private variables]---------------------------*/
/* ----------------------------[private functions]---------------------------*/
/*lint -save -e923 MISRA:FALSE_POSITIVE:Allow Pointer cast operation and bitwise operation:[MISRA 2012 Rule 11.1, required] */
/*lint -save -e9027 MISRA:FALSE_POSITIVE:Allow Pointer cast operation and bitwise operation:[MISRA 2012 Rule 10.1, required]*/

void CortexR4OsTick( void ) {
    /** Clear all pending interrupts
     *  otherwise this will hit again
     *  as soon as interrupts are re-enabled. */
    rtiREG1->INTFLAG = 0x1;

    // Call regular OsTick.
    OsTick();
}
/* ----------------------------[public functions]----------------------------*/

/**
 * Init of free running timer.
 * @req ARC_SWS_OSAL_00029
 */
void Os_SysTickInit( void ) {
#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS)
    ISR_INSTALL_ISR2("OsTick",CortexR4OsTick,RTI_COMPARE_0,6,OS_SYSTICK_APP);
#endif
}

/**
 * Start the Sys Tick timer
 * @req ARC_SWS_OSAL_00030
 *
 * @param frequency The frequency of the Os Tick.
 *
 */
/* @req  ARC_SWS_OSAL_00033 */
void Os_SysTickStart2(uint32 frequency) {

    /* Rti unit:
     * 0    - Shared between Timer_xx and SysTick
     * 1    - Used by GPT and WDG
     */

    if( (rtiREG1->GCTRL & (RTIGCTRL_CANT1EN | RTIGCTRL_CANT0EN )) == 0uL )  {
        /* Setup NTU source, debug options and disable both counter blocks */
        rtiREG1->GCTRL = 0x0;

        /* Setup timebase for free running counter 0 */
        rtiREG1->TBCTRL = 0x0;

        /* Enable/Disable capture event sources for both counter blocks */
        rtiREG1->CAPCTRL = 0x0;

        /* Setup input source compare 0-3 */
        rtiREG1->COMPCTRL = 0x0;
    } else {
        rtiREG1->GCTRL &= ~0x1UL;
    }

    /* Reset up counter 0 */
    rtiREG1->CNT[0U].UCx = 0x00000000U;

    /* Reset free running counter 0 */
    rtiREG1->CNT[0U].FRCx = 0x00000000U;

    /* Setup up counter 0 compare value
     * The RTI module is driven by RTICLK.
     *
     *     - 0x00000000: Divide by 2^32
     *     - 0x00000001-0xFFFFFFFF: Divide by (CPUCx + 1)
     */
    rtiREG1->CNT[0U].CPUCx = RTICLK_PRESCALER - 1;

    uint32 rtiClock = Mcu_Arc_GetPeripheralClock(PERIPHERAL_CLOCK_RTICLK);

    uint32 ticks = (rtiClock / RTICLK_PRESCALER) / frequency;

    /*  Setup compare 0 value. This value is compared with selected free running counter. */
    rtiREG1->CMP[0U].COMPx = ticks;

    /* Setup update compare 0 value. This value is added to the compare 0 value on each compare match. */
    rtiREG1->CMP[0U].UDCPx = ticks;

    /*  Disable interrupt. */
    rtiREG1->CLEARINT = 0x1;

    /* Start counter 0. */
    rtiREG1->GCTRL  |= 0x1;

    /* Enable interrupt. */
    rtiREG1->SETINT |= 0x1;
}
/*lint -restore */
/** @} */

