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

#include "Rte_InteriorLightManager.h"

#define LIGHT_ON 	0x01u
#define LIGHT_OFF 	0x00u

/**
 * This function holds the implementation of the Runnable in the lightManager.
 * It reads the RightDoorStatus (input pin), LeftDoorStatus (input pin) and
 * RearDoorStatus (ETH communication). If any equal 1, then 1 is returned to
 * FrontLightStatus (output pin - LED) and to LightStatusOnCommMedia (ETH
 * communication).
 *
 * The logic is simply: If either doors (front doors, hatch etc.) are opened,
 * turn on InteriorLight.
 */
void interiorLightManagerMain(void) {
	IntImpl rearDoorStatus;

	//Receive the status of Rear Door
	rearDoorStatus = Rte_IRead_InteriorLightManagerMain_RearDoorStatus_message();

	// Receive the front door status
	DoorStatusImpl rightDoorStatus = Rte_IRead_InteriorLightManagerMain_RightDoorStatus_status();
	DoorStatusImpl leftDoorStatus = Rte_IRead_InteriorLightManagerMain_LeftDoorStatus_status();

	if (rightDoorStatus || leftDoorStatus || rearDoorStatus) {
		Rte_IWrite_InteriorLightManagerMain_FrontLightStatus_status(ON);
		Rte_IWrite_InteriorLightManagerMain_LightStatusOnCommMedia_message(LIGHT_ON);
	} else {
		Rte_IWrite_InteriorLightManagerMain_FrontLightStatus_status(OFF);
		Rte_IWrite_InteriorLightManagerMain_LightStatusOnCommMedia_message(LIGHT_OFF);
	}
}

