/**
 * \file Ifx_Cfg_SswCallout.h
 * \brief Configuration header file for the Startup Software function callouts
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

#ifndef IFX_CFG_SSWCALLOUTS_H_
#define IFX_CFG_SSWCALLOUTS_H_

#include "Ifx_Cfg.h"
#include "Platform_Types.h"

extern uint8 Ifx_Callout_Jump_initPms(void);

extern uint8 Ifx_Callout_Jump_checkPmsInit(void);

extern uint8 Ifx_Callout_Jump_handleLbist(void);

extern uint8 Ifx_Callout_Jump_handleMbistAtSswPhase2(void);

extern uint8 Ifx_Callout_handleMbistAtSswPhase4(void);

extern uint8 Ifx_Callout_initClocks(void);

extern void Ifx_Callout_Jump_errorPmsConfig(void);

extern void Ifx_Callout_Jump_errorLbist(void);

extern void Ifx_Callout_Jump_errorMbistAtSswPhase2(void);

extern void Ifx_Callout_errorMbistAtSswPhase4(void);

extern void Ifx_Callout_errorClocksInit(void);

#endif /* IFX_CFG_SSWCALLOUTS_H_ */
