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

/* Generator version: 4.0.1
 * AUTOSAR version:   4.0.3
 */

#include "BswM.h"
#include "MemMap.h"
#if defined(USE_COM)
#include "Com.h"
#endif
#if defined(USE_DEM)
#include "Dem.h"
#endif
#if defined(USE_COMM)
#include "ComM.h"
#endif
#if defined(USE_LINSM)
#include "BswM_LinSM.h"
#endif
#if defined(USE_ECUM_FIXED) || defined(USE_ECUM_FLEXIBLE)
#include "EcuM_Types.h"
#endif
#if defined(USE_CANSM)
#include "CanSM_BswM.h"
#endif
#if defined(USE_FRSM)
#include "FrSM_Types.h"
#endif
#if defined(USE_SD)
#include "SD_Types.h"
#endif


#define BSWM_ENABLEPDUGROUPSRULE_RULE_IDX (0u)
#define BSWM_STARTCOMMUNICATIONRULE_RULE_IDX (1u)
#define BSWM_NUMBER_OF_RULES (2u)

#if (BSWM_NUMBER_OF_RULES > BSWM_NUMBER_OF_RULES_MAX)
#error BswM: Configured maximum number of rules is less than the number of rules in configuration!
#endif

#define BSWM_ENABLEPDUSACTIONS_LIST_IDX (0u)
#define BSWM_STARTCOMMUNCATIONACTIONS_LIST_IDX (1u)
#define BSWM_NUMBER_OF_ACTIONLISTS (2u)


SECTION_POSTBUILD_DATA const sint32 BswM_ComPduGroupsEnable_IPduStart[] = 
{
	ComConf_ComIPduGroup_ComIPduGroupRx,
	ComConf_ComIPduGroup_ComIPduGroupTx,
	-1
};



/*lint -e785 Too few initializers for aggregate simplifies generator code */
SECTION_POSTBUILD_DATA const BswM_ActionListItemType BswM_EnablePdusActions_BswMActionListItemListItem = 
{
	.ReportFailToDEMRefId = -1,
	.AbortOnFail = STD_OFF,
	.ActionType = BSWM_ATOMIC,
	.AtomicActionIndex = BSWM_IPDUSTART_ACTION_IDX,
    .PduGroupSwitchReinit = STD_OFF,
    .DisabledPduGroupRefId = NULL,
    .EnabledPduGroupRefId = &BswM_ComPduGroupsEnable_IPduStart[0],
};

/*lint -e785 Too few initializers for aggregate simplifies generator code */
SECTION_POSTBUILD_DATA const BswM_ActionListItemType BswM_StartCommuncationActions_BswMActionListItemListItem = 
{
	.ReportFailToDEMRefId = -1,
	.AbortOnFail = STD_OFF,
	.ActionType = BSWM_ATOMIC,
	.AtomicActionIndex = BSWM_REQUESTFULLCOM_ACTION_IDX,
};


SECTION_POSTBUILD_DATA const BswM_ActionListItemType * const BswM_ActionList_EnablePdusActions[] = 
{
	&BswM_EnablePdusActions_BswMActionListItemListItem,
};

SECTION_POSTBUILD_DATA const BswM_ActionListItemType * const BswM_ActionList_StartCommuncationActions[] = 
{
	&BswM_StartCommuncationActions_BswMActionListItemListItem,
};


SECTION_POSTBUILD_DATA const BswM_ActionListType BswM_ActionListData[BSWM_NUMBER_OF_ACTIONLISTS] = 
{
	[BSWM_ENABLEPDUSACTIONS_LIST_IDX] = 
	{
		.Execution = BSWM_TRIGGER,
		.NumberOfItems = 1u,
		.Items = &BswM_ActionList_EnablePdusActions[0]
	},
	
	[BSWM_STARTCOMMUNCATIONACTIONS_LIST_IDX] = 
	{
		.Execution = BSWM_TRIGGER,
		.NumberOfItems = 1u,
		.Items = &BswM_ActionList_StartCommuncationActions[0]
	},
	
};

SECTION_POSTBUILD_DATA const BswM_RuleType BswM_RuleData[BSWM_NUMBER_OF_RULES] = 
{
	[BSWM_ENABLEPDUGROUPSRULE_RULE_IDX] = 
	{
		.LogicalExpressionIndex = BSWM_COMMFULLCOMMUNCATIONLEXPRESSION_EXP_IDX,
		.RuleStateInit = BSWM_FALSE,
		.ActionListTrueIndex = BSWM_ENABLEPDUSACTIONS_LIST_IDX,
		.ActionListFalseIndex = -1
	},

	[BSWM_STARTCOMMUNICATIONRULE_RULE_IDX] = 
	{
		.LogicalExpressionIndex = BSWM_STARTCOMMUNICATIONEXPRESSION_EXP_IDX,
		.RuleStateInit = BSWM_FALSE,
		.ActionListTrueIndex = BSWM_STARTCOMMUNCATIONACTIONS_LIST_IDX,
		.ActionListFalseIndex = -1
	},

};


SECTION_POSTBUILD_DATA const sint16 BswM_DeferredRules[] = 
{
	BSWM_ENABLEPDUGROUPSRULE_RULE_IDX,
	BSWM_STARTCOMMUNICATIONRULE_RULE_IDX,
	-1
};





SECTION_POSTBUILD_DATA const uint32 BswM_ModeReqMirrorsInit[BSWM_NUMBER_OF_REQUESTS] = 
{
	[BSWM_BSWCOMMINDICATION_REQ_IDX] = (uint32) BSWM_UNDEFINED_REQUEST_VALUE, 
	[BSWM_SWCSTARTCOMMUNICATION_REQ_IDX] = (uint32) BSWM_UNDEFINED_REQUEST_VALUE, 
};

SECTION_POSTBUILD_DATA const BswM_RuleConfigType BswM_RuleConfig =
{
    .NumberOfRules  = BSWM_NUMBER_OF_RULES,
    .RuleData       = &BswM_RuleData[0],
    .DeferredRules  = &BswM_DeferredRules[0],
	.ImmediateRules = NULL
};


SECTION_POSTBUILD_DATA const BswM_ConfigType BswM_Config =
{
    .RuleCfg         = &BswM_RuleConfig,
    .ActionListData  = &BswM_ActionListData[0],
    .ModeRequestData = &BswM_ModeReqMirrorsInit[0]
};


