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

/** @tagSettings DEFAULT_ARCHITECTURE=PPC|MPC5607B|MPC5645S|MPC5646B|MPC5744P */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2 */

/**
 * Based on:
 * https://community.nxp.com/docs/DOC-339955
 */


/* ----------------------------[includes]------------------------------------*/
#include "Cpu.h"
#include "Mcu.h"
#include "Mcu_Arc.h"
#include "irq.h"
#include "mpc55xx.h"
#include "Mcu_fccu.h"


/* ----------------------------[private define]------------------------------*/

/* ----------------------------[private macro]-------------------------------*/

/* CTRLK register keys */
#define KEY_OP1             0x913756AFu
#define KEY_OP2             0x825A132Bu
#define KEY_OP16            0x7ACB32F0u
#define KEY_OP31            0x29AF8752u


#define DCR_E2ECTL0                 510u
#define DCR_E2EECSR0                511u

#define E2ECTL0_ALL_CHECKS_ENABLED  0x5U

#define FCCU_CTRL_DEFAULT   0x200U     /* DEBUG = ON */


/* ----------------------------[private typedef]-----------------------------*/
/* ----------------------------[private function prototypes]-----------------*/
/* ----------------------------[private variables]---------------------------*/
/*lint -e9003 MISRA:OTHER:Readability:[MISRA 2012 Rule 8.9, advisory]*/
volatile uint32 dcr = 0U;

/* ----------------------------[private functions]---------------------------*/
/* ----------------------------[public functions]----------------------------*/


Fccu_OpRvType Fccu_WaitForOp ( void ) {
    while (FCCU.CTRL.B.OPS == OPS_IN_PROGRESS ) {};
    return FCCU.CTRL.B.OPS;
}

/**
 * Get Fault Control and Collection Unit status
 */
uint32 Fccu_GetStat( void ) {
    FCCU.CTRL.B.OPR = 3u;    /* NO key needed */
    while (FCCU.CTRL.B.OPS != OPS_SUCCESSFUL ) {};
    return FCCU.STAT.R;
}


#if defined(CFG_MCU_ARC_CLEAR_FCCU)
#if defined(CFG_MPC5643L) || defined(CFG_SPC56XL70)
void Fccu_ClearCriticalStatusReg( uint32 regIndex, uint32_t val ) {
    FCCU.CFK.R        = 0x618B7A50uL;
    FCCU.CF_S[regIndex].R = val;    /* A write will trigger an OP11 */

    WAIT_FOR_OP();
}

#endif
#endif


Fccu_OpRvType Fccu_ClearNonCriticalStatusReg (uint32 regIndex, uint32 val){
    FCCU.NCFK.R             = FCCU_NCFK_KEY;    /* Key is AB34_98FEh */
    FCCU.NCF_S[regIndex].R  = val;              /* A write will trigger an OP12 */

    return Fccu_WaitForOp();
}

/**
 * @brief   Executes one operation on the Initialize the
 *          FCCU
 * @param op - operation to perform
 */
Fccu_OpRvType Fccu_Op( uint32 operation ) {
    uint32 unlockVal = 0uL;

    /* Unlock first */
    switch(operation) {
        case OP_CONFIG: unlockVal = KEY_OP1; break;
        case OP_NORMAL: unlockVal = KEY_OP2; break;
        case 16uL: unlockVal = KEY_OP16; break;
        case 31uL: unlockVal = KEY_OP31; break;
        default:
        //	ASSERT(0);
            break;
    }

    /* unlock */
    if( unlockVal != 0uL ) {
        FCCU.CTRLK.R = unlockVal;
    }
    FCCU.CTRL.R = (operation | FCCU_CTRL_DEFAULT);

    return Fccu_WaitForOp();
}




/**
 * Initialize the Fault Control and Collection Unit.
 *
 * Register naming:
 * _CF_      - Critical Fault
 * _NCF_     - Non-Critical Fault.
 * _CF_CFGx and _NCF_CFGx
 *           - 0 HW recoverable fault
 *             1 SW recoverable fault
 * _CFS_CFGx and _NCFS_CFGx
 *           - 00 No reset reaction
 *             01 Short functional reset (FAULT state reaction)
 *             10 Long functional reset (FAULT state reaction)
 *             11 No reset reaction
 */
void Fccu_Init( void ) {
    uint32 state;
    Fccu_OpRvType opRv;


    state = Fccu_GetStat();
    if( (state & 0x7uL) != STATE_NORMAL) {
#if defined(USE_SMAL)
        Fccu_SafeMode_Cb();
#else
        Mcu_Arc_SafeMode();
#endif
    }    
        
#if defined(CFG_MPC5643L) || defined(CFG_SPC56XL70)

    /*
     * Clear status bits
     */
    for(uint32 i=0uL;i<sizeof(FCCU.CF_S)/sizeof(FCCU_CF_S_32B_tag);i++) {

        FCCU.CFK.R        = 0x618B7A50uL;
        FCCU.CF_S[i].R     = 0xFFFFFFFFuL;
        WAIT_FOR_OP();
    }

    for(uint32 i=0uL;i<sizeof(FCCU.NCF_S)/sizeof(FCCU_NCF_S_32B_tag);i++) {
        FCCU.NCFK.R        = 0xAB3498FEuL;
        FCCU.NCF_S[i].R     = 0xFFFFFFFFuL;
        WAIT_FOR_OP();
    }


    Fccu_Op(OP_CONFIG);


    /*
     * Setup as software faults
     */

    /* For CF */
    for(uint32 i=0uL;i<sizeof(FCCU.CF_CFG)/sizeof(FCCU_CF_CFG_32B_tag);i++) {
        FCCU.CF_CFG[i].R = 0xffffffffuL;
    }

    /* and for NCF */
    for(uint32 i=0uL;i<sizeof(FCCU.NCF_CFG)/sizeof(FCCU_NCF_CFG_32B_tag);i++) {
        FCCU.NCF_CFG[i].R = 0xffffffffuL;
    }

    Fccu_Op(OP_NORMAL);

#elif defined(CFG_MPC5744P)

    dcr = get_dcr(DCR_E2ECTL0);

    if( dcr != E2ECTL0_ALL_CHECKS_ENABLED ) {
        set_dcr(510u,E2ECTL0_ALL_CHECKS_ENABLED);
    }


    /* Unlock configuration */
    FCCU.TRANS_LOCK.R = 0xBCu;

    /* Go to CONFIG mode */
    opRv = Fccu_Op(OP_CONFIG);

    if( opRv != OPS_SUCCESSFUL ) {
        /* We failed to go to CONFIG state */
        (void)Fccu_Op(OP_READ_NCFS);
        (void)Fccu_Op(OP_READ_FCCU_STAT);
        (void)Fccu_Op(OP_READ_FCCU_STAT);
        for(;;) {}
    }


#if defined(USE_SMAL)
    Fccu_Config_Cb();
#endif

    opRv = Fccu_Op(OP_NORMAL);
    (void)opRv;

    /* Update State so we don't get confused later */
    (void)Fccu_Op(OP_READ_NCFS);
    (void)Fccu_Op(OP_READ_FCCU_STAT);

    // puts("Fccu_Init() STOP\n");

#else
#error FCCU not implemented on this MCU
#endif


}

