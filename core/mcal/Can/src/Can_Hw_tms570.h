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
/** @tagSettings DEFAULT_ARCHITECTURE=TMS570 */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */

/** @file Can_Hw_tms570.h
 *  This files contains the hardware specific register definitions that are required by the port module.
 */
 /** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the TMS570 Mcal
  *  @{
  */

 /** \addtogroup Can
  *  This is the TMS570 Mcal Can Group
  *  @{
  */
#ifndef CAN_HW_TMS570_H_
#define CAN_HW_TMS570_H_

#include "CanIf_Types.h"

/* ----------------------------[Macro Definitions]-------------*/
/**
  * @name    Values used in Can_Hw_tms570.h and Can_Hw_tms570.c
  * @{
  */

#define CAN_REG_BTR_BRP_MASK                0x3FuL
#define CAN_REG_BTR_BRPE_MASK               0x3C0uL
#define CAN_REG_BTR_BRPE_RSHIFT             6uL

#define CAN_REG_BTR_BRPE_OFFSET             16uL
#define CAN_REG_BTR_SJW_OFFSET              6uL
#define CAN_REG_BTR_TSEG1_OFFSET            8uL
#define CAN_REG_BTR_TSEG2_OFFSET            12uL

#define CAN_REG_IR_INT0ID_MASK              0x0000FFFFuL
#define CAN_REG_IR_BUSEVENT                 0x8000uL
#define CAN_REG_IR_INT0ID_MSG_MASK          0x000000FFuL

#define DCAN_CMD_BUSY       (1uL<<15uL)


/* Used to switch between IF1 and IF2 of DCAN */
#define CAN_REG_IF_1 0uL
#define CAN_REG_IF_2 1uL
/* Not used: #define CAN_REG_IF_3 2 */




#if defined(ARC_CAN_TIMEOUT_DURATION)
#define CAN_TIMEOUT_DURATION				ARC_CAN_TIMEOUT_DURATION
#else
#define CAN_TIMEOUT_DURATION				0xFFFFFFFFuL
#endif

#define DCAN1_MAX_MESSAGEBOXES				64uL
#define DCAN2_MAX_MESSAGEBOXES				64uL
#define DCAN3_MAX_MESSAGEBOXES				32uL


#define DCAN_TX_MSG_OBJECT_NR				1uL
#define DCAN_RX_MSG_OBJECT_NR				2uL

#define CAN_REG_CTL_INIT_MASK				1uL
#define CAN_REG_CTL_PARITY_DISABLED			0x5uL

#define CAN_REG_CTL_INIT_BIT				0uL
#define CAN_REG_CTL_IE0_BIT					1uL
#define CAN_REG_CTL_SIE_BIT					2uL
#define CAN_REG_CTL_EIE_BIT					3uL
#define CAN_REG_CTL_DAR_BIT					5uL
#define CAN_REG_CTL_CCE_BIT					6uL
#define CAN_REG_CTL_TEST_MODE_BIT			7uL
#define CAN_REG_CTL_ABO_BIT					9uL
#define CAN_REG_CTL_PARITY_BIT				10uL
#define CAN_REG_CTL_SWR_BIT					15uL
#define CAN_REG_CTL_IE1_BIT					17uL
#define CAN_REG_CTL_PDR_BIT				 	24uL
#define CAN_REG_CTL_WUBA_BIT				25uL

#define CAN_REG_TR_LBACK_BIT				4uL
#define CAN_REG_TR_TX_BIT					4uL

#define CAN_REG_INT_EOB_BIT					7uL

#define CAN_REG_ES_LEC_MASK					0x7uL

#define CAN_REG_ES_TXOK_BIT					3uL
#define CAN_REG_ES_RXOK_BIT					4uL
#define CAN_REG_ES_EPASS_BIT				5uL
#define CAN_REG_ES_EWARN_BIT				6uL
#define CAN_REG_ES_BOFF_BIT					7uL
#define CAN_REG_ES_PER_BIT					8uL
#define CAN_REG_ES_WKPEND_BIT				9uL
#define CAN_REG_ES_PDA_BIT					10uL

#define CAN_REG_IFX_COM_DATAB_BIT			16uL
#define CAN_REG_IFX_COM_DATAA_BIT			17uL
#define CAN_REG_IFX_COM_TXREQ_BIT			18uL
#define CAN_REG_IFX_COM_NEWDAT_BIT			18uL
#define CAN_REG_IFX_COM_CLEARINTPEND_BIT	19uL
#define CAN_REG_IFX_COM_CONTROL_BIT			20uL
#define CAN_REG_IFX_COM_ARB_BIT				21uL
#define CAN_REG_IFX_COM_WRRD_BIT			23uL
#define CAN_REG_IFX_ARB_STDID_BIT			18uL
#define CAN_REG_IFX_ARB_DIR_BIT				29uL
#define CAN_REG_IFX_ARB_XTD_BIT				30uL
#define CAN_REG_IFX_ARB_MSGVAL_BIT			31uL
#define CAN_REG_IFX_MASK_MXTD_BIT			31uL
#define CAN_REG_IFX_MASK_STDMSK_BIT			18uL
#define CAN_REG_IFX_MASK_MDIR_BIT			30uL

#define CAN_REG_IFX_MCTL_UMASK_BIT			12uL
#define CAN_REG_IFX_MCTL_RXIE_BIT			10uL
#define CAN_REG_IFX_MCTL_TXIE_BIT			11uL
#define CAN_REG_IFX_MCTL_EOB_BIT			7uL

#define CAN_REG_MC_DLC_MASK					0x0000000FuL
#define CAN_REG_CTL_PDR_MASK				(1uL << CAN_REG_CTL_PDR_BIT)

#define STD_ID_MASK							0x7FFuL
#define EXT_ID_MASK							0x1FFFFFFFuL
#define EXT_ID_BIT							0x80000000uL

#define CAN_IRQ_PRIORITY					4uL

#define DCAN_MC_NEWDAT						15uL
#define DCAN_MC_EOB							7uL



#define CAN_CTL_INTERRUPT_MASK ((1uL << CAN_REG_CTL_IE0_BIT) | (1uL << CAN_REG_CTL_IE1_BIT) | (0uL << CAN_REG_CTL_SIE_BIT) | (1uL << CAN_REG_CTL_EIE_BIT))
#define IF_MC_MASK(_dlc, _umask, _rxie, _txie, _eob) \
            (_dlc \
            | (_umask << CAN_REG_IFX_MCTL_UMASK_BIT) \
            | (_rxie  << CAN_REG_IFX_MCTL_RXIE_BIT) \
            | (_txie  << CAN_REG_IFX_MCTL_TXIE_BIT) \
            | (_eob   << CAN_REG_IFX_MCTL_EOB_BIT))


#define DCAN1_Base ((Can_RegisterType *)0xFFF7DC00uL)
#define DCAN2_Base ((Can_RegisterType *)0xFFF7DE00uL)
#define DCAN3_Base ((Can_RegisterType *)0xFFF7E000uL)

#define REG_FULL_WIDTH	32				// 4 bytes
#define REG_HALF_WIDTH	16				// 2 bytes
#define REG_CHAR_WIDTH	8				// 1 byte

/** @} */

/* ----------------[Base address type Definition]--------------*/
/**
  * @brief   CAN related registers in TMS570
  * @details This structure represents the layout of the hardware registers in TMS570 microcontroller.
  */
typedef volatile struct{
    uint32   CTL;           /* 0x000 */
    uint32   SR;            /* 0x004 */
    unsigned     : 	REG_HALF_WIDTH;      /* 0x008 */
    unsigned REC :  REG_CHAR_WIDTH;
    unsigned TEC :  REG_CHAR_WIDTH;
    uint32   BTR;           /* 0x00c */
    uint32   INT;           /* 0x010 */
    uint32   TR;            /* 0x014 */
    unsigned : REG_FULL_WIDTH;          /* 0x018 */
    uint32   PEC;           /* 0x01c */
    unsigned : REG_FULL_WIDTH;          /* 0x020 */
    unsigned : REG_FULL_WIDTH;          /* 0x024 */
    unsigned : REG_FULL_WIDTH;          /* 0x028 */
    unsigned : REG_FULL_WIDTH;          /* 0x02c */
    unsigned : REG_FULL_WIDTH;          /* 0x030 */
    unsigned : REG_FULL_WIDTH;          /* 0x034 */
    unsigned : REG_FULL_WIDTH;          /* 0x038 */
    unsigned : REG_FULL_WIDTH;          /* 0x03c */
    unsigned : REG_FULL_WIDTH;          /* 0x040 */
    unsigned : REG_FULL_WIDTH;          /* 0x044 */
    unsigned : REG_FULL_WIDTH;          /* 0x048 */
    unsigned : REG_FULL_WIDTH;          /* 0x04c */
    unsigned : REG_FULL_WIDTH;          /* 0x050 */
    unsigned : REG_FULL_WIDTH;          /* 0x054 */
    unsigned : REG_FULL_WIDTH;          /* 0x058 */
    unsigned : REG_FULL_WIDTH;          /* 0x05c */
    unsigned : REG_FULL_WIDTH;          /* 0x060 */
    unsigned : REG_FULL_WIDTH;          /* 0x064 */
    unsigned : REG_FULL_WIDTH;          /* 0x068 */
    unsigned : REG_FULL_WIDTH;          /* 0x06c */
    unsigned : REG_FULL_WIDTH;          /* 0x070 */
    unsigned : REG_FULL_WIDTH;          /* 0x074 */
    unsigned : REG_FULL_WIDTH;          /* 0x078 */
    unsigned : REG_FULL_WIDTH;          /* 0x07c */
    uint32   ABOT;          /* 0x080 */
    uint32   TXRQX;         /* 0x084 */
    uint32   TRx[4];        /* 0x088 -- 0x094 */
    uint32   NWDATX;        /* 0x098 */
    uint32   NWDATXx[4];    /* 0x09c -- 0x0a8 */
    uint32   INTPNDX;       /* 0x0ac */
    uint32   INTPNDXx[4];
    uint32   MSGVALX;
    uint32   MSGVALXx[4];
    unsigned : REG_FULL_WIDTH;
    uint32   IPMx[4];
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    struct
    {
        uint32   CMD;
        uint32   MASK;
        uint32   ARB;
        uint32   MCTL;
        uint8    DATx[8];
        unsigned : REG_FULL_WIDTH;
        unsigned : REG_FULL_WIDTH;
    } IFx[3];
    uint32   IF3UEy[4];
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    unsigned : REG_FULL_WIDTH;
    uint32   IOTX;
    uint32   IORX;
} Can_RegisterType;
/** @} */

#endif
/** @}*/
/** @}*/
