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

/** @tagSettings DEFAULT_ARCHITECTURE=PPC|MPC5607B|MPC5645S|MPC5646B|MPC5744P */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2|4.3.0 */

#ifndef MCU_FCCU_H_
#define MCU_FCCU_H_

/* ----------------------------[private define]------------------------------*/

/* ----------------------------[private macro]-------------------------------*/

#define STATE_NORMAL    0U
#define STATE_CONFIG    1U
#define STATE_ALARM     2U
#define STATE_FAULT     3U

#define OP_NOOP             0U
#define OP_CONFIG           1U
#define OP_NORMAL           2U
#define OP_READ_FCCU_STAT   3U
#define OP_READ_CFS         9U
#define OP_READ_NCFS        10U
#define OP_CLEARING_CFS     11U

/* RGM FCCU bits */
#define F_FCCU_HARD_BIT     (1UL<<(15U-1U))
#define F_FCCU_SAFE_BIT     (1UL<<(15U-8U))


/* FCCU NCFK key */
#define FCCU_NCFK_KEY       0xAB3498FEUL

#define OPS_IDLE                0x0UL
#define OPS_IN_PROGRESS         0x1UL
#define OPS_ABORTED             0x2UL
#define OPS_SUCCESSFUL          0x3UL

typedef uint16 Fccu_OpRvType;


#define WAIT_FOR_OP() while (FCCU.CTRL.B.OPS != OPS_SUCCESSFUL) {}

/* ----------------------------[private functions]---------------------------*/
/* ----------------------------[public functions]----------------------------*/

Fccu_OpRvType Fccu_WaitForOp ( void );

/**
 * Get Fault Control and Collection Unit status
 */
uint32 Fccu_GetStat( void );


#if defined(CFG_MCU_ARC_CLEAR_FCCU)
void  Fccu_ClearCriticalStatusReg( uint32 regIndex, uint32 val );
#endif

Fccu_OpRvType Fccu_ClearNonCriticalStatusReg (uint32 regIndex, uint32 val);

/**
 * Executes one operation on the Initialize the Fault Control and Collection Unit.
 * @param op - operation to perfrom
 */
Fccu_OpRvType Fccu_Op( uint32 operation );


/**
 * Initialize the Fault Control and Collection Unit.
 */
void Fccu_Init( void );

/**
* @brief   If during execution of Fccu_Init the mode was found != STATE_NORMAL
*          this callback is called.
* @details .
*/
void Fccu_SafeMode_Cb( void );

/**
 * @brief   Configuration callback from Fccu_Init
 * @details .
 */
void Fccu_Config_Cb( void );


#endif
