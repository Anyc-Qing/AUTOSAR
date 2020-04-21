
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
    .appId = APPLICATION_ID_OsApplication1,
    .name = "OsApplication1",
    .core = 0,
    .trusted = true,
    
	}
				

};



// #################################    COUNTERS     ###############################

GEN_COUNTER_HEAD = {
	GEN_COUNTER(
				/* id          */		COUNTER_ID_Counter1,
				/* name        */		"Counter1",
				/* counterType */		COUNTER_TYPE_HARD,
				/* counterUnit */		COUNTER_UNIT_NANO,
				/* maxAllowed  */		OSMAXALLOWEDVALUE,
				/*             */		1,
				/* minCycle    */		1,
				/*             */		0,
				/* owningApp   */		APPLICATION_ID_OsApplication1,
				/* accAppMask..*/       ((1u << APPLICATION_ID_OsApplication1))
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
				(( 1u << APPLICATION_ID_OsApplication1 ) 
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

	.resourceIntPtr = NULL_PTR, 

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

	.resourceIntPtr = NULL_PTR, 

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

	.resourceIntPtr = NULL_PTR, 

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
	StartupHook /*@req OSEK_SWS_SS_00007*/, 
	NULL,
	ShutdownHook/*@req OSEK_SWS_SS_00008*/, 
 	ErrorHook/*@req OSEK_SWS_SS_00004*/,
 	PreTaskHook/*@req OSEK_SWS_SS_00005*/,
 	PostTaskHook/*@req OSEK_SWS_SS_00006*/ 
);

// ##################################    ISRS     ##################################



#if (!defined(CFG_TC2XX) && !defined(CFG_TC3XX)) // Table Os_VectorToIsr is not used for Aurix architecture.
GEN_ISR_MAP = {
  0
};
#endif

// ############################    SCHEDULE TABLES     #############################


 
 // ############################    SPINLOCKS     ##################################



