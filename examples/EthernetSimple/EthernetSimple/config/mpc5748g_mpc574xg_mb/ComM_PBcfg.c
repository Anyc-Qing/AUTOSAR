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

/* Generator version: 3.0.1
 * AUTOSAR version:   4.0.3
 */

#include "ComM.h"
#include "MemMap.h"
#if defined(USE_RTE)
#include "Rte_ComM.h"
#endif
 
 

static SECTION_POSTBUILD_DATA const ComM_ChannelType ComM_Channels[COMM_CHANNEL_COUNT] = {
   {
      .BusType = COMM_BUS_TYPE_ETH,
      .ComMChannelId = ComMConf_ComMChannel_ComMChannel,
      .NmVariant = COMM_NM_VARIANT_NONE,
      .MainFunctionPeriod = 10,
      .LightTimeout = 10000,
      .PncGatewayType		= COMM_GATEWAY_TYPE_NONE
   }
};


static SECTION_POSTBUILD_DATA const ComM_ChannelType* const ComM_ComMUser_Channels[] = {
	&ComM_Channels[0] 
};

 

static SECTION_POSTBUILD_DATA const ComM_UserType ComM_Users[COMM_USER_COUNT] = {
   {
        /* @req ComM995 */
        .ChannelList      = ComM_ComMUser_Channels,
        .ChannelCount     = 1,
        .PncChnlList      = NULL, 
        .PncChnlCount     = 0,
        #if defined(USE_RTE)
        .ComMRteSwitchUM  = Rte_Switch_UM_ComMUser_currentMode
        #endif
    }
};

SECTION_POSTBUILD_DATA const ComM_ConfigType ComM_Config = {
   .Channels        = ComM_Channels,
   .Users           = ComM_Users,
   .ComMPncConfig   = NULL
};
