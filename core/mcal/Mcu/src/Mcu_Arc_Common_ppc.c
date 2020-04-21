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

/** @tagSettings DEFAULT_ARCHITECTURE= MPC5607B|MPC5645S|MPC5646B|MPC5748G|MPC5777M||MPC5777C */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2 */

/* ----------------------------[includes]------------------------------------*/

/*lint -e829 MISRA:OTHER:A +headerwarn option was previously issued for header 'stdio.h' [MISRA 2004 Rule 20.9, required]*/
#include <stdio.h>
#include "Cpu.h"
#include "Mcu.h"
#include "Mcu_Arc.h"
#include "irq.h"
#include "mpc55xx.h"
#if defined(CFG_FCCU)
#include "Mcu_fccu.h"
#endif
#if defined(CFG_BOOT_PBL)
#if defined(USE_WDG)
#include "Wdg.h"
#endif
#include "config.h" //needed for adresses defined in COMP_SBL_ACTIVATE,COMP_APPL_ACTIVATE,COMP_JUMP_DEACTIVATE
#endif

/* ----------------------------[private define]------------------------------*/

/* Adjust to NXP module naming */
#ifndef MC_RGM
#define MC_RGM      RGM
#endif

/* ----------------------------[private macro]-------------------------------*/
/* ----------------------------[private typedef]-----------------------------*/
/* ----------------------------[private function prototypes]-----------------*/
/* ----------------------------[private variables]---------------------------*/
#define SPR_PIR 286UL
#define SPR_PVR 287UL

/* ----------------------------[private functions]---------------------------*/
/* ----------------------------[public functions]----------------------------*/

/*lint -e9003 MISRA:OTHER:Readability:[MISRA 2012 Rule 8.9, advisory]*/
//__ram_start is the start address AFTER the boot message, the __boot_msg_start is the starting adress for the boot message
extern uint8 __ram_start[];
extern uint8 __SP_END[];

#if defined(CFG_BOOT_MSG_USED)/*This should be defined in the buildconfig.mk if we will use a boot message*/
extern uint8 __boot_msg_start[];
#endif

uint8 EccError = 0u;
#if defined(CFG_MPC5748G)
static Mcu_ResetType Identify_ResetReason(void);
#endif
#if defined(CFG_BOOT_PBL) || defined(CFG_BOOT_SBL)
void BootMsg_init(void);
#endif

/**
 * @brief  Function to check hardware registers for a destructive reset, ie
 *         ECC RAM must be re-initialized
 * @retval 1 - A destructive reset
 */
static uint16 destructiveReset(void) {
    uint16 rv = 0u;

#if defined(CFG_MPC560X) || defined(CFG_MPC5645S) || defined (CFG_MPC5643L) || defined(CFG_SPC56XL70) || defined(CFG_MPC5646B) || ((defined(CFG_MPC57XX)) && (!defined(CFG_MPC5777C)))
    if( MC_RGM.DES.R != 0u ) {
        rv = 1u;
    } else {
        /* Debugger issues F_EXR + F_ST_DONE */
        if( MC_RGM.FES.R == 0x5u ) {
            rv = 1u;
        }
    }
#elif defined(CFG_MPC5516) || defined(CFG_MPC5567 ) ||  defined(CFG_MPC5668) || defined(CFG_MPC5644A) || defined(CFG_MPC563XM) || defined (CFG_MPC5777C)
    /* PORS, ERS, LLRS, LCRS are destructive ( See for example mpc5668, 10.5.2 ) */
    if( SIU.RSR.R & 0xf0000000uL ) {
        rv = 1u;
    }
#else
#error CPU not supported
#endif

    return rv;
}

static void Mcu_Arc_InitECC(void) {
    static const uint64 val = 0uL;
    if (destructiveReset() == 1u) {
#ifdef CFG_ECCINIT_128BYTE_ALIGNED
#ifdef CFG_BOOT_MSG_USED
        /*lint -e{946, 947, 732} LINT:OTHER:suppress "loss of sign"  : Relational or subtract operator applied to pointers[MISRA 2012 Rule 18.3, required]*/
        initECC_128bytesAligned(__boot_msg_start, __SP_END - __boot_msg_start); //reset all ram
#else
        initECC_128bytesAligned(__ram_start, __SP_END - __ram_start);//reset all ram
#endif /*CFG_BOOT_MSG_USED*/
#else
#ifdef CFG_BOOT_MSG_USED
        /*lint -e{946, 960, 947, 732, 725} LINT:OTHER:suppress "loss of sign"  : Relational or subtract operator applied to pointers[MISRA 2012 Rule 18.3, required]*/
        memset_uint64(__boot_msg_start, &val, __SP_END - __boot_msg_start); //reset all ram
#else
        memset_uint64(__ram_start, &val, __SP_END - __ram_start); //reset all ram
#endif/*CFG_BOOT_MSG_USED*/
#endif
    }
    else {/*not destructive reset*/
#if defined(CFG_BOOT_PBL) || defined(CFG_BOOT_SBL)
        memset_uint64(__ram_start, &val, __SP_END - __ram_start); //reset all ram after boot message because boot message is already initialized
#elif (defined(CFG_MPC5748G) && defined(CFG_BOOT_MSG_USED))/*if it is not PBL or SBL and CFG_MPC5748G. Identify_ResetReason is implemented only for MPC5748G*/
        Mcu_ResetType r;
        r = Identify_ResetReason();
        if( r == MCU_SW_RESET ) {
            memset_uint64(__ram_start, &val, __SP_END - __ram_start); //reset all ram after boot message.
            //On a SW reset, we only need to keep the contents of __boot_message.
        }
        else {/*not software reset*/
            memset_uint64(__boot_msg_start, &val, __SP_END - __boot_msg_start); //reset all ram
        }
#endif
    }
}

#if !defined(CFG_SIMULATOR)
/**
 * Reads the CPU info, core and name.
 * @param pvr
 * @return
 */
static const cpu_info_t *Mcu_IdentifyCpu(uint32 pvr) {
    uint32 i;
    uint32 num;

    const cpu_info_t *c = Mcu_Arc_GetCpuInfoList(&num);
    /*lint -e{9008, 9049} MISRA:OTHER:OTHER to increase readability : comma operator used [MISRA 2012 Rule 12.3, advisory]*/
    for (i = 0u; i < num; i++, c++) {
        if (c->pvr == pvr) {
            /*lint -e{904} MISRA:OTHER:OTHER to increase readability : Return statement before end of function , [MISRA 2012 Rule 15.5, advisory]*/
            return c;
        }
    }
    return NULL_PTR;
}

/**
 * Reads Core info
 * @param pvr
 * @return
 */
static const core_info_t *Mcu_IdentifyCore(uint32 pvr) {
    uint32 i;
    uint32 num;

    const core_info_t *c = Mcu_Arc_GetCoreInfoList(&num);
    /*lint -e{9008, 9049} MISRA:OTHER:OTHER to increase readability : comma operator used [MISRA 2012 Rule 12.3, advisory]*/
    for (i = 0u; i < num; i++, c++) {
        if (c->pvr == pvr) {
            /*lint -e{904} MISRA:OTHER:OTHER to increase readability : Return statement before end of function , [MISRA 2012 Rule 15.5, advisory]*/
            return c;
        }
    }

    return NULL_PTR;
}

/*lint -e586 MISRA:OTHER: function 'printf' is deprecated. [MISRA 2012 Rule 21.6, required]*/
/**
 * Allow standard library functions to be used as this function is used for tests only.
 */
void Mcu_Arc_PrintInfo(void) {
    uint32 i;
    uint32 cnum;
    uint32 num;
    const cpu_info_t *cpu = Mcu_Arc_GetCpuInfoList(&cnum);
    const core_info_t *core = Mcu_Arc_GetCoreInfoList(&num);

    printf("CPU: %s\n"
            "  Cores: %u\n", cpu->name, cnum);

    for (i = 0u; i < num; i++) {
        printf("  %10s %10s\n", core->name, core->info);
        core++;
    }

}

/**
 * Checks that it is possible to identify CPU and core. If not, this function will hang.
 * @return
 */
static uint32 Mcu_CheckCpu(void) {
    uint32 pvr;

    const cpu_info_t *cpuType;
    const core_info_t *coreType;

    /*lint -e{950, 530, 9008} MISRA:FALSE_POSITIVE:Non-ANSI reserved word or construct: 'asm' , [MISRA 2012 Rule 1.2, advisory]*/
    pvr = get_spr(SPR_PVR);
    cpuType = Mcu_IdentifyCpu(pvr);
    coreType = Mcu_IdentifyCore(pvr);

    if ((cpuType == NULL_PTR) || (coreType == NULL_PTR)) {
        // Just hang
        /*lint -e{716,  9012, 9036} MISRA:OTHER: this is the intended behavior [MISRA 2012 Rule 14.4, required]*/
        while (TRUE) {
        }
    }

    return 0uL;
}
#endif

/**
 * Function that perform all necessary initialization needed to to run software, such as disabling watchdog,
 * init ECC RAM, setup exception vectors etc
 */
void Mcu_Arc_InitZero(void) {

    /********************************************************************************
     * NOTE
     *
     * This function will be called before BSS and DATA are initialized.
     * Ensure that you do not access any global or static variables before
     * BSS and DATA is initialized
     ********************************************************************************/
    Mcu_Arc_WdgExtendTimeout();

#if !defined(CFG_SIMULATOR)
    (void) Mcu_CheckCpu();
#endif

#if defined(USE_KERNEL)
    Irq_Init();
#endif

    Mcu_Arc_PlatformInit();

    /* PBL or SBL build specific */
#if defined(CFG_BOOT_PBL)
    BootMsg_init(); /*Initialization of the boot message*/
#endif

    /* PBL build specific */
#if defined(CFG_BOOT_PBL)
    if (COMP_SBL_ACTIVATE == CompToBeActivated)
    {
        SuspendAllInterrupts();
        CompToBeActivated = COMP_JUMP_DEACTIVATE;
        (*(void (*)(void))(SbLStartAddress))();
    } else if (COMP_APPL_ACTIVATE == CompToBeActivated) {
        SuspendAllInterrupts();
#if defined(USE_WDG)
        Wdg_SetMode(WDGIF_OFF_MODE);
#endif
        CompToBeActivated = COMP_JUMP_DEACTIVATE;
        (*(void (*)(void))(ApplStartAddress))();
    } else {
        /* Do nothing */
    }
#endif

    Mcu_Arc_InitECC();

#if defined(CFG_MCU_CACHE_I)
    Cache_EnableI();
#endif
#if defined(CFG_MCU_CACHE_D) && (!defined(USE_TTY_WINIDEA))
    Cache_EnableD();
#endif
#if defined(CFG_MCU_CACHE_U)
    Cache_EnableU();
#endif
#if defined(CFG_FCCU) && (!defined(USE_SMAL))
    Fccu_Init();
#endif
}

/**
 * Reads the ECC erros and clears it
 * @param err
 */
void Mcu_Arc_GetECCError(uint8 *err) {

    *err = EccError;
    /* Clear stored  */
    EccError = 0u;

}
/*lint -e923 MISSRA : HARDWARE_ACCESS : cast from unsigned long to pointer, [MISRA 2012 Rule 11.6, required]*/
#if defined(CFG_MPC5643L) || defined(CFG_MPC5645S) || defined(CFG_MPC5646B) || defined(CFG_SPC56XL70) || defined(CFG_MPC560X) || defined(CFG_MPC5744P) || defined(CFG_MPC5777M) || defined(CFG_MPC5748G) || defined(CFG_MPC5747C) || defined(CFG_MPC5746C)
void Mcu_Arc_SwitchMode( uint32 mode ) {

#ifndef ME
#define ME MC_ME
#endif
    /* Enter RUN0 Mode & Key */
    ME.MCTL.R = 0x00005AF0uL | (mode << 28uL);
    /* Enter RUN0 Mode & Inverted Key */
    ME.MCTL.R = 0x0000A50FuL | (mode << 28uL);
#if !defined(CFG_SIMULATOR)
    /* Wait for mode transition to complete */
    while (ME.GS.B.S_MTRANS != 0u) {}
    /* Verify RUN0 is the current mode */
    while(ME.GS.B.S_CURRENTMODE != mode) {}

#endif
}

uint32 Mcu_Arc_GetMode( void ) {

    return ME.GS.B.S_CURRENTMODE;
}
#endif

/**
 * Function that returns the reason for the latest reset.
 */
static Mcu_ResetType Identify_ResetReason(void) {
    Mcu_ResetType resetReason = MCU_RESET_UNDEFINED;
#if defined(CFG_MPC5748G)
    /*lint -save -e970, -e9018, -e923 HARDWARE_ACCESS */
    if( MC_RGM.FES.B.F_SOFT_FUNC ) {
        resetReason = MCU_SW_RESET;
    } else if( MC_RGM.DES.B.F_POR ) {
        resetReason = MCU_POWER_ON_RESET;
    } else if( MC_RGM.DES.B.F_SWT0_RES ) {
        resetReason = MCU_WATCHDOG_RESET;
    }
    else {
        resetReason = MCU_RESET_UNDEFINED;
    }
#endif
    return resetReason;
}

/**
 * Function that resets the boot messaage area in RAM if a destructive reset has occured.
 */
#if defined(CFG_BOOT_PBL)
void BootMsg_init(void) {
    if (destructiveReset() == 1u) {
#ifdef CFG_ECCINIT_128BYTE_ALIGNED
        /*lint -e{946, 947, 732} LINT:OTHER:suppress "loss of sign"  : Relational or subtract operator applied to pointers[MISRA 2012 Rule 18.3, required]*/
        initECC_128bytesAligned(__boot_msg_start, __ram_start - __boot_msg_start); //reset boot message only (to save time)
#else
        static const uint64 val = 0u;
        /*lint -e{946, 947, 732} LINT:OTHER:suppress "loss of sign"  : Relational or subtract operator applied to pointers[MISRA 2012 Rule 18.3, required]*/
        memset_uint64(__boot_msg_start, &val, __ram_start - __boot_msg_start); //reset boot message only (to save time)
#endif
    }
}
#endif
