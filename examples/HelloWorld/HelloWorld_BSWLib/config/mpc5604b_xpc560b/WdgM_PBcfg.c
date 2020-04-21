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

/* Generator version: 3.0.0
 * AUTOSAR version:   4.3.0
 */

#include "WdgM.h"
#if defined(USE_RTE)
#include "Rte_WdgM.h"

/*lint -e546 FALSE_POSITIVE '&' needed before function name*/
Std_ReturnType (*modeFunctionSwitchPointer[1u])(uint8 mode) = {
	&Rte_Switch_localMode_Supervised100msTask_currentMode,
};

/*lint +e546*/
#endif

const uint16 Supervised100msTask_CheckpointIds[] = {
	WdgMConf_WdgMCheckpoint_Supervised100msCheckpoint,
};



/******* Alive supervisions *******************************************/
const WdgM_AliveSupervision WdgM_AliveSupervision_WatchdogOn_Supervised100msTask[] =
{
	{
		.CheckpointId = WdgMConf_WdgMCheckpoint_Supervised100msCheckpoint, 
		.ExpectedAliveIndications = 4u,
		.MinMargin = 1u,
		.MaxMargin = 1u,
		.SupervisionReferenceCycle = 40u,
	},
};




/******* Deadline supervisions *******************************************/


/* Triggers */
const WdgM_Trigger WdgM_Triggers_WatchdogOn[] =
{
	{
		.TriggerConditionValue = 1u,
		.WatchdogMode = WDGIF_SLOW_MODE,
		.WatchdogId = 0u,
	},
};

const WdgM_Trigger WdgM_Triggers_WatchdogOff[] =
{
	{
		.TriggerConditionValue = 1u,
		.WatchdogMode = WDGIF_OFF_MODE,
		.WatchdogId = 0u,
	},
};




const WdgM_SupervisedEntityConfiguration WatchdogOn_ModeConfiguration[] =
{
 
   /* Supervised100msTask */
   {
      .SupervisedEntityId = WdgMConf_WdgMSupervisedEntity_Supervised100msTask,
      .CheckInternalLogic = (boolean)FALSE,
      .AliveSupervisions = WdgM_AliveSupervision_WatchdogOn_Supervised100msTask,
      .Length_AliveSupervisions = 1u,
      .DeadlineSupervisions = NULL,
      .Length_DeadlineSupervisions = 0u,
      .FailedAliveSupervisionReferenceCycleTol = 0u,
      .OSCounter = 0u,
      
   },
};


/* @req SWS_WdgM_00366 */
const WdgM_Mode Modes[] =
{
	{
		.Id = WdgMConf_WdgMMode_WatchdogOn,
		.ExpiredSupervisionCycleTol = 1u,
		.SupervisionCycle = 10u,
		.SEConfigurations = WatchdogOn_ModeConfiguration,
		.Length_SEConfigurations = (uint16)(sizeof(WatchdogOn_ModeConfiguration)/sizeof(WdgM_SupervisedEntityConfiguration)),
		.Triggers = WdgM_Triggers_WatchdogOn,
		.Length_Triggers = (uint8)(sizeof(WdgM_Triggers_WatchdogOn)/sizeof(WdgM_Trigger))
	},
	{
		.Id = WdgMConf_WdgMMode_WatchdogOff,
		.ExpiredSupervisionCycleTol = 0u,
		.SupervisionCycle = 10u,
		.SEConfigurations = NULL,
		.Length_SEConfigurations = 0u,
		.Triggers = WdgM_Triggers_WatchdogOff,
		.Length_Triggers = (uint8)(sizeof(WdgM_Triggers_WatchdogOff)/sizeof(WdgM_Trigger))
	},
};

/* @req SWS_WdgM_00366 */
const WdgM_SupervisedEntity SEs[] =
{
	{
		.Id                                     = WdgMConf_WdgMSupervisedEntity_Supervised100msTask,
		.CheckpointIds 							= Supervised100msTask_CheckpointIds,
		.Length_CheckpointIds 					= 1u,
		.Transitions 							= NULL,
		.Length_Transitions 					= 0u,
		.StartCheckpointIds 					= NULL,
		.Length_StartCheckpointIds 				= 0u,
		.FinalCheckpointIds 					= NULL,
		.Length_FinalCheckpointIds 				= 0u,
		.isOsApplicationRefSet 					= (boolean)FALSE,
		.OsApplicationRef 						= 0
	},
};	




/******* Watchdogs *******************************************/
const WdgM_Watchdog WdgMWatchdog_Configuration[] =
{
	{
		.WatchdogId = 0u,
		.WatchdogDeviceId = 0u,	
	},
};

/* @req SWS_WdgM_00366 */
const WdgM_ConfigType WdgMConfig =
{
	.General = {
		.SupervisedEntities = SEs,
		.Length_SupervisedEntities = (uint16)(sizeof(SEs)/sizeof(WdgM_SupervisedEntity)),
		.Watchdogs = WdgMWatchdog_Configuration,
		.Length_Watchdogs = (uint8)(sizeof(WdgMWatchdog_Configuration)/sizeof(WdgM_Watchdog)),
	},
	.ConfigSet = {
#if defined(USE_DEM)	
		.DemEventIdRefs = 	{
								.Supervision = DEM_EVENT_ID_NULL,
								.SetMode = DEM_EVENT_ID_NULL,
							},
#endif
		.initialModeId = WdgMConf_WdgMMode_WatchdogOn,
		.Modes = Modes,
		.Length_Modes = (uint8)(sizeof(Modes)/sizeof(WdgM_Mode))	
	}
};


/*
 *	RUNTIME-DATA
 *
*/


/******* Alive supervisions *******************************************/

#define WDGM_START_SEC_VAR_INIT_UNSPECIFIED
#include "WdgM_BswMemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/

WdgM_runtime_AliveSupervision AliveSupervisionRuntime_WatchdogOn_Supervised100msTask[] =
{
	{
		.AliveCounter				= 0u,
		.SupervisionCycleCounter	= 0u,
		.wasEvaluated				= (boolean)FALSE,
	},
};
#define WDGM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "WdgM_BswMemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/



/******* Deadline supervisions *******************************************/




#define WDGM_START_SEC_VAR_INIT_UNSPECIFIED
#include "WdgM_BswMemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/

WdgM_runtime_SupervisedEntityConfig RunTimeModeData_WatchdogOn[] =
{
		{
				.AliveSupervisions = AliveSupervisionRuntime_WatchdogOn_Supervised100msTask,
				.Length_AliveSupervisions = 1u,
				.DeadlineSupervisions = NULL,
				.Length_DeadlineSupervisions = 0u,
		},
};


#define WDGM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "WdgM_BswMemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/





/* MODES */

/* not for each SE a configuration is neccessary (same within applies for the config!) BUT in order to avoid expensive searching
 * an emptry SE configuration may be inserted when no alive and no deadline BUT external Supervision or internal Supervision is configured!!!!!!
 * in other words when ".CheckInternalLogic == TRUE" within the mode-dependent SEConfig
 */

#define WDGM_START_SEC_VAR_INIT_UNSPECIFIED
#include "WdgM_BswMemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/

/* @req SWS_WdgM_00366 */
WdgM_runtime_Mode runtime_Modes[] =
{
	{
		.SE_Configs = RunTimeModeData_WatchdogOn,
		.Length_SEConfigs = (uint16)(sizeof(RunTimeModeData_WatchdogOn)/sizeof(WdgM_runtime_SupervisedEntityConfig)),
		.ExpiredSupervisionCycleCounter = 0u,
	},	
	{
		.SE_Configs = NULL,
		.Length_SEConfigs = 0u,
		.ExpiredSupervisionCycleCounter = 0u,
	},	
};

#define WDGM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "WdgM_BswMemMap.h" /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/

#define WDGM_START_SEC_VAR_INIT_UNSPECIFIED
#include "WdgM_BswMemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/

/* @req SWS_WdgM_00366 */
WdgM_runtime_SupervisedEntity runtime_SEs[] = 
{
	{
		.LocalState = 							WDGM_LOCAL_STATUS_OK,
		.SubstateAlive = 						WDGM_SUBSTATE_CORRECT,
		.SubstateDeadline = 					WDGM_SUBSTATE_CORRECT,
		.SubstateLogical = 						WDGM_SUBSTATE_CORRECT,
		.IsInternalGraphActive = 				(boolean)FALSE,
		.PreviousCheckpointId_internalLogic = 	0u,
		.FailedAliveCyclesCounter = 			0u,
	},
};	

#define WDGM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "WdgM_BswMemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/

#define WDGM_START_SEC_VAR_INIT_UNSPECIFIED
#include "WdgM_BswMemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/
/* RUNTIME DATA */
WdgM_RuntimeData WdgM_runtimeData =
{
	.SEs = 				runtime_SEs,
	.Length_SEs = 		(uint16)(sizeof(runtime_SEs)/sizeof(WdgM_runtime_SupervisedEntity)),
	.Modes = 			runtime_Modes,
	.Length_Modes = 	(uint16)(sizeof(runtime_Modes)/sizeof(WdgM_runtime_Mode)),
};

#define WDGM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "WdgM_BswMemMap.h" /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/

