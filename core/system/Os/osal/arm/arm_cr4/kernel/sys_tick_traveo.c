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
#include "Os.h"
#include "os_i.h"
#include "core_cr4.h"
#include "irq_types.h"
#include "isr.h"
#include "arc.h"
#include "os_counter_i.h"
#include "Mcu.h"
#include "Gpt.h"

void GPT_ISR_Vector_176_CAT2( void );

/**
 * Init of free running timer.
 * @req ARC_SWS_OSAL_00029
 */
void Os_SysTickInit( void ) {
#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS)
    ISR_INSTALL_ISR2("OsTick",GPT_ISR_Vector_176_CAT2,IRQ_176,6,0);
#endif



}

/**
 * Start the Sys Tick timer
 * @req ARC_SWS_OSAL_00030
 *
 * @param frequency The frequency of the Os Tick.
 *
 */
/* @req ARC_SWS_OSAL_00033 */
void Os_SysTickStart2(uint32 frequency) {
    Gpt_EnableNotification(GptConf_GptChannelConfiguration_GptChannelConfiguration_FRT0_OS);
    Gpt_StartTimer(GptConf_GptChannelConfiguration_GptChannelConfiguration_FRT0_OS,
            MCU_McuClockSettingConfig_0_McuClockReferencePoint_LCP0A_MCU_RUN_CLK_LCP0A/(1000000000UL/OSTICKDURATION));
}
