/**
 * \file Ifx_Ssw_Tc1.c
 * \brief Startup Software for Core1
 *
 * \copyright Copyright (c) 2016 Infineon Technologies AG. All rights reserved.
 *
 * $Date: 2016-06-09 08:52:44
 *
 *                                 IMPORTANT NOTICE
 *
 *
 * Infineon Technologies AG (Infineon) is supplying this file for use
 * exclusively with Infineon's microcontroller products. This file can be freely
 * distributed within development tools that are supporting such microcontroller
 * products.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 */


/*******************************************************************************
**                      Includes                                              **
*******************************************************************************/
#include "Ifx_Cfg.h"
#include "Ifx_Ssw.h"
#include "Ifx_Ssw_Infra.h"

#include "IfxScu_reg.h"
#include "IfxStm_reg.h"

/******************************************************************************/
/*                          Macros                                            */
/******************************************************************************/
/** \brief Configuration for cache enable.
 *
 */
#ifndef IFX_CFG_SSW_ENABLE_TRICORE1_PCACHE
#   define IFX_CFG_SSW_ENABLE_TRICORE1_PCACHE (1)  /**< Program Cache enabled by default*/
#endif
#ifndef IFX_CFG_SSW_ENABLE_TRICORE1_DCACHE
#   define IFX_CFG_SSW_ENABLE_TRICORE1_DCACHE (1)  /**< Data Cache enabled by default*/
#endif
/*******************************************************************************
**                      Imported Function Declarations                        **
*******************************************************************************/
IFX_SSW_COMMON_LINKER_SYMBOLS();
IFX_SSW_CORE_LINKER_SYMBOLS(1);

extern void core1_main(void);
#if defined(__TASKING__)
__asm("\t .extern core1_main");
#endif

/*******************************************************************************
**                      Private Constant Definitions                          **
*******************************************************************************/

/*********************************************************************************
* - startup code
*********************************************************************************/
/*Add options to eliminate usage of stack pointers unnecessarily*/
#if defined(__GNUC__)
#pragma GCC optimize ("-O1")
#endif

void _Core1_start(void)
{
    unsigned int stmCount;
    unsigned int stmCountBegin = STM0_TIM0.U;		/* it is necessary to get this value to have minimum 100uS delay in subsequent CPU start */
    unsigned short wdtPassword = Ifx_Ssw_getCpuWatchdogPasswordInline(&MODULE_SCU.WDTCPU[1]);

    /* Load user stack pointer */
    Ifx_Ssw_setAddressReg(sp, __USTACK(1));
    Ifx_Ssw_DSYNC();

	/* Set the PSW to its reset value in case of a warm start,clear PSW.IS */
	Ifx_Ssw_MTCR(CPU_PSW, IFX_CFG_SSW_PSW_DEFAULT);

    /* Clear the ENDINIT bit in the WDT_CON0 register, inline function */
	Ifx_Ssw_clearCpuEndinitInline(&MODULE_SCU.WDTCPU[1], wdtPassword);

	{
		Ifx_CPU_PCON0 pcon0;
		pcon0.U = 0;
		pcon0.B.PCBYP = IFX_CFG_SSW_ENABLE_TRICORE1_PCACHE ? 0 : 1; /*depending on the enable bypass bit is reset/set */
		Ifx_Ssw_MTCR(CPU_PCON0, pcon0.U);
		Ifx_Ssw_ISYNC();
	}

	{
		Ifx_CPU_DCON0 dcon0;
		dcon0.U = 0;
		dcon0.B.DCBYP = IFX_CFG_SSW_ENABLE_TRICORE1_DCACHE ? 0 : 1; /*depending on the enable bypass bit is reset/set */
		Ifx_Ssw_MTCR(CPU_DCON0, dcon0.U);
		Ifx_Ssw_ISYNC();
	}

    /* Load Base Address of Trap Vector Table. */
	Ifx_Ssw_MTCR(CPU_BTV, (unsigned int)__TRAPTAB(1));

    /* Load Base Address of Interrupt Vector Table. we will do this later in the program */
	Ifx_Ssw_MTCR(CPU_BIV, (unsigned int)__INTTAB(1));

    /* Load interrupt stack pointer. */
	Ifx_Ssw_MTCR(CPU_ISP, (unsigned int)__ISTACK(1));

    Ifx_Ssw_setCpuEndinitInline(&MODULE_SCU.WDTCPU[1], wdtPassword);

    /* initialize SDA base pointers */
    Ifx_Ssw_setAddressReg(a0, __SDATA1(1));
    Ifx_Ssw_setAddressReg(a1, __SDATA2(1));
    Ifx_Ssw_setAddressReg(a8, __SDATA3(1));
    Ifx_Ssw_setAddressReg(a9, __SDATA4(1));

    Ifx_Ssw_initCSA((unsigned int *)__CSA(1), (unsigned int *)__CSA_END(1));

    stmCount      = (unsigned int)(Ifx_Ssw_getStmFrequency() * IFX_SCU_STARTCPU_WAIT_TIME_IN_SECONDS);
    while ((unsigned int)(STM0_TIM0.U - stmCountBegin) < stmCount)
    {
        /* There is no need to check overflow of the STM timer.
         * When counter after overflow subtracted with counter before overflow,
         * the subtraction result will be as expected, as long as both are unsigned 32 bits
         * eg: stmCountBegin= 0xFFFFFFFE (before overflow)
         *     stmCountNow = 0x00000002 (before overflow)
         *     diff= stmCountNow - stmCountBegin = 4 as expected.*/
    }
    /*Start remaining cores down the line in a daisy-chain fashion*/
#if (IFX_CFG_SSW_ENABLE_TRICORE2 != 0)
    (void)Ifx_Ssw_startCore(&MODULE_CPU2, (unsigned int)&_Core2_start);       /*The status returned by function call is ignored */
#endif
#if (IFX_CFG_SSW_ENABLE_TRICORE2 == 0)
#if (IFX_CFG_CPU_CSTART_ENABLE_TRICORE3 != 0)
    (void)Ifx_Ssw_startCore(&MODULE_CPU3, (unsigned int)&_Core3_start);       /*The status returned by function call is ignored */
#endif
#if (IFX_CFG_SSW_ENABLE_TRICORE3 == 0)
#if (IFX_CFG_SSW_ENABLE_TRICORE4 != 0)
    (void)Ifx_Ssw_startCore(&MODULE_CPU4, (unsigned int)&_Core4_start);       /*The status returned by function call is ignored */
#endif
#if (IFX_CFG_SSW_ENABLE_TRICORE4 == 0)
#if (IFX_CFG_SSW_ENABLE_TRICORE5 != 0)
    (void)Ifx_Ssw_startCore(&MODULE_CPU5, (unsigned int)&_Core5_start);       /*The status returned by function call is ignored */
#endif
#endif	/* #if (IFX_CFG_CPU_CSTART_ENABLE_TRICORE4 == 0) */
#endif	/* #if (IFX_CFG_CPU_CSTART_ENABLE_TRICORE3 == 0) */
#endif	/* #if (IFX_CFG_CPU_CSTART_ENABLE_TRICORE2 == 0) */

    /*Initialize CPU Private Global Variables*/
    //TODO : This implementation is done once all compilers support this

    /*Call main function of Cpu1 */
    Ifx_Ssw_jumpToFunction(core1_main);
}
/*Restore the options to command line provided ones*/
#if defined(__GNUC__)
#pragma GCC reset_options
#endif



