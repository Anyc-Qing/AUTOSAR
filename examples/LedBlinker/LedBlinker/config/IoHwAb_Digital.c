
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
/* Digital signal: LED1 */

#define IOHWAB_START_SEC_VAR_INIT_UNSPECIFIED
#include "IoHwAb_BswMemMap.h"
boolean IoHwAb_LED1_Locked = FALSE;
#define IOHWAB_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "IoHwAb_BswMemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/

#define IOHWAB_START_SEC_VAR_INIT_UNSPECIFIED
#include "IoHwAb_BswMemMap.h"
IoHwAb_LevelType IoHwAb_LED1_Saved = IOHWAB_LOW;
#define IOHWAB_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "IoHwAb_BswMemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/

const IoHwAb_LevelType IoHwAb_LED1_Default = IOHWAB_LOW;

Std_ReturnType IoHwAb_Digital_Write_LED1(IoHwAb_LevelType newValue)
{
	IOHWAB_VALIDATE_RETURN(IS_VALID_DIO_LEVEL((Dio_LevelType)newValue), IOHWAB_DIGITAL_WRITE_ID, IOHWAB_E_PARAM_LEVEL, E_NOT_OK);
	Dio_LevelType setLevel;
	if( TRUE == IoHwAb_LED1_Locked ) {
		setLevel = IoHwAb_LED1_Saved;
	} else {
		setLevel = newValue;
	}
	IoHwAb_LED1_Saved = setLevel;
	/* @req ARCIOHWAB004 */
	Dio_WriteChannel(DioConf_DioChannel_LED1, setLevel);
	return E_OK;
}

/* @req ARCIOHWAB011 */
Std_ReturnType IoHwAb_Digital_Read_LED1(IoHwAb_LevelType *value, IoHwAb_StatusType *status)
{
	IOHWAB_VALIDATE_RETURN((NULL != value), IOHWAB_DIGITAL_READ_ID, IOHWAB_E_PARAM_PTR, E_NOT_OK);
	IOHWAB_VALIDATE_RETURN((NULL != status), IOHWAB_DIGITAL_READ_ID, IOHWAB_E_PARAM_PTR, E_NOT_OK);
	*value = Dio_ReadChannel(DioConf_DioChannel_LED1);
	status->quality = IOHWAB_GOOD;

	return E_OK;
}

/* Exported functions */
/* Digital signal: LED1 */
/* @req ARCIOHWAB003 */
Std_ReturnType IoHwAb_Dcm_LED1(uint8 action, uint8* value)
{
	Std_ReturnType ret = E_OK;
	SchM_Enter_IoHwAb_EA_0();
	boolean tempLock = IoHwAb_LED1_Locked;
	switch(action) {
	case IOHWAB_RETURNCONTROLTOECU:
		IoHwAb_LED1_Locked = FALSE;
		break;
	case IOHWAB_RESETTODEFAULT:
		IoHwAb_LED1_Locked = FALSE;
		if(E_OK != IoHwAb_Digital_Write_LED1(IoHwAb_LED1_Default)) {
			IoHwAb_LED1_Locked = tempLock;
			ret = E_NOT_OK;
		} else {
			IoHwAb_LED1_Saved = IoHwAb_LED1_Default;
			IoHwAb_LED1_Locked = TRUE;
		}
		break;
	case IOHWAB_FREEZECURRENTSTATE:
		IoHwAb_LED1_Locked = TRUE;
		break;
	case IOHWAB_SHORTTERMADJUST:
		{
			IoHwAb_LevelType level = *value; 
			IoHwAb_LED1_Locked = FALSE;
			if(E_OK != IoHwAb_Digital_Write_LED1(level)) {
				IoHwAb_LED1_Locked = tempLock;
				ret = E_NOT_OK;
			} else {
				IoHwAb_LED1_Saved = level;
				IoHwAb_LED1_Locked = TRUE;
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


Std_ReturnType IoHwAb_Dcm_Read_LED1(uint8* value)
{
	Std_ReturnType ret;
	IoHwAb_StatusType status;
	IoHwAb_LevelType level;
	SchM_Enter_IoHwAb_EA_0();
	boolean tempLock = IoHwAb_LED1_Locked;
	IoHwAb_LED1_Locked = FALSE;
	ret = IoHwAb_Digital_Read_LED1(&level, &status);
	*value = level; 
	IoHwAb_LED1_Locked = tempLock;
	SchM_Exit_IoHwAb_EA_0();
	return ret;
}

	


/* @req ARCIOHWAB001 */
Std_ReturnType IoHwAb_Digital_Write(IoHwAb_SignalType signal, IoHwAb_LevelType newValue)
{
	Std_ReturnType ret = E_NOT_OK;

	switch( signal ) {
	case IOHWAB_SIGNAL_LED1:
		ret = IoHwAb_Digital_Write_LED1(newValue);
		break;
	default:
		IOHWAB_DET_REPORT_ERROR(IOHWAB_DIGITAL_WRITE_ID, IOHWAB_E_PARAM_SIGNAL);
		break;
	}
	return ret;
}


