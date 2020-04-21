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

#include "irq.h"
#include "os_i.h"
#include "isr.h"
#include "irq_types.h"


IrqFuncType Irq_VectorTable[NUMBER_OF_INTERRUPTS_AND_EXCEPTIONS];


/**
 * In the ARMv7-M priority model, lower numbers take precedence. That is, the lower the assigned priority value, the
 * higher the priority level. The priority order for exceptions with the same priority level is fixed, and is determined
 * by their exception number.
 *
 * NVIC have 16 priority levels.
 *
 * Autosar    NVIC
 *   31         0
 *   30         0
 *   .....
 *   1          15
 *   0
 * @param prio
 * @return
 */
static inline uint8_t osPrioToCpuPrio( uint8_t prio ) {
    ASSERT(prio<32);
    return (15 - (prio>>1));
}

/**
 * Init NVIC vector. We do not use subpriority
 *
 * @param vector	The IRQ number
 * @param prio      NVIC priority, 0-31, 0-high prio
 */
static void NVIC_InitVector(IRQn_Type vector, uint32_t prio)
{
    // Set prio
    NVIC_SetPriority(vector,prio);

    if(vector>=0){
        // Enable
        NVIC->ISER[(uint8_t)vector >> 5] = (uint32_t)1 << ((uint8_t)vector & (uint8_t)0x1F);
    }
}

/*
PRIGROUP
0 			7.1 indicates seven bits of pre-emption priority, one bit of subpriority
1 			6.2 indicates six bits of pre-emption priority, two bits of subpriority
2 			5.3 indicates five bits of pre-emption priority, three bits of subpriority
3 			4.4 indicates four bits of pre-emption priority, four bits of subpriority
4 			3.5 indicates three bits of pre-emption priority, five bits of subpriority
5 			2.6 indicates two bits of pre-emption priority, six bits of subpriority
6 			1.7 indicates one bit of pre-emption priority, seven bits of subpriority
7 			0.8 indicates no pre-emption priority, eight bits of subpriority.
*/
/* @req ARC_SWS_OSAL_00019 */
void Irq_Init( void ) {
    NVIC_SetPriorityGrouping(0);
    NVIC_SetPriority(PendSV_IRQn, osPrioToCpuPrio(IRQ_PENDSV_PRIORITY));

#if defined(CFG_STM32F1X) || defined(CFG_STM32F3X)
    /* Stop counters and watchdogs when halting in debug */
    DBGMCU->CR |= 0x00ffffff00;
#endif
}

/* @req ARC_SWS_OSAL_00027 */
void Irq_EOI( int16_t vector ) {
    (void)vector;
    /* Note!
     * This is not applicable on the Cortex-M3 since we
     * can't terminate the interrupt request without popping
     * back registers..have to be solved in the context switches
     * themselves.
     */
}

#define ICSR_VECTACTIVE		0x1ff

/* @req ARC_SWS_OSAL_00024 */
void Irq_EnableVector( sint16 vector, uint8 priority, sint32 core ) {
	(void)core;
	NVIC_InitVector((IRQn_Type)vector, osPrioToCpuPrio(priority));
}


/**
 *
 * @req ARC_SWS_OSAL_00025
 *
 * @param func
 * @param vector
 * @param type
 * @param priority
 * @param core
 */
void Irq_EnableVector2( IrqFuncType func,  sint16 vector, uint16 type,  uint8 priority, sint32 core ) {
    if (vector < (int16_t)NUMBER_OF_INTERRUPTS_AND_EXCEPTIONS) {

        ASSERT( (IRQ_PENDSV_PRIORITY & 1U) == 0U)

        /* Install ISR1 as normal functions */
        if (type == ISR_TYPE_1) {
            /* Check that ISR1 priority is actually higher than the IRQ_PENDSV_PRIORITY
             * see the documentation for the os for cortex-m for more informantion
             */
            ASSERT( priority >  (IRQ_PENDSV_PRIORITY+1 ) )
            Irq_VectorTable[vector + IRQ_INTERRUPT_OFFSET ] = func;
        } else {
            ASSERT( priority < IRQ_PENDSV_PRIORITY );
        }

        NVIC_InitVector((IRQn_Type)vector, osPrioToCpuPrio(priority));

    } else {
        /* Invalid vector! */
        ASSERT(0);
    }
}
/**
 * Generates a soft interrupt, ie sets pending bit.
 * This could also be implemented using ISPR regs.
 * @req ARC_SWS_OSAL_00020
 *
 * @param vector
 */
void Irq_GenerateSoftInt( IrqType vector ) {

	NVIC->STIR =(uint8_t)vector;
	__ASM volatile ("dsb");
	__ASM volatile ("isb");
}

typedef struct {
    uint32_t dummy;
} exc_stack_t;


