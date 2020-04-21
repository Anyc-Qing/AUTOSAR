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
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2 */
/** @tagSettings DEFAULT_ARCHITECTURE=JACINTO5|JACINTO6 */

#ifndef CAN_HW_JACINTO_H
#define CAN_HW_JACINTO_H

#include "CanIf_Types.h"
#include "Can_GeneralTypes.h"

typedef volatile struct {
    uint32   CTL;
    uint32   SR;
    uint8 TEC :  8;
    uint8 REC :  8;
    uint16     : 16;
    uint32   BTR;
    uint32   INT;
    uint32   TR;
    uint32 : 32;
    uint32   PEC;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32   ABOT;
    uint32   TRX;
    uint32   TRx[4];
    uint32   NDX;
    uint32   NDx[4];
    uint32   IPX;
    uint32   IPx[4];
    uint32   MVX;
    uint32   MVx[4];
    uint32 : 32;
    uint32   IPMx[4];
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    struct
    {
        uint32   CMD;
        uint32   MASK;
        uint32   ARB;
        uint32   MCTL;
        uint8    DATx[8];
        uint32 : 32;
        uint32 : 32;
    } IFx[3];
    uint32   IF3UEy[4];
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32   IOTX;
    uint32   IORX;
} Can_RegisterType;


#if defined(CFG_JAC6)
#define DCAN1_Base ((Can_RegisterType *)(0x4AE3C000 + L3_OFFSET))
#define DCAN2_Base ((Can_RegisterType *)(0x48480000 + L3_OFFSET))
#elif defined(CFG_JAC5) || defined(CFG_JAC5E)
#define DCAN1_Base ((Can_RegisterType *)0x481CC000)
#define DCAN2_Base ((Can_RegisterType *)0x481D0000)
#endif

/* Used to switch between IF1 and IF2 of DCAN */
#define CAN_REG_IF_1 0uL
#define CAN_REG_IF_2 1uL
/* Not used: #define CAN_REG_IF_3 2uL */


#if defined(ARC_CAN_TIMEOUT_DURATION)
#define CAN_TIMEOUT_DURATION				ARC_CAN_TIMEOUT_DURATION
#else
#define CAN_TIMEOUT_DURATION				0xFFFFFFFFu
#endif

#define DCAN1_MAX_MESSAGEBOXES				64
#define DCAN2_MAX_MESSAGEBOXES				64


#define DCAN_TX_MSG_OBJECT_NR				1
#define DCAN_RX_MSG_OBJECT_NR				2

#define CAN_REG_CTL_INIT_MASK				1u
#define CAN_REG_CTL_PARITY_DISABLED			0x5uL

#define CAN_REG_CTL_INIT_BIT				0U
#define CAN_REG_CTL_IE0_BIT					1U
#define CAN_REG_CTL_SIE_BIT					2U
#define CAN_REG_CTL_EIE_BIT					3U
#define CAN_REG_CTL_DAR_BIT					5U
#define CAN_REG_CTL_CCE_BIT					6U
#define CAN_REG_CTL_TEST_MODE_BIT			7U
#define CAN_REG_CTL_ABO_BIT					9U
#define CAN_REG_CTL_PARITY_BIT				10U
#define CAN_REG_CTL_SWR_BIT					15U
#define CAN_REG_CTL_IE1_BIT					17U
#define CAN_REG_CTL_PDR_BIT				 	24U
#define CAN_REG_CTL_WUBA_BIT				25U

#define CAN_REG_TR_LBACK_BIT				4U
#define CAN_REG_TR_TX_BIT					4U

#define CAN_REG_INT_EOB_BIT					7U

#define CAN_REG_ES_LEC_MASK					0x7u

#define CAN_REG_ES_TXOK_BIT					3U
#define CAN_REG_ES_RXOK_BIT					4U
#define CAN_REG_ES_EPASS_BIT				5U
#define CAN_REG_ES_EWARN_BIT				6U
#define CAN_REG_ES_BOFF_BIT					7U
#define CAN_REG_ES_PER_BIT					8U
#define CAN_REG_ES_WKPEND_BIT				9U
#define CAN_REG_ES_PDA_BIT					10U

#define CAN_REG_IFX_COM_DATAB_BIT			16U
#define CAN_REG_IFX_COM_DATAA_BIT			17U
#define CAN_REG_IFX_COM_TXREQ_BIT			18U
#define CAN_REG_IFX_COM_NEWDAT_BIT			18U
#define CAN_REG_IFX_COM_CLEARINTPEND_BIT	19U
#define CAN_REG_IFX_COM_CONTROL_BIT			20U
#define CAN_REG_IFX_COM_ARB_BIT				21U
#define CAN_REG_IFX_COM_WRRD_BIT			23U
#define CAN_REG_IFX_ARB_STDID_BIT			18U
#define CAN_REG_IFX_ARB_DIR_BIT				29U
#define CAN_REG_IFX_ARB_XTD_BIT				30U
#define CAN_REG_IFX_ARB_MSGVAL_BIT			31U
#define CAN_REG_IFX_MASK_MXTD_BIT			31U
#define CAN_REG_IFX_MASK_STDMSK_BIT			18U
#define CAN_REG_IFX_MASK_MDIR_BIT			30U

#define CAN_REG_IFX_MCTL_UMASK_BIT			12U
#define CAN_REG_IFX_MCTL_RXIE_BIT			10U
#define CAN_REG_IFX_MCTL_TXIE_BIT			11U
#define CAN_REG_IFX_MCTL_EOB_BIT			7U

#define CAN_REG_MC_DLC_MASK					0x0000000FuL

#define STD_ID_MASK							0x7FFu
#define EXT_ID_MASK							0x1FFFFFFFu
#define EXT_ID_BIT							0x80000000u

#define CAN_REG_BTR_BRP_MASK				0x3Fu
#define CAN_REG_BTR_BRPE_MASK				0x3C0u
#define CAN_REG_BTR_BRPE_RSHIFT				6u

#define CAN_REG_BTR_BRPE_OFFSET				16u
#define CAN_REG_BTR_SJW_OFFSET				6u
#define CAN_REG_BTR_TSEG1_OFFSET			8u
#define CAN_REG_BTR_TSEG2_OFFSET			12u

#define CAN_REG_IR_INT0ID_MASK				0x0000FFFFuL
#define CAN_REG_IR_BUSEVENT					0x8000uL
#define CAN_REG_IR_INT0ID_MSG_MASK			0x000000FFuL

#define CAN_IRQ_PRIORITY					4u

#define DCAN_MC_NEWDAT						15u
#define DCAN_MC_EOB							7u



#define CAN_CTL_INTERRUPT_MASK ((1uL << CAN_REG_CTL_IE0_BIT) | (1uL << CAN_REG_CTL_IE1_BIT) | (0uL << CAN_REG_CTL_SIE_BIT) | (1uL << CAN_REG_CTL_EIE_BIT))
#define IF_MC_MASK(_dlc, _umask, _rxie, _txie, _eob) \
            (_dlc \
            | (_umask << CAN_REG_IFX_MCTL_UMASK_BIT) \
            | (_rxie  << CAN_REG_IFX_MCTL_RXIE_BIT) \
            | (_txie  << CAN_REG_IFX_MCTL_TXIE_BIT) \
            | (_eob   << CAN_REG_IFX_MCTL_EOB_BIT))


#endif
