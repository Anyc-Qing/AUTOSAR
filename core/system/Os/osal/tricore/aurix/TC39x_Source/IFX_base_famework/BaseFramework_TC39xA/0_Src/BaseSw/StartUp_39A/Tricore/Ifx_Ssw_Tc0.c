/**
 * \file Ifx_Ssw_Tc0.c
 * \brief Startup Software for Core0
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

/*******************************************************************************
**                       Macros                                               **
*******************************************************************************/
#ifndef IFX_CFG_SSW_ENABLE_TRICORE0_PCACHE
#define IFX_CFG_SSW_ENABLE_TRICORE0_PCACHE (1U)
#endif

#ifndef IFX_CFG_SSW_ENABLE_TRICORE0_DCACHE
#define IFX_CFG_SSW_ENABLE_TRICORE0_DCACHE (1U)
#endif

/*******************************************************************************
**                       Prototypes & Externals                               **
*******************************************************************************/
/** !IMPORTANT: The SSW Configuration shall be defined at Application SW Configuration
 * Please refer to iLLD demos for startup sw configuration (Ifx_Cfg_Ssw.c and .h)
 */
extern const Ifx_Ssw_Callouts Ifx_Cfg_Ssw_calloutCfg;

static void __Core0_startPhase2_pmsInit(void);
static void __Core0_startPhase2_handlePmsInitError(void);
static void __Core0_startPhase2_handleLbist(void);
static void __Core0_startPhase2_checkPmsInit(void);
static void __Core0_startPhase2_handleLbistError(void);
static void __Core0_startPhase2_handleMbist(void);
static void __Core0_startPhase2_handleMbistError(void);
static void __Core0_startPhase3(void);
static void __Core0_startPhase4(void);
static void __Core0_startPhase5(void);

IFX_SSW_COMMON_LINKER_SYMBOLS();
IFX_SSW_CORE_LINKER_SYMBOLS(0);

/*******************************************************************************
**                       Defines                                              **
*******************************************************************************/
extern void core0_main(void);
#if defined(__TASKING__)
__asm("\t .extern core0_main");
#endif

/*Add options to eliminate usage of stack pointers unnecessarily*/
#if defined(__GNUC__)
#pragma GCC optimize ("-O1")
#endif

void _Core0_start(void)
{
	unsigned char resetCause;
	/* initialize A1 pointer to use the global constants with small data addressing*/
	Ifx_Ssw_setAddressReg(a1, __SDATA2(0));

	/* Set the PSW to its reset value in case of a warm start,clear PSW.IS */
	Ifx_Ssw_MTCR(CPU_PSW, IFX_CFG_SSW_PSW_DEFAULT);

	{ /* Startup Phase 1: Reset Evaluation ****************************************/
		/*Store the evaluation result*/
		resetCause= Ifx_Ssw_isApplicationReset();
	}
	if(resetCause != 1)
	{ /* Startup Phase 2: Test first set of HW parts ******************************/
		/* This phase is executed only if last reset is not of type application reset */
		/* Power and EVRC configurations */
		Ifx_Ssw_jumpToFunction(__Core0_startPhase2_pmsInit);
	}
	else
	{
		/*Next, proceed with Phase3 of startup*/
		Ifx_Ssw_jumpToFunction(__Core0_startPhase3);
	}
}

static void __Core0_startPhase2_pmsInit(void)
{
	if(Ifx_Cfg_Ssw_calloutCfg.pms->initPmsCalloutJump != IFX_SSW_NULL_PTR)
	{
		Ifx_Ssw_jumpToFunctionWithLink(Ifx_Cfg_Ssw_calloutCfg.pms->initPmsCalloutJump);
		if(Ifx_Ssw_getDataParam0()==0)  /*the function returns the done status for pmsInit */
		{
			Ifx_Ssw_jumpToFunction(__Core0_startPhase2_handlePmsInitError);
		}
		else /*pms init function was successful without any timeouts*/
		{
			Ifx_Ssw_jumpToFunction(__Core0_startPhase2_checkPmsInit);
		}
	}

	/*Next, proceed to handle LBIST*/
	Ifx_Ssw_jumpToFunction(__Core0_startPhase2_handleLbist);
}

static void __Core0_startPhase2_checkPmsInit(void)
{
	if(Ifx_Cfg_Ssw_calloutCfg.pms->pmsInitCheckCallOutJump != IFX_SSW_NULL_PTR)
	{
		Ifx_Ssw_jumpToFunctionWithLink(Ifx_Cfg_Ssw_calloutCfg.pms->pmsInitCheckCallOutJump);
		if(Ifx_Ssw_getDataParam0()==0)  /*the function returns the OK status for pmsInitCheck */
		{
			Ifx_Ssw_jumpToFunction(__Core0_startPhase2_handlePmsInitError);
		}
	}
	/*Next, proceed to handle LBIST*/
	Ifx_Ssw_jumpToFunction(__Core0_startPhase2_handleLbist);
}

static void __Core0_startPhase2_handlePmsInitError(void)
{
	if(Ifx_Cfg_Ssw_calloutCfg.pms->pmsInitErrorCallOutJump != IFX_SSW_NULL_PTR)
	{
		Ifx_Ssw_jumpToFunctionWithLink(Ifx_Cfg_Ssw_calloutCfg.pms->pmsInitErrorCallOutJump);
	}
	/*Next, proceed to handle LBIST*/
	Ifx_Ssw_jumpToFunction(__Core0_startPhase2_handleLbist);
}

static void __Core0_startPhase2_handleLbist(void)
{
	/*LBIST Tests and evaluation*/
	if(Ifx_Cfg_Ssw_calloutCfg.lbist->handleLbistCalloutJump != IFX_SSW_NULL_PTR)
	{
		Ifx_Ssw_jumpToFunctionWithLink(Ifx_Cfg_Ssw_calloutCfg.lbist->handleLbistCalloutJump);
		if(Ifx_Ssw_getDataParam0()==1)
		{
			Ifx_Ssw_jumpToFunction(__Core0_startPhase2_handleLbistError);
		}
	}

	/*Next, proceed to handle MBIST*/
	Ifx_Ssw_jumpToFunction(__Core0_startPhase2_handleMbist);
}

static void __Core0_startPhase2_handleLbistError(void)
{
	if(Ifx_Cfg_Ssw_calloutCfg.lbist->lbistErrorCallOutJump != IFX_SSW_NULL_PTR)
	{
		Ifx_Ssw_jumpToFunctionWithLink(Ifx_Cfg_Ssw_calloutCfg.lbist->lbistErrorCallOutJump);
	}

	/*Next, proceed to handle MBIST*/
	Ifx_Ssw_jumpToFunction(__Core0_startPhase2_handleMbist);
}

static void __Core0_startPhase2_handleMbist(void)
{
	/*MBIST Tests and evaluation*/
	if(Ifx_Cfg_Ssw_calloutCfg.mbist->handleMbistAtSswPhase2CalloutJump != IFX_SSW_NULL_PTR)
	{
		Ifx_Ssw_jumpToFunctionWithLink(Ifx_Cfg_Ssw_calloutCfg.mbist->handleMbistAtSswPhase2CalloutJump);
		if(Ifx_Ssw_getDataParam0()==1)
		{
			Ifx_Ssw_jumpToFunction(__Core0_startPhase2_handleMbistError);
		}
	}
	/*Next, proceed with Phase3 of startup*/
	Ifx_Ssw_jumpToFunction(__Core0_startPhase3);
}

static void __Core0_startPhase2_handleMbistError(void)
{
	if(Ifx_Cfg_Ssw_calloutCfg.mbist->mbistErrorCallOut != IFX_SSW_NULL_PTR)
	{
		Ifx_Ssw_jumpToFunctionWithLink(Ifx_Cfg_Ssw_calloutCfg.mbist->mbistErrorCallOut);
	}

	/*Next, proceed with Phase3 of startup*/
	Ifx_Ssw_jumpToFunction(__Core0_startPhase3);
}

static void __Core0_startPhase3(void)
{
	{ /* Startup Phase 3: Initialize for Function call enablement *****************/
		/* Load user stack pointer */
		Ifx_Ssw_setAddressReg(a10, __USTACK(0));
		Ifx_Ssw_DSYNC();

		/* Setup the context save area linked list */
		Ifx_Ssw_initCSA((unsigned int *)__CSA(0), (unsigned int *)__CSA_END(0));     /*Initialize the context save area for CPU0. Function Calls Possible */

		/* Configure BIV, ISP and BTV registers (these are endinit protected registers) */
		{
			unsigned short cpuWdtPassword= Ifx_Ssw_getCpuWatchdogPassword(&MODULE_SCU.WDTCPU[0]);
			Ifx_Ssw_clearCpuEndinit(&MODULE_SCU.WDTCPU[0], cpuWdtPassword);
			Ifx_Ssw_MTCR(CPU_BTV, (unsigned int)__TRAPTAB(0));	/*Trap vector table initialization is necessary if it is not same as default value */
			Ifx_Ssw_MTCR(CPU_BIV, (unsigned int)__INTTAB(0));	/*Base interrupt vector table initialized */
			Ifx_Ssw_MTCR(CPU_ISP, (unsigned int)__ISTACK(0));	/*Interrupt stack pointer is configured */

			Ifx_Ssw_setCpuEndinit(&MODULE_SCU.WDTCPU[0], cpuWdtPassword);
		}
	}

	/*Next, proceed with Phase4 of startup*/
	Ifx_Ssw_jumpToFunction(__Core0_startPhase4);
}

static void __Core0_startPhase4(void)
{
	unsigned char resetCause;
	/*Get reset cause information again because this local var might have been overwritten*/
	resetCause= Ifx_Ssw_isApplicationReset();
	if(resetCause != 1)
    { /* Startup Phase 4: Test vital HW parts *************************************/
		/* Update safety watchdog reload value*/
		/* Service / disable both CPU and Safety watch-dogs */
		unsigned short cpuWdtPassword= Ifx_Ssw_getCpuWatchdogPassword(&MODULE_SCU.WDTCPU[0]);
		unsigned short safetyWdtPassword= Ifx_Ssw_getSafetyWatchdogPassword();
		Ifx_Ssw_disableCpuWatchdog(&MODULE_SCU.WDTCPU[0], cpuWdtPassword);
		Ifx_Ssw_disableSafetyWatchdog(safetyWdtPassword);

    	/* Initialize the clock system, !!! cannot use the global variables here !!! */
		if(Ifx_Cfg_Ssw_calloutCfg.clocks->initClocksCallOut != IFX_SSW_NULL_PTR)
		{
			unsigned char clockInitErrorStatus= Ifx_Cfg_Ssw_calloutCfg.clocks->initClocksCallOut();
			if(clockInitErrorStatus==1)
			{
				if(Ifx_Cfg_Ssw_calloutCfg.clocks->clocksInitErrorCallOut != IFX_SSW_NULL_PTR)
					Ifx_Cfg_Ssw_calloutCfg.clocks->clocksInitErrorCallOut();
			}
		}
		if(Ifx_Cfg_Ssw_calloutCfg.mbist->handleMbistAtSswPhase4Callout != IFX_SSW_NULL_PTR)
		{
			unsigned char mbistErrorStatus= Ifx_Cfg_Ssw_calloutCfg.mbist->handleMbistAtSswPhase4Callout();
			if(mbistErrorStatus==1)
			{
				if(Ifx_Cfg_Ssw_calloutCfg.mbist->mbistErrorCallOut != IFX_SSW_NULL_PTR)
					Ifx_Cfg_Ssw_calloutCfg.mbist->mbistErrorCallOut();
			}
		}
		if(Ifx_Cfg_Ssw_calloutCfg.sbst->handleSbstCallOut != IFX_SSW_NULL_PTR)
		{
			unsigned char sbstErrorStatus= Ifx_Cfg_Ssw_calloutCfg.sbst->handleSbstCallOut();
			if(sbstErrorStatus==1)
			{
				if(Ifx_Cfg_Ssw_calloutCfg.sbst->sbstErrorCallOut != IFX_SSW_NULL_PTR)
					Ifx_Cfg_Ssw_calloutCfg.sbst->sbstErrorCallOut();
			}
		}

		/* Service / enable both CPU and Safety watch-dogs */
    	Ifx_Ssw_enableCpuWatchdog(&MODULE_SCU.WDTCPU[0], cpuWdtPassword);
    	Ifx_Ssw_enableSafetyWatchdog(safetyWdtPassword);
    }

	/*Next, proceed with Phase4 of startup*/
	Ifx_Ssw_jumpToFunction(__Core0_startPhase5);
}

static void __Core0_startPhase5(void)
{
	{
		/* Startup Phase 5: C Init and Multicore startup ****************************/
#if defined(IFX_CFG_SSW_ENABLE_SMUALARMS)
		/* Enable the SMU alarms here */
#endif

		/*Start remaining cores as a daisy-chain*/
#if (IFX_CFG_SSW_ENABLE_TRICORE1 != 0)
		Ifx_Ssw_startCore(&MODULE_CPU1, (unsigned int)&_Core1_start);       /*The status returned by function call is ignored */
#endif	/* #if (IFX_CFG_CPU_CSTART_ENABLE_TRICORE1 != 0)*/
#if (IFX_CFG_SSW_ENABLE_TRICORE1 == 0)
#if (IFX_CFG_SSW_ENABLE_TRICORE2 != 0)
		Ifx_Ssw_startCore(&MODULE_CPU2, (unsigned int)&_Core2_start);       /*The status returned by function call is ignored */
#endif
#if (IFX_CFG_SSW_ENABLE_TRICORE2 == 0)
#if (IFX_CFG_SSW_ENABLE_TRICORE3 != 0)
		Ifx_Ssw_startCore(&MODULE_CPU3, (unsigned int)&_Core3_start);       /*The status returned by function call is ignored */
#endif
#if (IFX_CFG_SSW_ENABLE_TRICORE3 == 0)
#if (IFX_CFG_SSW_ENABLE_TRICORE4 != 0)
		Ifx_Ssw_startCore(&MODULE_CPU4, (unsigned int)&_Core4_start);       /*The status returned by function call is ignored */
#endif
#if (IFX_CFG_SSW_ENABLE_TRICORE4 == 0)
#if (IFX_CFG_SSW_ENABLE_TRICORE5 != 0)
		Ifx_Ssw_startCore(&MODULE_CPU5, (unsigned int)&_Core5_start);       /*The status returned by function call is ignored */
#endif
#endif	/* #if (IFX_CFG_CPU_CSTART_ENABLE_TRICORE4 == 0) */
#endif	/* #if (IFX_CFG_CPU_CSTART_ENABLE_TRICORE3 == 0) */
#endif	/* #if (IFX_CFG_CPU_CSTART_ENABLE_TRICORE2 == 0) */
#endif	/* #if (IFX_CFG_CPU_CSTART_ENABLE_TRICORE1 == 0) */


	    {
	    	unsigned short cpuWdtPassword= Ifx_Ssw_getCpuWatchdogPassword(&MODULE_SCU.WDTCPU[0]);
	    	unsigned short safetyWdtPassword= Ifx_Ssw_getSafetyWatchdogPassword();

	    	Ifx_Ssw_clearCpuEndinit(&MODULE_SCU.WDTCPU[0], cpuWdtPassword);

			/*Enable/ Disable the caches depending on the configuration. At this point cache are invalidated */
			{
				Ifx_CPU_PCON0 pcon0;
				pcon0.U = 0;
				pcon0.B.PCBYP = IFX_CFG_SSW_ENABLE_TRICORE0_PCACHE ? 0 : 1; /*depending on the enable bypass bit is reset/set */
				Ifx_Ssw_MTCR(CPU_PCON0, pcon0.U);
				Ifx_Ssw_ISYNC();
			}

			{
				Ifx_CPU_DCON0 dcon0;
				dcon0.U = 0;
				dcon0.B.DCBYP = IFX_CFG_SSW_ENABLE_TRICORE0_DCACHE ? 0 : 1; /*depending on the enable bypass bit is reset/set */
				Ifx_Ssw_MTCR(CPU_DCON0, dcon0.U);
				Ifx_Ssw_ISYNC();
			}

	    	/*Set A0 Pointer to access global variables with small data addressing*/
	    	Ifx_Ssw_setAddressReg(a0, __SDATA1(0));

	    	/* These to be un commented if A8 and A9 are required to be initialized */
	    	Ifx_Ssw_setAddressReg(a8, __SDATA3(0));
	    	Ifx_Ssw_setAddressReg(a9, __SDATA4(0));

	        Ifx_Ssw_setCpuEndinit(&MODULE_SCU.WDTCPU[0], cpuWdtPassword);

	    	/*CPU and safety watchdogs are enabled by default, C initialization functions are not servicing the watchdogs */
			Ifx_Ssw_disableCpuWatchdog(&MODULE_SCU.WDTCPU[0], cpuWdtPassword);
			Ifx_Ssw_disableSafetyWatchdog(safetyWdtPassword);

			Ifx_Ssw_C_Init();           /*Initialization of C runtime variables */

	    	Ifx_Ssw_enableSafetyWatchdog(safetyWdtPassword);

#if (IFX_CFG_SSW_ENABLE_TRICORE0 == 0)
			/*halt the CPU 0 if it is not needed to be enabled */
			Ifx_Ssw_setCpu0Idle();
#error "Disable CPU0 at startup is not supported. Disable in core0 Main";
#endif
	    	Ifx_Ssw_enableCpuWatchdog(&MODULE_SCU.WDTCPU[0], cpuWdtPassword);
	    }

	    /*Call main function of Cpu0 */
	    Ifx_Ssw_jumpToFunction(core0_main);
	}
}

/******************************************************************************
 *                        reset vector address                                *
 *****************************************************************************/
#if defined(__GNUC__)
#pragma section
#pragma section ".start" x
#endif
#if defined(__TASKING__)
#pragma protect on
#pragma section code "start"
#endif
#if defined(__DCC__)
#pragma section CODE ".start" X
#endif

void _START(void)
{
	Ifx_Ssw_jumpToFunction(_Core0_start);
}


/* reset the sections defined above, to normal region */
#if defined(__GNUC__)
#pragma section
#endif
#if defined(__TASKING__)
#pragma protect restore
#pragma section code restore
#endif
#if defined(__DCC__)
#pragma section CODE
#endif

/*Restore the options to command line provided ones*/
#if defined(__GNUC__)
#pragma GCC reset_options
#endif
