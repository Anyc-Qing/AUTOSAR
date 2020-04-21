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



/* ----------------------------[includes]------------------------------------*/
#include "irq.h"
#include "os_i.h"
#include "isr.h"
#include "irq_types.h"
#include "IfxScuWdt.h"
#include "IfxCpu_Reg.h"
#include "machine/intrinsics.h"
#include "IfxSrc_reg.h"
#include "IfxCpu.h"

/* ----------------------------[private define]------------------------------*/
// if vector table size optimization is opted.
#if defined(CFG_TC2XX_OPTIMIZE_IRQ_VECTORTABLE_SIZE)
#define IRQ_VECTABLE_SIZE OS_ISR_MAX_CNT
#else
#define IRQ_VECTABLE_SIZE IRQ_SRPN_TOP_PRIO
#endif
/* ----------------------------[private macro]-------------------------------*/
/* ----------------------------[private typedef]-----------------------------*/
/*lint -emacro({950,970,529,438,9036}, __mtcr) MISRA:FALSE_POSITIVE: asm keyword:[MISRA 2004 Rule 1.1, required], [MISRA 2004 Rule 2.2, required] */
/*lint --e{955,715} MISRA:FALSE_POSITIVE:955-Parameter name missing in function func(), 715-vector variable is used:[MISRA 2012 Rule 8.2, required]*/

typedef uint8 Irq_VectorEntry;
/* ----------------------------[private function prototypes]-----------------*/

/* ----------------------------[private variables]---------------------------*/

/* Since the Tricore interrupt system is so whacked out we need to map
 * the interrupt priority (SRPN) to the vector.
 */

Irq_VectorEntry Irq_VectorTable[IRQ_VECTABLE_SIZE];

/* ----------------------------[private functions]---------------------------*/
/* ----------------------------[public functions]----------------------------*/

extern uint8 int_tbl[];

/* @req ARC_SWS_OSAL_00019 */
void Irq_Init( void ) {

    /*
     * Setup Interrupt vector table.
     *
     * The trap table should have been setup at an earlier stage
     * so it's not done here.
     */

    uint32 coreId = (uint32)IfxCpu_getCoreId();

    /* Validation or the interrupt vector placement */
#if defined(CFG_OPT_DEBUG)
    uint32 bivAddress = (uint32)&int_tbl[0];
    uint32 isrPtrRange = (IRQ_SRPN_TOP_PRIO << 3UL) - 1UL;
    /* The prio (SRPN) value of an interrupt is used to get
     * the offset address in the interrupt table vector to access
     * the interrupt entry. So the isr entry address will be:
     *
     * offset = SRPN << 3;
     * int_entry = int_tbl | offset;
     *
     * With this check we verify that the int_table address is
     * "clean" so that the OR operation will not accidently access
     * the wrong int_entry.
     */

    ASSERT(!(0UL < (bivAddress & isrPtrRange)));
#endif

    /* ENDINIT protected */
    uint16 cpuWdtPassword = IfxScuWdt_getCpuWatchdogPasswordInline(&MODULE_SCU.WDTCPU[coreId]);
    /*lint -e923 MISRA:FALSE_POSITIVE:Address manipulation:[MISRA 2012 Rule 11.6, required]*/
    uint32 bivReg = (uint32)&int_tbl[0] | 1UL; /* vector table addr + VSS bit set to 1 */

    /* Set BIV (vector base address) */
    IfxScuWdt_clearCpuEndinitInline(&MODULE_SCU.WDTCPU[coreId], cpuWdtPassword);
    /*lint -e{970,950,529,438,9036} MISRA:FALSE_POSITIVE:Asm instruction: [MISRA 2012 Directive 2.1, required], [MISRA 2012 Rule 1.1, required], [MISRA 2012 Directive 2.2, required], [MISRA 2012 Directive 14.4, required]*/
    __mtcr(CPU_BIV, bivReg);
    IfxScuWdt_setCpuEndinitInline(&MODULE_SCU.WDTCPU[coreId], cpuWdtPassword);

    for(uint32 i=0;i<IRQ_VECTABLE_SIZE;i++) {
        Irq_VectorTable[i] = VECTOR_ILL;
    }

}

/* Generic API End-Of-Interrupt is not supported for aurix architecture  */
void Irq_EOI( sint16 vector ) {
    (void)vector;
}

/* Function to enable a vector in the interrupt controller.
 * As Irq_EnableVector2 having common fun prototype, for Aurix architecture,
 * 	argument 'type' carries ISR id, arguments 'func and core' are ignored.
 *  */
/* @req ARC_SWS_OSAL_00025 */
/*lint --e{929,9018,9050,9027,701} MISRA:FALSE_POSITIVE:Address manipulation:[MISRA 2012 Directive 11.3, required]*/
void Irq_EnableVector2( IrqFuncType func,  sint16 vector, uint16 type,  uint8 priority, sint32 core )
{
    Ifx_SRC_SRCR *srcTable = (Ifx_SRC_SRCR *)&MODULE_SRC;

    ASSERT((uint16)vector < sizeof(Ifx_SRC));
    ASSERT(priority < IRQ_VECTABLE_SIZE);

	srcTable[vector].U = priority | core<<11U | 1UL<<10U;
	// map the ISR id
	/*lint -e661 MISRA:FALSE_POSITIVE:Array boundary check is done in ASSERT:[MISRA 2012 Rule 18.1, required]*/
	Irq_VectorTable[priority] = (uint8)type;
}

/**
 * Generates a soft interrupt, ie sets pending bit.
 * This could also be implemented using ISPR regs.
 * @req ARC_SWS_OSAL_00020
 *
 * @param vector
 */
void Irq_GenerateSoftInt( IrqType vector ) {
	/*lint -e845 MISRA:FALSE_POSITIVE:Address manipulation*:[MISRA 2004 Info, advisory]*/
    if ((vector >= IRQ_SRC_GPSR00) && (vector <= IRQ_SRC_GPSR23)) {

        Ifx_SRC_SRCR *srcTable = (Ifx_SRC_SRCR *)&MODULE_SRC;

        _isync();
        _dsync();
        srcTable[vector].B.SETR = 1;
        _isync();
        _dsync();
    }
}

/**
 * Acknowledge a soft interrupt.
 * @req ARC_SWS_OSAL_00021
 *
 * @param vector
 */
void Irq_AckSoftInt( IrqType vector ) {
    if ((vector >= IRQ_SRC_GPSR00) && (vector <= IRQ_SRC_GPSR23)) {

        Ifx_SRC_SRCR *srcTable = (Ifx_SRC_SRCR *)&MODULE_SRC;

        srcTable[vector].B.CLRR = 1;
    }
}

/**
 * Function to return the ISR id based on priority, if an ISR is already installed then
 * Irq_VectorTable[priority] will have its ISR id otherwise VECTOR_ILL.
 *
 * @param priority
 */
uint16 Irq_GetISRinstalledId(uint8 priority ) {
    ASSERT(priority < IRQ_VECTABLE_SIZE);
	return Irq_VectorTable[priority];
}

