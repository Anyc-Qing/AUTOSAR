/*-------------------------------- Arctic Core ------------------------------
 * Copyright (C) 2014, ArcCore AB, Sweden, www.arccore.com.
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

#include "Rte_SwcReaderType.h"

#define DUTY_100_PERCENT 0x8000


static uint32 toPwmDuty(AnalogValue value)
{
    static AnalogValue maxValue = 0;
    static AnalogValue minValue = 0;
    AnalogValue range;
    if(value > maxValue) {
        maxValue = value;
    }
    if(value < minValue) {
        minValue = value;
    }
    range = (maxValue - minValue);
    uint32 duty = DUTY_100_PERCENT;
    if(0 != range) {
        /*lint -e{9033}  expression gives +ve value  */
        duty =(uint32)((DUTY_100_PERCENT*(((value - minValue)*1000)/range))/1000);
    }
    return duty;
}


void swcReaderRunnable() {

    static TestCmdType oldCmd = TESTER_CMD_NONE;
    static uint8 kickWdg = 0;
    AnalogValue value;
    SignalQuality quality;
    uint32 dataIn;
    boolean functionPermission;

    /* Simple usage of the OS service interface. The code does not do anything
     * useful and it purpose is to provide an example how to use the interface
     */
    static TickType tickValue = 0;
    TickType tickValueElapsed = 0;
    TickRefType tickValueRef = &tickValue;
    TickRefType tickValueElapsedRef = &tickValueElapsed;

    (void)Rte_Call_OsCounter_GetCounterValue(tickValueRef);
    (void)Rte_Call_OsCounter_GetElapsedValue(tickValueRef, tickValueElapsedRef);


    // call the synchronous operation with received data
#if defined(CFG_MPC5604B) || defined(CFG_MPC5746C) || defined(CFG_MPC5748G)
    /* Led is active low (mpc5604b_xpc560b) */
    (void)Rte_Call_Blinker_Write((Rte_IRead_SwcReaderRunnable_ReceiverPort_data1() > 0) ? STD_ON : STD_OFF );
#else
    /* Led active high (STM32, TMS570 and others) */
    (void)Rte_Call_Blinker_Write((Rte_IRead_SwcReaderRunnable_ReceiverPort_data1() > 0) ? STD_OFF : STD_ON );
#endif
    // send received data to SenderPort
    dataIn = Rte_IRead_SwcReaderRunnable_ReceiverPort_data1();
    Rte_IWrite_SwcReaderRunnable_ResultPort_data1(dataIn);

    (void)Rte_Call_AnalogReader_Read(&value, &quality);
    if(value > (AnalogValue)10000) { /* here replace 1<<16 with 10000 to fix lint issue */
        // value is invalid, report error
        (void)Rte_Call_Det_ReportError(0,0);
    }
    Rte_IWrite_SwcReaderRunnable_AdcResult_data1(value);
    (void)Rte_Call_PWMWriter_Set(toPwmDuty(value), &quality);

    // Check to see if we get a command
    TestCmdType cmd = Rte_IRead_SwcReaderRunnable_ReceiverPort_cmd();
    if (cmd != TESTER_CMD_NONE) {
    	if (cmd != oldCmd) {
    		oldCmd = cmd;
    		if (cmd == TESTER_CMD_SHUTDOWN) {
    		    (void)Rte_Call_RunControl_ReleaseRUN();
    		}
    		if (cmd == TESTER_CMD_ENABLE_WDG) {
    			Rte_IWrite_SwcReaderRunnable_WdgM_StateReq_requestedMode(SUPERVISION_OK);
    			kickWdg = 1;
    		}
    		if (cmd == TESTER_CMD_DISABLE_WDG) {
    			Rte_IWrite_SwcReaderRunnable_WdgM_StateReq_requestedMode(SUPERVISION_DEACTIVATED);
    			kickWdg = 0;
    		}
    		if (cmd == TESTER_CMD_STOP_WDG_KICK) {
    			kickWdg = 0;
    		}
    	}
    }

    if (kickWdg !=0) {
        (void)Rte_Call_SwcReaderType_SwcReader_WdgM_LocalSup_CheckpointReached(0u);
    }


#if defined(USE_DLT)
    /* Trigger a Det_ReportError in order to write to Dlt */
    if(Rte_IRead_SwcReaderRunnable_ReceiverPort_data1() == 0xdedededeu){
        (void)Rte_Call_Det_ReportError(2,3);
    }
    /* Trigger a DEM error in order to write to Dlt */
    if(Rte_IRead_SwcReaderRunnable_ReceiverPort_data1() == 0xbabababau){
        (void)Rte_Call_Dem_TestEvent_SetEventStatus(DEM_EVENT_STATUS_FAILED);
    }

    /* Trigger a write to Dlt */
    if(Rte_IRead_SwcReaderRunnable_ReceiverPort_data1() == 0xadadadadu){
		uint8 data[]= "    SwcReader calling!";
		/* Data to be sent, always starting with 4 bytes message id */
		data[0]=0xadu;
		data[1]=0xadu;
		data[2]=0xadu;
		data[3]=0xadu;
		const Dlt_MessageLogInfoType log_info = {
			.app_id = {'H','E','J','0'},
			.context_id = {'S','T','D','0'},
			.arg_count = 0,
			.options = (uint8)0x00u,
			.log_level = DLT_LOG_INFO,
		};

		/* Example on how to use DLT from application */
		(void)Rte_Call_Dlt_SendLogMessage(&log_info, data, 22);
    }
#endif

    /* Simple usage of the FiM service interface. The code does not do anything
     * useful and it purpose is to provide an example how to use the interface
     */
    (void)Rte_Call_FiM_FID1_Inhibition_GetFunctionPermission(&functionPermission);

}

void swcReaderInit(void) {
    // perform a run request
    (void)Rte_Call_RunControl_RequestRUN();
}
