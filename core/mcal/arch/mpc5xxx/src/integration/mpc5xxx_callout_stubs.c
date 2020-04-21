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

/* ----------------------------[information]----------------------------------*/
/*
 * Author: mahi
 *
 * Description:
 *
 */

/* ----------------------------[includes]------------------------------------*/

#include "Std_Types.h"
#include "Mcu.h"
#include "io.h"
#include "mpc55xx.h"
#include "Mcu_Arc.h"
#if defined(USE_FEE)
#include "Fee_Memory_Cfg.h"
#endif
#include "asm_ppc.h"
#include "Os.h"
#if defined(USE_KERNEL)
#include "arc.h"
#endif
#include "Mcu_fccu.h"

#if defined(USE_RTM)
#include "Rtm.h"
#endif


/* ----------------------------[private define]------------------------------*/

#if defined(CFG_MPC5516)
/* since the MCM module contains the registers normally located in ECSM */
#define ECSM        MCM
#endif

/* ----------------------------[private macro]-------------------------------*/

/* ----------------------------[private typedef]-----------------------------*/
/* ----------------------------[private function prototypes]-----------------*/
/* ----------------------------[private variables]---------------------------*/

#if defined(CFG_MPC5XXX_TEST)
uint32 Mpc5xxx_vectorMask;
uint8 Mpc5xxx_Esr;
uint8 Mpc5xxx_Intc_Esr;
#endif

#if defined(USE_FEE) && defined(USE_FLS)
extern uint8 EccError;
#endif

/* ----------------------------[private functions]---------------------------*/

/**
 * Function called by exception handlers when there is a fatal error.
 * Will also call ShutdownOs(E_OS_PANIC).
 *
 * @param error		The exception that caused the error
 * @param pData		Pointer to private data that may want to be dumped.
 */
void Mpc5xxx_Panic(uint32 error, void *pData) {

    (void) error;
    (void) pData; /*lint !e920 Argument not used  */

    Os_Arc_Panic(error, pData);
}

/*
 * Callout from Fccu_Init in case there a FCCU fault.
 */
void Mcu_Arc_SafeMode(void) {
#if defined(CFG_MCU_ARC_CLEAR_FCCU)
#if defined(CFG_MPC5643L) || defined(CFG_SPC56XL70)

    uint32 status[3];

    /* Read status to what see what was wrong */
    Fccu_Op(OP_READ_CFS);
    status[0u] = FCCU.CF_S[0u].R;
    status[1u] = FCCU.CF_S[1u].R;

    if( status[0] ) {
        Fccu_ClearCriticalStatusReg(0u,status[0u]);
    }
    if( status[1u] ) {
        Fccu_ClearCriticalStatusReg(1u,status[1u]);
    }

    Fccu_GetStat();

    /* Check for "left-over" FCCU events */
    if( RGM.FES.R & (F_FCCU_HARD_BIT+F_FCCU_SAFE_BIT) ) {
        /* Clear at least SAFE mode */
        RGM.FES.R = (F_FCCU_HARD_BIT+F_FCCU_SAFE_BIT);

        /* Switch to DRUN to get things going */
        Mcu_Arc_SwitchMode(MODE_DRUN);
    }
#elif defined(CFG_MPC5744P)
    Fccu_OpRvType opRv;

    /* Clear MEMU */
    MEMU.ERR_FLAG.R = MEMU.ERR_FLAG.R;

    /* Update status */
    opRv = Fccu_Op(OP_READ_NCFS);
    ASSERT( opRv == OPS_SUCCESSFUL );
    opRv = Fccu_Op(OP_READ_FCCU_STAT);
    ASSERT( opRv == OPS_SUCCESSFUL );

    /* Follow steps in 69.6.6 Noncritical Fault Status */
    for(uint8 i=0u; i < 3u; i++)
    {
        do {

            opRv = Fccu_ClearNonCriticalStatusReg(i,0xFFFFFFFFUL);
            ASSERT(opRv == OPS_SUCCESSFUL);

            /* Update NCF_S registers */
            opRv = Fccu_Op(OP_READ_NCFS);
            ASSERT(opRv == OPS_SUCCESSFUL);

        } while ( FCCU.NCF_S[i].R != 0UL );
    }

    (void)Fccu_Op(OP_READ_FCCU_STAT);
#endif

#else
    Os_Arc_Panic(EXPECPTION_ARC_FCCU, NULL);
#endif
}


#if defined(CFG_MPC5XXX_TEST)
static uint32 ramECC( void ) {
    uint32 rv = EXC_NOT_HANDLED;

    boolean ramEccError = FALSE;
#if defined(CFG_MPC5744P) || defined(CFG_MPC5777M) || defined(CFG_MPC5746C) || defined(CFG_MPC5748G) || defined(CFG_MPC5747C)
    static const typeof(MEMU.ERR_FLAG) ramError = {.B.SR_UCE = 1u};
    if(MEMU.ERR_FLAG.R == ramError.R) {
        ramEccError = TRUE;
        address = MEMU.SYS_RAM_UNCERR_ADDR.R;
        MEMU.SYS_RAM_UNCERR_STS.B.VLD = 0u;
        static const typeof(MEMU.ERR_FLAG) clear = {.B.SR_UCE = 1u, .B.SR_UCO = 1u};
        MEMU.ERR_FLAG.R = clear.R;
    }
#else
    if(esr.B.RNCE) {
        ramEccError = TRUE;
        typeof(ECSM.ESR.B) clear = {.RNCE = 1u};
        address = ECSM.FEAR.R;
        /* Clear the exception */
        ECSM.ESR.B = clear;
    }
#endif

    return rv;
}
#endif

#if (defined(USE_FEE) && defined(USE_FLS)) || defined(CFG_MPC5XXX_TEST)

/**
 * @brief   Function to return address if there is a flash error.
 * @return
 */
static uint32 flashECC( uint32 *address ) {
    /* If we are using FEE and FLS we need to make sure that these
     * are part of the normal operation.
     */

    boolean flashEccError = FALSE;
#if defined(CFG_MPC5744P) || defined(CFG_MPC5777M)|| defined(CFG_MPC5777C) || defined(CFG_MPC5746C) || defined(CFG_MPC5748G) || defined(CFG_MPC5747C)
    /* For MPC5746C only MEMU_0 is used */
    static const typeof(MEMU.ERR_FLAG) flashError = {.B.F_UCE = 1u};
    if(MEMU.ERR_FLAG.R == flashError.R) {
        flashEccError = TRUE;
        *address = MEMU.FLASH_UNCERR_ADDR.R;
        MEMU.FLASH_UNCERR_STS.B.VLD = 0u;
        static const typeof(MEMU.ERR_FLAG) clear = {.B.F_UCE = 1u, .B.F_UCO = 1u};
        MEMU.ERR_FLAG.R = clear.R;
    }

#elif defined(CFG_MPC5643L) || defined(CFG_SPC56XL70)
    typeof(FLASH.MCR) mcr = FLASH.MCR;

    if(mcr.B.EER) {
        flashEccError = TRUE;
        *address = (FLASH.ADR.R & 0x7FFFFFFFul);
        /* Clear EER */
        FLASH.MCR.R = mcr.R;
        /* Clear MCSR */
        set_spr(SPR_MCSR, get_spr(SPR_MCSR));
        /* Clear Address also */
        FLASH.ADR.R = 0ul;

        /* It seems that the ECC mechanism needs a valid read from the flash
         * array to re-trigger the EER event. Without this read you will
         * get a new IVOR1 but EER not set. */

        /* Just grab any address in flash (in this case the function we a running) */
        volatile uint32 bepa = *(uint32 *)flashECC;
        (void)bepa;
    }
#elif defined(CFG_MPC5777C)
    typeof(C55FMC.MCR) mcr = C55FMC.MCR;

    if(mcr.B.EER) {
        flashEccError = TRUE;
        address = (C55FMC.ADR.R & 0x7FFFFFFFul);
        /* Clear EER */
        C55FMC.MCR.R = mcr.R;
        /* Clear MCSR */
        set_spr(SPR_MCSR, get_spr(SPR_MCSR));
        /* Clear Address also */
        C55FMC.ADR.R = 0ul;

        /* It seems that the ECC mechanism needs a valid read from the flash
         * array to re-trigger the EER event. Without this read you will
         * get a new IVOR1 but EER not set. */

        /* Just grab any address in flash (in this case the function we a running) */
        volatile uint32 bepa = *(uint32 *)checkEcc;
    }
#else
    /*lint -save -e10 -e40 -e24 -e63 */
    typeof(ECSM.ESR) esr = ECSM.ESR;
    if(esr.B.FNCE) {
        flashEccError = TRUE;
        typeof(ECSM.ESR.B) clear = {.FNCE = 1u};
        *address = ECSM.FEAR.R;
        /* Clear the exception */
        ECSM.ESR.B = clear;
    }
    /*lint -restore */
#endif /* defined(CFG_MPC5744P) || defined(CFG_MPC5777M) || defined(CFG_MPC5746C) || defined(CFG_MPC5748G) || defined(CFG_MPC5747C) */
    return flashEccError;
}
#endif


/**
 * Function that checks for ECC errors
 *
 * @return
 */
static uint32 checkEcc(void) {
    uint32 rv = EXC_NOT_HANDLED;

#if defined(CFG_MPC5XXX_TEST)
    ramEccError = ramEcc();

    if(ramEccError) {
        /* ECC RAM problems */
        rv = (EXC_HANDLED | EXC_ADJUST_ADDR);
    }
#endif


#if (defined(USE_FEE) && defined(USE_FLS)) || defined(CFG_MPC5XXX_TEST)

    boolean flashEccError = FALSE;
    uint32 address = 0uL;

    flashEccError = flashECC(&address);

    /* Find FLS errors */
    if (flashEccError) {
        /* Check if we are in FEE range */
        if ( ((FEE_BANK1_OFFSET <= address) &&
                        (FEE_BANK1_OFFSET + FEE_BANK1_LENGTH > address)) ||
                ((FEE_BANK2_OFFSET <= address) &&
                        (FEE_BANK2_OFFSET + FEE_BANK2_LENGTH > address)) )
        {
            /* Record that something bad has happened */
            EccError = 1u;
            rv = EXC_HANDLED | EXC_ADJUST_ADDR;
        }
    }
#endif	 /* USE_FLS && USE_FEE */

    return rv;
}

/* ----------------------------[public functions]----------------------------*/



#if defined(CFG_SAFETY_PLATFORM)

uint32 Mpc5xxx_ExceptionHandler(uint32 exceptionVector) {
    uint32 rv = EXC_NOT_HANDLED;

    /* First check for FEE and FLS errors */
    if ( (exceptionVector == 1UL) ||
         (exceptionVector == 2UL) ||
         (exceptionVector == 3UL) )
    {
        rv = checkEcc();
    }


    if( rv == EXC_NOT_HANDLED ) {
#if defined(USE_RTM)
        Rtm_EntryType err;
        err.errorType = RTM_ERRORTYPE_HOOK;
        err.error.hook.flags = RTM_HOOK_FLAG_EXCEPTION;
        err.error.hook.vector = exceptionVector;
        Rtm_ReportFailure(&err);
#endif
    }
    return rv;
}
#else

/**
 * Called by lower level exception handlers and tries to handle
 * the exception.
 *
 * @param exceptionVector The exception vector.
 * @return
 */
uint32 Mpc5xxx_ExceptionHandler(uint32 exceptionVector) {
    uint32 rv = EXC_NOT_HANDLED;

#if defined(CFG_MPC5XXX_TEST)
    Mpc5xxx_vectorMask |= (1u<<exceptionVector);
#endif

    switch (exceptionVector) {
    case 1u: {
#if defined(CFG_MPC5744P)
        // readout the FCCU errors
        // unlock
        FCCU.TRANS_LOCK.R = 0xBC;
        FCCU.CTRL./*B.OPR*/R = 10u;// set mode to CONFIG
        while(FCCU.CTRL.B.OPS == 1u) {}
        volatile uint32 FCCU_NCF_S0 = FCCU.NCF_S[0u].R;
        volatile uint32 FCCU_NCF_S1 = FCCU.NCF_S[1u].R;
        volatile uint32 FCCU_NCF_S2 = FCCU.NCF_S[2u].R;
        (void)FCCU_NCF_S0;
        (void)FCCU_NCF_S1;
        (void)FCCU_NCF_S2;

        FCCU.CTRLK.R = 0x825A132BUL;
        FCCU.CTRL./*B.OPR*/R = 2u;    // set mode to NORMAL
#endif
        /* CSRR0, CSRR1, MCSR */
        /* ECC: MSR[EE] = 0 */
#if defined(CFG_MPC5XXX_TEST)
        uint32 mcsr = get_spr(SPR_MCSR);
        if( get_spr(SPR_MCSR) & ( MCSR_BUS_DRERR | MCSR_BUS_WRERR )) {
            /* We have a bus error */
            rv = EXC_HANDLED | EXC_ADJUST_ADDR;
            set_spr(SPR_MCSR,mcsr);
            break;
        }
#endif
        rv = checkEcc();
        break;
    }
    case 2u:
        /* SRR0, SRR1, ESR, DEAR */
        /* ECC: MSR[EE] = 1 */
#if defined(CFG_MPC5XXX_TEST)
        if( get_spr(SPR_ESR) & ESR_XTE) {
            /* We have a external termination bus error */
            rv = EXC_HANDLED | EXC_ADJUST_ADDR;
            break;
        }
#endif
        rv = checkEcc();
        break;
    case 3u: {
        /* SRR0, SRR1, ESR */
        rv = checkEcc();
        break;
    }

    default:
        break;
    }

    return rv;
}
#endif

