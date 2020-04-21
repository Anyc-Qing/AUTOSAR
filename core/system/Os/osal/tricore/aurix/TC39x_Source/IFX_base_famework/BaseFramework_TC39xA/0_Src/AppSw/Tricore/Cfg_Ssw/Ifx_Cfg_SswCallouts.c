/**
 * \file Ifx_Cfg_SswCallout.c
 * \brief Configuration file for the Startup Software function callouts
 * \ingroup
 *
 *
 * \copyright Copyright (c) 2016 Infineon Technologies AG. All rights reserved.
 *
 *                                 IMPORTANT NOTICE
 *
 *
 * Infineon Technologies AG (Infineon) is supplying this file for use
 * exclusively with Infineons microcontroller products. This file can be freely
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

#include "Ifx_Cfg.h"
#include "IfxScuCcu.h"
#include "IfxPmsEvr.h"
#include "IfxCpu_Intrinsics.h"
#include "Ifx_Cfg_Ssw.h"


/*Add options to eliminate usage of stack pointers when option sets are changed*/
#if defined(__GNUC__)
#pragma GCC optimize ("-O2")
#endif

uint8 Ifx_Callout_Jump_initPms(void)
{
	/** IMPORTANT NOTE: This call-out function need to be implemented with no function calls
	 *  The jumped to function shall also be implemented to return with "jump to link register"
	 *  instead of normal function return
	 */

	(void)IfxPmsEvr_runInitSequence(&IfxPmsEvr_cfgSequenceDefault);
	return 0; /*Dummy return!*/
}

uint8 Ifx_Callout_Jump_checkPmsInit(void)
{
	/** IMPORTANT NOTE: This call-out function need to be implemented with no function calls
	 *  The jumped to function shall also be implemented to return with "jump to link register"
	 *  instead of normal function return
	 */

	(void)IfxPmsEvr_areInitValuesRight(&IfxPmsEvr_checkRegCfgDefault);
	return 0; /*Dummy return!*/
}

void Ifx_Callout_Jump_errorPmsConfig(void)
{
	/** IMPORTANT NOTE: This call-out function need to be implemented with no function calls
	 *  The jumped to function shall also be implemented to return with "jump to link register"
	 *  instead of normal function return
	 */
	__debug();
	__jumpBackToLink();
}


/*Restore the options to command line provided ones*/
#if defined(__GNUC__)
#pragma GCC reset_options
#endif

uint8 Ifx_Callout_initClocks(void)
{
	uint32 clockInitErrorStatus=0;
#ifdef IFXCPU_CSTART_CCU_INIT_HOOK
	/*CCU init call for legacy code!! NOT SUPPORTED with next coming releases !!*/
	IFXCPU_CSTART_CCU_INIT_HOOK();
#else
	clockInitErrorStatus= IfxScuCcu_init(&IfxScuCcu_defaultClockConfig);
#endif
	return (uint8)clockInitErrorStatus;
}

void Ifx_Callout_errorClocksInit(void)
{
	__debug();
}


#ifdef IFX_CFG_ENABLE_BISTS

#include "IfxScuLbist.h"
#include "IfxMtu.h"

/**
 * MBIST test range configuration for CPU0 Stack and CSA are located
 * These values are to be extracted from application memory map (linker command file)
 * NOTE: The actual memory tested has lower and upper range aligned to 1024 (64*16) bytes.
 *
 */
IFX_EXTERN unsigned int __USTACK0_END[];      /**< user stack begin */
IFX_EXTERN unsigned int __CSA0_END[];         /**< context save area end */

IFX_EXTERN const IfxMtu_MbistConfigPattern nonDestructiveTestPattern[];
IFX_EXTERN const IfxMtu_MbistConfig *const mbistGangConfig[];
IFX_EXTERN const IfxMtu_MbistDspr0Config   mbistDspr0Config;
IFX_EXTERN const IfxPmsEvr_initSequence IfxPms_cfgSequenceDefault;
IFX_EXTERN const IfxPmsEvr_checkRegConfig IfxPms_checkRegCfgDefault;

#ifndef IFX_CFG_SSW_ENABLE_LBIST_TRIGGER_AT_STARTUPSW
#define IFX_CFG_SSW_ENABLE_LBIST_TRIGGER_AT_STARTUPSW (1U)
#endif

const IfxMtu_MbistConfigPattern mbistCpu0NonDestructiveTestPattern[] = {
    {
        IFXMTU_MBIST_CONFIG_NONDISTTEST_CONFIG0,
        IFXMTU_MBIST_CONFIG_NONDISTTEST_CONFIG1
    }
};

/*
 * Memory test configuration for CPU0 Stack and CSA area
 */
const IfxMtu_MbistDspr0Config   mbistCpu0StackCsaConfig = {
    IFXMTU_MBIST_CONFIG_NONDISTTEST_MCONTROL,                            /* mcontrol        */
    IFXMTU_SCRAMBLED_RANGE_ADDR_DSPR0(0x70014e00),   /*__USTACK0_END*/   /* lowAddress      */
    IFXMTU_SCRAMBLED_RANGE_ADDR_DSPR0(0x70017c00),   /*__CSA0_END*/      /* highAddress     */
    5,                                                                    /* uncorrectableErrorThreshold*/
    sizeof(mbistCpu0NonDestructiveTestPattern) / sizeof(IfxMtu_MbistConfigPattern),
    nonDestructiveTestPattern
};

/*Add options to eliminate usage of stack pointers unnecessarily*/
#if defined(__GNUC__)
#pragma GCC optimize ("-O1")
#endif

uint8 Ifx_Callout_Jump_handleLbist(void)
{
	/** IMPORTANT NOTE: This call-out function need to be implemented with no function calls
	 *  The jumped to function shall also be implemented to return with "jump to link register"
	 *  instead of normal function return
	 */

	uint32 lbistErrorStatus= 0;
	if(IfxScuLbist_isDone())
    {
		lbistErrorStatus= IfxScuLbist_evaluateResult(IfxScuLbist_defaultConfig.signature);
    }
	else
	{
#if IFX_CFG_SSW_ENABLE_LBIST_TRIGGER_AT_STARTUPSW
		IfxScuLbist_triggerInline(&IfxScuLbist_defaultConfig);
#endif
    }
	__moveToDataParam0(lbistErrorStatus);  //error value could be seen at d2 register
	__jumpBackToLink();
	return (uint8)lbistErrorStatus;
}

void Ifx_Callout_Jump_errorLbist(void)
{
	/** IMPORTANT NOTE: This call-out function need to be implemented with no function calls
	 *  The jumped to function shall also be implemented to return with "jump to link register"
	 *  instead of normal function return
	 */
	__debug();
	__jumpBackToLink();
}

uint8 Ifx_Callout_Jump_handleMbistAtSswPhase2(void)
{
	/** IMPORTANT NOTE: This call-out function need to be implemented with no function calls
	 *  The jumped to function shall also be implemented to return with "jump to link register"
	 *  instead of normal function return
	 */

	uint32 mBistError;
    mBistError= IfxMtu_testDspr0Inline(&mbistCpu0StackCsaConfig);

    /*IfxMtu_testDspr0Inline would simply return A11 pointer*/
	return (uint8)mBistError;
}

void Ifx_Callout_Jump_errorMbistAtSswPhase2(void)
{
	/** IMPORTANT NOTE: This call-out function need to be implemented with no function calls
	 *  The jumped to function shall also be implemented to return with "jump to link register"
	 *  instead of normal function return
	 */
	__debug();
	__jumpBackToLink();
}

/*Restore the options to command line provided ones*/
#if defined(__GNUC__)
#pragma GCC reset_options
#endif


uint8 Ifx_Callout_handleMbistAtSswPhase4(void)
{
    uint32 gangConfigCount=0;
    uint32 mBistError=0;
    while(mbistGangConfig[gangConfigCount]!=(void*)0)
	{
    	if(IfxMtu_runMbist(mbistGangConfig[gangConfigCount]))
    	{
    		if(!IfxMtu_isTestPass(mbistGangConfig[gangConfigCount]))
    		{
    			mBistError= 1;
    		}
    	}
    	else
    	{
    		mBistError= 1;
    	}
    	gangConfigCount++;
    }
	return (uint8)mBistError;
}

void Ifx_Callout_errorMbistAtSswPhase4(void)
{
	__debug();
}

#endif
