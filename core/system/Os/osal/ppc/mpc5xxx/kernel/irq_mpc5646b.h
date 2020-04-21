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

#ifndef IRQ_MPC5646B_H_
#define IRQ_MPC5646B_H_

#define Irq_SOI()

typedef uint16 IrqType;

#define INTC_SSCIR0_CLR0                         0u
#define INTC_SSCIR0_CLR1                         1u
#define INTC_SSCIR0_CLR2                         2u
#define INTC_SSCIR0_CLR3                         3u
#define INTC_SSCIR0_CLR4                         4u
#define INTC_SSCIR0_CLR5                         5u
#define INTC_SSCIR0_CLR6                         6u
#define INTC_SSCIR0_CLR7                         7u
#define RESERVED8                                8u

#define ECC_ERROR                                9u

#define DMA_COMBINED_ERROR_0_15                  10u
#define DMA_CH0_INT                              11u
#define DMA_CH1_INT                              12u
#define DMA_CH2_INT                              13u
#define DMA_CH3_INT                              14u
#define DMA_CH4_INT                              15u
#define DMA_CH5_INT                              16u
#define DMA_CH6_INT                              17u
#define DMA_CH7_INT                              18u
#define DMA_CH8_INT                              19u
#define DMA_CH9_INT                              20u
#define DMA_CH10_INT                             21u
#define DMA_CH11_INT                             22u
#define DMA_CH12_INT                             23u
#define DMA_CH13_INT                             24u
#define DMA_CH14_INT                             25u
#define DMA_CH15_INT                             26u

#define RESERVED27                               27u

#define SWT_TIMEOUT                              28u

#define RESERVED29                               29u

#define STM_CH0_INT                              30u
#define STM_CH1_INT                              31u
#define STM_CH2_INT                              32u
#define STM_CH3_INT                              33u

#define RESERVED34                               34u

#define ECC_DBD_INT                              35u
#define ECC_SBC_INT                              36u

#define RESERVED37                               37u

#define RTC_INT                                  38u
#define API_INT                                  39u

#define RESERVED40                               40u

#define SIU_EXT_IRQ0                             41u
#define SIU_EXT_IRQ1                             42u
#define SIU_EXT_IRQ2                             43u

#define RESERVED44                               44u
#define RESERVED45                               45u

#define WAKEUP_IRQ0                              46u
#define WAKEUP_IRQ1                              47u
#define WAKEUP_IRQ2                              48u
#define WAKEUP_IRQ3                              49u

#define RESERVED50                               50u

#define SAFE_MODE_INT                            51u
#define MODE_TRAS_INT                            52u
#define INV_MODE_INT                             53u
#define INV_MODE_CONF_INT                        54u

#define RESERVED55                               55u

#define RESET_ALT_EVENT_INT                      56u

#define FXOSC_COUNTER_EXPIRED                    57u

#define RESERVED58                               58u

#define PIT_INT0                                 59u
#define PIT_INT1                                 60u
#define PIT_INT2                                 61u

#define ADC0_EOC_INT                             62u

#define RESERVED63                               63u
#define ADC0_WD_INT                              64u

#define FLEXCAN_0_ESR_ERR_INT                    65u
#define FLEXCAN_0_ESR_BOFF_INT                   66u

#define RESERVED67                               67u

#define FLEXCAN_0_BUF_00_03                      68u
#define FLEXCAN_0_BUF_04_07                      69u
#define FLEXCAN_0_BUF_08_11                      70u
#define FLEXCAN_0_BUF_12_15                      71u
#define FLEXCAN_0_BUF_16_31                      72u
#define FLEXCAN_0_BUF_32_63                      73u

#define DSPI_0_ISR_TFUF_RFOF                     74u
#define DSPI_0_ISR_EOQF                          75u
#define DSPI_0_ISR_TFFF                          76u
#define DSPI_0_ISR_TCF                           77u
#define DSPI_0_ISR_RFDF                          78u

#define LINFLEX_0_RXI                            79u
#define LINFLEX_0_TXI                            80u
#define LINFLEX_0_ERR                            81u

#define ADC1_EOC_INT                             82u
#define RESERVED83                               83u
#define ADC1_WD_INT                              84u

#define FLEXCAN_1_ESR_ERR_INT                    85u
#define FLEXCAN_1_ESR_BOFF_INT                   86u

#define RESERVED87                               87u
#define FLEXCAN_1_BUF_00_03                      88u
#define FLEXCAN_1_BUF_04_07                      89u
#define FLEXCAN_1_BUF_08_11                      90u
#define FLEXCAN_1_BUF_12_15                      91u
#define FLEXCAN_1_BUF_16_31                      92u
#define FLEXCAN_1_BUF_32_63                      93u

#define DSPI_1_ISR_TFUF_RFOF                     94u
#define DSPI_1_ISR_EOQF                          95u
#define DSPI_1_ISR_TFFF                          96u
#define DSPI_1_ISR_TCF                           97u
#define DSPI_1_ISR_RFDF                          98u

#define LINFLEX_1_RXI                            99u
#define LINFLEX_1_TXI                            100u
#define LINFLEX_1_ERR                            101u

#define RESERVED102                              102u
#define RESERVED103                              103u
#define RESERVED104                              104u
#define FLEXCAN_2_ESR_ERR_INT                    105u
#define FLEXCAN_2_ESR_BOFF_INT                   106u

#define RESERVED107                              107u

#define FLEXCAN_2_BUF_00_03                      108u
#define FLEXCAN_2_BUF_04_07                      109u
#define FLEXCAN_2_BUF_08_11                      110u
#define FLEXCAN_2_BUF_12_15                      111u
#define FLEXCAN_2_BUF_16_31                      112u
#define FLEXCAN_2_BUF_32_63                      113u

#define DSPI_2_ISR_TFUF_RFOF                     114u
#define DSPI_2_ISR_EOQF                          115u
#define DSPI_2_ISR_TFFF                          116u
#define DSPI_2_ISR_TCF                           117u
#define DSPI_2_ISR_RFDF                          118u

#define LINFLEX_2_RXI                            119u
#define LINFLEX_2_TXI                            120u
#define LINFLEX_2_ERR                            121u

#define LINFLEX_3_RXI                            122u
#define LINFLEX_3_TXI                            123u
#define LINFLEX_3_ERR                            124u

#define I2C_0_INT                                125u
#define RESERVED126                              126u

#define PIT_INT3                                 127u
#define PIT_INT4                                 128u
#define PIT_INT5                                 129u
#define PIT_INT6                                 130u
#define PIT_INT7                                 131u

#define RESERVED132                               132u
#define RESERVED133                               133u
#define RESERVED134                               134u
#define RESERVED135                               135u
#define RESERVED136                               136u
#define RESERVED137                               137u
#define RESERVED138                               138u
#define RESERVED139                               139u
#define RESERVED140                               140u

#define EMIOS_0_GFR_F0_F1                        141u
#define EMIOS_0_GFR_F2_F3                        142u
#define EMIOS_0_GFR_F4_F5                        143u
#define EMIOS_0_GFR_F6_F7                        144u
#define EMIOS_0_GFR_F8_F9                        145u
#define EMIOS_0_GFR_F10_F11                      146u
#define EMIOS_0_GFR_F12_F13                      147u
#define EMIOS_0_GFR_F14_F15                      148u
#define EMIOS_0_GFR_F16_F17                      149u
#define EMIOS_0_GFR_F18_F19                      150u
#define EMIOS_0_GFR_F20_F21                      151u
#define EMIOS_0_GFR_F22_F23                      152u
#define EMIOS_0_GFR_F24_F25                      153u
#define EMIOS_0_GFR_F26_F27                      154u
#define EMIOS_0_GFR_F28_F29                      155u
#define EMIOS_0_GFR_F30_F31                      156u

#define EMIOS_1_GFR_F0_F1                        157u
#define EMIOS_1_GFR_F2_F3                        158u
#define EMIOS_1_GFR_F4_F5                        159u
#define EMIOS_1_GFR_F6_F7                        160u
#define EMIOS_1_GFR_F8_F9                        161u
#define EMIOS_1_GFR_F10_F11                      162u
#define EMIOS_1_GFR_F12_F13                      163u
#define EMIOS_1_GFR_F14_F15                      164u
#define EMIOS_1_GFR_F16_F17                      165u
#define EMIOS_1_GFR_F18_F19                      166u
#define EMIOS_1_GFR_F20_F21                      167u
#define EMIOS_1_GFR_F22_F23                      168u
#define EMIOS_1_GFR_F24_F25                      169u
#define EMIOS_1_GFR_F26_F27                      170u
#define EMIOS_1_GFR_F28_F29                      171u
#define EMIOS_1_GFR_F30_F31                      172u

#define FLEXCAN_3_ESR_ERR_INT                    173u
#define FLEXCAN_3_ESR_BOFF_INT                   174u

#define RESERVED175                              175u

#define FLEXCAN_3_BUF_00_03                      176u
#define FLEXCAN_3_BUF_04_07                      177u
#define FLEXCAN_3_BUF_08_11                      178u
#define FLEXCAN_3_BUF_12_15                      179u
#define FLEXCAN_3_BUF_16_31                      180u
#define FLEXCAN_3_BUF_32_63                      181u

#define DSPI_3_ISR_TFUF_RFOF                     182u
#define DSPI_3_ISR_EOQF                          183u
#define DSPI_3_ISR_TFFF                          184u
#define DSPI_3_ISR_TCF                           185u
#define DSPI_3_ISR_RFDF                          186u

#define LINFLEX_4_RXI                            187u
#define LINFLEX_4_TXI                            188u
#define LINFLEX_4_ERR                            189u

#define FLEXCAN_4_ESR_ERR_INT                    190u
#define FLEXCAN_4_ESR_BOFF_INT                   191u

#define RESERVED192                              192u

#define FLEXCAN_4_BUF_00_03                      193u
#define FLEXCAN_4_BUF_04_07                      194u
#define FLEXCAN_4_BUF_08_11                      195u
#define FLEXCAN_4_BUF_12_15                      196u
#define FLEXCAN_4_BUF_16_31                      197u
#define FLEXCAN_4_BUF_32_63                      198u

#define LINFLEX_5_RXI                            199u
#define LINFLEX_5_TXI                            200u
#define LINFLEX_5_ERR                            201u

#define FLEXCAN_5_ESR_ERR_INT                    202u
#define FLEXCAN_5_ESR_BOFF_INT                   203u

#define RESERVED204                              204u

#define FLEXCAN_5_BUF_00_03                      205u
#define FLEXCAN_5_BUF_04_07                      206u
#define FLEXCAN_5_BUF_08_11                      207u
#define FLEXCAN_5_BUF_12_15                      208u
#define FLEXCAN_5_BUF_16_31                      209u
#define FLEXCAN_5_BUF_32_63                      210u

#define DSPI_4_ISR_TFUF_RFOF                     211u
#define DSPI_4_ISR_EOQF                          212u
#define DSPI_4_ISR_TFFF                          213u
#define DSPI_4_ISR_TCF                           214u
#define DSPI_4_ISR_RFDF                          215u

#define LINFLEX_6_RXI                            216u
#define LINFLEX_6_TXI                            217u
#define LINFLEX_6_ERR                            218u

#define DSPI_5_ISR_TFUF_RFOF                     219u
#define DSPI_5_ISR_EOQF                          220u
#define DSPI_5_ISR_TFFF                          221u
#define DSPI_5_ISR_TCF                           222u
#define DSPI_5_ISR_RFDF                          223u

#define LINFLEX_7_RXI                            224u
#define LINFLEX_7_TXI                            225u
#define LINFLEX_7_ERR                            226u

#define LINFLEX_8_RXI                            227u
#define LINFLEX_8_TXI                            228u
#define LINFLEX_8_ERR                            229u

#define LINFLEX_9_RXI                            230u
#define LINFLEX_9_TXI                            231u
#define LINFLEX_9_ERR                            232u

#define XOSC_CTREXPIRED     					 233u

#define DSPI_6_ISR_TFUF_RFOF                     234u
#define DSPI_6_ISR_EOQF                          235u
#define DSPI_6_ISR_TFFF                          236u
#define DSPI_6_ISR_TCF                           237u
#define DSPI_6_ISR_RFDF                          238u

#define DSPI_7_ISR_TFUF_RFOF                     239u
#define DSPI_7_ISR_EOQF                          240u
#define DSPI_7_ISR_TFFF                          241u
#define DSPI_7_ISR_TCF                           242u
#define DSPI_7_ISR_RFDF                          243u

#define FEC_TX              					 244u
#define FEC_RX              					 245u
#define FEC_WORLD           					 246u

#define FLEXRAY_0_FNEAIF    					 247u
#define FLEXRAY_0_FNEBIF    					 248u
#define FLEXRAY_0_WUPIF     					 249u
#define FLEXRAY_0_PRIF      					 250u
#define FLEXRAY_0_CHIF      					 251u
#define FLEXRAY_0_TBIF      					 252u
#define FLEXRAY_0_RBIF      					 253u
#define FLEXRAY_0_MIF       					 254u
#define FLEXRAY_0_LRCEIF					     255u
#define FLEXRAY_0_LRNEIF					     256u

#define SEMAPHORE_0								 257u
#define SEMAPHORE_1								 258u

#define CSE_COMPLETE							 259u

#define RESERVED260								 260u
#define RESERVED261								 261u

#define DMA_COMBINED_ERROR_16_31                 262u
#define DMA_CH16_INT                             263u
#define DMA_CH17_INT                             264u
#define DMA_CH18_INT                             265u
#define DMA_CH19_INT                             266u
#define DMA_CH20_INT                             267u
#define DMA_CH21_INT                             268u
#define DMA_CH22_INT                             269u
#define DMA_CH23_INT                             270u
#define DMA_CH24_INT                             271u
#define DMA_CH25_INT                             272u
#define DMA_CH26_INT                             273u
#define DMA_CH27_INT                             274u
#define DMA_CH28_INT                             275u
#define DMA_CH29_INT                             276u
#define DMA_CH30_INT                             277u
#define DMA_CH31_INT                             278u

#define INTC_NUMBER_OF_INTERRUPTS                279u


#define NUMBER_OF_INTERRUPTS_AND_EXCEPTIONS INTC_NUMBER_OF_INTERRUPTS


#define SSCM      (*(volatile struct SSCM_tag *)        0xC3FD8000UL)
#define ME        (*(volatile struct ME_tag *)          0xC3FDC000UL)
#define CGM       (*(volatile struct CGM_tag *)         0xC3FE0000UL)
#define RGM       (*(volatile struct RGM_tag *)         0xC3FE4000UL)
#define PCU       (*(volatile struct PCU_tag *)         0xC3FE8000UL)

#define STCU      (*(volatile struct STCU_tag *)        0xC3FF4000UL)

#define XBAR      (*(volatile struct XBAR_tag *)        0xFFF04000UL)
#define MPU       (*(volatile struct MPU_tag *)         0xFFF10000UL)
#define CSE       (*(volatile struct CSE_tag *)         0xFFF1C000UL)
#define SEMA4     (*(volatile struct SEMA4_tag *)       0xFFF24000UL)
#define SWT       (*(volatile struct SWT_tag *)         0xFFF38000UL)
#define STM       (*(volatile struct STM_tag *)         0xFFF3C000UL)
#define ECSM      (*(volatile struct ECSM_tag *)        0xFFF40000UL)
#define EDMA      (*(volatile struct EDMA_tag *)        0xFFF44000UL)
#define INTC      (*(volatile struct INTC_tag *)        0xFFF48000UL)
#define FEC       (*(volatile struct FEC_tag *)         0xFFF4C000UL)


typedef enum
{
	
	PERIPHERAL_CLOCK_DSPI_A,	/* Register gating address offset 4 */
    PERIPHERAL_CLOCK_DSPI_B,	/* Register gating address offset 5 */
    PERIPHERAL_CLOCK_DSPI_C,	/* Register gating address offset 6 */
    PERIPHERAL_CLOCK_DSPI_D,	/* Register gating address offset 7 */
    PERIPHERAL_CLOCK_DSPI_E,	/* Register gating address offset 8 */
    PERIPHERAL_CLOCK_DSPI_F,	/* Register gating address offset 9 */
	PERIPHERAL_CLOCK_DSPI_G,	/* Register gating address offset 10 */
	PERIPHERAL_CLOCK_DSPI_H,	/* Register gating address offset 11 */
	
	PERIPHERAL_CLOCK_LIN_I,		/* Register gating address offset 12 */		
	PERIPHERAL_CLOCK_LIN_J,		/* Register gating address offset 13 */
	
	PERIPHERAL_CLOCK_FLEXCAN_A,	/* Register gating address offset 16 */
    PERIPHERAL_CLOCK_FLEXCAN_B,	/* Register gating address offset 17 */
    PERIPHERAL_CLOCK_FLEXCAN_C, /* Register gating address offset 18 */
    PERIPHERAL_CLOCK_FLEXCAN_D, /* Register gating address offset 19 */
    PERIPHERAL_CLOCK_FLEXCAN_E, /* Register gating address offset 20 */
    PERIPHERAL_CLOCK_FLEXCAN_F, /* Register gating address offset 21 */
	
	PERIPHERAL_CLOCK_DMACHMUX,	/* Register gating address offset 23 */
	PERIPHERAL_CLOCK_FLEXRAY_0,	/* Register gating address offset 24 */
	
	PERIPHERAL_CLOCK_ADC_A,		/* same as ADC_0 */
	PERIPHERAL_CLOCK_ADC_0,     /* Register gating address offset 32 */
	PERIPHERAL_CLOCK_ADC_1,     /* Register gating address offset 33 */
	
	PERIPHERAL_CLOCK_IIC_A,		/* Register gating address offset 44 */
	
	PERIPHERAL_CLOCK_LIN_A,		/* Register gating address offset 48 */
    PERIPHERAL_CLOCK_LIN_B,		/* Register gating address offset 49 */
    PERIPHERAL_CLOCK_LIN_C,		/* Register gating address offset 50 */
    PERIPHERAL_CLOCK_LIN_D,		/* Register gating address offset 51 */
	PERIPHERAL_CLOCK_LIN_E,		/* Register gating address offset 52 */
	PERIPHERAL_CLOCK_LIN_F,		/* Register gating address offset 53 */
	PERIPHERAL_CLOCK_LIN_G,		/* Register gating address offset 54 */
	PERIPHERAL_CLOCK_LIN_H,		/* Register gating address offset 55 */
	
	PERIPHERAL_CLOCK_CTU,		/* Register gating address offset 57 */
	
	PERIPHERAL_CLOCK_CANS,		/* Register gating address offset 60 */
	
	PERIPHERAL_CLOCK_CFLASH_0,	/* Register gating address offset 66 */
	PERIPHERAL_CLOCK_DFLASH, 	/* Register gating address offset 67 */ 
	PERIPHERAL_CLOCK_SIU,		/* Register gating address offset 68 */	
	PERIPHERAL_CLOCK_WKUP,      /* Register gating address offset 69 */
	
	PERIPHERAL_CLOCK_EMIOS_0,   /* Register gating address offset 72 */
	PERIPHERAL_CLOCK_EMIOS_1,   /* Register gating address offset 73 */
 
	PERIPHERAL_CLOCK_CFLASH_1,	/* Register gating address offset 76 */ 
 
	PERIPHERAL_CLOCK_RTC,		/* Register gating address offset 91 */		
    PERIPHERAL_CLOCK_PIT,		/* Register gating address offset 92 */		
   
  
    PERIPHERAL_CLOCK_ESCI_A,
    PERIPHERAL_CLOCK_ESCI_B,
    PERIPHERAL_CLOCK_ESCI_C,
    PERIPHERAL_CLOCK_ESCI_D,
    PERIPHERAL_CLOCK_ESCI_E,
    PERIPHERAL_CLOCK_ESCI_F,
    PERIPHERAL_CLOCK_ESCI_G,
    PERIPHERAL_CLOCK_ESCI_H,
    PERIPHERAL_CLOCK_MLB,

    PERIPHERAL_CLOCK_FLEXPWM_0,
    PERIPHERAL_CLOCK_PIT_0,
    PERIPHERAL_CLOCK_PIT_1,
    PERIPHERAL_CLOCK_PIT_2,
    PERIPHERAL_CLOCK_PIT_3,
    PERIPHERAL_CLOCK_FEC_0,
    PERIPHERAL_CLOCK_STM_0,
} Mcu_Arc_PeriperalClock_t;


typedef enum {
    CPU_CORE0
} Cpu_t;

/* Offset from exceptions to interrupts */
#define IRQ_INTERRUPT_OFFSET    0uL

#endif /* IRQ_MPC5646B_H_ */
