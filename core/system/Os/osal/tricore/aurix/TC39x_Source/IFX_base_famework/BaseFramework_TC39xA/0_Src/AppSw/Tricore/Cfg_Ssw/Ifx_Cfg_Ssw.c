/**
 * \file Ifx_Cfg_Ssw.c
 * \brief Configuration file for the Startup Software
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

#include "Ifx_Cfg_Ssw.h"
#include "Ifx_Cfg_SswCallouts.h"


const Ifx_Ssw_PmsCalloutConfig Ifx_Cfg_calloutPms=
{
	Ifx_Callout_Jump_initPms,               //initPmsCalloutJump;
	Ifx_Callout_Jump_checkPmsInit,          //pmsInitCheckCallOutJump;
	Ifx_Callout_Jump_errorPmsConfig         //pmsInitErrorCallOutJump;
};

#ifdef IFX_CFG_ENABLE_BISTS
const Ifx_Ssw_MbistCalloutConfig Ifx_Cfg_calloutMbist=
{
	Ifx_Callout_Jump_handleMbistAtSswPhase2,//handleMbistAtSswPhase2CalloutJump
	Ifx_Callout_Jump_errorMbistAtSswPhase2, //mbistErrorCallOutJump
	Ifx_Callout_handleMbistAtSswPhase4,     //handleMbistAtSswPhase4Callout
	Ifx_Callout_errorMbistAtSswPhase4       //mBistErrorCallOut
};
#else
const Ifx_Ssw_MbistCalloutConfig Ifx_Cfg_calloutMbist=
{
	(void*)0, //handleMbistAtSswPhase2CalloutJump
	(void*)0, //mbistErrorCallOutJump
	(void*)0, //handleMbistAtSswPhase4Callout
	(void*)0  //mBistErrorCallOut
};
#endif

#ifdef IFX_CFG_ENABLE_BISTS
const Ifx_Ssw_LbistCalloutConfig Ifx_Cfg_calloutLbist=
{
	Ifx_Callout_Jump_handleLbist,           //handleLbistCalloutJump
	Ifx_Callout_Jump_errorLbist             //lbistErrorCallOutJump
};
#else
const Ifx_Ssw_LbistCalloutConfig Ifx_Cfg_calloutLbist=
{
	(void*)0, //handleLbistCalloutJump
	(void*)0  //lbistErrorCallOutJump
};
#endif

const Ifx_Ssw_SbstCalloutConfig Ifx_Cfg_calloutSbst=
{
	(void*)0, //handleSbstCallOut
	(void*)0  //sbstErrorCallOut
};

const Ifx_Ssw_ClocksCalloutConfig Ifx_Cfg_calloutClockInit=
{
	Ifx_Callout_initClocks, //initClocksCallOut;
	Ifx_Callout_errorClocksInit //clocksInitErrorCallOut;
};


const Ifx_Ssw_Callouts Ifx_Cfg_Ssw_calloutCfg=
{
	&Ifx_Cfg_calloutPms,   //pms;
	&Ifx_Cfg_calloutLbist, //lbist;
	&Ifx_Cfg_calloutMbist, //mbist;
	&Ifx_Cfg_calloutSbst,  //sbst;
	&Ifx_Cfg_calloutClockInit //clocks;
};

