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


#ifndef IRQ_MPC5777C_H_
#define IRQ_MPC5777C_H_

#define Irq_SOI()

typedef uint16 IrqType;

    /* Software interrupts. */
#define INTC_SSCIR0_CLR0    0
#define INTC_SSCIR0_CLR1    1
#define INTC_SSCIR0_CLR2    2
#define INTC_SSCIR0_CLR3    3
#define INTC_SSCIR0_CLR4    4
#define INTC_SSCIR0_CLR5    5
#define INTC_SSCIR0_CLR6    6
#define INTC_SSCIR0_CLR7    7
/*watchdog*/
#define MCM_MSWTIR_SWTAIC   8
/* fccu */
#define FCCU_ALARM          9
/* eDMA */
#define EDMA_ERRL_ERR31_0   10
#define EDMA_INTL_INT0      11
#define EDMA_INTL_INT1      12
#define EDMA_INTL_INT2      13
#define EDMA_INTL_INT3      14
#define EDMA_INTL_INT4      15
#define EDMA_INTL_INT5      16
#define EDMA_INTL_INT6      17
#define EDMA_INTL_INT7      18
#define EDMA_INTL_INT8      19
#define EDMA_INTL_INT9      20
#define EDMA_INTL_INT10     21
#define EDMA_INTL_INT11     22
#define EDMA_INTL_INT12     23
#define EDMA_INTL_INT13     24
#define EDMA_INTL_INT14     25
#define EDMA_INTL_INT15     26
#define EDMA_INTL_INT16     27
#define EDMA_INTL_INT17     28
#define EDMA_INTL_INT18     29
#define EDMA_INTL_INT19     30
#define EDMA_INTL_INT20     31
#define EDMA_INTL_INT21     32
#define EDMA_INTL_INT22     33
#define EDMA_INTL_INT23     34
#define EDMA_INTL_INT24     35
#define EDMA_INTL_INT25     36
#define EDMA_INTL_INT26     37
#define EDMA_INTL_INT27     38
#define EDMA_INTL_INT28     39
#define EDMA_INTL_INT29     40
#define EDMA_INTL_INT30     41
#define EDMA_INTL_INT31     42


#define SIU_PCSIFR_PCSI     43
#define PLL0_SR_LOLF_PLL1_SR_LOLF 44
#define SIU_OSR_OVF15_0     45
#define SIU_EISR_EIF0       46
#define SIU_EISR_EIF1       47
#define SIU_EISR_EIF2       48
#define SIU_EISR_EIF3       49
#define SIU_EISR_EIF15_4    50

/* emios */
#define eMIOS_0_GFLAG_F0    51
#define eMIOS_0_GFLAG_F1    52
#define eMIOS_0_GFLAG_F2    53
#define eMIOS_0_GFLAG_F3    54
#define eMIOS_0_GFLAG_F4    55
#define eMIOS_0_GFLAG_F5    56
#define eMIOS_0_GFLAG_F6    57
#define eMIOS_0_GFLAG_F7    58
#define eMIOS_1_GFLAG_F0    59
#define eMIOS_1_GFLAG_F1    60
#define eMIOS_1_GFLAG_F2    61
#define eMIOS_1_GFLAG_F3    62
#define eMIOS_1_GFLAG_F4    63
#define eMIOS_1_GFLAG_F5    64
#define eMIOS_1_GFLAG_F6    65
#define eMIOS_1_GFLAG_F7    66

/* eTPU */
#define eTPU_SCR_MCR_eTPU_A_B       67
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS0     68
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS1     69
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS2     70
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS3     71
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS4     72
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS5     73
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS6     74
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS7     75
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS8     76
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS9     77
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS10    78
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS11    79
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS12    80
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS13    81
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS14    82
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS15    83
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS16    84
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS17    85
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS18    86
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS19    87
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS20    88
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS21    89
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS22    90
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS23    91
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS24    92
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS25    93
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS26    94
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS27    95
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS28    96
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS29    97
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS30    98
#define eTPU_GCR_CISR_ENG1_eTPU_A_CIS31    99

/* eQADC */
#define EQADCA_FISRx_TORF   100       //@@ARCCORE changed from    EQADC_FISR_OVER
#define EQADCA_FISR0_NCF    101
#define EQADCA_FISR0_PF     102
#define EQADCA_FISR0_EOQF   103       //@@ARCCORE changed from   EQADC_FISR0_EOQF0

#define EQADCA_FISR0_CFFF   104
#define EQADCA_FISR0_RFDF   105
#define EQADCA_FISR1_NCF    106
#define EQADCA_FISR1_PF     107
#define EQADCA_FISR1_EOQF   108    //@@ARCCORE changed from   EQADC_FISR1_EOQF1
#define EQADCA_FISR1_CFFF   109
#define EQADCA_FISR1_RFDF   110
#define EQADCA_FISR2_NCF    111
#define EQADCA_FISR2_PF     112
#define EQADCA_FISR2_EOQF   113    //@@ARCCORE changed from   EQADC_FISR2_EOQF2
#define EQADCA_FISR2_CFFF   114
#define EQADCA_FISR2_RFDF   115
#define EQADCA_FISR3_NCF    116
#define EQADCA_FISR3_PF     117
#define EQADCA_FISR3_EOQF   118    //@@ARCCORE changed from    EQADC_FISR3_EOQF3
#define EQADCA_FISR3_CFFF   119
#define EQADCA_FISR3_RFDF   120
#define EQADCA_FISR4_NCF    121
#define EQADCA_FISR4_PF     122

#define EQADCA_FISR4_EOQF       123   //@@ARCCORE changed from EQADC_FISR4_EOQF
#define EQADCA_FISR4_CFFF       124
#define EQADCA_FISR4_RFDF       125
#define EQADCA_FISR5_NCF        126
#define EQADCA_FISR5_PF         127
#define EQADCA_FISR5_EOQF       128   //@@ARCCORE changed from   EQADC_FISR5_EOQF5
#define EQADCA_FISR5_CFFF       129
#define EQADCA_FISR5_RFDF       130
#define DSPIB_SR_TFUF_RFOF_SPEF_DPEF  131
#define DSPI_1_ISR_EOQF         132
#define DSPIB_SR_TFFF           133
#define DSPIB_SR_TCF_DDIF       134
#define DSPIB_SR_RFDF           135
#define DSPIC_SR_TFUF_RFOF_SPEF_DPEF  136
#define DSPI_2_ISR_EOQF         137
#define DSPIC_SR_TFFF           138
#define DSPIC_SR_TCF_DDIF       139
#define DSPIC_SR_RFDF           140
#define DSPID_SR_TFUF_RFOF_SPEF_DPEF  141
#define DSPI_3_ISR_EOQF         142
#define DSPID_SR_TFFF           143
#define DSPID_SR_TCF_DDIF       144
#define DSPID_SR_RFDF           145

#define ESCIA_COMBINED_INTR_RQST                         146
#define PCU_IR0_OIF_EIF                                  147
#define PCU_IR1_OIF_EIF                                  148

#define ESCIB_COMBINED_INTR_RQST                         149
#define PSI5_0_CH_0_DSR_NDS31_0_OWS31_0_ERROR31_0        150
#define PSI5_1_CH_0_DSR_NDS31_0_OWS31_0_ERROR31_0        151

/* FlexCAN */
#define CANA_ESR1_BOFF_INT_TWRNINT_RWRNINT               152
#define CANA_ERROR                                       153
/*154 reserved*/
#define CANA_IFRL_BUF0      155
#define CANA_IFRL_BUF1      156
#define CANA_IFRL_BUF2      157
#define CANA_IFRL_BUF3      158

#define CANA_IFRL_BUF4      159
#define CANA_IFRL_BUF5      160
#define CANA_IFRL_BUF6      161
#define CANA_IFRL_BUF7      162
#define CANA_IFRL_BUF8      163
#define CANA_IFRL_BUF9      164
#define CANA_IFRL_BUF10     165
#define CANA_IFRL_BUF11     166
#define CANA_IFRL_BUF12     167
#define CANA_IFRL_BUF13     168
#define CANA_IFRL_BUF14     169
#define CANA_IFRL_BUF15     170
#define CANA_IFRL_BUF31_16  171
#define CANA_IFRH_BUF63_32  172

#define CANC_ESR1_BOFF_INT_TWRNINT_RWRNINT      173
#define CANC_ERROR                              174
/*175 reserved*/

#define CANC_IFRL_BUF0      176
#define CANC_IFRL_BUF1      177
#define CANC_IFRL_BUF2      178
#define CANC_IFRL_BUF3      179
#define CANC_IFRL_BUF4      180
#define CANC_IFRL_BUF5      181
#define CANC_IFRL_BUF6      182
#define CANC_IFRL_BUF7      183
#define CANC_IFRL_BUF8      184
#define CANC_IFRL_BUF9      185
#define CANC_IFRL_BUF10     186
#define CANC_IFRL_BUF11     187
#define CANC_IFRL_BUF12     188
#define CANC_IFRL_BUF13     189
#define CANC_IFRL_BUF14     190
#define CANC_IFRL_BUF15     191
#define CANC_IFRL_BUF31_16  192
#define CANC_IFRH_BUF63_32  193

#define FEC_EIR_TXF             194
#define FEC_EIR_RXF             195
#define FEC_EIR_ERROR           196

#define DECFILTER_MSR_A_IDF     197
#define DECFILTER_MSR_A_ODF_SDF 198
#define DECFILTER_A_ERRORS      199
#define STM_CIR0_CIF            200
#define STM_CIR1_CIR2_CIR3_CIF  201

#define eMIOS_0_GFLAG_F16       202
#define eMIOS_0_GFLAG_F17       203
#define eMIOS_0_GFLAG_F18       204
#define eMIOS_0_GFLAG_F19       205
#define eMIOS_0_GFLAG_F20       206
#define eMIOS_0_GFLAG_F21       207
#define eMIOS_0_GFLAG_F22       208
#define eMIOS_0_GFLAG_F23       209

#define EDMAA_ERRH_ERR63_32     210
#define EDMAA_IRQRH_INT32       211
#define EDMAA_IRQRH_INT33       212
#define EDMAA_IRQRH_INT34       213
#define EDMAA_IRQRH_INT35       214
#define EDMAA_IRQRH_INT36       215
#define EDMAA_IRQRH_INT37       216
#define EDMAA_IRQRH_INT38       217
#define EDMAA_IRQRH_INT39       218
#define EDMAA_IRQRH_INT40       219
#define EDMAA_IRQRH_INT41       220
#define EDMAA_IRQRH_INT42       221
#define EDMAA_IRQRH_INT43       222
#define EDMAA_IRQRH_INT44       223
#define EDMAA_IRQRH_INT45       224
#define EDMAA_IRQRH_INT46       225
#define EDMAA_IRQRH_INT47       226
#define EDMAA_IRQRH_INT48       227
#define EDMAA_IRQRH_INT49       228


#define EDMAA_IRQRH_INT50       229
#define EDMAA_IRQRH_INT51       230
#define EDMAA_IRQRH_INT52       231
#define EDMAA_IRQRH_INT53       232
#define EDMAA_IRQRH_INT54       233
#define EDMAA_IRQRH_INT55       234
#define EDMAA_IRQRH_INT56       235
#define EDMAA_IRQRH_INT57       236
#define EDMAA_IRQRH_INT58       237
#define EDMAA_IRQRH_INT59       238
#define EDMAA_IRQRH_INT60       239
#define EDMAA_IRQRH_INT61       240
#define EDMAA_IRQRH_INT62       241
#define EDMAA_IRQRH_INT63       242

#define eTPU_GCR_CISR_ENG2_CIS0     243
#define eTPU_GCR_CISR_ENG2_CIS1     244
#define eTPU_GCR_CISR_ENG2_CIS2     245
#define eTPU_GCR_CISR_ENG2_CIS3     246
#define eTPU_GCR_CISR_ENG2_CIS4     247
#define eTPU_GCR_CISR_ENG2_CIS5     248
#define eTPU_GCR_CISR_ENG2_CIS6     249
#define eTPU_GCR_CISR_ENG2_CIS7     250
#define eTPU_GCR_CISR_ENG2_CIS8     251
#define eTPU_GCR_CISR_ENG2_CIS9     252
#define eTPU_GCR_CISR_ENG2_CIS10    253
#define eTPU_GCR_CISR_ENG2_CIS11    254
#define eTPU_GCR_CISR_ENG2_CIS12    255
#define eTPU_GCR_CISR_ENG2_CIS13    256
#define eTPU_GCR_CISR_ENG2_CIS14    257
#define eTPU_GCR_CISR_ENG2_CIS15    258
#define eTPU_GCR_CISR_ENG2_CIS16    259
#define eTPU_GCR_CISR_ENG2_CIS17    260
#define eTPU_GCR_CISR_ENG2_CIS18    261
#define eTPU_GCR_CISR_ENG2_CIS19    262
#define eTPU_GCR_CISR_ENG2_CIS20    263
#define eTPU_GCR_CISR_ENG2_CIS21    264
#define eTPU_GCR_CISR_ENG2_CIS22    265
#define eTPU_GCR_CISR_ENG2_CIS23    266
#define eTPU_GCR_CISR_ENG2_CIS24    267

#define eTPU_GCR_CISR_ENG2_CIS25    268
#define eTPU_GCR_CISR_ENG2_CIS26    269
#define eTPU_GCR_CISR_ENG2_CIS27    270
#define eTPU_GCR_CISR_ENG2_CIS28    271
#define eTPU_GCR_CISR_ENG2_CIS29    272
#define eTPU_GCR_CISR_ENG2_CIS30    273
#define eTPU_GCR_CISR_ENG2_CIS31    274
#define DSPIA_SR_TFUF_RFOF_SPEF_DPEF 275
#define DSPI_0_ISR_EOQF              276
#define DSPIA_SR_TFFF               277
#define DSPIA_SR_TCF_DDIF           278
#define DSPIA_SR_RFDF               279
#define CANB_ESR1_BOFF_INT_TWRNINT_RWRNINT          280
#define CANB_ERROR                  281
/*282 reserved*/
#define CANB_IFRL_BUF0      283
#define CANB_IFRL_BUF1      284
#define CANB_IFRL_BUF2      285
#define CANB_IFRL_BUF3      286
#define CANB_IFRL_BUF4      287
#define CANB_IFRL_BUF5      288
#define CANB_IFRL_BUF6      289
#define CANB_IFRL_BUF7      290
#define CANB_IFRL_BUF8      291
#define CANB_IFRL_BUF9      292
#define CANB_IFRL_BUF10     293
#define CANB_IFRL_BUF11     294
#define CANB_IFRL_BUF12     295
#define CANB_IFRL_BUF13     296
#define CANB_IFRL_BUF14     297
#define CANB_IFRL_BUF15     298
#define CANB_IFRL_BUF31_16  299
#define CANB_IFRH_BUF63_32  300

#define PIT_RTI_TFLG_TIF    305
#define PIT_INT0 			PIT_RTI_TFLG_TIF
#define PIT_INT1            301
#define PIT_INT2            302
#define PIT_INT3            303
#define PIT_INT4            304

/*306 reserved*/
#define MCR_DONE            307

#define CAND_ESR1_BOFF_INT_TWRNINT_RWRNINT  308
#define CAND_ERROR                          309
/*310 reserved*/
#define CAND_IFRL_BUF0      311
#define CAND_IFRL_BUF1      312
#define CAND_IFRL_BUF2      313
#define CAND_IFRL_BUF3      314
#define CAND_IFRL_BUF4      315
#define CAND_IFRL_BUF5      316
#define CAND_IFRL_BUF6      317
#define CAND_IFRL_BUF7      318
#define CAND_IFRL_BUF8      319
#define CAND_IFRL_BUF9      320
#define CAND_IFRL_BUF10     321
#define CAND_IFRL_BUF11     322
#define CAND_IFRL_BUF12     323
#define CAND_IFRL_BUF13     324
#define CAND_IFRL_BUF14     325
#define CAND_IFRL_BUF15     326
#define CAND_IFRL_BUF31_16  327
#define CAND_IFRH_BUF63_32  328

#define SENT_0_MODULE_INTR                329
#define SENT_0_CH0_INTR                   330
#define SENT_0_CH1_INTR                   331
#define SENT_0_CH2_INTR                   332
#define SENT_0_CH3_INTR                   333
#define SENT_0_CH4_INTR                   334
#define SENT_0_CH5_INTR                   335
#define SENT_1_MODULE_INTR                336
#define SENT_1_CH0_INTR                   337
#define SENT_1_CH1_INTR                   338
#define SENT_1_CH2_INTR                   339
#define SENT_1_CH3_INTR                   340
#define SENT_1_CH4_INTR                   341
#define SENT_1_CH5_INTR                   342

#define PWR_MNGMT_CNTRL_INTR              343
#define TEMP_SENSOR_INTR                  344
#define JDC_MSR_JIN_INT_JOUT_INT          345

#define SIPI_ERR_SR_CSR0                            346
#define LFAST_0_TISR_RISR_RIISR                     347
#define m_can0_int0_int1_m_can1_int0_int1           348
#define ERM_Interrupts                              349
#define CMU_0_ISR_FHHI_FLLI_OLRI_CMU_1_ISR_FHHI_FLLI 350
#define CMU_2_ISR_FHHI_FLLI_CMU_3_ISR_FHHI_FLLI     351
#define CMU_4_ISR_FHHI_FLLI_CMU_5_ISR_FHHI_FLLI     352
#define CMU_6_ISR_FHHI_FLLI_CMU_7_ISR_FHHI_FLLI     353
#define CMU_8_ISR_FHHI_FLLI                         354
/*355 356 357 reserved*/
#define REACM_GEFR_OVR_EF7_0                        358


#define REACM_CHSR_0_CHSR_1_INTR                    359
#define REACM_CHSR_2_CHSR_3_INTR                    360
#define REACM_CHSR_4_CHSR_5_INTR                    361
#define REACM_CHSR_6_CHSR_7_INTR                    362
#define REACM_CHSR_8_CHSR_9_INTR                    363
/*364 365 reserved*/

#define DECFILTER_MSR_B_IDF                            366
#define DECFILTER_MSR_B_ODF_SDF                        367
#define DECFILTER_B_ERRORS                             368
#define eTPU_C_GLOBAL_EXCEPTION                        369
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS0                        370
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS1                        371
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS2                        372
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS3                        373
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS4                        374
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS5                        375
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS6                        376
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS7                        377
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS8                        378
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS9                        379
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS10                       380
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS11                       381
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS12                       382
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS13                       383
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS14                       384
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS15                       385
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS16                       386
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS17                       387
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS18                       388
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS19                       389
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS20                       390
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS21                       391
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS22                       392
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS23                       393
#define EQADCB_FISRx_TORF_RFOF_CFUF                    394
#define EQADCB_FISR0_NCF                               395
#define EQADCB_FISR0_PF                                396
#define EQADCB_FISR0_EOQF                              397
#define EQADCB_FISR0_CFFF                              398
#define EQADCB_FISR0_RFDF                              399
#define EQADCB_FISR1_NCF                               400
#define EQADCB_FISR1_PF                                401
#define EQADCB_FISR1_EOQF                              402
#define EQADCB_FISR1_CFFF                              403
#define EQADCB_FISR1_RFDF                              404
#define EQADCB_FISR2_NCF                               405
#define EQADCB_FISR2_PF                                406
#define EQADCB_FISR2_EOQF                              407
#define EQADCB_FISR2_CFFF                              408
#define EQADCB_FISR2_RFDF                              409
#define EQADCB_FISR3_NCF                               410
#define EQADCB_FISR3_PF                                411
#define EQADCB_FISR3_EOQF                              412
#define EQADCB_FISR3_CFFF                              413
#define EQADCB_FISR3_RFDF                              414
#define EQADCB_FISR4_NCF                               415
#define EQADCB_FISR4_PF                                416
#define EQADCB_FISR4_EOQF                              417
#define EQADCB_FISR4_CFFF                              418
#define EQADCB_FISR4_RFDF                              419
#define EQADCB_FISR5_NCF                               420
#define EQADCB_FISR5_PF                                421
#define EQADCB_FISR5_EOQF                              422
#define EQADCB_FISR5_CFFF                              423
#define EQADCB_FISR5_RFDF                              424
#define EDMAB_ERRH_ERR31_0                             425
#define EDMAB_IRQRH_INT0                               426
#define EDMAB_IRQRH_INT1                               427
#define EDMAB_IRQRH_INT2                               428
#define EDMAB_IRQRH_INT3                               429
#define EDMAB_IRQRH_INT4                               430
#define EDMAB_IRQRH_INT5                               431
#define EDMAB_IRQRH_INT6                               432
#define EDMAB_IRQRH_INT7                               433
#define EDMAB_IRQRH_INT8                               434
#define EDMAB_IRQRH_INT9                               435
#define EDMAB_IRQRH_INT10                              436
#define EDMAB_IRQRH_INT11                              437
#define EDMAB_IRQRH_INT12                              438
#define EDMAB_IRQRH_INT13                              439
#define EDMAB_IRQRH_INT14                              440
#define EDMAB_IRQRH_INT15                              441
#define EDMAB_IRQRH_INT16                              442
#define EDMAB_IRQRH_INT17                              443
#define EDMAB_IRQRH_INT18                              444
#define EDMAB_IRQRH_INT19                              445
#define EDMAB_IRQRH_INT20                              446
#define EDMAB_IRQRH_INT21                              447
#define EDMAB_IRQRH_INT22                              448
#define EDMAB_IRQRH_INT23                              449
#define EDMAB_IRQRH_INT24                              450
#define EDMAB_IRQRH_INT25                              451
#define EDMAB_IRQRH_INT26                              452
#define EDMAB_IRQRH_INT27                              453
#define EDMAB_IRQRH_INT28                              454
#define EDMAB_IRQRH_INT29                              455
#define EDMAB_IRQRH_INT30                              456
#define EDMAB_IRQRH_INT31                              457
#define SD_ADC1_ADC2_ADC3_ADC4                         458
#define eMIOS_1_GFLAG_F16                              459
#define eMIOS_1_GFLAG_F17                              460
#define eMIOS_1_GFLAG_F18                              461
#define eMIOS_1_GFLAG_F19                              462
#define eMIOS_1_GFLAG_F20                              463
#define eMIOS_1_GFLAG_F21                              464
#define eMIOS_1_GFLAG_F22                              465
#define eMIOS_1_GFLAG_F23                              466
#define DECFILTER_MSR_C_IDF                            467
#define DECFILTER_MSR_C_ODF_SDF                        468
#define DECFILTER_C_ERRORS                             469
#define DECFILTER_MSR_D_IDF                            470
#define DECFILTER_MSR_D_ODF_SDF                        471
#define DECFILTER_D_ERRORS                             472

#define ESCIC_COMBINED_INTR_RQST                       473
#define ESCID_COMBINED_INTR_RQST                       474
#define ESCIE_COMBINED_INTR_RQST                       475

#define DECFILTER_MSR_E_IDF_ODF_ERRORS_SDF             476
#define DECFILTER_MSR_F_IDF_ODF_ERRORS_SDF             477
#define DECFILTER_MSR_G_IDF_ODF_ERRORS_SDF             478
#define DECFILTER_MSR_H_IDF_ODF_ERRORS_SDF             479
#define DECFILTER_MSR_I_IDF_ODF_ERRORS_SDF             480
#define DECFILTER_MSR_J_IDF_ODF_ERRORS_SDF             481
#define DECFILTER_MSR_K_IDF_ODF_ERRORS_SDF             482
#define DECFILTER_MSR_L_IDF_ODF_ERRORS_SDF             483
/*484 485 486 487 reserved*/
#define EDMAB_ERRH_ERR63_32                            488
#define EDMAB_IRQRH_INT32_39                           489
#define EDMAB_IRQRH_INT40_47                           490

#define EDMAB_IRQRH_INT48_55                           491
#define EDMAB_IRQRH_INT56_63                           492
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS24                493
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS25                494
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS26                495
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS27                496
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS28                497
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS29                498
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS30                499
#define eTPU_GCR_CISR_ENG1_eTPU_C_CIS31                500
#define SWTB_IR_TIF                                    501
#define SEMA4_CP0INE_0_15                              502
#define SEMA4_CP1INE_0_15                              503
#define CSE_IR_CIF                                     504
#define ESCIF_COMBINED_INTR_RQST                       505
#define DSPIE_SR_TFUF_RFOF_SPEF_DPEF                   506
#define DSPI_4_ISR_EOQF                                507
#define DSPIE_SR_TFFF                                  508
#define DSPIE_SR_TCF_DSPIE_SR_DDIF                     509
#define DSPIE_SR_RFDF                                  510
#define STCU2_INT_FLG_MBIFLG                           511



#define INTC_NUMBER_OF_INTERRUPTS   512
#define NUMBER_OF_INTERRUPTS_AND_EXCEPTIONS INTC_NUMBER_OF_INTERRUPTS

typedef enum
{
    C_PBRIDGE,
    C_PLL0_PHI,
    C_PLL1_PHI,
    C_SYS_CLK,
    PERIPHERAL_CLOCK_FLEXCAN_A,
    PERIPHERAL_CLOCK_FLEXCAN_B,
    PERIPHERAL_CLOCK_FLEXCAN_C,
    PERIPHERAL_CLOCK_FLEXCAN_D,
    PERIPHERAL_CLOCK_M_CAN_0,
    PERIPHERAL_CLOCK_M_CAN_1,
    PERIPHERAL_CLOCK_DSPI_A,
    PERIPHERAL_CLOCK_DSPI_B,
    PERIPHERAL_CLOCK_DSPI_C,
    PERIPHERAL_CLOCK_DSPI_D,
    PERIPHERAL_CLOCK_DSPI_E,
    PERIPHERAL_CLOCK_SPI_0,
    PERIPHERAL_CLOCK_SPI_1,
    PERIPHERAL_CLOCK_SPI_2,
    PERIPHERAL_CLOCK_SPI_3,
    PERIPHERAL_CLOCK_SPI_4,
    PERIPHERAL_CLOCK_PIT_0,
    PERIPHERAL_CLOCK_PIT_1,
    PERIPHERAL_CLOCK_PIT_2,
    PERIPHERAL_CLOCK_PIT_3,
    PERIPHERAL_CLOCK_FEC_0,
    PERIPHERAL_CLOCK_STM_0,
    PERIPHERAL_CLOCK_EMIOS_0,
    PERIPHERAL_CLOCK_EMIOS_1,
    PERIPHERAL_CLOCK_ADC_A,
    PERIPHERAL_CLOCK_ADC_B,
}Mcu_Arc_PeriperalClock_t;

typedef enum
{
    CPU_CORE0,
    CPU_CORE1,
    CPU_CORE2
} Cpu_t;

/* Offset from exceptions to interrupts */
#define IRQ_INTERRUPT_OFFSET    0

#endif /* IRQ_MPC5777C_H_ */
