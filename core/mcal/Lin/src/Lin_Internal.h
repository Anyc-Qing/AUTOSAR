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

/** @tagSettings DEFAULT_ARCHITECTURE=TMS570|RH850F1H|JACINTO5 */

/** @file Lin_Internal.h
 *  This files contains the hardware specific API definitions.
 */
/** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the Mcal
  *  @{
  */

 /** \addtogroup Lin
  *  This is the Mcal Lin Group
  *  @{
  */

#ifndef LIN_INTERNAL_H_
#define LIN_INTERNAL_H_


/* ----------------------------[Internal Types]----------------*/
/** @enum Lin_StateType
*   @brief   ArcCore type definition
*   State of the Module.
*/
typedef enum
{
  LIN_STATE_UNINIT,
  LIN_STATE_INIT,
}Lin_StateType;

typedef enum {
    LIN_MASTER = 0,
    LIN_SLAVE
}LinFlex_ModeType;

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/
#define LINS_SLEEP          (uint32)0x0u
#define LINS_IDLE           (uint32)0x2u
#define LINS_GENERAL_BUSY   (uint32)0x3u
#define LIN_MAX_MSG_LENGTH 	8

/* ----------------------------[HW Specific Functions]---------*/
/** @brief Hardware specific implementation of Lin_Init
 *  @param[in] ConfigPtr - Pointer to configuration set
 */
void Lin_Hw_Init(const Lin_ConfigType* ConfigPtr);

Lin_StatusType          Lin_Hw_GetStatus( uint8 Channel, uint8** Lin_SduPtr);
Lin_DriverStatusType    Lin_Hw_GetDriverState(void);
Std_ReturnType          Lin_Hw_GoToSleep(uint8 Channel);
Lin_DriverStatusType    Lin_Hw_GetDriverState(void);

void            Lin_Hw_SetChannelStatus(uint8 Channel, Lin_StatusType Status);
void            Lin_Hw_SetChannelOrderedState(uint8 Channel, Lin_StatusType Status);
void            Lin_Hw_SetDriverState(Lin_DriverStatusType Status);
Std_ReturnType  Lin_Hw_Wakeup(uint8 Channel);

void            Lin_Hw_SetChannelOrderedStatus(uint8 Channel, Lin_StatusType Status);
Lin_StatusType  Lin_Hw_GetChannelStatus(uint8 Channel);
Std_ReturnType  Lin_Hw_WakeupInternal(uint8 Channel);
Std_ReturnType  Lin_Hw_GoToSleepInternal(uint8 Channel);
Std_ReturnType  Lin_Hw_SendFrame(uint8 Channel, Lin_PduType* PduInfoPtr);
void            Lin_Hw_SetDriverStatus(Lin_DriverStatusType status);
void            Lin_Hw_Isr(uint8 Channel);


#ifdef LIN_CHANNEL_0_USED
void Lin_Ch0_Isr(void);
#endif

#ifdef LIN_CHANNEL_1_USED
void Lin_Ch1_Isr(void);
#endif

#endif /* LIN_INTERNAL_H_ */

/** @}*/
/** @}*/
