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



void swcReaderRunnable(void) {

	static DigitalLevel state = 0;
    static Rte_DE_uint32 rxData;

    if (rxData.value != Rte_IRead_SwcReaderRunnable_ReceiverPort_data1()){
    	rxData.value = Rte_IRead_SwcReaderRunnable_ReceiverPort_data1();
    	Rte_IWrite_SwcReaderRunnable_ResultPort_data1(rxData.value);
    	state = !state;
    }
	Rte_Call_Blinker_Write(state);

#if defined(USE_DLT)
	char data[]= "    SwcReader calling!";
    /* Data to be sent, always starting with 4 bytes message id */
	data[0]=0x1u;
	data[1]=0x2u;
	data[2]=0x3u;
	data[3]=0x4u;
	const Dlt_MessageLogInfoType log_info = {
		.app_id = {'H','E','J','0'},
		.context_id = {'S','T','D','0'},
		.arg_count = 0,
		.options = (uint8)0x00u,
		.log_level = DLT_LOG_INFO,
	};

	/* Example on how to use DLT from application */
    Rte_Call_Dlt_SendLogMessage(&log_info, (uint8 *)data, 22);
#endif
}

void swcReaderInit(void) {
    // perform a run request
    Rte_Call_RunControl_RequestRUN();
}

