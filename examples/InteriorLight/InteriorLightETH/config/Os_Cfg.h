
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

/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */
/** @req SWS_BSW_00030 The file should be named <Module>_Cfg.h" */
#ifndef OS_CFG_H_
#define OS_CFG_H_

/* @req SWS_BSW_00036 The BSW Module shall perform Inter Module Checks to avoid integration of incompatible files*/
#if !(((OS_SW_MAJOR_VERSION == 1) && (OS_SW_MINOR_VERSION == 0)) )
#error OS: Configuration file expected OS module version to be 1.0.X*
#endif
/** The Operating System module shall avoid the integration of incompatible (c or h) files by the following pre-processor check. */
#if !(((OS_AR_RELEASE_MAJOR_VERSION == 4) && (OS_AR_RELEASE_MINOR_VERSION == 0)) )
#error OS: Configuration file expected AUTOSAR version to be 4.0.*
#endif

/* @req SWS_BSW_00031 Pre-compile time configuration parameters should be defines */
// Application Id's
#define APPLICATION_ID_OsApplication 0u


// Alarm Id's
#define ALARM_ID_OsAlarmLWIPMain	((AlarmType)0)
#define ALARM_ID_OsAlarmBswService	((AlarmType)1)
#define ALARM_ID_OsAlarm100ms	((AlarmType)2)
#define ALARM_ID_OsAlarm1000ms	((AlarmType)3)
#define ALARM_ID_OsAlarm1msTimer	((AlarmType)4)


// Counter Id's
#define COUNTER_ID_OsCounter	((CounterType)0)


// System counter
#define OSMAXALLOWEDVALUE		UINT_MAX// NOT CONFIGURABLE IN TOOLS
#define OSTICKSPERBASE			1u       // NOT CONFIGURABLE IN TOOLS
#define OSMINCYCLE				1u		// NOT CONFIGURABLE IN TOOLS
#define OSTICKDURATION			1000000UL    // Time between ticks in nano seconds

// Counter macros
#define OSMAXALLOWEDVALUE_OsCounter		OSMAXALLOWEDVALUE
#define OSTICKSPERBASE_OsCounter			1u // NOT CONFIGURABLE IN TOOLS (counter.Os CounterTicksPerBase.value)
#define OSMINCYCLE_OsCounter				1u
/** @req SWS_Os_00393 */
#define OS_TICKS2SEC_OsCounter(_ticks)		( (OSTICKDURATION * _ticks)/1000000000UL )
#define OS_TICKS2MS_OsCounter(_ticks)		( (OSTICKDURATION * _ticks)/1000000UL )
#define OS_TICKS2US_OsCounter(_ticks)		( (OSTICKDURATION * _ticks)/1000UL )
#define OS_TICKS2NS_OsCounter(_ticks)		(OSTICKDURATION * _ticks)
#define ARC_OSTICK							STD_ON 

// Event masks
#define EVENT_MASK_OsEvent1	 (EventMaskType)((EventMaskType)1u<<0)
#define EVENT_MASK_OsEvent25	 (EventMaskType)((EventMaskType)1u<<1)
#define EVENT_MASK_OsEvent24	 (EventMaskType)((EventMaskType)1u<<2)
#define EVENT_MASK_OsEvent23	 (EventMaskType)((EventMaskType)1u<<3)
#define EVENT_MASK_OsEvent22	 (EventMaskType)((EventMaskType)1u<<4)
#define EVENT_MASK_OsEvent21	 (EventMaskType)((EventMaskType)1u<<5)
#define EVENT_MASK_OsEvent20	 (EventMaskType)((EventMaskType)1u<<6)
#define EVENT_MASK_OsEvent19	 (EventMaskType)((EventMaskType)1u<<7)
#define EVENT_MASK_OsEvent18	 (EventMaskType)((EventMaskType)1u<<8)
#define EVENT_MASK_OsEvent17	 (EventMaskType)((EventMaskType)1u<<9)
#define EVENT_MASK_OsEvent16	 (EventMaskType)((EventMaskType)1u<<10)
#define EVENT_MASK_OsEvent15	 (EventMaskType)((EventMaskType)1u<<11)
#define EVENT_MASK_OsEvent14	 (EventMaskType)((EventMaskType)1u<<12)
#define EVENT_MASK_OsEvent13	 (EventMaskType)((EventMaskType)1u<<13)
#define EVENT_MASK_OsEvent12	 (EventMaskType)((EventMaskType)1u<<14)
#define EVENT_MASK_OsEvent11	 (EventMaskType)((EventMaskType)1u<<15)
#define EVENT_MASK_OsEvent10	 (EventMaskType)((EventMaskType)1u<<16)
#define EVENT_MASK_OsEvent9	 (EventMaskType)((EventMaskType)1u<<17)
#define EVENT_MASK_OsEvent8	 (EventMaskType)((EventMaskType)1u<<18)
#define EVENT_MASK_OsEvent7	 (EventMaskType)((EventMaskType)1u<<19)
#define EVENT_MASK_OsEvent6	 (EventMaskType)((EventMaskType)1u<<20)
#define EVENT_MASK_OsEvent5	 (EventMaskType)((EventMaskType)1u<<21)
#define EVENT_MASK_OsEvent4	 (EventMaskType)((EventMaskType)1u<<22)
#define EVENT_MASK_OsEvent3	 (EventMaskType)((EventMaskType)1u<<23)
#define EVENT_MASK_OsEvent2	 (EventMaskType)((EventMaskType)1u<<24)
#define EVENT_MASK_START_TCPIP	 (EventMaskType)((EventMaskType)1u<<25)
#define EVENT_MASK_LWIP_MAIN	 (EventMaskType)((EventMaskType)1u<<26)
#define EVENT_MASK_OsRteEvent1	 (EventMaskType)((EventMaskType)1u<<27)
#define EVENT_MASK_OsRteEvent2	 (EventMaskType)((EventMaskType)1u<<28)
#define EVENT_MASK_ModeSwitchOsEvent	 (EventMaskType)((EventMaskType)1u<<29)

// Isr Id's


// Resource Id's



// Linked resource id's


// Resource masks



// Task Id's
#define TASK_ID_OsIdle ((TaskType)0)



#define TASK_ID_MainLWIPTask	((TaskType)1)
#define TASK_ID_OsBswServiceTask	((TaskType)2)
#define TASK_ID_OsRteTask	((TaskType)3)
#define TASK_ID_OsStartupTask	((TaskType)4)
#define TASK_ID_tcpip_task	((TaskType)5)


// Task entry points

void OsIdle( void );




void MainLWIPTask ( void );
void OsBswServiceTask ( void );
void OsRteTask ( void );
void OsStartupTask ( void );
void tcpip_task ( void );


// Schedule table id's


// Spinlock ids

#define OS_SPINLOCK			        0
#define OS_RTE_SPINLOCK		        1

// Stack size
#define OS_INTERRUPT_STACK_SIZE	    2048u
#define OS_OSIDLE_STACK_SIZE        512u 

#define OS_ALARM_CNT			    5u 
#define OS_TASK_CNT				    6u
#define OS_SCHTBL_CNT			    0u
#define OS_COUNTER_CNT			    1u
#define OS_EVENTS_CNT			    30u
//#define OS_ISRS_CNT			    0u
#define OS_RESOURCE_CNT			    0u
#define OS_LINKED_RESOURCE_CNT	    0u

#define OS_APPLICATION_CNT		    1u

#define OS_SPINLOCK_CNT			    2

#define OS_SERVICE_CNT			    0u   

#define CFG_OS_DEBUG			    STD_OFF


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

#define OS_ISR_CNT			        0u
#define OS_ISR2_CNT 		        0u
#define OS_ISR1_CNT			        0u

#define OS_ISR_MAX_CNT		        200u
                                    
/** @req SWS_Os_00583 */                   
#define OS_NUM_CORES		        1u

#define OS_CORE_0_MAIN_APPLICATION	APPLICATION_ID_OsApplication
 

#if defined(__CWCC__)
int write(  int fd, const void *buf, uint32 nbytes);
#endif



#endif /*OS_CFG_H_*/

