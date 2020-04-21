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

/* Generator version: 2.1.1
 * AUTOSAR version:   4.1.2
 */

/* File: Lin_Lcfg.c */

/** @tagSettings DEFAULT_ARCHITECTURE=PPC|MPC5607B|MPC5645S|MPC5748G */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2 */


#include "Mcu.h"
#include "Lin.h"


/*===========[Lin channels configuration data]================================*/

/* This table stores the configuration data of every setup LinChannel.
 * It is indexed by Lin channel identifier.
 */
/** @req SWS_Lin_00011 */
const Lin_ChannelConfigType LinChannelConfigData[LIN_CONTROLLER_CNT] =
{
    /* LinChannel1 */
    [LinConf_LinChannel_LinChannel1] =
    {
        .LinChannelBaudRate         = 19200,
        .LinChannelWakeUpSupport    = FALSE, //Not supported
        .LinChannelEcuMWakeUpSource = 0, //not used
        /*lint -e{641} */
        .LinClockRef                = PERIPHERAL_CLOCK_LIN_B,
        .LinChannelId				= 1,
    },
};

const uint8 Lin_HwId2Channel[2] = {
	[1] = LinConf_LinChannel_LinChannel1,
};

const Lin_ConfigType Lin_Config =
{
	.LinChannelConfig				=	LinChannelConfigData,
	.Lin_HwId2ChannelMap			=	Lin_HwId2Channel
};

