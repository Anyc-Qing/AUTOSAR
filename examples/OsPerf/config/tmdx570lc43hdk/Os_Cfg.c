
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
/*lint -w2 */ /*lint --e{641} */
#include "os_i.h"


// ###############################    EXTERNAL REFERENCES    #############################
 
/* Application externals */




/* Interrupt externals */

// Set the os tick frequency
OsTickType OsTickFreq = 100;

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
				/* accAppMask..*/       ((1u << APPLICATION_ID_OsApplication)
						                | (1u << APPLICATION_ID_OsApplication))
				
				) 
};




CounterType Os_Arc_OsTickCounter = COUNTER_ID_OsCounter;




// ##################################    ALARMS     ################################





GEN_ALARM_HEAD = {

	GEN_ALARM(	ALARM_ID_OsAlarm_10ms,
				"OsAlarm_10ms",
				COUNTER_ID_OsCounter,
				NULL,
				ALARM_ACTION_SETEVENT,
				TASK_ID_TaskLoad,
				EVENT_MASK_OsEvent_10ms,
				0,
				APPLICATION_ID_OsApplication, /* Application owner */
				(( 1u << APPLICATION_ID_OsApplication ) 
				| (1u << APPLICATION_ID_OsApplication) 
				
				) /* Accessing application mask */
			)
,
	GEN_ALARM(	ALARM_ID_Alarm_BswService,
				"Alarm_BswService",
				COUNTER_ID_OsCounter,
				NULL,
				ALARM_ACTION_ACTIVATETASK,
				TASK_ID_SchM_BswService,
				0,
				0,
				APPLICATION_ID_OsApplication, /* Application owner */
				(( 1u << APPLICATION_ID_OsApplication ) 
				| (1u << APPLICATION_ID_OsApplication) 
				
				) /* Accessing application mask */
			)

};

 
// ################################    RESOURCES     ###############################


GEN_RESOURCE_HEAD = {
	GEN_RESOURCE(
		RES_ID_OsResource,
		RESOURCE_TYPE_STANDARD,
		0,
		APPLICATION_ID_OsApplication,	/* Application owner */
		(0
		| (1 << APPLICATION_ID_OsApplication)
		)	/* Accessing application mask */
	)

};



// ##############################    STACKS (TASKS)     ############################

 

DECLARE_STACK(OsIdle, OS_OSIDLE_STACK_SIZE);


DECLARE_STACK(SchM_BswService,  2048);
DECLARE_STACK(SchM_Startup,  2048);
DECLARE_STACK(TaskLoad,  2048);




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
	.pid = TASK_ID_SchM_BswService,
	.name = "SchM_BswService",
	.entry = SchM_BswService,
	.prio = 2,
	.scheduling = FULL,

	.proc_type = PROC_BASIC,
	.stack = {
		.size = sizeof stack_SchM_BswService,
		.top = stack_SchM_BswService,
	},
	.autostart = FALSE,

	.resourceIntPtr = NULL_PTR, 

	.resourceAccess = 0 , 
	.activationLimit = 1,
	.eventMask = 0 ,
	
	.applOwnerId = APPLICATION_ID_OsApplication,
	.accessingApplMask = ((1u <<APPLICATION_ID_OsApplication)
 | (1u << APPLICATION_ID_OsApplication)     ),
	
},
		

{
	.pid = TASK_ID_SchM_Startup,
	.name = "SchM_Startup",
	.entry = SchM_Startup,
	.prio = 1,
	.scheduling = FULL,

	.proc_type = PROC_BASIC,
	.stack = {
		.size = sizeof stack_SchM_Startup,
		.top = stack_SchM_Startup,
	},
	.autostart = TRUE,

	.resourceIntPtr = NULL_PTR, 

	.resourceAccess = 0 , 
	.activationLimit = 1,
	.eventMask = 0 ,
	
	.applOwnerId = APPLICATION_ID_OsApplication,
	.accessingApplMask = ((1u <<APPLICATION_ID_OsApplication)
 | (1u << APPLICATION_ID_OsApplication)     ),
	
},
		

{
	.pid = TASK_ID_TaskLoad,
	.name = "TaskLoad",
	.entry = TaskLoad,
	.prio = 1,
	.scheduling = FULL,
	.proc_type = PROC_EXTENDED,
	.stack = {
		.size = sizeof stack_TaskLoad,
		.top = stack_TaskLoad,
	},
	.autostart = FALSE,

	.resourceIntPtr = NULL_PTR, 

	.resourceAccess = 0 , 
	.activationLimit = 1,
	.eventMask = 0 | EVENT_MASK_OsEvent_10ms ,
	
	.applOwnerId = APPLICATION_ID_OsApplication,
	.accessingApplMask = ((1u <<APPLICATION_ID_OsApplication)
 | (1u << APPLICATION_ID_OsApplication)     ),
	
},
		

};

// ##################################    HOOKS     #################################
GEN_HOOKS( 
	StartupHook, 
	NULL,
	ShutdownHook, 
 	ErrorHook,
 	PreTaskHook,
 	PostTaskHook 
);

// ##################################    ISRS     ##################################



GEN_ISR_MAP = {
  0
};

// ############################    SCHEDULE TABLES     #############################


 
 // ############################    SPINLOCKS     ##################################



