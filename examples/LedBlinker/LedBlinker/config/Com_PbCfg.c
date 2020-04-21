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

/* Generator version: 1.2.2
 * AUTOSAR version:   4.0.3
 */

#if defined(USE_PDUR)
#include "PduR.h"
#include "PduR_PbCfg.h"
#endif

#if defined(USE_CANTP)
#include "CanTp.h"
#include "CanTp_PBCfg.h"
#endif

#include "Com.h"
#include "Com_PbCfg.h"

#include "MemMap.h"

#if (COM_MAX_BUFFER_SIZE < 0)
#error Com: The configured ram buffer size is less than required! (0 bytes required)
#endif
#if (COM_MAX_N_IPDUS < 0)
#error Com: Configured maximum number of Pdus is less than the number of Pdus in configuration!
#endif
#if (COM_MAX_N_SUPPORTED_IPDU_COUNTERS < 0)
#error Com: Configured maximum number of Pdus with counter(ArcMaxNumberOfSupportedIPduCounters) is less than the number of Pdus configured with counter !
#endif
#if (COM_MAX_N_SIGNALS < 0)
#error Com: Configured maximum number of signals is less than the number of signals in configuration!
#endif
#if (COM_MAX_N_GROUP_SIGNALS < 0)
#error Com: Configured maximum number of groupsignals is less than the number of groupsignals in configuration!
#endif
#if (COM_MAX_N_SUPPORTED_GWSOURCE_DESCRIPTIONS < 0)
#error Com: Configured maximum number of gateway source description is less than the number of ComGwSourceDescription in configuration!
#endif


/*
 * Signal init values.
 */


/*
 * Group signal definitions
 */
SECTION_POSTBUILD_DATA const ComGroupSignal_type ComGroupSignal[] = {
	{
		.Com_Arc_EOL = 1
	}
};


/*
 * SignalGroup GroupSignals lists.
 */



/*
 * Signal group masks.
 */


/*
 * Signal definitions
 */
 
SECTION_POSTBUILD_DATA const ComSignal_type ComSignal[] = {

	{
		.Com_Arc_EOL				= 1
	}
};

/*
 * Gateway source signal description definitions
 */
SECTION_POSTBUILD_DATA const ComGwSrcDesc_type ComGwSourceDescs[] = {
{
	.Com_Arc_EOL				= 1
}
};


/*
 * Gateway destination signal description definitions
 */
SECTION_POSTBUILD_DATA const ComGwDestnDesc_type ComGwDestinationDescs[] = {
{
	.Com_Arc_EOL				= 1
}
};


/*
 * Gateway Destination signal references
 */


/*
 * Gateway mappings
 */
SECTION_POSTBUILD_DATA const ComGwMapping_type ComGwMapping[] = {
{
	.Com_Arc_EOL				= 1
}
};


/*
 * I-PDU group definitions
 */
SECTION_POSTBUILD_DATA const ComIPduGroup_type ComIPduGroup[] = {

{
	.Com_Arc_EOL				= 1
}
};


/* 
 * IPdu signal lists. 
 */


/*
 * IPdu Counter list
 */
 
/*
 * I-PDU group ref lists
 */

/*
 * Gateway signal description handle
 */
	

/*
 * I-PDU definitions
 */
SECTION_POSTBUILD_DATA const ComIPdu_type ComIPdu[] = {	

  
  




	{
		.Com_Arc_EOL				= 1
	}
};

SECTION_POSTBUILD_DATA const Com_ConfigType ComConfiguration = {
	.ComConfigurationId 			= 1,
	.ComNofIPdus					= 0,
	.ComNofSignals					= 0,
	.ComNofGroupSignals				= 0,
	.ComIPdu 						= ComIPdu,
	.ComIPduGroup 					= ComIPduGroup,
	.ComSignal						= ComSignal,
	.ComGroupSignal					= ComGroupSignal,
	.ComGwMappingRef				= ComGwMapping,
	.ComGwSrcDesc					= ComGwSourceDescs,
	.ComGwDestnDesc					= ComGwDestinationDescs
};


