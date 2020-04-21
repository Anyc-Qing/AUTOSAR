
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
				ALARM_ID_OsAlarm,
				ALARM_AUTOSTART_ABSOLUTE,
				50,
				5,
				OSDEFAULTAPPMODE );




GEN_ALARM_HEAD = {

	GEN_ALARM(	ALARM_ID_OsAlarm,
				"OsAlarm",
				COUNTER_ID_OsCounter,
				GEN_ALARM_AUTOSTART_NAME(ALARM_ID_OsAlarm),
				ALARM_ACTION_SETEVENT,
				TASK_ID_OsTask,
				EVENT_MASK_OsEvent,
				0,
				APPLICATION_ID_OsApplication, /* Application owner */
				(( 1u << APPLICATION_ID_OsApplication ) 
				) /* Accessing application mask */
			)

};

 
// ################################    RESOURCES     ###############################


// ##############################    STACKS (TASKS)     ############################

 

DECLARE_STACK(OsIdle, OS_OSIDLE_STACK_SIZE);


DECLARE_STACK(Init,  2048);
DECLARE_STACK(OsTask,  2048);




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
	.pid = TASK_ID_Init,
	.name = "Init",
	.entry = Init,
	.prio = 1,
	.scheduling = FULL,

	.proc_type = PROC_BASIC,
	.stack = {
		.size = sizeof stack_Init,
		.top = stack_Init,
	},
	.autostart = TRUE,

	.resourceIntPtr = NULL_PTR, 

	.resourceAccess = 0 , 
	.activationLimit = 1,
	.eventMask = 0 ,
	
	.applOwnerId = APPLICATION_ID_OsApplication,
	.accessingApplMask = (1u <<APPLICATION_ID_OsApplication)
,
	
},
		

{
	.pid = TASK_ID_OsTask,
	.name = "OsTask",
	.entry = OsTask,
	.prio = 1,
	.scheduling = FULL,
	.proc_type = PROC_EXTENDED,
	.stack = {
		.size = sizeof stack_OsTask,
		.top = stack_OsTask,
	},
	.autostart = TRUE,

	.resourceIntPtr = NULL_PTR, 

	.resourceAccess = 0 , 
	.activationLimit = 1,
	.eventMask = 0 | EVENT_MASK_OsEvent ,
	
	.applOwnerId = APPLICATION_ID_OsApplication,
	.accessingApplMask = (1u <<APPLICATION_ID_OsApplication)
,
	
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



