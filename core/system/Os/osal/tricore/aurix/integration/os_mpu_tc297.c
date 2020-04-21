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
 * @file    os_mpu_tc2xx.c
 * @brief   Setup MPU for Aurix
 * @details Setup of MPU (TriCore TC1.6P & TC1.6E User manual) based on range.
 *          There are two types of protection ranges, data and code.
 *          Alignment for the ranges are 8-bytes
 *          The protection registers are named
 *            DPRx_L - lower data address
 *            DPRx_H - high data address
 *            CPRx_L - lower code address
 *            CPRx_H - high code address
 *
 *
 *                   #Data     #Code
 *          TC212      16       8
 *
 *          The MPU uses sets (CPXE_n, DPRE_n and DPWE_n) to define access privileges and
 *          the current set is set in PSW.PRS.
 *          Set-0, reserved for supervisor mode (seems reserved by HW for this)
 *          Set-1, we use for user access. This set is re-written for each context switch,e.g. PSW.PRS
 *                 is always set to 1 for user-land access.
 *
 *
 *              Start     End        Description                    Nick
 *            -----------------------------------------------------------------------
 *            00 8000 0000 800F FFFF  TC22x: Program Flash           (PFlash)
 *            01 7000 0000 7001 5FFF  TC22x: CPU0 Data               (CPU0.DSPR)            88K
 *            02 7010 0000 7010 1FFF  CPU0 Program Scratch-Pad SRAM  (CPU0.PSPR)            8K
 *               AF00 0000 AF0F FFFF  Data Flash 0                   (DF0 Address Range)
 *               AF10 0000 AF10 3FFF  Data Flash 0                   (DF0 Address Range)
 *            03 F000 0000 FFFF FFFF  Peripheral                     Peripheral
 *            04 					  Shared data
 *            05 ....                 Shared bss
 *            06                      Application data
 *            07                      Application bss
 *
 *
 *          This can be seen as a matrix with the columns representing the xPRx register and
 *          the rows representing the set and it access attributes
 *
 *          This gives us the following table and values:
 *
 *
 *                                    C C C C C C C C C
 *                      1 1 1 1 1 1
 *                      5 4 3 2 1 0 9 8|7 6 5 4|3 2 1 0        value
 *            -----------------------------------------------------
 *            Set-0 DPRE                    X X X X X X    --> 0x003f
 *            Set-0 DPWE                      X X X X      --> 0x001e
 *            Set-0 CPXE                              X    --> 0x0001
 *
 *            Set-1 DPRE                    X X|X X X X    --> 0x003f
 *            Set-1 DPWE               |X X X X|X          --> 0x00f8
 *            Set-1 CPXE                              X    --> 0x0001
 *
 *            C - code
 *            DPRE - Data Protection Read Enable
 *            DPWE - Data Protection Write Enable
 *            CPXE - Code Protection Execute Enable
 *
 *            Note ! Set-0 is supervisor.
 *
 * @addtogroup os
 * @{
 */

/* ----------------------------[includes]------------------------------------*/

#include "os_i.h"
#include "IfxCpu.h"
#include "os_mm_regs.h"

/* ----------------------------[private define]------------------------------*/

#define CPU_FLASH                       0U
#define CPU_FLASH_LB                    0x80000000UL
#define CPU_FLASH_UB                    0x807FFFFFUL

#define CPU0_DATA_SCRATCHPAD_SRAM       1U
#define CPU0_DATA_SCRATCHPAD_SRAM_LB    0x70000000UL
#define CPU0_DATA_SCRATCHPAD_SRAM_UB    0x7001DFFFUL

#define CPU0_INST_SCRATCHPAD_SRAM       2U
#define CPU0_INST_SCRATCHPAD_SRAM_LB    0x70100000UL
#define CPU0_INST_SCRATCHPAD_SRAM_UB    0x70107FFFUL

#define TRICORE_PERIPHERAL              3U
#define TRICORE_PERIPHERAL_LB           0xF0000000UL
#define TRICORE_PERIPHERAL_UB           0xFFFFFFFFUL

#define TASK_DATA_SPACE                 7U
#define TASK_BSS_SPACE                  8U


/* ----------------------------[private macro]-------------------------------*/

#define WRITE_CR( _reg, _val) \
    __mtcr(_reg, _val);   \
    _isync();

/* ----------------------------[private typedef]-----------------------------*/
/* ----------------------------[private function prototypes]-----------------*/
/* ----------------------------[private variables]---------------------------*/
/* ----------------------------[private functions]---------------------------*/
/*lint -save -e950 MISRA:FALSE_POSITIVE:keyword asm for assembly instruction execution:
 *[MISRA 2012 Directive 2.1, required], [MISRA 2012 Rule 1.1, required], [MISRA 2012 Rule 1.2, advisory] */
/*lint -save -e9036 -e970 -e923 -e545 -e818 MISRA:FALSE_POSITIVE:Allow calculation of address using pointers arithmetic:
 *[MISRA 2012 Rule 14.4, required], [MISRA 2004 Rule 6.3, advisory], [MISRA 2012 Directive 4.6, advisory], [MISRA 2012 Rule 11.1, required], [MISRA 2012 Rule 11.4, advisory], [MISRA 2012 Rule 11.6, required], [MISRA 2004 Rule 16.7, advisory], [MISRA 2012 Rule 8.13, advisory]*/
/*lint -save -e529 -e438 MISRA:FALSE_POSITIVE:Allow assembly execution:[MISRA 2012 Rule 2.2, required] */
/*lint -save -e530 -e9008 -e838 -e845 MISRA:FALSE_POSITIVE:Bitwise operation and standard macro expansion:[MISRA 2004 Rule 9.1, required], [MISRA 2012 Rule 9.1, mandatory] */



#if (OS_SC3==STD_ON) || (OS_SC4==STD_ON)
/* @req ARC_SWS_OSAL_00015 */
void Os_MMInit( void ) {

    uint32 regVal = 0U;

    /* Data */
    WRITE_CR(CPU_DPR0_L, CPU_FLASH_LB);
    WRITE_CR(CPU_DPR0_U, CPU_FLASH_UB);
    WRITE_CR(CPU_DPR1_L, CPU0_INST_SCRATCHPAD_SRAM_LB);
    WRITE_CR(CPU_DPR1_U, CPU0_INST_SCRATCHPAD_SRAM_UB);
    WRITE_CR(CPU_DPR2_L, CPU0_DATA_SCRATCHPAD_SRAM_LB);
    WRITE_CR(CPU_DPR2_U, CPU0_DATA_SCRATCHPAD_SRAM_UB);
    WRITE_CR(CPU_DPR3_L, TRICORE_PERIPHERAL_LB);
    WRITE_CR(CPU_DPR3_U, TRICORE_PERIPHERAL_UB);

    /* .data.shared
     * __OS_START_SEC_shared_data_shared
     * __OS_STOP_SEC_shared_data_shared
     * */
    extern char __OS_START_SEC_shared_data_shared[];
    extern char __OS_STOP_SEC_shared_data_shared[];

    WRITE_CR(CPU_DPR4_L, (uint32)&__OS_START_SEC_shared_data_shared);
    WRITE_CR(CPU_DPR4_U, (uint32)&__OS_STOP_SEC_shared_data_shared);

    /* .bss.shared
     * __OS_START_SEC_shared_bss_shared
     * __OS_STOP_SEC_shared_bss_shared
     * */
    extern char __OS_START_SEC_shared_bss_shared[];
    extern char __OS_STOP_SEC_shared_bss_shared[];

    WRITE_CR(CPU_DPR5_L, (uint32)&__OS_START_SEC_shared_bss_shared);
    WRITE_CR(CPU_DPR5_U, (uint32)&__OS_STOP_SEC_shared_bss_shared);

    /* Code */
    WRITE_CR(CPU_CPR0_L, CPU_FLASH_LB);
    WRITE_CR(CPU_CPR0_U, CPU_FLASH_UB);

    /*
    * Supervisor access is Set-0 so set that up
    */
    WRITE_CR(CPU_DPRE0, 0x003fUL);     /* RE, See above doc */
    WRITE_CR(CPU_DPWE0, 0x001eUL);     /* WE, See above doc */
    WRITE_CR(CPU_CPXE0, 0x0001UL);     /* XE, See above doc */

    /*
     * User access is Set-1 so set that up
     */
    WRITE_CR(CPU_DPRE1, 0x003fUL);     /* RE, See above doc */
    WRITE_CR(CPU_DPWE1, 0x00f8UL);     /* WE, See above doc */
    WRITE_CR(CPU_CPXE1, 0x0001UL);     /* XE, See above doc */


     /* Update System Control Register to enable MPU
      * U1_IOS: Enable User-1 to access peripherals.
      * U1_IED: User-1 mode to enable/disable interrupt is disabled
      * PROTEN: Enable Memory protection globally and set
      */
     regVal = __mfcr(CPU_SYSCON);
     regVal = regVal |
             (0UL << 17U) |     /* U1_IOS */
             (1UL << 16U) |     /* U1_IED */
             (1UL << 1U);       /* PROTEN */
     WRITE_CR(CPU_SYSCON, regVal);
}


/* ----------------------------[public functions]----------------------------*/

/* @req ARC_SWS_OSAL_00016 */
void Os_MMSetApplUserMode( const OsAppVarType *aP ) {

    /* @req SWS_Os_00086 */
    /* @req SWS_Os_00198 */
    /* @req SWS_Os_00207 */
    /* @req SWS_Os_00356 */
    // data
    WRITE_CR(CPU_DPR6_L, aP->regs[MPU0_REG_TASK_DATA_START]);
    WRITE_CR(CPU_DPR6_U, aP->regs[MPU0_REG_TASK_DATA_END]);
    /* @req SWS_Os_00355 */
    // bss
    WRITE_CR(CPU_DPR7_L, aP->regs[MPU0_REG_TASK_BSS_START]);
    WRITE_CR(CPU_DPR7_U, aP->regs[MPU0_REG_TASK_BSS_END]);

   /* Note! Permissions should already be setup in Os_MMInit so no need to write those */

#if defined(CFG_SAFETY_PLATFORM)
    switch(GetApplicationID()) {
        case APPLICATION_ID_OsApplication_QM:
            setupRegion(PRegionCfg_QM, ARRAY_LENGTH(PRegionCfg_QM));
            break;
        case APPLICATION_ID_OsApplication_A0:
            setupRegion(PRegionCfg_A0, ARRAY_LENGTH(PRegionCfg_A0));
            break;
        default:
            break;
    }


#endif

}

/**
 * @breif Set user mode for and ISR
 *
 * @param isrPtr    Pointer to a task
 */
/* @req ARC_SWS_OSAL_00017 */
void Os_MMSetUserModeIsr( const OsIsrVarType *isrPtr  ) {
    const OsAppVarType *aP = Os_ApplGet(isrPtr->constPtr->appOwner);
    if( aP->trusted == FALSE) {
    	Os_MMSetApplUserMode(aP);
    }
}


/* @req ARC_SWS_OSAL_00018 */
void Os_MMSetUserMode( const OsTaskVarType *pcbPtr ) {
    const OsAppVarType *aP = Os_ApplGet(pcbPtr->constPtr->applOwnerId);

    if( aP->trusted == FALSE) {
        Os_MMSetApplUserMode(aP);
    }
}


boolean Os_MMValidPerAddressRange( AreaIdType area, uint32 addr, uint32 size ) {
    boolean rv = FALSE;
    (void)area;
    (void)addr;
    (void)size;

    return rv;
}


#endif /* (OS_SC3 == STD_ON ) || (OS_SC4 == STD_ON ) */

/** @} */
