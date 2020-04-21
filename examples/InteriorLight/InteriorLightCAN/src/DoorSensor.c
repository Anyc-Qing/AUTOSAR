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

#include "Rte_DoorSensor.h"

void doorSensorMain(Rte_Instance self) {
	DigitalLevel level;
	SignalQuality quality;

	// Read the level on
	(void)Rte_Call_DoorSwitchSignal_Read(self, &level, &quality);

	// Write the previously read value back to InteriorLightManager
	if (level == IOHWAB_HIGH) {
		Rte_IWrite_DoorSensorMain_DoorStatus_status(self, TRUE);
	} else {
		Rte_IWrite_DoorSensorMain_DoorStatus_status(self, FALSE);
	}
}

