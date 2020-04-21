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

#include "Os.h"
#if defined(CFG_T1_ENABLE)
#include "Arc_T1_Int.h"
#endif

void OsIdle( void ) {
boolean temp=TRUE;
	while(temp==TRUE){
#if defined(CFG_T1_ENABLE)
		Arc_T1_BackgroundFunction();
#endif
	}
}

void ErrorHook( StatusType Error ) {
	(void)Error;
	boolean tempwhile = TRUE;
	while(tempwhile == TRUE){

	}
}


void StartupHook( void ) {
}


void ShutdownHook( StatusType Error ) {
    (void)Error;
}
