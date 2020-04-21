
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
extern ISR(Test); // Interrupt function for Cat1ISRref_reg361 

// Set the os tick frequency
OsTickType OsTickFreq = 100;

// Linker symbols defined for Non-Trusted Applications
	


// ###############################    DEBUG OUTPUT     #############################
uint32 os_dbg_mask =  0;                     


// ###############################    APPLICATIONS     #############################

/*lint -e451 MISRA:EXTERNAL_FILE:file inclusion:[MISRA 2012 Directive 4.10, required] */


const OsAppConstType Os_AppConst[OS_APPLICATION_CNT]  = {
			

	{			
    .appId = APPLICATION_ID_OsDummy,
    .name = "OsDummy",
    .core = 0,
    .trusted = true,
    
    .StartupHook = NULL,
    .ShutdownHook = NULL,
    .ErrorHook = NULL,
    .restartTaskId = 0,				
	
	}
				
,
	{			
    .appId = APPLICATION_ID_NoAccessToTaskApp_reg344,
    .name = "NoAccessToTaskApp_reg344",
    .core = 0,
    .trusted = true,
    
    .StartupHook = NULL,
    .ShutdownHook = NULL,
    .ErrorHook = NULL,
    .restartTaskId = 0,				
	
	}
				

};



// #################################    COUNTERS     ###############################

GEN_COUNTER_HEAD = {
	GEN_COUNTER(
				/* id          */		COUNTER_ID_OsCounter1,
				/* name        */		"OsCounter1",
				/* counterType */		COUNTER_TYPE_SOFT,
				/* counterUnit */		COUNTER_UNIT_NANO,
				/* maxAllowed  */		65535,
				/*             */		1,
				/* minCycle    */		1,
				/*             */		0,
				/* owningApp   */		APPLICATION_ID_NoAccessToTaskApp_reg344,
				/* accAppMask..*/       ((1u << APPLICATION_ID_NoAccessToTaskApp_reg344))
								) 
,	GEN_COUNTER(
				/* id          */		COUNTER_ID_OsCounterDummy,
				/* name        */		"OsCounterDummy",
				/* counterType */		COUNTER_TYPE_SOFT,
				/* counterUnit */		COUNTER_UNIT_NANO,
				/* maxAllowed  */		65535,
				/*             */		1,
				/* minCycle    */		1,
				/*             */		0,
				/* owningApp   */		APPLICATION_ID_OsDummy,
				/* accAppMask..*/       ((1u << APPLICATION_ID_OsDummy))
								) 
,	GEN_COUNTER(
				/* id          */		COUNTER_ID_OsCntrIncrIndirectly1_reg303,
				/* name        */		"OsCntrIncrIndirectly1_reg303",
				/* counterType */		COUNTER_TYPE_SOFT,
				/* counterUnit */		COUNTER_UNIT_NANO,
				/* maxAllowed  */		65535,
				/*             */		1,
				/* minCycle    */		1,
				/*             */		0,
				/* owningApp   */		APPLICATION_ID_OsDummy,
				/* accAppMask..*/       ((1u << APPLICATION_ID_OsDummy))
								) 
};




CounterType Os_Arc_OsTickCounter = 	-1;




// ##################################    ALARMS     ################################


GEN_ALARM_AUTOSTART(
				ALARM_ID_NoAccessToTaskAlarm_reg344,
				ALARM_AUTOSTART_ABSOLUTE,
				1,
				5,
				OSDEFAULTAPPMODE );




GEN_ALARM_HEAD = {

	GEN_ALARM(	ALARM_ID_OsAlarmIncrIndirectly_reg303,
				"OsAlarmIncrIndir",
				COUNTER_ID_OsCntrIncrIndirectly1_reg303,
				NULL,
				ALARM_ACTION_INCREMENTCOUNTER,
				0,
				0,
				COUNTER_ID_OsCntrIncrIndirectly1_reg303,
				APPLICATION_ID_OsDummy, /* Application owner */
				(( 1u << APPLICATION_ID_OsDummy ) 
				) /* Accessing application mask */
			)
,
	GEN_ALARM(	ALARM_ID_OsAlarmSC3NoCallback_reg461,
				"OsAlarmSC3NoCall",
				COUNTER_ID_OsCounterDummy,
				NULL,
				### ERROR: OsAlarmAction shall contain one sub container
				APPLICATION_ID_OsDummy, /* Application owner */
				(( 1u << APPLICATION_ID_OsDummy ) 
				) /* Accessing application mask */
			)
,
	GEN_ALARM(	ALARM_ID_NoAccessToTaskAlarm_reg344,
				"NoAccessToTaskAl",
				COUNTER_ID_OsCounterDummy,
				GEN_ALARM_AUTOSTART_NAME(ALARM_ID_NoAccessToTaskAlarm_reg344),
				ALARM_ACTION_ACTIVATETASK,
				TASK_ID_NoAccessToTask_reg344,
				0,
				0,
				APPLICATION_ID_NoAccessToTaskApp_reg344, /* Application owner */
				(( 1u << APPLICATION_ID_NoAccessToTaskApp_reg344 ) 
				) /* Accessing application mask */
			)

};

 
// ################################    RESOURCES     ###############################


// ##############################    STACKS (TASKS)     ############################



#define OS_START_SEC_task_stack_OsIdle
#include "MemMap.h"
uint8_t stack_OsIdle[OS_OSIDLE_STACK_SIZE];
#define OS_STOP_SEC_task_stack_OsIdle
#include "MemMap.h"



#define OS_START_SEC_task_stack_DummyTask
#include "MemMap.h"
uint8_t stack_DummyTask[2048];
#define OS_STOP_SEC_task_stack_DummyTask
#include "MemMap.h"

#define OS_START_SEC_task_stack_NoAccessToTask_reg344
#include "MemMap.h"
uint8_t stack_NoAccessToTask_reg344[2048];
#define OS_STOP_SEC_task_stack_NoAccessToTask_reg344
#include "MemMap.h"





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
	
		.applOwnerId = APPLICATION_ID_OsDummy,
		.accessingApplMask = (1u << APPLICATION_ID_OsDummy),		
		

	},
	



{
	.pid = TASK_ID_DummyTask,
	.name = "DummyTask",
	.entry = DummyTask,
	.prio = 1,
	.scheduling = FULL,

	.proc_type = PROC_BASIC,
	.stack = {
		.size = sizeof stack_DummyTask,
		.top = stack_DummyTask,
	},
	.autostart = TRUE,

	.resourceIntPtr = NULL_PTR, 

	.resourceAccess = 0 , 
	.activationLimit = 1,
	.eventMask = 0 ,
	
	.applOwnerId = APPLICATION_ID_OsDummy,
	.accessingApplMask = (1u <<APPLICATION_ID_OsDummy)
,
	
},
		

{
	.pid = TASK_ID_NoAccessToTask_reg344,
	.name = "NoAccessToTask_reg344",
	.entry = NoAccessToTask_reg344,
	.prio = 1,
	.scheduling = FULL,

	.proc_type = PROC_BASIC,
	.stack = {
		.size = sizeof stack_NoAccessToTask_reg344,
		.top = stack_NoAccessToTask_reg344,
	},
	.autostart = TRUE,

	.resourceIntPtr = NULL_PTR, 

	.resourceAccess = 0 , 
	.activationLimit = 1,
	.eventMask = 0 ,
	
	.applOwnerId = APPLICATION_ID_### ERROR: value is unset ###,
	.accessingApplMask = (1u <<APPLICATION_ID_)
,
	
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


GEN_ISR_HEAD = {
	GEN_ISR1(
		/* name      */ "Cat1ISRref_reg361",  ///*.subString(0, 16)*/
		/* vector    */ Test,
		/* priority  */ 0,
		/* entry     */ Test,
		/* appOwner  */ APPLICATION_ID_### ERROR: value is unset ###
	)

};


#if (!defined(CFG_TC2XX) && !defined(CFG_TC3XX)) // Table Os_VectorToIsr is not used for Aurix architecture.
GEN_ISR_MAP = {
  [Test] = 0
};
#endif

// ############################    SCHEDULE TABLES     #############################


 
 // ############################    SPINLOCKS     ##################################



