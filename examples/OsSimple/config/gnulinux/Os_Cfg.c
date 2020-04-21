
/*
 * Generator version: 1.0.1
 * AUTOSAR version:   4.0.3
 */

#include "os_i.h"


// ###############################    EXTERNAL REFERENCES    #############################
 
/* Application externals */




/* Interrupt externals */

// Set the os tick frequency
OsTickType OsTickFreq = 1000;


// ###############################    DEBUG OUTPUT     #############################
uint32 os_dbg_mask =  0;                     


// ###############################    APPLICATIONS     #############################
GEN_APPLICATION_HEAD = {

	GEN_APPLICATION(
				/* id           */ APPLICATION_ID_OsApplication1,
				/* name         */ "OsApplication1",
				/* trusted      */ true,
				/* core         */ 0,
				/* StartupHook  */ NULL,
				/* ShutdownHook */ NULL,
				/* ErrorHook    */ NULL,
				/* rstrtTaskId  */ 0 // NOT CONFIGURABLE IN TOOLS (OsTasks.indexOf(app.Os RestartTask.value))
				)

};


 


// #################################    COUNTERS     ###############################

GEN_COUNTER_HEAD = {
	GEN_COUNTER(
				/* id          */		COUNTER_ID_Counter1,
				/* name        */		"Counter1",
				/* counterType */		COUNTER_TYPE_HARD,
				/* counterUnit */		COUNTER_UNIT_NANO,
				/* maxAllowed  */		0xffff,
				/*             */		1,
				/* minCycle    */		1,
				/*             */		0,
				/* owningApp   */		APPLICATION_ID_OsApplication1,
				/* accAppMask..*/       (1 << APPLICATION_ID_OsApplication1)
 ) 
};




CounterType Os_Arc_OsTickCounter = COUNTER_ID_Counter1;




// ##################################    ALARMS     ################################
GEN_ALARM_AUTOSTART(
				ALARM_ID_Alarm1,
				ALARM_AUTOSTART_RELATIVE,
				100,
				100,
				OSDEFAULTAPPMODE );




GEN_ALARM_HEAD = {

	GEN_ALARM(	ALARM_ID_Alarm1,
				"Alarm1",
				COUNTER_ID_Counter1,
				GEN_ALARM_AUTOSTART_NAME(ALARM_ID_Alarm1),
				ALARM_ACTION_SETEVENT,
				TASK_ID_eTask1,
				EVENT_MASK_Event1,
				0,
				APPLICATION_ID_OsApplication1, /* Application owner */
				(( 1 << APPLICATION_ID_OsApplication1 ) 
				) /* Accessing application mask */
			)

};

 
// ################################    RESOURCES     ###############################


// ##############################    STACKS (TASKS)     ############################

DECLARE_STACK(OsIdle, OS_OSIDLE_STACK_SIZE);


DECLARE_STACK(bTask3,  2048);
DECLARE_STACK(eTask1,  2048);
DECLARE_STACK(eTask2,  2048);


// ##################################    TASKS     #################################


// Linker symbols defined for Non-Trusted Applications

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
	.resourceAccess = 0,
	.activationLimit = 1,
	.applOwnerId = OS_CORE_0_MAIN_APPLICATION,
	.accessingApplMask = (1u << OS_CORE_0_MAIN_APPLICATION),
	},
	



{
	.pid = TASK_ID_bTask3,
	.name = "bTask3",
	.entry = bTask3,
	.prio = 1,
	.scheduling = FULL,

	.proc_type = PROC_BASIC,
	.stack = {
		.size = sizeof stack_bTask3,
		.top = stack_bTask3,
	},
	.autostart = FALSE,
	.resourceAccess = 0 , 
	.activationLimit = 1,
	.eventMask = 0 ,
	
	.applOwnerId = APPLICATION_ID_OsApplication1,
	.accessingApplMask = (1u <<APPLICATION_ID_OsApplication1)
,
},
		

{
	.pid = TASK_ID_eTask1,
	.name = "eTask1",
	.entry = eTask1,
	.prio = 1,
	.scheduling = FULL,
	.proc_type = PROC_EXTENDED,
	.stack = {
		.size = sizeof stack_eTask1,
		.top = stack_eTask1,
	},
	.autostart = TRUE,
	.resourceAccess = 0 , 
	.activationLimit = 1,
	.eventMask = 0 | EVENT_MASK_Event1 ,
	
	.applOwnerId = APPLICATION_ID_OsApplication1,
	.accessingApplMask = (1u <<APPLICATION_ID_OsApplication1)
,
},
		

{
	.pid = TASK_ID_eTask2,
	.name = "eTask2",
	.entry = eTask2,
	.prio = 1,
	.scheduling = FULL,
	.proc_type = PROC_EXTENDED,
	.stack = {
		.size = sizeof stack_eTask2,
		.top = stack_eTask2,
	},
	.autostart = TRUE,
	.resourceAccess = 0 , 
	.activationLimit = 1,
	.eventMask = 0 | EVENT_MASK_Event2 ,
	
	.applOwnerId = APPLICATION_ID_OsApplication1,
	.accessingApplMask = (1u <<APPLICATION_ID_OsApplication1)
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



