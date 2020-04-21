/**
 * \file IfxSrc_regdef.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC39XA_ITS_V3.0.R0
 * Specification: TC39xA_INT_ITS_MCSFR.xml
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
 *
 * Infineon Technologies AG (Infineon) is supplying this file for use
 * exclusively with Infineon's microcontroller products. This file can be freely
 * distributed within development tools that are supporting such microcontroller
 * products.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 * \defgroup IfxLld_Src Src
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Src_Bitfields Bitfields
 * \ingroup IfxLld_Src
 * 
 * \defgroup IfxLld_Src_union Union
 * \ingroup IfxLld_Src
 * 
 * \defgroup IfxLld_Src_struct Struct
 * \ingroup IfxLld_Src
 * 
 */
#ifndef IFXSRC_REGDEF_H
#define IFXSRC_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Src_Bitfields
 * \{  */

/** \brief  Service request register */
typedef struct _Ifx_SRC_SRCR_Bits
{
    unsigned int SRPN:8;                    /**< \brief [7:0] Service Request Priority Number (rw) */
    unsigned int reserved_8:2;              /**< \brief \internal Reserved */
    unsigned int SRE:1;                     /**< \brief [10:10] Service Request Enable (rw) */
    unsigned int TOS:3;                     /**< \brief [13:11] Type of Service Control (rw) */
    unsigned int reserved_14:2;             /**< \brief \internal Reserved */
    unsigned int ECC:5;                     /**< \brief [20:16] ECC (rwh) */
    unsigned int reserved_21:3;             /**< \brief \internal Reserved */
    unsigned int SRR:1;                     /**< \brief [24:24] Service Request Flag (rh) */
    unsigned int CLRR:1;                    /**< \brief [25:25] Request Clear Bit (w) */
    unsigned int SETR:1;                    /**< \brief [26:26] Request Set Bit (w) */
    unsigned int IOV:1;                     /**< \brief [27:27] Interrupt Trigger Overflow Bit (rh) */
    unsigned int IOVCLR:1;                  /**< \brief [28:28] Interrupt Trigger Overflow Clear Bit (w) */
    unsigned int SWS:1;                     /**< \brief [29:29] SW Sticky Bit (rh) */
    unsigned int SWSCLR:1;                  /**< \brief [30:30] SW Sticky Clear Bit (w) */
    unsigned int reserved_31:1;             /**< \brief \internal Reserved */
} Ifx_SRC_SRCR_Bits;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Src_union
 * \{  */

/** \brief  Service request register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_SRC_SRCR_Bits B;                    /**< \brief Bitfield access */
} Ifx_SRC_SRCR;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Src_struct
 * \{  */
/******************************************************************************/
/** \name Object L3
 * \{  */

/** \brief  HSSL Service requests */
typedef volatile struct _Ifx_SRC_HSSL_CH
{
    Ifx_SRC_SRCR COK;                       /**< \brief 0, Channel OK Service Request m */
    Ifx_SRC_SRCR RDI;                       /**< \brief 4, Channel Read Data Service Request m */
    Ifx_SRC_SRCR ERR;                       /**< \brief 8, Channel Error ServiceRequest m */
    Ifx_SRC_SRCR TRG;                       /**< \brief C, Channel Trigger Service Request m */
} Ifx_SRC_HSSL_CH;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Src_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */

/** \brief  AGBT Service requests */
typedef volatile struct _Ifx_SRC_AGBT
{
    Ifx_SRC_SRCR SR;                        /**< \brief 0, AGBT Service Request */
} Ifx_SRC_AGBT;

/** \brief  ASCLIN Service requests */
typedef volatile struct _Ifx_SRC_ASCLIN
{
    Ifx_SRC_SRCR TX;                        /**< \brief 0, ASCLIN Transmit Service Request */
    Ifx_SRC_SRCR RX;                        /**< \brief 4, ASCLIN Receive Service Request */
    Ifx_SRC_SRCR ERR;                       /**< \brief 8, ASCLIN Error Service Request */
} Ifx_SRC_ASCLIN;

/** \brief  BCU Service requests */
typedef volatile struct _Ifx_SRC_BCU
{
    Ifx_SRC_SRCR SPB;                       /**< \brief 0, Bus Control Unit SPB Service Request */
    Ifx_SRC_SRCR BBB;                       /**< \brief 4, Bus Control Unit BBB Service Request */
} Ifx_SRC_BCU;

/** \brief  CAN Service requests */
typedef volatile struct _Ifx_SRC_CAN
{
    Ifx_SRC_SRCR INT[16];                   /**< \brief 0, CAN Service Request 0 */
} Ifx_SRC_CAN;

/** \brief  CCU6 Service requests */
typedef volatile struct _Ifx_SRC_CCU6
{
    Ifx_SRC_SRCR SR0;                       /**< \brief 0, CCU6 Service Request 0 */
    Ifx_SRC_SRCR SR1;                       /**< \brief 4, CCU6 Service Request 1 */
    Ifx_SRC_SRCR SR2;                       /**< \brief 8, CCU6 Service Request 2 */
    Ifx_SRC_SRCR SR3;                       /**< \brief C, CCU6 Service Request 3 */
} Ifx_SRC_CCU6;

/** \brief  CERBERUS Service requests */
typedef volatile struct _Ifx_SRC_CERBERUS
{
    Ifx_SRC_SRCR SR[2];                     /**< \brief 0, Cerberus Service Request */
} Ifx_SRC_CERBERUS;

/** \brief  CIF Service requests */
typedef volatile struct _Ifx_SRC_CIF
{
    Ifx_SRC_SRCR MI;                        /**< \brief 0, CIF MI Service Request */
    Ifx_SRC_SRCR MIEP;                      /**< \brief 4, CIF MI EP Service Request */
    Ifx_SRC_SRCR ISP;                       /**< \brief 8, CIF ISP Service Request */
    Ifx_SRC_SRCR MJPEG;                     /**< \brief C, CIF MJPEG Service Request */
} Ifx_SRC_CIF;

/** \brief  CPU Service requests */
typedef volatile struct _Ifx_SRC_CPU
{
    Ifx_SRC_SRCR SB;                        /**< \brief 0, CPU Software Breakpoint Service Request */
} Ifx_SRC_CPU;

/** \brief  DAM Service requests */
typedef volatile struct _Ifx_SRC_DAM
{
    Ifx_SRC_SRCR LI0;                       /**< \brief 0, DAM Limit 0 Service Request x */
    Ifx_SRC_SRCR RI0;                       /**< \brief 4, DAM Ready 0 Service Request x */
    Ifx_SRC_SRCR LI1;                       /**< \brief 8, DAM Limit 1 Service Request x */
    Ifx_SRC_SRCR RI1;                       /**< \brief C, DAM Ready 1 Service Request x */
    Ifx_SRC_SRCR DR;                        /**< \brief 10, DAM DMA Ready Service Request x */
    Ifx_SRC_SRCR ERR;                       /**< \brief 14, DAM DMA Error Service Request x */
} Ifx_SRC_DAM;

/** \brief  DMA Service requests */
typedef volatile struct _Ifx_SRC_DMA
{
    Ifx_SRC_SRCR ERR;                       /**< \brief 0, DMA Error Service Request */
    unsigned char reserved_4[12];           /**< \brief 4, \internal Reserved */
    Ifx_SRC_SRCR CH[128];                   /**< \brief 10, DMA Channel Service Request */
} Ifx_SRC_DMA;

/** \brief  DSADC Service requests */
typedef volatile struct _Ifx_SRC_DSADC
{
    Ifx_SRC_SRCR SRM;                       /**< \brief 0, DSADC SRM Service Request */
    Ifx_SRC_SRCR SRA;                       /**< \brief 4, DSADC SRA Service Request */
} Ifx_SRC_DSADC;

/** \brief  ERAY Service requests */
typedef volatile struct _Ifx_SRC_ERAY
{
    Ifx_SRC_SRCR INT[2];                    /**< \brief 0, E-RAY  Service Request */
    Ifx_SRC_SRCR TINT[2];                   /**< \brief 8, E-RAY  Timer Interrupt Service Request */
    Ifx_SRC_SRCR NDAT[2];                   /**< \brief 10, E-RAY  New Data Service Request */
    Ifx_SRC_SRCR MBSC[2];                   /**< \brief 18, E-RAY  Message Buffer Status Changed Service Request */
    Ifx_SRC_SRCR OBUSY;                     /**< \brief 20, E-RAY  Output Buffer Busy Service Request */
    Ifx_SRC_SRCR IBUSY;                     /**< \brief 24, E-RAY  Input Buffer Busy Service Request */
    unsigned char reserved_28[8];           /**< \brief 28, \internal Reserved */
} Ifx_SRC_ERAY;

/** \brief  ETH Service requests */
typedef volatile struct _Ifx_SRC_ETH
{
    Ifx_SRC_SRCR SR;                        /**< \brief 0, Ethernet Service Request */
    unsigned char reserved_4[28];           /**< \brief 4, \internal Reserved */
} Ifx_SRC_ETH;

/** \brief  FCE Service requests */
typedef volatile struct _Ifx_SRC_FCE
{
    Ifx_SRC_SRCR SR;                        /**< \brief 0, FCE Error Service Request */
    unsigned char reserved_4[12];           /**< \brief 4, \internal Reserved */
} Ifx_SRC_FCE;

/** \brief  GPSR Service requests */
typedef volatile struct _Ifx_SRC_GPSR
{
    Ifx_SRC_SRCR SR0;                       /**< \brief 0, GPSR Group 0 */
    Ifx_SRC_SRCR SR1;                       /**< \brief 4, GPSR Group 1 */
    Ifx_SRC_SRCR SR2;                       /**< \brief 8, GPSR Group 2 */
    Ifx_SRC_SRCR SR3;                       /**< \brief C, GPSR Group 3 */
    Ifx_SRC_SRCR SR4;                       /**< \brief 10, GPSR Group 4 */
    Ifx_SRC_SRCR SR5;                       /**< \brief 14, GPSR Group 5 */
    Ifx_SRC_SRCR SR6;                       /**< \brief 18, GPSR Group 6 */
    Ifx_SRC_SRCR SR7;                       /**< \brief 1C, GPSR Group 7 */
} Ifx_SRC_GPSR;

/** \brief  GPT12 Service requests */
typedef volatile struct _Ifx_SRC_GPT12
{
    Ifx_SRC_SRCR CIRQ;                      /**< \brief 0, GPT12 CAPREL Service Request */
    Ifx_SRC_SRCR T2;                        /**< \brief 4, GPT12 T2 Overflow/Underflow Service Request */
    Ifx_SRC_SRCR T3;                        /**< \brief 8, GPT12 T3 Overflow/Underflow Service Request */
    Ifx_SRC_SRCR T4;                        /**< \brief C, GPT12 T4 Overflow/Underflow Service Request */
    Ifx_SRC_SRCR T5;                        /**< \brief 10, GPT12 T5 Overflow/Underflow Service Request */
    Ifx_SRC_SRCR T6;                        /**< \brief 14, GPT12 T6 Overflow/Underflow Service Request */
    unsigned char reserved_18[8];           /**< \brief 18, \internal Reserved */
} Ifx_SRC_GPT12;

/** \brief  GTM Service requests */
typedef volatile struct _Ifx_SRC_GTM
{
    Ifx_SRC_SRCR AEIIRQ;                    /**< \brief 0, GTM AEI Shared Service Request */
    Ifx_SRC_SRCR ARUIRQ[3];                 /**< \brief 4, GTM ARU Shared Service Request */
    Ifx_SRC_SRCR BRCIRQ;                    /**< \brief 10, GTM BRC Shared Service Request */
    Ifx_SRC_SRCR CMPIRQ;                    /**< \brief 14, GTM CMP Shared Service Request */
    Ifx_SRC_SRCR SPEIRQ[6];                 /**< \brief 18, GTM SPE Shared Service Request */
    Ifx_SRC_SRCR PSM[3][8];                 /**< \brief 30, GTM PSM 0 Shared Service Request */
    Ifx_SRC_SRCR DPLL[27];                  /**< \brief 90, GTM DPLL Service Request */
    unsigned char reserved_FC[4];           /**< \brief FC, \internal Reserved */
    Ifx_SRC_SRCR ERR;                       /**< \brief 100, GTM Error Service Request */
    unsigned char reserved_104[28];         /**< \brief 104, \internal Reserved */
    Ifx_SRC_SRCR TIM[8][8];                 /**< \brief 120, GTM TIM 0 Shared Service Request */
    unsigned char reserved_220[32];         /**< \brief 220, \internal Reserved */
    Ifx_SRC_SRCR MCS[10][8];                /**< \brief 240, GTM MCS 0 Shared Service Request */
    unsigned char reserved_380[32];         /**< \brief 380, \internal Reserved */
    Ifx_SRC_SRCR TOM[6][8];                 /**< \brief 3A0, GTM TOM 0 Shared Service Request */
    unsigned char reserved_460[32];         /**< \brief 460, \internal Reserved */
    Ifx_SRC_SRCR ATOM[12][4];               /**< \brief 480, GTM ATOM 0 Shared Service Request */
    unsigned char reserved_540[32];         /**< \brief 540, \internal Reserved */
    Ifx_SRC_SRCR MCSW[10];                  /**< \brief 560, GTM Multi Channel Sequencer Service Request 0 */
} Ifx_SRC_GTM;

/** \brief  HSCT Service requests */
typedef volatile struct _Ifx_SRC_HSCT
{
    Ifx_SRC_SRCR SR;                        /**< \brief 0, HSCT Service Request */
} Ifx_SRC_HSCT;

/** \brief  HSM Service requests */
typedef volatile struct _Ifx_SRC_HSM
{
    Ifx_SRC_SRCR HSM[2];                    /**< \brief 0, HSM Service Request */
} Ifx_SRC_HSM;

/** \brief  HSSL Service requests */
typedef volatile struct _Ifx_SRC_HSSL
{
    Ifx_SRC_HSSL_CH CH[4];                  /**< \brief 0, HSSL Service requests */
    Ifx_SRC_SRCR EXI;                       /**< \brief 40, Exception Service Request */
} Ifx_SRC_HSSL;

/** \brief  I2C Service requests */
typedef volatile struct _Ifx_SRC_I2C
{
    Ifx_SRC_SRCR DTR;                       /**< \brief 0, I2C Data Transfer Request */
    Ifx_SRC_SRCR ERR;                       /**< \brief 4, I2C Error Service Request */
    Ifx_SRC_SRCR P;                         /**< \brief 8, I2C Kernel Service Request */
    unsigned char reserved_C[4];            /**< \brief C, \internal Reserved */
} Ifx_SRC_I2C;

/** \brief  MSC Service requests */
typedef volatile struct _Ifx_SRC_MSC
{
    Ifx_SRC_SRCR SR0;                       /**< \brief 0, MSC Service Request 0 */
    Ifx_SRC_SRCR SR1;                       /**< \brief 4, MSC Service Request 1 */
    Ifx_SRC_SRCR SR2;                       /**< \brief 8, MSC Service Request 2 */
    Ifx_SRC_SRCR SR3;                       /**< \brief C, MSC Service Request 3 */
    Ifx_SRC_SRCR SR4;                       /**< \brief 10, MSC Service Request 4 */
} Ifx_SRC_MSC;

/** \brief  PMS Service requests */
typedef volatile struct _Ifx_SRC_PMS
{
    Ifx_SRC_SRCR SR;                        /**< \brief 0, Power Management System Service Request  */
} Ifx_SRC_PMS;

/** \brief  PSI5 Service requests */
typedef volatile struct _Ifx_SRC_PSI5
{
    Ifx_SRC_SRCR SR[8];                     /**< \brief 0, PSI5 Service Request */
} Ifx_SRC_PSI5;

/** \brief  PSI5S Service requests */
typedef volatile struct _Ifx_SRC_PSI5S
{
    Ifx_SRC_SRCR SR[8];                     /**< \brief 0, PSI5-S Service Request */
} Ifx_SRC_PSI5S;

/** \brief  QSPI Service requests */
typedef volatile struct _Ifx_SRC_QSPI
{
    Ifx_SRC_SRCR TX;                        /**< \brief 0, QSPI Transmit Service Request */
    Ifx_SRC_SRCR RX;                        /**< \brief 4, QSPI Receive Service Request */
    Ifx_SRC_SRCR ERR;                       /**< \brief 8, QSPI Error Service Request */
    Ifx_SRC_SRCR PT;                        /**< \brief C, QSPI Phase Transition Service Request */
    Ifx_SRC_SRCR U;                         /**< \brief 10, QSPI User Defined Service Request */
} Ifx_SRC_QSPI;

/** \brief  RIF Service requests */
typedef volatile struct _Ifx_SRC_RIF
{
    Ifx_SRC_SRCR ERR;                       /**< \brief 0, Radar Interface  Error Service Request */
    Ifx_SRC_SRCR INT;                       /**< \brief 4, Radar Interface  Service Request */
} Ifx_SRC_RIF;

/** \brief  SENT Service requests */
typedef volatile struct _Ifx_SRC_SENT
{
    Ifx_SRC_SRCR SR;                        /**< \brief 0, SENT TRIG Service Request */
} Ifx_SRC_SENT;

/** \brief  SMU Service requests */
typedef volatile struct _Ifx_SRC_SMU
{
    Ifx_SRC_SRCR SR[3];                     /**< \brief 0, SMU Service Request */
} Ifx_SRC_SMU;

/** \brief  SPU Service requests */
typedef volatile struct _Ifx_SRC_SPU
{
    Ifx_SRC_SRCR ERR;                       /**< \brief 0, Signal Processing Unit  Error Service Request */
    Ifx_SRC_SRCR INT;                       /**< \brief 4, Signal Processing Unit  Service Request */
} Ifx_SRC_SPU;

/** \brief  STM Service requests */
typedef volatile struct _Ifx_SRC_STM
{
    Ifx_SRC_SRCR SR0;                       /**< \brief 0, System Timer  Service Request 0 */
    Ifx_SRC_SRCR SR1;                       /**< \brief 4, System Timer  Service Request 1 */
} Ifx_SRC_STM;

/** \brief  VADCCG Service requests */
typedef volatile struct _Ifx_SRC_VADCCG
{
    Ifx_SRC_SRCR SR0;                       /**< \brief 0, VADC Common Group  Service Request 0 */
    Ifx_SRC_SRCR SR1;                       /**< \brief 4, VADC Common Group  Service Request 1 */
    Ifx_SRC_SRCR SR2;                       /**< \brief 8, VADC Common Group  Service Request 2 */
    Ifx_SRC_SRCR SR3;                       /**< \brief C, VADC Common Group  Service Request 3 */
} Ifx_SRC_VADCCG;

/** \brief  VADCG Service requests */
typedef volatile struct _Ifx_SRC_VADCG
{
    Ifx_SRC_SRCR SR0;                       /**< \brief 0, VADC Group  Service Request 0 */
    Ifx_SRC_SRCR SR1;                       /**< \brief 4, VADC Group  Service Request 1 */
    Ifx_SRC_SRCR SR2;                       /**< \brief 8, VADC Group  Service Request 2 */
    Ifx_SRC_SRCR SR3;                       /**< \brief C, VADC Group  Service Request 3 */
} Ifx_SRC_VADCG;

/** \brief  XBAR Service requests */
typedef volatile struct _Ifx_SRC_XBAR
{
    Ifx_SRC_SRCR SR;                        /**< \brief 0, XBAR_SRI Service Request */
} Ifx_SRC_XBAR;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Src_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */

/** \brief  AGBT Service requests */
typedef volatile struct _Ifx_SRC_GAGBT
{
    Ifx_SRC_AGBT AGBT[1];                   /**< \brief 0, AGBT Service requests */
} Ifx_SRC_GAGBT;

/** \brief  ASCLIN Service requests */
typedef volatile struct _Ifx_SRC_GASCLIN
{
    Ifx_SRC_ASCLIN ASCLIN[8];               /**< \brief 0, ASCLIN Service requests */
} Ifx_SRC_GASCLIN;

/** \brief  BCU Service requests */
typedef volatile struct _Ifx_SRC_GBCU
{
    Ifx_SRC_BCU BCU;                        /**< \brief 0, BCU Service requests */
} Ifx_SRC_GBCU;

/** \brief  CAN Service requests */
typedef volatile struct _Ifx_SRC_GCAN
{
    Ifx_SRC_CAN CAN[3];                     /**< \brief 0, CAN Service requests */
} Ifx_SRC_GCAN;

/** \brief  CCU6 Service requests */
typedef volatile struct _Ifx_SRC_GCCU6
{
    Ifx_SRC_CCU6 CCU6[2];                   /**< \brief 0, CCU6 Service requests */
} Ifx_SRC_GCCU6;

/** \brief  CERBERUS Service requests */
typedef volatile struct _Ifx_SRC_GCERBERUS
{
    Ifx_SRC_CERBERUS CERBERUS;              /**< \brief 0, CERBERUS Service requests */
} Ifx_SRC_GCERBERUS;

/** \brief  CIF Service requests */
typedef volatile struct _Ifx_SRC_GCIF
{
    Ifx_SRC_CIF CIF[1];                     /**< \brief 0, CIF Service requests */
} Ifx_SRC_GCIF;

/** \brief  CPU Service requests */
typedef volatile struct _Ifx_SRC_GCPU
{
    Ifx_SRC_CPU CPU[6];                     /**< \brief 0, CPU Service requests */
} Ifx_SRC_GCPU;

/** \brief  DAM Service requests */
typedef volatile struct _Ifx_SRC_GDAM
{
    Ifx_SRC_DAM DAM[2];                     /**< \brief 0, DAM Service requests */
} Ifx_SRC_GDAM;

/** \brief  DMA Service requests */
typedef volatile struct _Ifx_SRC_GDMA
{
    Ifx_SRC_DMA DMA[1];                     /**< \brief 0, DMA Service requests */
} Ifx_SRC_GDMA;

/** \brief  DSADC Service requests */
typedef volatile struct _Ifx_SRC_GDSADC
{
    Ifx_SRC_DSADC DSADC[14];                /**< \brief 0, DSADC Service requests */
} Ifx_SRC_GDSADC;

/** \brief  ERAY Service requests */
typedef volatile struct _Ifx_SRC_GERAY
{
    Ifx_SRC_ERAY ERAY[2];                   /**< \brief 0, ERAY Service requests */
} Ifx_SRC_GERAY;

/** \brief  ETH Service requests */
typedef volatile struct _Ifx_SRC_GETH
{
    Ifx_SRC_ETH ETH[1];                     /**< \brief 0, ETH Service requests */
} Ifx_SRC_GETH;

/** \brief  FCE Service requests */
typedef volatile struct _Ifx_SRC_GFCE
{
    Ifx_SRC_FCE FCE[1];                     /**< \brief 0, FCE Service requests */
} Ifx_SRC_GFCE;

/** \brief  GPSR Service requests */
typedef volatile struct _Ifx_SRC_GGPSR
{
    Ifx_SRC_GPSR GPSR[6];                   /**< \brief 0, GPSR Service requests */
} Ifx_SRC_GGPSR;

/** \brief  GPT12 Service requests */
typedef volatile struct _Ifx_SRC_GGPT12
{
    Ifx_SRC_GPT12 GPT12[1];                 /**< \brief 0, GPT12 Service requests */
} Ifx_SRC_GGPT12;

/** \brief  GTM Service requests */
typedef volatile struct _Ifx_SRC_GGTM
{
    Ifx_SRC_GTM GTM[1];                     /**< \brief 0, GTM Service requests */
} Ifx_SRC_GGTM;

/** \brief  HSCT Service requests */
typedef volatile struct _Ifx_SRC_GHSCT
{
    Ifx_SRC_HSCT HSCT[2];                   /**< \brief 0, HSCT Service requests */
} Ifx_SRC_GHSCT;

/** \brief  HSM Service requests */
typedef volatile struct _Ifx_SRC_GHSM
{
    Ifx_SRC_HSM HSM[1];                     /**< \brief 0, HSM Service requests */
} Ifx_SRC_GHSM;

/** \brief  HSSL Service requests */
typedef volatile struct _Ifx_SRC_GHSSL
{
    Ifx_SRC_HSSL HSSL[2];                   /**< \brief 0, HSSL Service requests */
} Ifx_SRC_GHSSL;

/** \brief  I2C Service requests */
typedef volatile struct _Ifx_SRC_GI2C
{
    Ifx_SRC_I2C I2C[2];                     /**< \brief 0, I2C Service requests */
} Ifx_SRC_GI2C;

/** \brief  MSC Service requests */
typedef volatile struct _Ifx_SRC_GMSC
{
    Ifx_SRC_MSC MSC[4];                     /**< \brief 0, MSC Service requests */
} Ifx_SRC_GMSC;

/** \brief  PMS Service requests */
typedef volatile struct _Ifx_SRC_GPMS
{
    Ifx_SRC_PMS PMS[4];                     /**< \brief 0, PMS Service requests */
} Ifx_SRC_GPMS;

/** \brief  PSI5 Service requests */
typedef volatile struct _Ifx_SRC_GPSI5
{
    Ifx_SRC_PSI5 PSI5[1];                   /**< \brief 0, PSI5 Service requests */
} Ifx_SRC_GPSI5;

/** \brief  PSI5S Service requests */
typedef volatile struct _Ifx_SRC_GPSI5S
{
    Ifx_SRC_PSI5S PSI5S[1];                 /**< \brief 0, PSI5S Service requests */
} Ifx_SRC_GPSI5S;

/** \brief  QSPI Service requests */
typedef volatile struct _Ifx_SRC_GQSPI
{
    Ifx_SRC_QSPI QSPI[6];                   /**< \brief 0, QSPI Service requests */
} Ifx_SRC_GQSPI;

/** \brief  RIF Service requests */
typedef volatile struct _Ifx_SRC_GRIF
{
    Ifx_SRC_RIF RIF[2];                     /**< \brief 0, RIF Service requests */
} Ifx_SRC_GRIF;

/** \brief  SENT Service requests */
typedef volatile struct _Ifx_SRC_GSENT
{
    Ifx_SRC_SENT SENT[10];                  /**< \brief 0, SENT Service requests */
} Ifx_SRC_GSENT;

/** \brief  SMU Service requests */
typedef volatile struct _Ifx_SRC_GSMU
{
    Ifx_SRC_SMU SMU[1];                     /**< \brief 0, SMU Service requests */
} Ifx_SRC_GSMU;

/** \brief  SPU Service requests */
typedef volatile struct _Ifx_SRC_GSPU
{
    Ifx_SRC_SPU SPU[2];                     /**< \brief 0, SPU Service requests */
} Ifx_SRC_GSPU;

/** \brief  STM Service requests */
typedef volatile struct _Ifx_SRC_GSTM
{
    Ifx_SRC_STM STM[6];                     /**< \brief 0, STM Service requests */
} Ifx_SRC_GSTM;

/** \brief  VADC Service requests */
typedef volatile struct _Ifx_SRC_GVADC
{
    Ifx_SRC_VADCG G[12];                    /**< \brief 0, VADCG Service requests */
    Ifx_SRC_SRCR SR0[8];                    /**< \brief C0, VADC Group 12 to 19 Service Request 0 */
    Ifx_SRC_VADCCG CG[2];                   /**< \brief E0, VADCCG Service requests */
} Ifx_SRC_GVADC;

/** \brief  XBAR Service requests */
typedef volatile struct _Ifx_SRC_GXBAR
{
    Ifx_SRC_XBAR XBAR[3];                   /**< \brief 0, XBAR Service requests */
} Ifx_SRC_GXBAR;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Src_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief  SRC object */
typedef volatile struct _Ifx_SRC
{
    Ifx_SRC_GCPU CPU;                       /**< \brief 0, CPU Service requests */
    unsigned char reserved_18[8];           /**< \brief 18, \internal Reserved */
    Ifx_SRC_GBCU BCU;                       /**< \brief 20, BCU Service requests */
    unsigned char reserved_28[4];           /**< \brief 28, \internal Reserved */
    Ifx_SRC_GAGBT AGBT;                     /**< \brief 2C, AGBT Service requests */
    Ifx_SRC_GXBAR XBAR;                     /**< \brief 30, XBAR Service requests */
    unsigned char reserved_3C[4];           /**< \brief 3C, \internal Reserved */
    Ifx_SRC_GCERBERUS CERBERUS;             /**< \brief 40, CERBERUS Service requests */
    unsigned char reserved_48[8];           /**< \brief 48, \internal Reserved */
    Ifx_SRC_GASCLIN ASCLIN;                 /**< \brief 50, ASCLIN Service requests */
    unsigned char reserved_B0[12];          /**< \brief B0, \internal Reserved */
    Ifx_SRC_SRCR MTUDONE;                   /**< \brief BC, MTU DONE Service Request m */
    Ifx_SRC_GQSPI QSPI;                     /**< \brief C0, QSPI Service requests */
    unsigned char reserved_138[32];         /**< \brief 138, \internal Reserved */
    Ifx_SRC_SRCR QSPI2HC;                   /**< \brief 158, QSPI 2 High Speed Capture Service Request */
    Ifx_SRC_SRCR QSPI3HC;                   /**< \brief 15C, QSPI 3 High Speed Capture Service Request */
    Ifx_SRC_GHSCT HSCT;                     /**< \brief 160, HSCT Service requests */
    unsigned char reserved_168[8];          /**< \brief 168, \internal Reserved */
    Ifx_SRC_GHSSL HSSL;                     /**< \brief 170, HSSL Service requests */
    unsigned char reserved_1F8[8];          /**< \brief 1F8, \internal Reserved */
    Ifx_SRC_GI2C I2C;                       /**< \brief 200, I2C Service requests */
    Ifx_SRC_GSENT SENT;                     /**< \brief 220, SENT Service requests */
    unsigned char reserved_248[8];          /**< \brief 248, \internal Reserved */
    Ifx_SRC_GMSC MSC;                       /**< \brief 250, MSC Service requests */
    Ifx_SRC_GCCU6 CCU6;                     /**< \brief 2A0, CCU6 Service requests */
    unsigned char reserved_2C0[32];         /**< \brief 2C0, \internal Reserved */
    Ifx_SRC_GGPT12 GPT12;                   /**< \brief 2E0, GPT12 Service requests */
    Ifx_SRC_GSTM STM;                       /**< \brief 300, STM Service requests */
    Ifx_SRC_GFCE FCE;                       /**< \brief 330, FCE Service requests */
    Ifx_SRC_GDMA DMA;                       /**< \brief 340, DMA Service requests */
    Ifx_SRC_SRCR PDMAERR;                   /**< \brief 550, PDMA Error Service Request */
    Ifx_SRC_SRCR PDMARDY;                   /**< \brief 554, PDMA ReadyService Request */
    unsigned char reserved_558[8];          /**< \brief 558, \internal Reserved */
    Ifx_SRC_GETH ETH;                       /**< \brief 560, ETH Service requests */
    Ifx_SRC_GCAN CAN;                       /**< \brief 580, CAN Service requests */
    unsigned char reserved_640[48];         /**< \brief 640, \internal Reserved */
    Ifx_SRC_GVADC VADC;                     /**< \brief 670, VADC Service requests */
    Ifx_SRC_GDSADC DSADC;                   /**< \brief 770, DSADC Service requests */
    unsigned char reserved_7E0[32];         /**< \brief 7E0, \internal Reserved */
    Ifx_SRC_GERAY ERAY;                     /**< \brief 800, ERAY Service requests */
    Ifx_SRC_SRCR PMUHOST;                   /**< \brief 860, PMU HOST Service Request */
    Ifx_SRC_SRCR PMUFSI;                    /**< \brief 864, PMU FSI Service Request */
    unsigned char reserved_868[8];          /**< \brief 868, \internal Reserved */
    Ifx_SRC_GHSM HSM;                       /**< \brief 870, HSM Service requests */
    unsigned char reserved_878[8];          /**< \brief 878, \internal Reserved */
    Ifx_SRC_SRCR SCUERU[4];                 /**< \brief 880, SCU ERU Service Request */
    unsigned char reserved_890[12];         /**< \brief 890, \internal Reserved */
    Ifx_SRC_SRCR PMSDTS;                    /**< \brief 89C, SCU PMS DTS Service Request */
    Ifx_SRC_GPMS PMS;                       /**< \brief 8A0, PMS Service requests */
    Ifx_SRC_SRCR SCR;                       /**< \brief 8B0, Stand By Controller Service Request */
    unsigned char reserved_8B4[12];         /**< \brief 8B4, \internal Reserved */
    Ifx_SRC_GSMU SMU;                       /**< \brief 8C0, SMU Service requests */
    unsigned char reserved_8CC[4];          /**< \brief 8CC, \internal Reserved */
    Ifx_SRC_GPSI5 PSI5;                     /**< \brief 8D0, PSI5 Service requests */
    unsigned char reserved_8F0[16];         /**< \brief 8F0, \internal Reserved */
    Ifx_SRC_GDAM DAM;                       /**< \brief 900, DAM Service requests */
    Ifx_SRC_GCIF CIF;                       /**< \brief 930, CIF Service requests */
    unsigned char reserved_940[16];         /**< \brief 940, \internal Reserved */
    Ifx_SRC_GPSI5S PSI5S;                   /**< \brief 950, PSI5S Service requests */
    Ifx_SRC_GRIF RIF;                       /**< \brief 970, RIF Service requests */
    Ifx_SRC_GSPU SPU;                       /**< \brief 980, SPU Service requests */
    Ifx_SRC_GGPSR GPSR;                     /**< \brief 990, GPSR Service requests */
    unsigned char reserved_A50[32];         /**< \brief A50, \internal Reserved */
    Ifx_SRC_GGTM GTM;                       /**< \brief A70, GTM Service requests */
    unsigned char reserved_FF8[8];          /**< \brief FF8, \internal Reserved */
} Ifx_SRC;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXSRC_REGDEF_H */
