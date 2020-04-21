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
#include "Cpu.h"
#include "IfxCpu_reg.h"
#include "machine/intrinsics.h"
#include "os_mm_regs.h"
#include "irq.h"

/* ----------------------------[private define]------------------------------*/

#define INDEX_PSW_PRS       12U
#define INDEX_PSW_IO        10U
#define INDEX_PSW_IS        9U
#define INDEX_PSW_GW        8U
#define INDEX_PSW_CDE       7U
#define INDEX_PSW_CDC       1U

#define PSW_SETUP_SUPERVISOR   ((0UL << INDEX_PSW_PRS) |  /* PRS protection register set 0 */ \
                                (2UL << INDEX_PSW_IO)  |  /* IO Supervisor Mode            */ \
                                (1UL << INDEX_PSW_IS)  |  /* IS Shared Global stack        */ \
                                (1UL << INDEX_PSW_GW)  |  /* GW Enable Write permission to global registers A[0], A[1], A[8],A[9] */ \
                                (0UL << INDEX_PSW_CDE) |  /* CDE Call depth counting is disabled */ \
                                (1UL << INDEX_PSW_CDC))  /* CDC */

#define REGS_CONTEXT_NR     15
#define BAD_                0x0uL


/* ----------------------------[private macro]-------------------------------*/
/* ----------------------------[private typedef]-----------------------------*/
/* ----------------------------[private function prototypes]-----------------*/
void Os_ArchFree( uint32 pcxi );
void Os_ArchToPrivilegedMode( uint32 pcxi);
/* ----------------------------[private variables]---------------------------*/

/* ----------------------------[private functions]---------------------------*/
/* ----------------------------[public functions]----------------------------*/



extern void Os_TaskPost( void );
/**
 * Function make sure that we switch to supervisor mode(rfi) before
 * we call a task for the first time.
 */

void Os_ArchFirstCall( void )
{
}

/* @req ARC_SWS_OSAL_00012 */
uint32 Os_ArchGetScSize( void ) {
    return 16;
}
/*lint -save -e950 MISRA:FALSE_POSITIVE:keyword asm for assembly instruction execution:
 *[MISRA 2012 Directive 2.1, required], [MISRA 2012 Rule 1.1, required], [MISRA 2012 Rule 1.2, advisory] */
/*lint -save -e9036 -e970 -e923 -e9027 -e9033 MISRA:FALSE_POSITIVE:Allow calculation of address using pointers arithmetic:
 *[MISRA 2012 Rule 14.4, required], [MISRA 2004 Rule 6.3, advisory], [MISRA 2012 Directive 4.6, advisory], [MISRA 2012 Rule 11.1, required], [MISRA 2012 Rule 11.4, advisory], [MISRA 2012 Rule 11.6, required], [MISRA 2004 Rule 16.7, advisory], [MISRA 2012 Rule 8.13, advisory]*/
/*lint -save -e9008 -e845 MISRA:FALSE_POSITIVE:Bitwise operation and standard macro expansion:[MISRA 2004 Rule 9.1, required], [MISRA 2012 Rule 9.1, mandatory] */


/**
 * Return CSAs back to the freelist until pxci==0
 *
 * @param pcxi
 */
void Os_ArchFree( uint32 pcxi ) {

    Os_ContextHighType *CSAPtr =  (Os_ContextHighType *)CSA_TO_ADDRESS(pcxi);
    uint32 fcx;

    /* Find last, pcxi should be 0 */
    while( CSAPtr->pcxi != 0 ) {
        _dsync();
        CSAPtr = (Os_ContextHighType *)CSA_TO_ADDRESS(CSAPtr->pcxi);
    }

    /* Get the free-list pointer */
    fcx = __mfcr( CPU_FCX );
    _isync();

    CSAPtr->pcxi = fcx;

    /* Set new free list */
    /*lint -e{438} MISRA:STANDARDIZED_INTERFACE:Set new free list:[MISRA 2004 Info , advisory] */
    /*lint -e{529} MISRA:STANDARDIZED_INTERFACE:Set new free list:[MISRA 2004 Info , advisory] */
    __mtcr( CPU_FCX, pcxi);
    _isync();
}

/* @req ARC_SWS_OSAL_00014 */
StatusType Os_ArchGetProtectionType( uint32 exception ) {
    StatusType rv = E_OS_ILLEGAL;

    if ( exception <= TRAP_7_NMI ) {
        if (exception == TRAP_1_INTERNAL_PROTECTION) {
            /* @req SWS_Os_00044
             * If a memory access violation is detected, the Operating System module shall call the Protection Hook */
            rv = E_OS_PROTECTION_MEMORY;
        } else {
            /* @req SWS_Os_00245 *//* Improvment: SWS_Os_00245 Instruction exceptions */
            rv = E_OS_PROTECTION_EXCEPTION;
        }
    }

    return rv;
}
uint32 Os_GetCurrentPcxi(void) {
    uint32 pcxi = __mfcr( CPU_PCXI );
    _isync();
    return pcxi;
}
void Os_ArchToPrivilegedMode( uint32 pcxi) {
    Os_ContextHighType *upperCSAPtr = (Os_ContextHighType *)CSA_TO_ADDRESS(pcxi);
    upperCSAPtr->psw = PSW_SETUP_SUPERVISOR;
}

/* @req ARC_SWS_OSAL_00005 */
void Os_ArchSetupContext( OsTaskVarType *pcbPtr ) {
    /* Note!
     *
     * Lots of _isync() and _dsync() here. The manual basically say that
     * you should do :
     * - "isync" after each special function register modification.
     * - "dsync" before reading the CSA stuff
     */

    uint32 fcx;
    Os_ContextLowType *lowerCSAPtr;
    Os_ContextHighType *upperCSAPtr;
    Os_ContextHighType *postCSAPtr;
    Os_ContextHighType *rootCSAPtr;

    /* Grab free-list pointer */
    fcx = __mfcr( CPU_FCX );
    _isync();

    /* Grab a number of entries from the free-list */
    _dsync();
    lowerCSAPtr =  (Os_ContextLowType *)CSA_TO_ADDRESS(fcx);

    _dsync();
    upperCSAPtr = (Os_ContextHighType *)CSA_TO_ADDRESS(lowerCSAPtr->pcxi);

    _dsync();
    postCSAPtr =  (Os_ContextHighType *)CSA_TO_ADDRESS(upperCSAPtr->pcxi);

    _dsync();
    rootCSAPtr =  (Os_ContextHighType *)CSA_TO_ADDRESS(postCSAPtr->pcxi);

    /* Save pointer to rootCSA */
    pcbPtr->regs[REGS_CONTEXT_NR] = postCSAPtr->pcxi;

    /* We have taken entries from FCX, write a new FCX */
    /*lint -e{529} MISRA:STANDARDIZED_INTERFACE:We have taken entries from FCX, write a new FCX:[MISRA 2004 Info , advisory] */
    /*lint -e{438} MISRA:STANDARDIZED_INTERFACE:We have taken entries from FCX, write a new FCX:[MISRA 2004 Info , advisory] */
    __mtcr( CPU_FCX, rootCSAPtr->pcxi);
    _isync();

    if( rootCSAPtr->pcxi == BAD_ ) {
        Os_Arc_Panic(TRAP_3_CONTEXT_MGNT, NULL_PTR);
    }

    /*
     * Setting up context
     * 1 - Program Status word
     * 		- 0b7 Disable call depth counter
     * 		- 0b8 Write permission to global register
     * 		- 0b9 Shared global stack
     * 		- 0b11:10 Supervisor mode
     * 2 - Debug data
     * 3 - __START address
     * 4 - Stack pointer
     * 5 - Set to upper context
     */
    postCSAPtr->psw = 0x00000b02UL;                    // 1
    postCSAPtr->d8 = 0x99887766UL;                     // 2
    postCSAPtr->a11_ra = (uint32)0x80000020UL;         // 3
    postCSAPtr->a10_sp = (uint32)pcbPtr->stack.curr;   // 4
    postCSAPtr->pcxi |= (1UL<<20U);                    // 5

    rootCSAPtr->pcxi = BAD_;	/* Indicate that it's ended there */


    /* Clear the CSAs */

    _dsync();
    /* Setup the stack */
    upperCSAPtr->a10_sp = (uint32)pcbPtr->stack.curr;

    upperCSAPtr->psw = PSW_SETUP_SUPERVISOR;

#if (OS_SC3==STD_ON) || (OS_SC4==STD_ON)

    if( !Os_AppConst[pcbPtr->constPtr->applOwnerId].trusted ) {
    	/* @req SWS_Os_00058 */
    	/* @req SWS_Os_00096 */
         upperCSAPtr->psw = ((1UL << INDEX_PSW_PRS) |   // PRS protection register set 1
                            (1UL << INDEX_PSW_IO) |    // IO User-1 Mode
                            (1UL << INDEX_PSW_IS) |    // IS Shared Global stack
                            (1UL << INDEX_PSW_GW) |    // GW Enable Write permission
                            (0UL << INDEX_PSW_CDE) |   // CDE Call depth counting is disabled
                            (1UL << INDEX_PSW_CDC));   // CDC
    }

#endif

    lowerCSAPtr->a11_ra = (uint32)pcbPtr->constPtr->entry;

    /* Some values just so we know that we are in the right context */
    lowerCSAPtr->a2 = 0x22222222uL;
    upperCSAPtr->d15 = 0x15151515uL;
    upperCSAPtr->pcxi |= (1UL<<20U);    /* Post is upper */
    /*lint -e{64} MISRA:STANDARDIZED_INTERFACE:Some values just so we know that we are in the right context:[MISRA 2012 Rule 8.4 , required] */
    upperCSAPtr->a11_ra = (uint32)Os_TaskPost;

    /* When lower will be popped this will be the new CPU_PCXI.
     * So, when upper is restored the ICR.IE will have this value */
    lowerCSAPtr->pcxi |= (1UL<<20U) | (1UL<<21U) ;	/* Lower point to upper so set UL=1, set IE=1 */

    /* Save address to CSA on stack (we later use "rslcx" to pop the context back so we want it on CSA format */
    *(uint32 *)pcbPtr->stack.curr = ADDRESS_TO_CSA((uint32)lowerCSAPtr);

    /* Start a task with RFE (possibly RET?) since that is the only way to restore
     * upper context.
     */
    _dsync();

}
/* @req ARC_SWS_OSAL_00008 */
void Os_ArchInit( void ) {
    //memory protection
#if (OS_SC3 == STD_ON) || (OS_SC4 == STD_ON)
    Os_MMInit();

    OsAppVarType *aVarP;
     const OsAppConstType *aConstP;

     for(uint32 i=0;i<OS_APPLICATION_CNT;i++) {

         aVarP = Os_ApplGet(i);
         aConstP = Os_ApplGetConst(i);

         /* Data, start and stop */
         aVarP->regs[MPU0_REG_TASK_DATA_START] = (uint32_t)aConstP->dataStart;
         aVarP->regs[MPU0_REG_TASK_DATA_END] = (uint32)aConstP->dataEnd;

         /* Data, start and stop */
         aVarP->regs[MPU0_REG_TASK_BSS_START] = (uint32_t)aConstP->bssStart;
         aVarP->regs[MPU0_REG_TASK_BSS_END] = (uint32)aConstP->bssEnd;
     }

#endif
}

/** @} */
