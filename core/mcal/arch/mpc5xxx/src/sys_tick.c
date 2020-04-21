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

/**
 * @file    sys_tick.c
 * @brief   Implements the system tick (SYS_TICK)
 *
 * @addtogroup os
 * @details
 * @{
 */

/* ----------------------------[includes]------------------------------------*/

// MISRA 2004 11.3 and 2012 11.4 : Inhibit lint error 923 when addressing
// memory mapped registers defined as macros in header files.
//lint -elibmacro(923)
#include "Os.h"
#include "os_i.h"
#include "isr.h"
#include "irq.h"
#include "arc.h"
#include "irq_types.h"
#include "mpc55xx.h"
#include "Mcu.h"

/* ----------------------------[private define]------------------------------*/

#if !defined(OS_SYSTICK_APP)
#define OS_SYSTICK_APP  0
#endif

#define STM_CNTEN               (1uL)
#define STM_FRZ                 (1uL<<1u)
#define STM_CPS(_x)             ((_x)<<8u)

#if !defined(STM0_CH0_INT)
#define STM0_CH0_INT            STM_CH0_INT
#endif

#if !defined(STM_0)
#define STM_0                   STM
#endif


/* ----------------------------[private macro]-------------------------------*/
/* ----------------------------[private typedef]-----------------------------*/
/* ----------------------------[private function prototypes]-----------------*/
/* ----------------------------[private variables]---------------------------*/
/* ----------------------------[private functions]---------------------------*/
/* ----------------------------[public functions]----------------------------*/

/**
 * Init of free running timer.
 */

#if defined(CFG_OS_SYSTICK2)

uint32 ticks = 0u;
/**
 * @brief   Reload the STM timer channel 0
 */
static void reloadTimer( void ) {
    Irq_Disable();
    uint32 dist = STM_0.CNT.R - STM_0.CHANNEL[0].CMP.R;
    STM_0.CHANNEL[0].CMP.R += ticks * (1 + dist/ticks );
    STM_0.CHANNEL[0].CIR.B.CIF = 1ul; /* Clear Interrupt */

    /* Potential overrun compensation due to delay in writing registers when cnt is close to cmp */
    if( (STM_0.CNT.R > STM_0.CHANNEL[0].CMP.R) && !((STM_0.CHANNEL[0].CMP.R < ticks) && ( STM_0.CNT.R >= (0xffffffffu - ticks))) ){
        STM_0.CHANNEL[0].CMP.R += ticks;
        STM_0.CHANNEL[0].CIR.B.CIF = 1ul; /* Clear Interrupt */
    }
    Irq_Enable();
}

ISR(Os_SysTick_Stm);

ISR(Os_SysTick_Stm) {
	reloadTimer();
    OsTick();
}

#endif

void Os_SysTickInit(void) {

#if defined(CFG_OS_SYSTICK2)
	ISR_INSTALL_ISR2("OsTick",Os_SysTick_Stm, STM0_CH0_INT,6, OS_SYSTICK_APP);
#else
    ISR_INSTALL_ISR2("OsTick", OsTick, INTC_SSCIR0_CLR7, 6, OS_SYSTICK_APP);
#endif
}

#if defined(CFG_OS_SYSTICK2)
/**
 * @brief   Start the system timer.
 *
 * @param period_ticks How long the period in timer ticks should be. The timer
 *                     on PowerPC often driver by the CPU clock or some platform clock.
 *
 */
void Os_SysTickStart2(uint32 frequency) {

	/* STM is used as timer.
	 * - STM channel 0 is used by the OS.
	 */

	uint32 clock = 0u;

	/* Check so that the timer is not already enabled (by some other module ) */
    if( STM_0.CR.B.TEN == 0u ) {
        /* Initialize timer */
        STM_0.CR.R = 0u;
        /*lint -e{9027, 9053, 9027, 845} HARDWARE_ACCESS */
        STM_0.CR.R = STM_CNTEN | STM_FRZ | STM_CPS(0);

    }

    if (ticks == 0u ) {
        /* Calculate the interrupt period */
        clock = Mcu_Arc_GetPeripheralClock(PERIPHERAL_CLOCK_STM_0);
        ticks = (clock / 1u) / frequency;

        reloadTimer();
        /* Enable channel 0 */
        STM_0.CHANNEL[0].CCR.B.CEN = 1u;	/* Enable the compare */
    }

}
#else

void Os_SysTickStart (TickType period_ticks) {

	/* Decrementer */

    uint32 tmp;

#if defined(CFG_SIMULATOR)
    period_ticks = period_ticks / 90u;	// empirical testing..
#endif

    /* Initialize the Decrementer */
    set_spr(SPR_DEC, period_ticks);
    set_spr(SPR_DECAR, period_ticks);

    /* Set autoreload & Enable notification */
    tmp = get_spr(SPR_TCR);
    tmp |= TCR_ARE | TCR_DIE;
    set_spr(SPR_TCR, tmp);

    // Enable the TB
    tmp = get_spr(SPR_HID0);
    tmp |= HID0_TBEN;
    set_spr(SPR_HID0, tmp);
}
#endif

/** @} */


