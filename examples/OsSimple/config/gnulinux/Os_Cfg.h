
/*
 * Generator version: 1.0.1
 * AUTOSAR version:   4.0.3
 */

#ifndef OS_CFG_H_
#define OS_CFG_H_

#if !(((OS_SW_MAJOR_VERSION == 1) && (OS_SW_MINOR_VERSION == 0)) )
#error OS: Configuration file expected OS module version to be 1.0.X*
#endif

#if !(((OS_AR_RELEASE_MAJOR_VERSION == 4) && (OS_AR_RELEASE_MINOR_VERSION == 0)) )
#error OS: Configuration file expected AUTOSAR version to be 4.0.*
#endif

// Application Id's
#define APPLICATION_ID_OsApplication1 0u


// Alarm Id's
#define ALARM_ID_Alarm1	((AlarmType)0)


// Counter Id's
#define COUNTER_ID_Counter1	((CounterType)0)


// System counter
#define OSMAXALLOWEDVALUE		UINT_MAX// NOT CONFIGURABLE IN TOOLS
#define OSTICKSPERBASE			1u       // NOT CONFIGURABLE IN TOOLS
#define OSMINCYCLE				1u		// NOT CONFIGURABLE IN TOOLS
#define OSTICKDURATION			1000000UL    // Time between ticks in nano seconds

// Counter macros
#define OSMAXALLOWEDVALUE_Counter1		OSMAXALLOWEDVALUE
#define OSTICKSPERBASE_Counter1			1u // NOT CONFIGURABLE IN TOOLS (counter.Os CounterTicksPerBase.value)
#define OSMINCYCLE_Counter1				1u
/** @req OS393 */
#define OS_TICKS2SEC_Counter1(_ticks)		( (OSTICKDURATION * _ticks)/1000000000UL )
#define OS_TICKS2MS_Counter1(_ticks)		( (OSTICKDURATION * _ticks)/1000000UL )
#define OS_TICKS2US_Counter1(_ticks)		( (OSTICKDURATION * _ticks)/1000UL )
#define OS_TICKS2NS_Counter1(_ticks)		(OSTICKDURATION * _ticks)



// Event masks
#define EVENT_MASK_Event1	 (EventMaskType)((EventMaskType)1u<<0)
#define EVENT_MASK_Event2	 (EventMaskType)((EventMaskType)1u<<0)

// Isr Id's


// Resource Id's



// Linked resource id's


// Resource masks



// Task Id's
#define TASK_ID_OsIdle ((TaskType)0)



#define TASK_ID_bTask3	((TaskType)1)
#define TASK_ID_eTask1	((TaskType)2)
#define TASK_ID_eTask2	((TaskType)3)


// Task entry points

void OsIdle( void );




void bTask3 ( void );
void eTask1 ( void );
void eTask2 ( void );


// Schedule table id's


// Spinlock ids

#define OS_SPINLOCK			0
#define OS_RTE_SPINLOCK		1

// Stack size
#define OS_INTERRUPT_STACK_SIZE	2048u
#define OS_OSIDLE_STACK_SIZE 512u 

#define OS_ALARM_CNT			1u 
#define OS_TASK_CNT				4u
#define OS_SCHTBL_CNT			0u
#define OS_COUNTER_CNT			1u
#define OS_EVENTS_CNT			2u
//#define OS_ISRS_CNT			0u
#define OS_RESOURCE_CNT			0u
#define OS_LINKED_RESOURCE_CNT	0u

#define OS_APPLICATION_CNT		1u

#define OS_SPINLOCK_CNT			2

#define OS_SERVICE_CNT			0u   

#define CFG_OS_DEBUG			STD_OFF


#define OS_SC1 						STD_ON
#define OS_SC2 						STD_OFF
#define OS_SC3 						STD_OFF
#define OS_SC4 						STD_OFF


#define OS_USE_APPLICATIONS			STD_ON
#define OS_USE_MEMORY_PROT			STD_OFF	/* NOT CONFIGURABLE IN TOOLS */
#define OS_USE_TASK_TIMING_PROT		STD_OFF	/* NOT CONFIGURABLE IN TOOLS */
#define OS_USE_ISR_TIMING_PROT		STD_OFF	/* NOT CONFIGURABLE IN TOOLS */
#define OS_STACK_MONITORING			STD_ON


#define OS_STATUS_EXTENDED			STD_ON


#define OS_USE_GET_SERVICE_ID		STD_ON	/* NOT CONFIGURABLE IN TOOLS */
#define OS_USE_PARAMETER_ACCESS		STD_ON	/* NOT CONFIGURABLE IN TOOLS */
#define OS_RES_SCHEDULER			STD_ON	/* NOT CONFIGURABLE IN TOOLS */

#define OS_ISR_CNT			0u
#define OS_ISR2_CNT 		0u
#define OS_ISR1_CNT			0u

#define OS_ISR_MAX_CNT		10u

/** @req OS583 */
#define OS_NUM_CORES		1u
	

#define OS_CORE_0_MAIN_APPLICATION	APPLICATION_ID_OsApplication1
 

#if defined(__CWCC__)
int write(  int fd, const void *buf, uint32 nbytes);
#endif



#endif /*OS_CFG_H_*/

