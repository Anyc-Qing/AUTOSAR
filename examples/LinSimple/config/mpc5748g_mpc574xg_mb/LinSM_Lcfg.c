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

/* Generator version: 2.4.0
 * AUTOSAR version:   4.0.3
 */

/* File: LinSM_Lcfg.c
 * Link time configurable parameters.
 */
/** @req LINSM003*/

#include "LinSM_ConfigTypes.h" /* Configuration types */
#include "LinSM.h"      /* symbolic indexes */
#include "LinIf.h"

/*===========[LinSMSchedules]=================================================*/

/* LinSMSchedule objects assigned to channel LinSMChannel1 */
const LinSM_ScheduleType LinSMSchedules_LinSMChannel1[1] =
{
    {
        .LinSMScheduleIndex = LinIfConf_LinIfScheduleTable_SCHEDULE_01
    },
};


/*===========[LinSMChannels]==================================================*/

const LinSM_ChannelType LinSMChannels[LINSM_CHANNEL_CNT] =
{
    /* LinSMChannel1 */
    {
        .LinSMConfirmationTimeout    = 800,
        .LinSMSleepSupport           = FALSE,
        .LinSMTransceiverPassiveMode = FALSE,
        .LinSMComMNetworkHandleRef   = 0,/*ComMConf_ComMChannel_ComMChannel1 */
        .LinSMSchedule_Cnt           = 1,
        .LinSMSchedules              = LinSMSchedules_LinSMChannel1,
    },
};

/*===========[LinSM configuration]============================================*/

const LinSM_ConfigType LinSM_Config =
{
    .LinSMChannels      = LinSMChannels,
    .LinSMChannels_Size = LINSM_CHANNEL_CNT
};

