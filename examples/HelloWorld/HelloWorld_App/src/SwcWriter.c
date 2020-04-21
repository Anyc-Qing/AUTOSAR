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

static DigitalLevel state = 0;
void swcWriterRunnable() {
	// just pass data on in-port to out-port
	Rte_IWrite_SwcWriterRunnable_SenderPort_data1(Rte_IRead_SwcWriterRunnable_InputPort_data1());
	Rte_Call_Blinker_Write(state);
	state = !state;
}

void SwcWriterInit() {
	Rte_IWrite_Init_ComMControl_requestedMode(COMM_FULL_COMMUNICATION);
}
