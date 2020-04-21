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

#include "Rte_SwcWriterType.h"

void swcWriterRunnable() {
    static DigitalLevel state = 0;
    static TestCmdType oldCmd = TESTER_CMD_NONE;
	// just pass data on in-port to out-port
	Rte_IWrite_SwcWriterRunnable_SenderPort_data1(Rte_IRead_SwcWriterRunnable_InputPort_data1());
	(void)Rte_Call_Blinker_Write(state);

	if (state == STD_HIGH ){
	    state =STD_LOW;
	}else{
	    state =STD_HIGH;
	}

    // Check to see if we get a command
    TestCmdType cmd = Rte_IRead_SwcWriterRunnable_CommandPort_cmd();
    if (cmd != TESTER_CMD_NONE) {
    	if (cmd != oldCmd) {
    		oldCmd = cmd;
    		if (cmd == TESTER_CMD_SHUTDOWN) {
    			Rte_IWrite_Init_ComMControl_requestedMode(COMM_NO_COMMUNICATION);
    		}
    	}
    }
}

void SwcWriterCommunication(void) {
    // This function is called when entering full communication
}

void SwcWriterInit() {
	Rte_IWrite_Init_ComMControl_requestedMode(COMM_FULL_COMMUNICATION);
}
