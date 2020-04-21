
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

/* Generator version: 1.1.0
 * AUTOSAR version:   4.0.3
 */
/*lint -emacro(904,IOHWAB_VALIDATE_RETURN)*/ /*904 PC-Lint exception to MISRA 14.7 (validate DET macros)*/

#include "IoHwAb.h"
#include "IoHwAb_Internal.h"
#include "IoHwAb_Digital.h"
#include "IoHwAb_Dcm.h"
#include "SchM_IoHwAb.h"
#if defined(USE_DIO)
#include "Dio.h"
#else
#error "DIO Module is needed by IOHWAB"
#endif




#define IS_VALID_DIO_LEVEL(_x) ((STD_LOW == (_x)) || (STD_HIGH == (_x)))


/* Signals states for I/O-control */
/* Digital signal: FrontLight */

#define IOHWAB_START_SEC_VAR_INIT_UNSPECIFIED
#include "IoHwAb_BswMemMap.h"
boolean IoHwAb_FrontLight_Locked = FALSE;
#define IOHWAB_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "IoHwAb_BswMemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/

#define IOHWAB_START_SEC_VAR_INIT_UNSPECIFIED
#include "IoHwAb_BswMemMap.h"
IoHwAb_LevelType IoHwAb_FrontLight_Saved = IOHWAB_LOW;
#define IOHWAB_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "IoHwAb_BswMemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/

const IoHwAb_LevelType IoHwAb_FrontLight_Default = IOHWAB_LOW;

/* Digital signal: FrontDoorRight */

#define IOHWAB_START_SEC_VAR_INIT_UNSPECIFIED
#include "IoHwAb_BswMemMap.h"
boolean IoHwAb_FrontDoorRight_Locked = FALSE;
#define IOHWAB_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "IoHwAb_BswMemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/

#define IOHWAB_START_SEC_VAR_INIT_UNSPECIFIED
#include "IoHwAb_BswMemMap.h"
IoHwAb_LevelType IoHwAb_FrontDoorRight_Saved = IOHWAB_LOW;
#define IOHWAB_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "IoHwAb_BswMemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/

const IoHwAb_LevelType IoHwAb_FrontDoorRight_Default = IOHWAB_LOW;

/* Digital signal: FrontDoorLeft */

#define IOHWAB_START_SEC_VAR_INIT_UNSPECIFIED
#include "IoHwAb_BswMemMap.h"
boolean IoHwAb_FrontDoorLeft_Locked = FALSE;
#define IOHWAB_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "IoHwAb_BswMemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/

#define IOHWAB_START_SEC_VAR_INIT_UNSPECIFIED
#include "IoHwAb_BswMemMap.h"
IoHwAb_LevelType IoHwAb_FrontDoorLeft_Saved = IOHWAB_LOW;
#define IOHWAB_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "IoHwAb_BswMemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/

const IoHwAb_LevelType IoHwAb_FrontDoorLeft_Default = IOHWAB_LOW;

Std_ReturnType IoHwAb_Digital_Write_FrontLight(IoHwAb_LevelType newValue)
{
	IOHWAB_VALIDATE_RETURN(IS_VALID_DIO_LEVEL((Dio_LevelType)newValue), IOHWAB_DIGITAL_WRITE_ID, IOHWAB_E_PARAM_LEVEL, E_NOT_OK);
	Dio_LevelType setLevel;
	if( TRUE == IoHwAb_FrontLight_Locked ) {
		setLevel = IoHwAb_FrontLight_Saved;
	} else {
		setLevel = newValue;
	}
	IoHwAb_FrontLight_Saved = setLevel;
	/* @req ARCIOHWAB004 */
	Dio_WriteChannel(DioConf_DioChannel_LED1, setLevel);
	return E_OK;
}

/* @req ARCIOHWAB011 */
Std_ReturnType IoHwAb_Digital_Read_FrontLight(IoHwAb_LevelType *value, IoHwAb_StatusType *status)
{
	IOHWAB_VALIDATE_RETURN((NULL != value), IOHWAB_DIGITAL_READ_ID, IOHWAB_E_PARAM_PTR, E_NOT_OK);
	IOHWAB_VALIDATE_RETURN((NULL != status), IOHWAB_DIGITAL_READ_ID, IOHWAB_E_PARAM_PTR, E_NOT_OK);
	*value = Dio_ReadChannel(DioConf_DioChannel_LED1);
	status->quality = IOHWAB_GOOD;

	return E_OK;
}

/* @req ARCIOHWAB011 */
Std_ReturnType IoHwAb_Digital_Read_FrontDoorRight(IoHwAb_LevelType *value, IoHwAb_StatusType *status)
{
	IOHWAB_VALIDATE_RETURN((NULL != value), IOHWAB_DIGITAL_READ_ID, IOHWAB_E_PARAM_PTR, E_NOT_OK);
	IOHWAB_VALIDATE_RETURN((NULL != status), IOHWAB_DIGITAL_READ_ID, IOHWAB_E_PARAM_PTR, E_NOT_OK);
	if( FALSE == IoHwAb_FrontDoorRight_Locked ) {
		*value = Dio_ReadChannel(DioConf_DioChannel_D7);
	} else {
		*value = IoHwAb_FrontDoorRight_Saved;
	}
	status->quality = IOHWAB_GOOD;

	return E_OK;
}

/* @req ARCIOHWAB011 */
Std_ReturnType IoHwAb_Digital_Read_FrontDoorLeft(IoHwAb_LevelType *value, IoHwAb_StatusType *status)
{
	IOHWAB_VALIDATE_RETURN((NULL != value), IOHWAB_DIGITAL_READ_ID, IOHWAB_E_PARAM_PTR, E_NOT_OK);
	IOHWAB_VALIDATE_RETURN((NULL != status), IOHWAB_DIGITAL_READ_ID, IOHWAB_E_PARAM_PTR, E_NOT_OK);
	if( FALSE == IoHwAb_FrontDoorLeft_Locked ) {
		*value = Dio_ReadChannel(DioConf_DioChannel_D8);
	} else {
		*value = IoHwAb_FrontDoorLeft_Saved;
	}
	status->quality = IOHWAB_GOOD;

	return E_OK;
}

/* Exported functions */
/* Digital signal: FrontLight */
/* @req ARCIOHWAB003 */
Std_ReturnType IoHwAb_Dcm_FrontLight(uint8 action, uint8* value)
{
	Std_ReturnType ret = E_OK;
	SchM_Enter_IoHwAb_EA_0();
	boolean tempLock = IoHwAb_FrontLight_Locked;
	switch(action) {
	case IOHWAB_RETURNCONTROLTOECU:
		IoHwAb_FrontLight_Locked = FALSE;
		break;
	case IOHWAB_RESETTODEFAULT:
		IoHwAb_FrontLight_Locked = FALSE;
		if(E_OK != IoHwAb_Digital_Write_FrontLight(IoHwAb_FrontLight_Default)) {
			IoHwAb_FrontLight_Locked = tempLock;
			ret = E_NOT_OK;
		} else {
			IoHwAb_FrontLight_Saved = IoHwAb_FrontLight_Default;
			IoHwAb_FrontLight_Locked = TRUE;
		}
		break;
	case IOHWAB_FREEZECURRENTSTATE:
		IoHwAb_FrontLight_Locked = TRUE;
		break;
	case IOHWAB_SHORTTERMADJUST:
		{
			IoHwAb_LevelType level = *value; 
			IoHwAb_FrontLight_Locked = FALSE;
			if(E_OK != IoHwAb_Digital_Write_FrontLight(level)) {
				IoHwAb_FrontLight_Locked = tempLock;
				ret = E_NOT_OK;
			} else {
				IoHwAb_FrontLight_Saved = level;
				IoHwAb_FrontLight_Locked = TRUE;
			}
		}
		break;
	default:
		IOHWAB_DET_REPORT_ERROR(IOHWAB_DIGITAL_IO_CONTROL_ID, IOHWAB_E_PARAM_ACTION);
		ret = E_NOT_OK;
		break;
	}
	SchM_Exit_IoHwAb_EA_0();
	return ret;
}


Std_ReturnType IoHwAb_Dcm_Read_FrontLight(uint8* value)
{
	Std_ReturnType ret;
	IoHwAb_StatusType status;
	IoHwAb_LevelType level;
	SchM_Enter_IoHwAb_EA_0();
	boolean tempLock = IoHwAb_FrontLight_Locked;
	IoHwAb_FrontLight_Locked = FALSE;
	ret = IoHwAb_Digital_Read_FrontLight(&level, &status);
	*value = level; 
	IoHwAb_FrontLight_Locked = tempLock;
	SchM_Exit_IoHwAb_EA_0();
	return ret;
}

	


/* Digital signal: FrontDoorRight */
/* @req ARCIOHWAB003 */
Std_ReturnType IoHwAb_Dcm_FrontDoorRight(uint8 action, uint8* value)
{
	Std_ReturnType ret = E_OK;
	IoHwAb_StatusType status;
	SchM_Enter_IoHwAb_EA_0();
	boolean tempLock = IoHwAb_FrontDoorRight_Locked;
	switch(action) {
	case IOHWAB_RETURNCONTROLTOECU:
		IoHwAb_FrontDoorRight_Locked = FALSE;
		break;
	case IOHWAB_RESETTODEFAULT:
		IoHwAb_FrontDoorRight_Saved = IoHwAb_FrontDoorRight_Default;
		IoHwAb_FrontDoorRight_Locked = TRUE;
		break;
	case IOHWAB_FREEZECURRENTSTATE:
		IoHwAb_FrontDoorRight_Locked = FALSE;
		if(E_OK != IoHwAb_Digital_Read_FrontDoorRight(&IoHwAb_FrontDoorRight_Saved, &status)) {
			IoHwAb_FrontDoorRight_Locked = tempLock;
			ret = E_NOT_OK;
		} else {
			IoHwAb_FrontDoorRight_Locked = TRUE;
		}
		break;
	case IOHWAB_SHORTTERMADJUST:
		{
			IoHwAb_LevelType level = *value; 
			IoHwAb_FrontDoorRight_Saved = level;
			IoHwAb_FrontDoorRight_Locked = TRUE;
		}
		break;
	default:
		IOHWAB_DET_REPORT_ERROR(IOHWAB_DIGITAL_IO_CONTROL_ID, IOHWAB_E_PARAM_ACTION);
		ret = E_NOT_OK;
		break;
	}
	SchM_Exit_IoHwAb_EA_0();
	return ret;
}


Std_ReturnType IoHwAb_Dcm_Read_FrontDoorRight(uint8* value)
{
	Std_ReturnType ret;
	IoHwAb_StatusType status;
	IoHwAb_LevelType level;
	SchM_Enter_IoHwAb_EA_0();
	boolean tempLock = IoHwAb_FrontDoorRight_Locked;
	IoHwAb_FrontDoorRight_Locked = FALSE;
	ret = IoHwAb_Digital_Read_FrontDoorRight(&level, &status);
	*value = level; 
	IoHwAb_FrontDoorRight_Locked = tempLock;
	SchM_Exit_IoHwAb_EA_0();
	return ret;
}

	


/* Digital signal: FrontDoorLeft */
/* @req ARCIOHWAB003 */
Std_ReturnType IoHwAb_Dcm_FrontDoorLeft(uint8 action, uint8* value)
{
	Std_ReturnType ret = E_OK;
	IoHwAb_StatusType status;
	SchM_Enter_IoHwAb_EA_0();
	boolean tempLock = IoHwAb_FrontDoorLeft_Locked;
	switch(action) {
	case IOHWAB_RETURNCONTROLTOECU:
		IoHwAb_FrontDoorLeft_Locked = FALSE;
		break;
	case IOHWAB_RESETTODEFAULT:
		IoHwAb_FrontDoorLeft_Saved = IoHwAb_FrontDoorLeft_Default;
		IoHwAb_FrontDoorLeft_Locked = TRUE;
		break;
	case IOHWAB_FREEZECURRENTSTATE:
		IoHwAb_FrontDoorLeft_Locked = FALSE;
		if(E_OK != IoHwAb_Digital_Read_FrontDoorLeft(&IoHwAb_FrontDoorLeft_Saved, &status)) {
			IoHwAb_FrontDoorLeft_Locked = tempLock;
			ret = E_NOT_OK;
		} else {
			IoHwAb_FrontDoorLeft_Locked = TRUE;
		}
		break;
	case IOHWAB_SHORTTERMADJUST:
		{
			IoHwAb_LevelType level = *value; 
			IoHwAb_FrontDoorLeft_Saved = level;
			IoHwAb_FrontDoorLeft_Locked = TRUE;
		}
		break;
	default:
		IOHWAB_DET_REPORT_ERROR(IOHWAB_DIGITAL_IO_CONTROL_ID, IOHWAB_E_PARAM_ACTION);
		ret = E_NOT_OK;
		break;
	}
	SchM_Exit_IoHwAb_EA_0();
	return ret;
}


Std_ReturnType IoHwAb_Dcm_Read_FrontDoorLeft(uint8* value)
{
	Std_ReturnType ret;
	IoHwAb_StatusType status;
	IoHwAb_LevelType level;
	SchM_Enter_IoHwAb_EA_0();
	boolean tempLock = IoHwAb_FrontDoorLeft_Locked;
	IoHwAb_FrontDoorLeft_Locked = FALSE;
	ret = IoHwAb_Digital_Read_FrontDoorLeft(&level, &status);
	*value = level; 
	IoHwAb_FrontDoorLeft_Locked = tempLock;
	SchM_Exit_IoHwAb_EA_0();
	return ret;
}

	


/* @req ARCIOHWAB001 */
Std_ReturnType IoHwAb_Digital_Write(IoHwAb_SignalType signal, IoHwAb_LevelType newValue)
{
	Std_ReturnType ret = E_NOT_OK;

	switch( signal ) {
	case IOHWAB_SIGNAL_FRONTLIGHT:
		ret = IoHwAb_Digital_Write_FrontLight(newValue);
		break;
	default:
		IOHWAB_DET_REPORT_ERROR(IOHWAB_DIGITAL_WRITE_ID, IOHWAB_E_PARAM_SIGNAL);
		break;
	}
	return ret;
}

/* @req ARCIOHWAB001 */
Std_ReturnType IoHwAb_Digital_Read(IoHwAb_SignalType signal, IoHwAb_LevelType *value, IoHwAb_StatusType *status)
{
	Std_ReturnType ret = E_NOT_OK;

	switch( signal ) {
	case IOHWAB_SIGNAL_FRONTDOORRIGHT:
		ret = IoHwAb_Digital_Read_FrontDoorRight(value, status);
		break;
	case IOHWAB_SIGNAL_FRONTDOORLEFT:
		ret = IoHwAb_Digital_Read_FrontDoorLeft(value, status);
		break;
	default:
		IOHWAB_DET_REPORT_ERROR(IOHWAB_DIGITAL_READ_ID, IOHWAB_E_PARAM_SIGNAL);
		break;
	}
	return ret;
}

