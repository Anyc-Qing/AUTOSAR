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
 * @file    arch.c
 * @brief   Part of the port of the Os for this architecture.
 *
 * @addtogroup os
 * @details
 * @{
 */

/* ----------------------------[includes]------------------------------------*/

#include "os_i.h"
#include "arch_stack.h"
#include "Cpu.h"
#if defined(CFG_TMS570)
#include "core_cr4.h"
#endif
#include "asm_arm.h"
#if (OS_SC3==STD_ON) || (OS_SC4==STD_ON)
#include "os_mm_regs.h"
#endif

extern void Os_TaskPost( void );

/* ----------------------------[private define]------------------------------*/
/* ----------------------------[private macro]-------------------------------*/
/* ----------------------------[private typedef]-----------------------------*/
/* ----------------------------[private function prototypes]-----------------*/
/* ----------------------------[private variables]---------------------------*/
/* ----------------------------[private functions]---------------------------*/
/* ----------------------------[public functions]----------------------------*/



/* @req ARC_SWS_OSAL_00014 */
StatusType Os_ArchGetProtectionType( uint32 exception ) {
    StatusType rv = E_OS_ILLEGAL;

    if( (exception == EXC_UNDEFINED_INSTRUCTION) || (exception == EXC_PREFETCH_ABORT) ) {
        /* @req SWS_Os_00245 Instruction exceptions */
        rv = E_OS_PROTECTION_EXCEPTION;
    } else if( exception == EXC_DATA_ABORT ) {
        /* @req SWS_Os_00044
         * If a memory access violation is detected,
         * the Operating System module shall call the Protection Hook */
        rv = E_OS_PROTECTION_MEMORY;
    } else {
        rv = E_OS_ILLEGAL;
    }

    return rv;
}


void Os_ArchFirstCall( void )
{
    Irq_Enable();
    OS_SYS_PTR->currTaskPtr->constPtr->entry();
}


void *Os_ArchGetStackPtr( void ) {
	/* current stack pointer is returned as NULL
	 * as this API is not used for this architecture */
    return NULL_PTR;
}

/* @req ARC_SWS_OSAL_00012 */
uint32 Os_ArchGetScSize( void ) {
	return sizeof(Os_IsrFrameType) + C_SIZE;
}

/*lint -save -e923 MISRA:FALSE_POSITIVE:Allow Pointer cast operation:
 *[MISRA 2012 Rule 11.1, required], [MISRA 2012 Rule 11.4, advisory], [MISRA 2012 Rule 11.6, required] */
/*lint -save -e9016 -e927 -e826 -e9033 MISRA:FALSE_POSITIVE:Allow calculation of address using pointers arithmetic:
 *[MISRA 2012 Rule 18.4, advisory], [MISRA 2012 Rule 11.3, required], [MISRA 2012 Rule 11.5, advisory], [MISRA 2012 Rule 10.8, required] */
/*lint -save -e9027 -e9053 -e9032 -e573 -e701 -e834 MISRA:FALSE_POSITIVE:Allow bitwise and arithmetic operation on essential types:
 *[MISRA 2012 Rule 10.1, required], [MISRA 2012 Rule 12.2, required], [MISRA 2012 Rule 10.7, required], [MISRA 2012 Rule 12.1, advisory] */

/**
 * Function make sure that we switch to supervisor mode(rfi) before
 * we call a task for the first time.
 * @req ARC_SWS_OSAL_00005
 */
void Os_ArchSetupContext( OsTaskVarType *pcbPtr ) {

    uint32 psr = 0x1FUL;   /* System Mode */
    /* Our only reference here is the stack for the task.
     * We should fill the stack with "things" that is then
     * pop:ed by Os_ArchSwapContextTo()
     *
     * - We need to use a large context here since it
     *   manipulates PSR when it return (ie rfeia	sp! )
     * - Os_StackSetup() will setup the stack so it points
     *   with space for the context
     *
     *  Address  Description
     *  ---------------------------------------
     *      high
     *
     *      xx+4  CPSR	   (from exception)
     *        xx  LR       (from exception)
     *        ...
     *        14       ^
     *        12       |
     *         8 -- ARM REGS ----
     *         4 context indicator
     *         0 stack
     *        ...    <---- pcbPtr->stack.curr will point here at this stage..
     *      low
     */
    Os_IsrFrameType *isrFramePtr = (Os_IsrFrameType *)((uint8 *)pcbPtr->stack.curr + C_SIZE);
    uint32 *context = (uint32 *)pcbPtr->stack.curr;

    /* Zero out the context */
    memset(isrFramePtr,0,sizeof(Os_IsrFrameType) );

    context[0] = 0;
    context[1] = LC_PATTERN;  /* Marking as large context type */

    isrFramePtr->lr = (uint32)Os_TaskPost; /* Default return function, task will return to this function if TerminateTask is not called */
    isrFramePtr->pc = (uint32)pcbPtr->constPtr->entry; /* Task's function pointer */

#if (OS_SC3==STD_ON) || (OS_SC4==STD_ON)
    if( !Os_AppConst[pcbPtr->constPtr->applOwnerId].trusted ) {
        /* Non-trusted */
    	/* @req SWS_Os_00058 Non trusted Os application in non-privileged mode */
    	/* @req SWS_Os_00096 */
        psr = 0x10UL;   /* Program Status Word: Bits M[4:0] : 0b10000 for user mode */
    }
#endif

#if defined(CFG_THUMB)
    psr |= 0x20UL;            /* Thumb mode */
#endif
#if defined(CFG_BIG_ENDIAN)
    psr |= (1<<9);
#endif
    isrFramePtr->psr = psr;

    pcbPtr->regs[0] = 0;
}
/* @req ARC_SWS_OSAL_00008 */
void Os_ArchInit( void ) {
#if (OS_SC3 == STD_ON) || (OS_SC4 == STD_ON)
    Os_MMInit();

    /* Precalc values for MMU for all applications */
    OsAppVarType *aVarP;
    const OsAppConstType *aConstP;
    uint32 size;
    uint32 rsize;

    for(uint32 i=0;i<OS_APPLICATION_CNT;i++) {

        aVarP = Os_ApplGet(i);
        aConstP = Os_ApplGetConst(i);

        /* size = 2^(Rsize+1), example: for RSize = 10 --> size = 0x800 */
        size = (uint32)aConstP->dataEnd - (uint32)aConstP->dataStart;
        if (size != 0UL ) {
            size = size - 1UL; // Guarding for the size in power of two
            rsize = (uint32)ilog2( size );
            /* CONFIG_ASSERT: In the failure case ShutdownOs() will be called */
            CONFIG_ASSERT( ((uint32)aConstP->dataStart % (1<<(rsize+1) )) == 0UL );
            /* .data */
            /* Base address for the register DRBAR */
            aVarP->regs[MPU0_REG_TASK_DATA_BASEADDR] = (uint32_t)aConstP->dataStart;
            /* region size for the register DRSR (bits Enable bit - En[0], Region size - RSize[5:1] */
            aVarP->regs[MPU0_REG_TASK_DATA_SIZEENABLE] = (rsize << 1U) | 1UL ;
        } else {
            /* No .data section, disable it */
            aVarP->regs[MPU0_REG_TASK_DATA_SIZEENABLE] = 0;
        }

        size = (uint32)aConstP->bssEnd - (uint32)aConstP->bssStart;
        if (size != 0UL ) {
            size = size - 1UL; // Guarding for the size in power of two
            rsize = (uint32)ilog2( size );
            /* CONFIG_ASSERT: In the failure case ShutdownOs() will be called */
            CONFIG_ASSERT( ((uint32)aConstP->bssStart % (1<<(rsize+1) )) == 0UL );
            /* .bss */
            /* Base address for the register DRBAR */
            aVarP->regs[MPU0_REG_TASK_BSS_BASEADDR] = (uint32_t)aConstP->bssStart;
            /* region size for the register DRSR (bits Enable bit - En[0], Region size - RSize[5:1] */
            aVarP->regs[MPU0_REG_TASK_BSS_SIZEENABLE] = (rsize << 1U) | 1UL ;
        } else {
            /* No .bss section, disable it */
            aVarP->regs[MPU0_REG_TASK_BSS_SIZEENABLE] = 0;
        }

    }
#endif
}
/** @} */



