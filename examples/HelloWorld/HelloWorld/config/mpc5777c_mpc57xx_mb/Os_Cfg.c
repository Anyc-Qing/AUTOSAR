
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

/* Generator version: 1.0.1
 * AUTOSAR version:   4.0.3
 */
/*lint --e{641} MISRA:OTHER:Converting enum to int:[MISRA 2004 Info, advisory]*/
#include "os_i.h"


// ###############################    EXTERNAL REFERENCES    #############################

/* Application externals */




/* Interrupt externals */

// Set the os tick frequency
OsTickType OsTickFreq = 1000;

// Linker symbols defined for Non-Trusted Applications


// ###############################    DEBUG OUTPUT     #############################
uint32 os_dbg_mask =  0;                     


// ###############################    APPLICATIONS     #############################


const OsAppConstType Os_AppConst[OS_APPLICATION_CNT]  = {
			

	{			
    .appId = APPLICATION_ID_OsApplication,
    .name = "OsApplication",
    .core = 0,
    .trusted = true,
    
	}
				

};



// #################################    COUNTERS     ###############################

GEN_COUNTER_HEAD = {
	GEN_COUNTER(
				/* id          */		COUNTER_ID_OsCounter,
				/* name        */		"OsCounter",
				/* counterType */		COUNTER_TYPE_HARD,
				/* counterUnit */		COUNTER_UNIT_NANO,
				/* maxAllowed  */		OSMAXALLOWEDVALUE,
				/*             */		1,
				/* minCycle    */		1,
				/*             */		0,
				/* owningApp   */		APPLICATION_ID_OsApplication,
				/* accAppMask..*/       ((1u << APPLICATION_ID_OsApplication))
								) 
};




CounterType Os_Arc_OsTickCounter = COUNTER_ID_OsCounter;




// ##################################    ALARMS     ################################
GEN_ALARM_AUTOSTART(
				ALARM_ID_OsAlarmBswService,
				ALARM_AUTOSTART_RELATIVE,
				5,
				5,
				OSDEFAULTAPPMODE );

GEN_ALARM_AUTOSTART(
				ALARM_ID_OsAlarm1000ms,
				ALARM_AUTOSTART_RELATIVE,
				1000,
				1000,
				OSDEFAULTAPPMODE );

GEN_ALARM_AUTOSTART(
				ALARM_ID_OsAlarm100ms,
				ALARM_AUTOSTART_RELATIVE,
				100,
				100,
				OSDEFAULTAPPMODE );

GEN_ALARM_AUTOSTART(
				ALARM_ID_OsAlarmXcp,
				ALARM_AUTOSTART_ABSOLUTE,
				10,
				10,
				OSDEFAULTAPPMODE );




GEN_ALARM_HEAD = {

	GEN_ALARM(	ALARM_ID_OsAlarmBswService,
				"OsAlarmBswServic",
				COUNTER_ID_OsCounter,
				GEN_ALARM_AUTOSTART_NAME(ALARM_ID_OsAlarmBswService),
				ALARM_ACTION_ACTIVATETASK,
				TASK_ID_OsBswServiceTask,
				0,
				0,
				APPLICATION_ID_OsApplication, /* Application owner */
				(( 1u << APPLICATION_ID_OsApplication ) 
				| (1u << APPLICATION_ID_OsApplication) 
				) /* Accessing application mask */
			)
,
	GEN_ALARM(	ALARM_ID_OsAlarm1000ms,
				"OsAlarm1000ms",
				COUNTER_ID_OsCounter,
				GEN_ALARM_AUTOSTART_NAME(ALARM_ID_OsAlarm1000ms),
				ALARM_ACTION_SETEVENT,
				TASK_ID_OsRteTask,
				EVENT_MASK_OsEvent1,
				0,
				APPLICATION_ID_OsApplication, /* Application owner */
				(( 1u << APPLICATION_ID_OsApplication ) 
				| (1u << APPLICATION_ID_OsApplication) 
				) /* Accessing application mask */
			)
,
	GEN_ALARM(	ALARM_ID_OsAlarm100ms,
				"OsAlarm100ms",
				COUNTER_ID_OsCounter,
				GEN_ALARM_AUTOSTART_NAME(ALARM_ID_OsAlarm100ms),
				ALARM_ACTION_SETEVENT,
				TASK_ID_OsRteTask,
				EVENT_MASK_OsEvent2,
				0,
				APPLICATION_ID_OsApplication, /* Application owner */
				(( 1u << APPLICATION_ID_OsApplication ) 
				| (1u << APPLICATION_ID_OsApplication) 
				) /* Accessing application mask */
			)
,
	GEN_ALARM(	ALARM_ID_OsAlarmXcp,
				"OsAlarmXcp",
				COUNTER_ID_OsCounter,
				GEN_ALARM_AUTOSTART_NAME(ALARM_ID_OsAlarmXcp),
				ALARM_ACTION_ACTIVATETASK,
				TASK_ID_OsXcpTask,
				0,
				0,
				APPLICATION_ID_OsApplication, /* Application owner */
				(( 1u << APPLICATION_ID_OsApplication ) 
				| (1u << APPLICATION_ID_OsApplication) 
				) /* Accessing application mask */
			)

};

 
// ################################    RESOURCES     ###############################


// ##############################    STACKS (TASKS)     ############################

 

DECLARE_STACK(OsIdle, OS_OSIDLE_STACK_SIZE);


DECLARE_STACK(OsBswServiceTask,  2048);
DECLARE_STACK(OsRteTask,  2048);
DECLARE_STACK(OsStartupTask,  2048);
DECLARE_STACK(OsXcpTask,  2048);




// ##################################    TASKS     #################################


GEN_TASK_HEAD = {
	
	{
	.pid = TASK_ID_OsIdle,
	.name = "OsIdle",
	.entry = OsIdle,
	.prio = 0,
	.scheduling = FULL,
	.autostart = TRUE,
	.proc_type = PROC_BASIC,
	.stack = {
		.size = sizeof stack_OsIdle,
		.top = stack_OsIdle,
	},
	.resourceIntPtr = NULL_PTR, 
	.resourceAccess = 0,
	.activationLimit = 1,
	 
		.applOwnerId = OS_CORE_0_MAIN_APPLICATION,
		.accessingApplMask = (1u << OS_CORE_0_MAIN_APPLICATION),
		

	},
	



{
	.pid = TASK_ID_OsBswServiceTask,
	.name = "OsBswServiceTask",
	.entry = OsBswServiceTask,
	.prio = 2,
	.scheduling = FULL,

	.proc_type = PROC_BASIC,
	.stack = {
		.size = sizeof stack_OsBswServiceTask,
		.top = stack_OsBswServiceTask,
	},
	.autostart = TRUE,

	.resourceIntPtr = NULL_PTR, 

	.resourceAccess = 0 , 
	.activationLimit = 1,
	.eventMask = 0 ,
	
	.applOwnerId = APPLICATION_ID_OsApplication,
	.accessingApplMask = (1u <<APPLICATION_ID_OsApplication)
 | (1u << APPLICATION_ID_OsApplication) ,
	
},
		

{
	.pid = TASK_ID_OsRteTask,
	.name = "OsRteTask",
	.entry = OsRteTask,
	.prio = 2,
	.scheduling = FULL,
	.proc_type = PROC_EXTENDED,
	.stack = {
		.size = sizeof stack_OsRteTask,
		.top = stack_OsRteTask,
	},
	.autostart = TRUE,

	.resourceIntPtr = NULL_PTR, 

	.resourceAccess = 0 , 
	.activationLimit = 2,
	.eventMask = 0 | EVENT_MASK_OsEvent1 | EVENT_MASK_OsEvent2 | EVENT_MASK_ModeSwitchOsEvent | EVENT_MASK_WatchdogModeSwitchEvent | EVENT_MASK_SwcMemCmdReceived | EVENT_MASK_ComMFullComOsEvent ,
	
	.applOwnerId = APPLICATION_ID_OsApplication,
	.accessingApplMask = (1u <<APPLICATION_ID_OsApplication)
 | (1u << APPLICATION_ID_OsApplication) ,
	
},
		

{
	.pid = TASK_ID_OsStartupTask,
	.name = "OsStartupTask",
	.entry = OsStartupTask,
	.prio = 1,
	.scheduling = FULL,

	.proc_type = PROC_BASIC,
	.stack = {
		.size = sizeof stack_OsStartupTask,
		.top = stack_OsStartupTask,
	},
	.autostart = TRUE,

	.resourceIntPtr = NULL_PTR, 

	.resourceAccess = 0 , 
	.activationLimit = 1,
	.eventMask = 0 ,
	
	.applOwnerId = APPLICATION_ID_OsApplication,
	.accessingApplMask = (1u <<APPLICATION_ID_OsApplication)
 | (1u << APPLICATION_ID_OsApplication) ,
	
},
		

{
	.pid = TASK_ID_OsXcpTask,
	.name = "OsXcpTask",
	.entry = OsXcpTask,
	.prio = 3,
	.scheduling = FULL,

	.proc_type = PROC_BASIC,
	.stack = {
		.size = sizeof stack_OsXcpTask,
		.top = stack_OsXcpTask,
	},
	.autostart = TRUE,

	.resourceIntPtr = NULL_PTR, 

	.resourceAccess = 0 , 
	.activationLimit = 1,
	.eventMask = 0 ,
	
	.applOwnerId = APPLICATION_ID_OsApplication,
	.accessingApplMask = (1u <<APPLICATION_ID_OsApplication)
 | (1u << APPLICATION_ID_OsApplication) ,
	
},
		

};

// ##################################    HOOKS     #################################
GEN_HOOKS( 
	StartupHook /*@req OSEK_SWS_SS_00007*/, 
	NULL,
	ShutdownHook/*@req OSEK_SWS_SS_00008*/, 
 	ErrorHook/*@req OSEK_SWS_SS_00004*/,
 	NULL,
 	NULL 
);

// ##################################    ISRS     ##################################



#if (!defined(CFG_TC2XX) && !defined(CFG_TC3XX)) // Table Os_VectorToIsr is not used for Aurix architecture.
GEN_ISR_MAP = {
  0
};
#endif

// ############################    SCHEDULE TABLES     #############################


 
 // ############################    SPINLOCKS     ##################################



