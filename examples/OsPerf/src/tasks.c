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

/*
 * DESCRIPTION
 *   TBD
 */

/* ----------------------------[includes]------------------------------------*/
#include "Os.h"
#include "EcuM_Cbk.h"
#include "timer.h"
#include "Dio.h"
#include "perf.h"
#if defined(USE_GPT)
#include "Gpt.h"
#endif
#if defined(USE_SHELL)
#include "shell.h"
#endif

/* ----------------------------[private define]------------------------------*/
#if defined(CFG_BRD_MPC5567QRTECH)
#define LED0  DioConf_DioChannel_LED_K2
#elif defined(CFG_BRD_MPC5516IT)
#define LED0  DioConf_DioChannel_LEDS_LED4
#elif defined(CFG_BRD_MPC5645S_DEMO_V2)
#define LED0  DioConf_DioChannel_LED_GREEN
#elif defined(CFG_RH850F1L)
/* MB: LED7 is DIGIO_3 -> PiggyBack: DIGIO_3 is P8_3 */
#define LED0  		DioConf_DioChannel_LED7
#define LED10_AP0	DioConf_DioChannel_LED10_AP0
#elif defined(CFG_RH850)
/* P8_0 is LED0 */
#define LED0  DioConf_DioChannel_DioChannel1
#elif defined(CFG_BRD_STM32_STM3210C)
#define LED0  DioConf_DioChannel_LED1
#elif defined(CFG_BRD_JACINTO)
#define LED0  DioConf_DioChannel_LED1
#elif defined(CFG_BRD_MPC5744P_MMB)
#define LED0  DioConf_DioChannel_LED1
#elif defined(CFG_BRD_TMDX570_LC43HDK)
#define LED0  DioConf_DioChannel_LED_D3
#else
#error  LED0 not defined for board
#endif


/* ----------------------------[private macro]-------------------------------*/

#define OS_COUNTER_MS_TO_TICKS( _ms ) ( 1000000 * _ms / OSTICKDURATION )

#define GPT_TICK2US( _freq, _x )     ((_x) / (_freq/1000000uL))
#define GPT_US2TICK(_freq, _x)       ((uint32_t)(((uint64_t)_freq * (_x) )/1000000uLL))

/* ----------------------------[private typedef]-----------------------------*/
/* ----------------------------[private function prototypes]-----------------*/
/* ----------------------------[private variables]---------------------------*/
/* ----------------------------[private functions]---------------------------*/
/* ----------------------------[public functions]----------------------------*/



/* Called each 100us */
void Gpt_NotifCh0 (void) {
    /* Add 10% load = 10us */
    Timer_uDelay(10);
}

/* Called each 500us */
void Gpt_NotifCh1 (void) {
    /* Add 3% load = 500 *0.03 = 15 */
    Timer_uDelay(15);
}


/**
 * When we enter RUN, start TaskLoad Task
 */
void EcuM_OnEnterRun(void)
{

#if defined(USE_GPT)
    /* Startup some ISR also */
    uint32 gptClock =  Gpt_Arc_GetClock(GptConf_GptChannelConfiguration_GptCh0);

    uint32 ticks = GPT_US2TICK(gptClock,100);

    Gpt_StartTimer(GptConf_GptChannelConfiguration_GptCh0,ticks);
    Gpt_EnableNotification(GptConf_GptChannelConfiguration_GptCh0);

    Gpt_StartTimer(GptConf_GptChannelConfiguration_GptCh1,ticks*5);
    Gpt_EnableNotification(GptConf_GptChannelConfiguration_GptCh1);
#endif

	ActivateTask(TASK_ID_TaskLoad);
}


/**
 * Task that increases CPU load from 0% until it hits 100%, then it
 * starts over again at 0%.
 *
 */
TASK(TaskLoad) {
	uint32_t percentLoad = 0;
	StatusType rv;
	uint32_t counter100hz = 0;
	uint32_t level = 0;

	/* Lets be cyclic at 10 ms */
	rv = SetRelAlarm(ALARM_ID_OsAlarm_10ms, OS_COUNTER_MS_TO_TICKS(10), OS_COUNTER_MS_TO_TICKS(10));
	(void)rv;

	for(;;) {
		/* Wait for the alarm to trigger us */
		WaitEvent(EVENT_MASK_OsEvent_10ms);
		ClearEvent(EVENT_MASK_OsEvent_10ms);

		/* Do something with the led */
		if( counter100hz++ == 100 ) {
            Perf_Trigger();
            percentLoad = (percentLoad + 10)  % 100;    /* Increase 10% */

			counter100hz = 0;
			Dio_WriteChannel(LED0,level);
			level ^= 1;
		}

		/* Function measurement for delay function*/
		Perf_PreFunctionHook(0);
		Timer_uDelay( percentLoad * 10000 / 100 ); 	/* 0 to 10ms */
		Perf_PostFunctionHook(0);
	}
}

/**
 * Idle Task
 */
TASK(OsIdle) {
#if defined(CFG_SHELL)
    SHELL_Mainloop();
#else
    for(;;) {}
#endif

}



