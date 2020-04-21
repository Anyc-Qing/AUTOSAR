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

/** @file Spi_Hw_tms570.c
 *
 *  The Spi_Hw_tms570.c file will contain the HW specific implementation of the API's .
 */
 /** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the TMS570 Mcal
  *  @{
  */

 /** \addtogroup Spi
  *  This is the TMS 570 Mcal Spi Group
  *  @{
  */

/** @req SWS_Spi_00014 - In case of a Sequence configured as Interruptible Sequence and according to [SWS_Spi_00125] requirement, the SPI
 * Driver is allowed to suspend an already started Sequence transmission in favour of another Sequence with a higher priority Job
 * (see S0WS_Spi_00002 & SWS_Spi_00093). That means, at the end of a Job transmission (that belongs to the interruptible sequence) with
 * another Sequence transmit request pending, the SPI Driver shall perform a rescheduling in order to elect the next Job to transmit. */

#define SPI_SOURCE

#include "Spi.h"
#include "Spi_Hw_tms570.h"
#include "isr.h"
#include "irq_types.h"
#include "SchM_Spi.h"
#include "Det.h"
#include "Spi_MemMap.h"
#include "Spi_Internal.h"

#define SPI_INSTANCE_ID 	(0)		/**< @brief Defines the instance of the Spi driver */

#define SPI_DLC_MAXOPT   	(2U) 	/**< @brief Defines the dlc max options */
#define SPI_DLC_STDOPT      (0U) 	/**< @brief Defines the std max options */
#define SPI_DLC_RAMOPT      (1U) 	/**< @brief Defines the ram max options */

#define SPI_CLOCK_FRAME_BITS_SIZE_8   8U    /**< @brief Defines the spi clk 8-bits frame size in bits  */
#define SPI_CLOCK_FRAME_BITS_SIZE_16  16U   /**< @brief Defines the spi clk 16-bits frame size in bits */
#define SPI_CLOCK_FRAME_BITS_SIZE_32  32U   /**< @brief Defines the spi clk 32-bits frame size in bits */

#define DMA_REQ_MASK  (0x00010000U)			/**< @brief Bits used to enable DMA interrupt */

#define TMS_SPI_MODE_0 0U   /**< @brief Defines the spi mode 0 */
#define TMS_SPI_MODE_1 1U   /**< @brief Defines the spi mode 1 */
#define TMS_SPI_MODE_2 2U   /**< @brief Defines the spi mode 2 */
#define TMS_SPI_MODE_3 3U   /**< @brief Defines the spi mode 3 */

#define ALL_BITS_HIGH_MASK_8   0xFFU             /**< @brief Defines the 8-bits mask  */
#define ALL_BITS_HIGH_MASK_16  0xFFFFU           /**< @brief Defines the 16-bits mask */
#define ALL_BITS_HIGH_MASK_24  0xFFFFFFU         /**< @brief Defines the 24-bits mask */
#define ALL_BITS_HIGH_MASK_32  0xFFFFFFFFU       /**< @brief Defines the 32-bits mask */

#define HW_CHANNEL_U16_NUMBER_8  8U        /**< @brief Defines the 8 number of hardware Channel_u16  */
#define HW_CHANNEL_U16_NUMBER_16 16U       /**< @brief Defines the 16 number of hardware Channel_u16 */
#define HW_CHANNEL_U16_NUMBER_24 24U       /**< @brief Defines the 24 number of hardware Channel_u16 */

#define PORT_ASSIGNMENT_MASK     0x77777777U	/**< @brief Define used to assign PORT B to DMA SPI */

#define SPI_ANALOG_LOOPBACK_MASK    (0x00000A02)	/**< @brief Define used to enable analog loopback test */
#define SPI_DIGITAL_LOOPBACK_MASK   (0x00000A00)	/**< @brief Define used to enable digital loopback test */

#if defined(CFG_TMS570LS12X)
/* derived functions with option Ram, the macro Spi_Dlc(Ram,Init) expands to Spi_DlcRamInit  */
static void Spi_DlcRamInit (uint32 HwUnit_u32);
static void Spi_DlcRamClose (uint32 HwUnit_u32);
static void Spi_DlcRamFillData (uint32 HwUnit_u32);
static void Spi_DlcRamDrainData (uint32 HwUnit_u32);
static void Spi_DlcRamTriggerData (uint32 HwUnit_u32);

/* derived functions with option Std */
static void Spi_DlcStdInit (uint32 HwUnit_u32);
static void Spi_DlcStdClose (uint32 HwUnit_u32);
static void Spi_DlcStdFillData (uint32 HwUnit_u32);
static void Spi_DlcStdDrainData (uint32 HwUnit_u32);
static void Spi_DlcStdTriggerData (uint32 HwUnit_u32);
static void Spi_DlcStdPrepareDma (uint32 HwUnit_u32, Spi_DlcTxRxDefType Dir_t);
static uint16 Spi_DlcStdTransmit(uint32 HwUnit_u32);
#endif /* defined(CFG_TMS570LS12X) */

/*lint -e553 MISRA:STANDARDIZED_INTERFACE:Undefined preprocessor variable, assumed 0:[MISRA 2012 Rule 20.9, required] */
#if (SPI_ENABLE_LOOPBACK_MODE_API == STD_ON)
/* Not used anywhere. Perhaps should be removed */
static Std_ReturnType Spi_EnableLoopbackMode( Spi_HWUnitType HWUnit, Spi_LoopbackModeType LBMode );
#endif

/*lint -e553 MISRA:STANDARDIZED_INTERFACE:Undefined preprocessor variable, assumed 0:[MISRA 2012 Rule 20.9, required] */
#if (SPI_DISABLE_LOOPBACK_MODE_API == STD_ON)
/* Not used anywhere. Perhaps should be removed */
static Std_ReturnType  Spi_DisableLoopbackMode(Spi_HWUnitType HWUnit);
#endif

/*lint -e553 MISRA:STANDARDIZED_INTERFACE:Undefined preprocessor variable, assumed 0:[MISRA 2012 Rule 20.9, required] */
#if (SPI_REGISTER_READBACK_API == STD_ON)
/* Not used anywhere. Perhaps should be removed */
static Std_ReturnType Spi_RegisterReadback( Spi_RegisterReadbackType* RegisterReadbackPtr, Spi_HWUnitType HWUnit );
#endif

const Spi_ConfigType* Spi_ConfigPtr_pt = NULL_PTR;	/**< @brief Pointer to the structure holding the Spi driver configuration. */
volatile Spi_StatusType Spi_DrvStatus = SPI_UNINIT; /**< @brief Variable holding the current Spi hardware module status */

/**
 * @struct Spi_HwInstType
 * @brief Defines the hardware instance type.
 */
typedef struct {
    uint8 SeqIdAkt_u8;  /**< @brief Id of the sequence, current being processed  */
    uint8 SeqIdPend_u8; /**< @brief Id of the sequence, pending                  */
    uint8 SeqIdRep_u8;  /**< @brief Id of the sequence, reported by job complete */
    uint8 SeqNrPend_u8; /**< @brief number of queued sequences */
} Spi_HwInstType ;


#if defined(CFG_TMS570LS12X)
/*lint -e9003 LINT:MISRA:OTHER:OK to keep as file global variable for readability:[MISRA 2012 Rule 8.9, advisory] */
const Dma_ChannelSelectType Dma_MapChannel[] =
{
    {{SPI_DLC_RXUNIT0_Channel, SPI_DLC_TXUNIT0_Channel}}
    ,{{SPI_DLC_RXUNIT1_Channel, SPI_DLC_TXUNIT1_Channel}}
    ,{{SPI_DLC_RXUNIT2_Channel, SPI_DLC_TXUNIT2_Channel}}
    ,{{SPI_DLC_RXUNIT3_Channel, SPI_DLC_TXUNIT3_Channel}}
    ,{{SPI_DLC_RXUNIT4_Channel, SPI_DLC_TXUNIT4_Channel}}
};
/*lint -e9003 LINT:MISRA:OTHER:OK to keep as file global variable for readability:[MISRA 2012 Rule 8.9, advisory] */
const uint8 Dma_ChanneltoHWunit[] =
{
	DMA_HW_UNIT_1,  /* Channel 0 is used by SPI2 */
	DMA_HW_UNIT_1,  /* Channel 1 is used by SPI2 */
	DMA_HW_UNIT_3,  /* Channel 2 is used by SPI4 */
	DMA_HW_UNIT_3   /* Channel 3 is used by SPI4 */
};

#define SPI_DLCDMA_SOURCE 1
/* the Spi uses max five Channel_u16s for Tx/Rx with 10 requests */
#define DMA_HW_Channel_u16_NUMBER    (16U)
/*lint -e9003 LINT:MISRA:OTHER:OK to keep as file global variable for readability:[MISRA 2012 Rule 8.9, advisory] */
static Dma_StatusType Dma_ModuleInitFlag = DMA_UNINIT;
/* DMa support for max 5 HWUnits */

#endif /* defined(CFG_TMS570LS12X) */

/** @brief Defines the schedule of one transfer group */
static Spi_DlcEventType Spi_DlcEvent_t[SPI_DLC_MAXHWUNIT];

/** @brief Defines the schedule for hardware unit mapping */
static Spi_HWUnitMapType Spi_HWUnitMap_at[SPI_DLC_MAXHWUNIT] =
{
    {NULL_PTR, NULL_PTR, NULL_PTR},
    {NULL_PTR, NULL_PTR, NULL_PTR},
    {NULL_PTR, NULL_PTR, NULL_PTR},
    {NULL_PTR, NULL_PTR, NULL_PTR},
    {NULL_PTR, NULL_PTR, NULL_PTR},
};

#if defined(CFG_TMS570LS12X)
static Spi_DlcFunctionType Spi_DlcOptionSelect[SPI_DLC_MAXOPT];
#endif

/** @brief External table of job id's ordered by priorities. */
extern uint8 Spi_JobPrioConvTbl_at[];
/** @brief External array of job's to be executed. */
extern Spi_JobSortedType Spi_JobsSorted_at[];
/** @brief External array of events's to be processed. */
extern Spi_HwEventType Spi_HwSeqEvent_at[];

/* function prototypes */
#if (SPI_LEVEL_DELIVERED == SPI_LEVEL_2)
static void Spi_HwSetMode(Spi_AsyncModeType Mode);
#endif
static Std_ReturnType Spi_HwSetEvent(const Spi_HwEventType* Hw_Event_pt);
static void Spi_InitController(void);
static void Spi_HwProcessState(uint16_least HW_Inst_Nr_u8);
static void Spi_HwJobComplete(uint16_least Job_u16, uint16_least DLC_u16) ;
static void Spi_DlcInit(void) ;
static void Spi_DlcClose(void) ;
static Std_ReturnType Spi_DlcSetEvent( const Spi_DlcEventType* Dlc_Event_pt);
static void Dma_Init( void );
static void Dma_Setup( const Dma_ChannelSetupType* Setup );
static void Spi_HwJobConsumeEvent(uint16_least HW_Inst_Nr_u8);
static void Spi_HwSeqConsumeEvent(uint16_least HW_Inst_Nr_u8);
static void Spi_HwSeqNext(uint16_least HW_Inst_Nr_u8);
static void Spi_HwSeqComplete(uint16_least HW_Inst_Nr_u8);
static void Spi_HwSeqCleanUp(uint16_least HW_Inst_Nr_u8);
static void Spi_HwSeqAdjust(uint16_least SequenceID);
static void Spi_HwJobsSort(void);
static void Spi_HwJobTransmit(uint16_least HW_Inst_Nr_u8);
static void Spi_HwJobClear(uint16_least SequenceID);
static Std_ReturnType Spi_HwJobQueue(uint16_least SequenceID);
static void Spi_DlcConsumeEvent(uint32 HwUnit_u32);
static void Spi_DlcTransmit(uint32 HwUnit_u32);
static uint16 Spi_DlcRamTransmit(uint32 HwUnit_u32);
static Std_ReturnType Spi_DlcSwitchChannel( uint32 HwUnit_u32, volatile uint16* Ctrl_pt,
    Spi_DlcEventType* Ev_pt, Spi_DlcTxRxDefType Dir_t );
static void Spi_DlcError(uint32 HwUnit_u32);
static void Spi_GlobalSuspend(void);
static void Spi_GlobalRestore(void);


/* functions */

/***************************************************************************//**
 * @brief   Function used to validate custom expressions.
 * @param[in]           exp - boolean expression to be validated *
 * @param[in/out]       rv - pointer to validation status to be updated according
 * 						to validation result
 ******************************************************************************/
static inline void Spi_Hw_validate(boolean exp, Std_ReturnType* rv) {
    if ((*rv == E_OK) && (exp == FALSE)) {
        *rv = E_NOT_OK;
    }
}

/***************************************************************************//**
 * @brief   Function used to validate custom expressions.
 * @details If the validation fails, an error is reported to default error tracer
 *          if SPI_DEV_ERROR_DETECT is STD_ON.
 * @param[in]           exp - boolean expression to be validated
 * @param[in]           apiid - AUTOSAR specified API Id for each module
 * @param[in]           errid - AUTOSAR specified Error Id for each type of error
 *                      specific to each API
 * @param[in/out]       rv - pointer to validation status to be updated according
 * 						to validation result
 ******************************************************************************/
static inline void Spi_param_validate(boolean exp, uint8 apiid, uint8 errid, Std_ReturnType* rv) {
    if ((*rv == E_OK) && (exp == FALSE)) {
#if SPI_DEV_ERROR_DETECT==STD_ON
        (void)Det_ReportError( SPI_MODULE_ID, SPI_INSTANCE_ID, apiid, errid);
#endif
        *rv = E_NOT_OK;
    }
}

static void Spi_GlobalSuspend(void)
{
    SchM_Enter_Spi_EA_0();
}

static void Spi_GlobalRestore(void)
{
    SchM_Exit_Spi_EA_0();
}

/**  @brief Service to fill ram with data.
 *  @param[in]        HwUnit_u32 - Hardware unit id.
 */
/*lint --e{954} MISRA:HARDWARE_ACCESS:could be declared as pointing to const:[MISRA 2012 Rule 8.13, advisory]. */
static void Spi_DlcRamFillData(uint32 HwUnit_u32)
{
    uint8  ChIDTx_u8    ; /* channel identifier, Rx used as index */
    uint16 TgLen_u16    ; /* local transfer group length */
    uint16 TxPos_u16    ; /* buffer filled counter, increases with each successful write/read to MIB Ram */
    uint16 DefData_u16  ; /* local default data value, to prevent too many rom accesses */
    uint16 DataLoc_u16  ; /* local default data value */
    Spi_BufferDescriptorType* ChBufTx_pt; /* pointer to Tx channel buffer */
    Spi_DlcEventPtrType DlcEv_pt;
    Spi_RamBufferPtrType MRam_pt;
    Std_ReturnType EVal_t = E_OK;  /* evaluate return value of Spi_DlcSwitchChannel */
    Std_ReturnType validate = E_OK;

    /*lint -e730 LINT:OTHER:Boolean argument to function. */
	Spi_Hw_validate(( Spi_HWUnitMap_at[HwUnit_u32].Ram_pt != NULL_PTR ), &validate);

    DlcEv_pt = &Spi_DlcEvent_t[HwUnit_u32];
    MRam_pt  = Spi_HWUnitMap_at[HwUnit_u32].Ram_pt;

    /* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: This routine is only reference from the ISR if there is new data pending to be sent.
     *  For this reason DlcEv_pt->Guard_u8 can only be SPI_DLC_G_PENDING and this condition could be removed.
     */
    if(DlcEv_pt->Guard_u8 == SPI_DLC_G_PENDING){
    	DlcEv_pt->Guard_u8 = (uint8)SPI_DLC_G_ACTIVE;
    }

    /*lint -e730 LINT:OTHER:Boolean argument to function. */
    Spi_Hw_validate(( DlcEv_pt->Guard_u8 == SPI_DLC_G_ACTIVE ), &validate);

	/* mark the transfer group */
	TgLen_u16  = 0U ;

	/* in this module we try to transmit one or more channels, depending on the configuration */

	while(validate == E_OK)
	{
		ChIDTx_u8 = DlcEv_pt->ID_u8[SPI_DLC_TX] ;
		TxPos_u16 = DlcEv_pt->Pos_u16[SPI_DLC_TX];
		/* handle buffers for Tx and Rx */
		ChBufTx_pt  = Spi_ConfigPtr_pt->Spi_ChannelCfg[ChIDTx_u8].Spi_Descriptor ;

		/*lint -e730 LINT:OTHER:Boolean argument to function. */
		Spi_Hw_validate(( ChBufTx_pt != NULL_PTR ), &validate);

		/* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: Always true, hard to make false, so removed from coverage */
		if(validate == E_OK)
		{
			DefData_u16 = DlcEv_pt->Default_u16[SPI_DLC_TX];
			/*
			* this loop transfers data from the channel(s) to RAM
			* and uses interrupts to transfer and reload the data
			*/
			while(TxPos_u16 < ChBufTx_pt->Spi_TxRxLength)
			{
				/* check that transfer group is not full */
				/*lint -e9032 MISRA:HARDWARE_ACCESS:Composite expression with smaller essential type than other operand:[MISRA 2012 Rule 10.7, required]. */
				/* @CODECOV:OTHER_TEST_EXIST: Group is never full on unit level. Integration testing necessary to cover error condition. */
				if(TgLen_u16 != SPI_DLC_TG_LEN)
				{
					/* get Mib status */
					DlcEv_pt->RxStat_u16 = MRam_pt->Spi_RxBank[TgLen_u16].RxStat;
					/* ready to fill ? */
					/* the ram buffer should only be filled if the flag is zero, otherwise the data was not transmitted */
					/* @CODECOV:HARDWARE_DEPENDENCY_STATUS_BIT: DLC error has to be simulated with HW support */
					if(SPI_DLC_CHECK_HEX16(DlcEv_pt->RxStat_u16, RXRAMCTRL_TXFULL))
					{
						/* this should not happen! */
						Spi_DlcError(HwUnit_u32);
						validate = E_NOT_OK;
						break;
					}
					else
					{
						/* setup data */
						MRam_pt->Spi_TxBank[TgLen_u16].TxCtrl = DlcEv_pt->TxCtrl_u16;
						if(ChBufTx_pt->Spi_Tx_pt == NULL_PTR)
						{
							/* write default data */
							DataLoc_u16 = DefData_u16;
						}
						else
						{
							/* write bytes to the channel */
							/* @CODECOV:OTHER_TEST_EXIST: Unit tests only cover 8 byte size. Other bytes sizes have to be tested on integration level */
							if(Spi_ConfigPtr_pt->Spi_ChannelCfg[ChIDTx_u8].Spi_DataWidth == SPI_CLOCK_FRAME_BITS_SIZE_8)
							{
								/* use uint8 buffer mode */
								DataLoc_u16 = (uint16)((ChBufTx_pt->Spi_Tx_pt)[TxPos_u16]);

							}
							else
							{
								/* use uint16 buffer mode */
								DataLoc_u16 = ((Spi_DlcFrame16PtrType)((void*)ChBufTx_pt->Spi_Tx_pt))[TxPos_u16];

								/* 32Bit mode selected? */
								if(Spi_ConfigPtr_pt->Spi_ChannelCfg[ChIDTx_u8].Spi_DataWidth == SPI_CLOCK_FRAME_BITS_SIZE_32)
								{
								   /* First 16 bits of 32 word? */
								   if(0U == (TgLen_u16 % 2))
								   {
									  /* Enable CSHOLD */
									  SPI_SETVAL16(MRam_pt->Spi_TxBank[TgLen_u16].TxCtrl, TXRAMCTRL_CSHOLD) ;
									  /* Disable WDEL */
									  SPI_CLRVAL16(MRam_pt->Spi_TxBank[TgLen_u16].TxCtrl, TXRAMCTRL_WDEL) ;
									  /* If LSB selected, invert 16bit words */
									  if(Spi_ConfigPtr_pt->Spi_ChannelCfg[ChIDTx_u8].Spi_TxStart == (uint8)SPI_LSB)
									  {
										 DataLoc_u16 = ((Spi_DlcFrame16PtrType)((void*)(ChBufTx_pt->Spi_Tx_pt)))[TxPos_u16+1];
									  }
								   }
								   else
								   {
									  /* If LSB selected, invert 16bit words */
									  if(Spi_ConfigPtr_pt->Spi_ChannelCfg[ChIDTx_u8].Spi_TxStart == (uint8)SPI_LSB)
									  {
										 DataLoc_u16 = ((Spi_DlcFrame16PtrType)((void*)(ChBufTx_pt->Spi_Tx_pt)))  [TxPos_u16-1];
									  }
								   }
								}
							}
						}



						MRam_pt->Spi_TxBank[TgLen_u16].TxData = DataLoc_u16;
						/* data filled, increase count */
						TxPos_u16++;
						TgLen_u16++ ;
					}
				}
				else
				{
					/* transfer group is full, write position back and leave */
					DlcEv_pt->Pos_u16[SPI_DLC_TX] = TxPos_u16;
					validate = E_NOT_OK;
				}
			}


			/* @CODECOV:OTHER_TEST_EXIST: Group is never full on unit level. Integration testing necessary to cover error condition. */
			if(validate == E_OK){
				EVal_t = Spi_DlcSwitchChannel(HwUnit_u32, &MRam_pt->Spi_TxBank[(TgLen_u16-1)].TxCtrl, DlcEv_pt, SPI_DLC_TX);
				/*lint -e730 LINT:OTHER:Boolean argument to function. */
				Spi_Hw_validate(( EVal_t == E_OK ), &validate);	/* if fails, all channels have been processed */
			}


		}

		/* max transfer amount per transfer group*/
		/*lint -e730 LINT:OTHER:Boolean argument to function. */
		Spi_Hw_validate(( TgLen_u16 < SPI_DLC_TG_LEN ), &validate);
	}

}

/**  @brief Service to drain data from the ram.
 *  @param[in]        HwUnit_u32 - Hardware unit id.
 */
static void Spi_DlcRamDrainData(uint32 HwUnit_u32)
{
    uint16 TgLen_u16    ; /* local transfer group length */
    uint16 RxPos_u16    ; /* buffer filled counter, increases with each successful write/read to MIB Ram */
    Spi_BufferDescriptorType* ChBufRx_pt ; /* pointer to channel buffer internal or external */
    Spi_DlcEventPtrType DlcEv_pt;
    Spi_RamBufferPtrType MRam_pt;
    uint8  ChIDRx_u8    ;   /* channel identifier, used as index */
    uint16 DataLoc_u16   ;   /* local data value from MIB Ram register */
    Std_ReturnType EVal_t;  /* evaluate return value of Spi_DlcSwitchChannel */
    Std_ReturnType validate = E_OK;
    boolean validateCondition;

    /*lint -e730 LINT:OTHER:Boolean argument to function. */
    Spi_Hw_validate(( Spi_HWUnitMap_at[HwUnit_u32].Ram_pt != NULL_PTR ), &validate);

    DlcEv_pt = &Spi_DlcEvent_t[HwUnit_u32];
    MRam_pt  = Spi_HWUnitMap_at[HwUnit_u32].Ram_pt;


    /* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: This function is referenced from the ISR which is only activated after a transfer has been finished, so DlcEv_pt->Guard_u8 is always SPI_DLC_G_FINISHED */
    if(DlcEv_pt->Guard_u8 == SPI_DLC_G_FINISHED){
		validateCondition = TRUE;
	}else if(DlcEv_pt->Guard_u8 == SPI_DLC_G_ACTIVE){
		validateCondition = TRUE;
	}else{
		validateCondition = FALSE;
	}

    Spi_Hw_validate(validateCondition, &validate);

	/* in this module we try to transmit one or more channels, depending on the configuration */
	/* mark the transfer group */
	TgLen_u16  = 0U ;

	/* copy data to mib Rx buffer */
	/* in this module we try to transmit one or more channels, depending on the configuration */
	while(validate == E_OK)
	{
		ChIDRx_u8  = DlcEv_pt->ID_u8[SPI_DLC_RX];
		RxPos_u16  = DlcEv_pt->Pos_u16[SPI_DLC_RX];
		/* handle buffers for Rx */
		ChBufRx_pt = Spi_ConfigPtr_pt->Spi_ChannelCfg[ChIDRx_u8].Spi_Descriptor ;

		/*lint -e730 LINT:OTHER:Boolean argument to function. */
		Spi_Hw_validate((ChBufRx_pt != NULL_PTR), &validate);

		/* this loop drains data from MIB ram to the channel(s)*/
		/* @CODECOV:HARDWARE_DEPENDENCY_STATUS_BIT: DLC error has to be simulated with HW support */
		while((validate == E_OK) && (RxPos_u16 < ChBufRx_pt->Spi_TxRxLength))
		{
			/* this condition is always false because we do not have enougn data to overload the transfer group */
			if(TgLen_u16 == SPI_DLC_TG_LEN)
			{
				/* transfer group is full, write position back and leave */
				DlcEv_pt->Pos_u16[SPI_DLC_RX] = RxPos_u16;
				validate = E_NOT_OK;
				break;
			}
			/* access MIB ram */
			/* read of this register resets the RX flag to 1 */
			DlcEv_pt->RxStat_u16 = MRam_pt->Spi_RxBank[TgLen_u16].RxStat;
			/* ready to drain ? */
			/* @CODECOV:HARDWARE_DEPENDENCY_STATUS_BIT: DLC error has to be simulated with HW support */
			if(SPI_DLC_CHECK_HEX16(DlcEv_pt->RxStat_u16, RXRAMCTRL_RXEMPTY))
			{
				/* this should not happen! */
				Spi_DlcError(HwUnit_u32);
				validate = E_NOT_OK;
			}
			else
			{
				DataLoc_u16 = MRam_pt->Spi_RxBank[TgLen_u16].RxData;
				if(ChBufRx_pt->Spi_Rx_pt == NULL_PTR)
				{
					/* skip any data, but data must be read to clear the flag, see line above */
				}
				else
				{
					/* read bytes to the channel */
					/* @CODECOV:OTHER_TEST_EXIST: Unit tests only cover 8 byte size. Other bytes sizes have to be tested on integration level */
					if(Spi_ConfigPtr_pt->Spi_ChannelCfg[ChIDRx_u8].Spi_DataWidth == SPI_CLOCK_FRAME_BITS_SIZE_8)
					{
						/* use uint8 buffer mode */
						(ChBufRx_pt->Spi_Rx_pt)[RxPos_u16] = (uint8)DataLoc_u16;
					}
					else
					{
						/* use uint16 buffer mode */
						((Spi_DlcFrame16PtrType)((void*)ChBufRx_pt->Spi_Rx_pt))[RxPos_u16] = DataLoc_u16;
					}
				}
				/* data drained, increase count */
				RxPos_u16++;
				TgLen_u16++ ;
			}
		}
		/* all bytes in a channel have been treated, select next channel */
		/* @CODECOV:HARDWARE_DEPENDENCY_STATUS_BIT: DLC error has to be simulated with HW support */
		/* We never get DLC error so this is always true and removed from coverage. */
		if(validate == E_OK){
			/* one channel received, prepare next */
			EVal_t = Spi_DlcSwitchChannel(HwUnit_u32, NULL_PTR, DlcEv_pt, SPI_DLC_RX);
			/* If fails, all channels have been processed */
			/*lint -e730 LINT:OTHER:Boolean argument to function. */
			Spi_Hw_validate((EVal_t == E_OK), &validate);
		}

		/* max transfer amount per transfer group*/
		/*lint -e730 LINT:OTHER:Boolean argument to function. */
		Spi_Hw_validate((TgLen_u16 < SPI_DLC_TG_LEN), &validate);
	}
}



#if defined(CFG_TMS570LS12X)
/* @CODECOV:CONFIG_LIMITATION: The following 2 functions would be used in case of a channel configured to use both RAM and DMA,
 * but this is never the case, so they can be removed from coverage.
 */
/**  @brief Service to fill dlc data.
 *  @param[in]        HwUnit_u32 - Hardware unit id.
 */
 /*  if hardware unit has no RAM so it runs in standard mode. Our unit has ram so this will not be referenced */

static void Spi_DlcStdFillData(uint32 HwUnit_u32)
{
    uint16 DefData_u16  ; /* local default data value, to prevent too many rom accesses */
    uint16 TxPos_u16    ; /* local data value for Tx position in buffer */
    P2VAR(Spi_BufferDescriptorType, AUTOMATIC, SPI_APPL_DATA) ChBufTx_pt; /* pointer to Tx channel buffer */
    Spi_DlcEventPtrType DlcEv_pt;
    Spi_RegisterPtrType MStd_pt;
    uint8  ChIDTx_u8    ; /* channel identifier, Rx used as index */
    uint16 DataLoc_u16 = 0U  ; /* local data value for Tx */

    DlcEv_pt = &Spi_DlcEvent_t[HwUnit_u32];
    MStd_pt  = Spi_HWUnitMap_at[HwUnit_u32].Reg_pt;

    if(DlcEv_pt->Guard_u8 == SPI_DLC_G_PENDING){
    	DlcEv_pt->Guard_u8 = (uint8)SPI_DLC_G_ACTIVE ;
    }

    if(DlcEv_pt->Guard_u8 == (uint8)SPI_DLC_G_ACTIVE)
    {
        /* in this module we try to transmit one Data unit */
        /* in this module we try to transmit one or more channels, depending on the configuration */
        ChIDTx_u8 = DlcEv_pt->ID_u8[SPI_DLC_TX] ;
        /* handle buffers for Tx and Rx */
        ChBufTx_pt  = Spi_ConfigPtr_pt->Spi_ChannelCfg[ChIDTx_u8].Spi_Descriptor ;
        DefData_u16 = DlcEv_pt->Default_u16[SPI_DLC_TX];
        TxPos_u16   = DlcEv_pt->Pos_u16[SPI_DLC_TX];
        /*
         * this loop transfers data from the channel(s) to RAM
         * and uses interrupts to transfer and reload the data
         */
        /* get status */
        DlcEv_pt->RxStat_u16 = MStd_pt->Spi_BUF.RxStat;
        /* ready to fill ? */
        /* the buffer should only be filled if the flag is zero, otherwise the data was not transmitted */
        if(SPI_DLC_CHECK_HEX16(DlcEv_pt->RxStat_u16, RXRAMCTRL_TXFULL))
        {
            /* this should not happen! */
            Spi_DlcError(HwUnit_u32);
        }
        else
        {
            /* setup data */
            MStd_pt->Spi_DAT1.TxCtrl = DlcEv_pt->TxCtrl_u16;
            if(ChBufTx_pt->Spi_Tx_pt == NULL_PTR)
            {
                /* write default data */
                DataLoc_u16 = DefData_u16;
            }
            else
            {
                /* write bytes to the channel */
                if(Spi_ConfigPtr_pt->Spi_ChannelCfg[ChIDTx_u8].Spi_DataWidth == SPI_CLOCK_FRAME_BITS_SIZE_8)
                {
                    /* use uint8 buffer mode */
                    DataLoc_u16 = (ChBufTx_pt->Spi_Tx_pt)[TxPos_u16];
                }
                else
                {
                    /* use uint16 buffer mode */
                    DataLoc_u16 = ((Spi_DlcFrame16PtrType)((void*)ChBufTx_pt->Spi_Tx_pt))[TxPos_u16];
                }
            }
            /* data filled, increase count */
            TxPos_u16++;
        }
        if(TxPos_u16 < ChBufTx_pt->Spi_TxRxLength)
        {
            /* write data back for next transfer */
            DlcEv_pt->Pos_u16[SPI_DLC_TX]++;
        }
        else
        {
            /* Spi_DlcSwitchChannel changes the Guard_u8 state if a channel end has been reached */
            (void) Spi_DlcSwitchChannel(HwUnit_u32, &MStd_pt->Spi_DAT1.TxCtrl, DlcEv_pt, SPI_DLC_TX);
        }

    }
    DlcEv_pt->Data_u16 = DataLoc_u16;

}


/**  @brief Service to drain dlc data.
 *  @param[in]        HwUnit_u32 - Hardware unit id.
 */
static void Spi_DlcStdDrainData(uint32 HwUnit_u32)
{
    uint16 RxPos_u16    ; /* buffer filled counter, increases with each successful write/read to MIB Ram */
    uint16 DataLoc_u16; /* local data value */
    Spi_BufferDescriptorType* ChBufRx_pt ; /* pointer to channel buffer internal or external */
    Spi_DlcEventPtrType DlcEv_pt;
    Spi_RegisterPtrType MStd_pt;
    uint8  ChIDRx_u8    ; /* channel identifier, used as index */
    uint8 Guard;

    DlcEv_pt = &Spi_DlcEvent_t[HwUnit_u32];
    MStd_pt  = Spi_HWUnitMap_at[HwUnit_u32].Reg_pt;

    /* in this module we try to transmit one or more channels, depending on the configuration */
    Guard = DlcEv_pt->Guard_u8;
    switch(Guard)
    {
        case SPI_DLC_G_ACTIVE:
        case SPI_DLC_G_FINISHED:
        ChIDRx_u8  = DlcEv_pt->ID_u8[SPI_DLC_RX];
        RxPos_u16  = DlcEv_pt->Pos_u16[SPI_DLC_RX];
        ChBufRx_pt = Spi_ConfigPtr_pt->Spi_ChannelCfg[ChIDRx_u8].Spi_Descriptor;

        /* drains data from Spi register to channel(s)*/
        /* read of this register resets the RX flag to 1 */
        DlcEv_pt->RxStat_u16 = MStd_pt->Spi_BUF.RxStat;
        /* ready to drain ? */
        if((DlcEv_pt->RxStat_u16 & RXRAMCTRL_RXEMPTY) == 0U)
        {
            DataLoc_u16 = MStd_pt->Spi_BUF.RxData;
            if(ChBufRx_pt->Spi_Rx_pt == NULL_PTR)
            {
                /* skip any data, but data must be read to clear the flag, seee line above */
            }
            else
            {
                /* read bytes to the channel */
                if(Spi_ConfigPtr_pt->Spi_ChannelCfg[ChIDRx_u8].Spi_DataWidth == SPI_CLOCK_FRAME_BITS_SIZE_8)
                {
                    /* use uint8 buffer mode */
                    (ChBufRx_pt->Spi_Rx_pt)[RxPos_u16] = (uint8)DataLoc_u16;
                }
                else
                {
                    /* use uint16 buffer mode */
                    ((Spi_DlcFrame16PtrType)((void*)ChBufRx_pt->Spi_Rx_pt))[RxPos_u16] = DataLoc_u16;;
                }
            }
        }
        else
        {
            /* this should not happen! */
            Spi_DlcError(HwUnit_u32);
        }
        /* data drained, increase count */
        RxPos_u16++;
        if(RxPos_u16 < ChBufRx_pt->Spi_TxRxLength)
        {
            /* write data back for next transfer */
            DlcEv_pt->Pos_u16[SPI_DLC_RX]++;
        }
        else
        {
            (void) Spi_DlcSwitchChannel(HwUnit_u32,
                                                        &MStd_pt->Spi_BUF.RxData,
                                                        DlcEv_pt,
                                                        SPI_DLC_RX);
        }
        break ;

        default:
        break ;
    }
}


/**  @brief Service to prepare dma.
  *  @param[in]        HwUnit_u32 - Hardware unit id.
  *  @param[in]        Spi_DlcTxRxDefType
 */
static void Spi_DlcStdPrepareDma( uint32 HwUnit_u32, Spi_DlcTxRxDefType Dir_t)
{
    Spi_BufferDescriptorType* ChBuf_pt; /* pointer to Tx channel buffer */
    Spi_DlcEventPtrType DlcEv_pt;
    Dma_ChannelSetupType ChSetup_t;
    Spi_RegisterPtrType MStd_pt;
    uint16 Count_u16;
    uint16 Offset_u16;
    uint8  ChID_u8;


    /* to trigger a Dma transfer, the first data must be manually written to the register
     *  to handle this, the value OffsetTx_u8 is added to address and subtracted from length
     */

    DlcEv_pt = &Spi_DlcEvent_t[HwUnit_u32];
    MStd_pt  = Spi_HWUnitMap_at[HwUnit_u32].Reg_pt;
    ChID_u8  = DlcEv_pt->ID_u8[Dir_t];
    ChBuf_pt = Spi_ConfigPtr_pt->Spi_ChannelCfg[ChID_u8].Spi_Descriptor;
    /* setup length */
    Count_u16  = ChBuf_pt->Spi_TxRxLength - DlcEv_pt->Pos_u16[Dir_t];
    Offset_u16 = 0U;

    /* check for a channel if there is no need to switch a channel, the Dma can refill the register
     *  several times with a frame transfer not using any interrupts. Also check if the channel is the last
     *  channel belonging to a job - the TxCtrl field must be adapted to deactivate the CS# signal
     */
    /* set element count */
    ChSetup_t.ECount = 1U;
    ChSetup_t.FCount = Count_u16;
    /* frame count is set according to the following conditions */

    /* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: This condition could be false only if the user would manually edit the config files and set
     * number of channels to be more than the actual count. This is not expected and not testable,
     * so removed from coverage */
    if(DlcEv_pt->Num_u8[Dir_t] >= Spi_ConfigPtr_pt->Spi_JobCfg[DlcEv_pt->JobID_u8].Spi_ChannelList[0U])
    {
       /* Last channel to transmit */
       DlcEv_pt->Guard_u8 = SPI_DLC_G_IDLE;
    }


    /* address next element by incrementing the address is not used */
    ChSetup_t.EIDstInc = 0U;
    ChSetup_t.EISrcInc = 0U;
    ChSetup_t.FISrcInc = 0U;
    ChSetup_t.FIDstInc = 0U;
    /* the element count is zero if the channel has a length of one byte or word
     * so only setup a Rx Dma to receive the data
     */
    ChSetup_t.Unit   = (uint16) HwUnit_u32;
    ChSetup_t.Channel = Dma_MapChannel[HwUnit_u32].Dmachannel[1U];
    ChSetup_t.Direction = DMA_TX;
    /* place control field */
    MStd_pt->Spi_DAT1.TxCtrl = DlcEv_pt->TxCtrl_u16;
    /* setup channel 0 for std and fill the data field.
     * Writing to the data field of the  Spi_DAT1 register generates the Dma requests
     */
    /*lint -e923 MISRA:HARDWARE_ACCESS:cast from pointer to unsigned int:[MISRA 2012 Rule 11.6, required] */
    ChSetup_t.DstAddr = (uint32)&MStd_pt->Spi_DAT1.TxData;

    /* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: Already validated during generation */
    if(ChBuf_pt->Spi_Tx_pt == NULL_PTR)
    {
    	/*lint -e923 MISRA:HARDWARE_ACCESS:cast from pointer to unsigned int:[MISRA 2012 Rule 11.6, required] */
        ChSetup_t.SrcAddr = (uint32)&DlcEv_pt->Default_u16[SPI_DLC_TX];
        /* 8 bit DMA: source and destination are 16bit aligned so to access the lower value in big endian
         * the address has to be increased [xxDD] ;   [xxDD]
         *                  starting here   ^  moving to ^
         *                  this applies to source address as well as the destination address
         */
        if(Spi_ConfigPtr_pt->Spi_ChannelCfg[ChID_u8].Spi_DataWidth == SPI_CLOCK_FRAME_BITS_SIZE_8)
        {
            ChSetup_t.ChCtrl = DMA_STDTX08_CONST;
            /* to transmit real 8bit via Dma, the source and destination must be increased by one */
            ChSetup_t.DstAddr++;
            ChSetup_t.SrcAddr++;
        }
        else
        {
            ChSetup_t.ChCtrl = DMA_STDTX16_CONST;
        }
    }
    else
    {

    	/* Always true because we only use 8 bit data, so removed from coverage */
        if(Spi_ConfigPtr_pt->Spi_ChannelCfg[ChID_u8].Spi_DataWidth == SPI_CLOCK_FRAME_BITS_SIZE_8)
        {
            ChSetup_t.ChCtrl = DMA_STDTX08_INC;
            /* to transmit real 8bit via Dma, the destination must be increased */
            ChSetup_t.DstAddr++;
            ChSetup_t.SrcAddr  = (uint32)&(ChBuf_pt->Spi_Tx_pt)[Offset_u16];
        }
        else
        {
            ChSetup_t.ChCtrl = DMA_STDTX16_INC;
            /* set the address to a aligned 16 bit address */
            ChSetup_t.SrcAddr  = (uint32) &((Spi_DlcFrame16PtrType)((void*)ChBuf_pt->Spi_Tx_pt))[Offset_u16];
        }
    }

    Dma_Setup(&ChSetup_t);
    /* now the Dma is prepared for Tx, now prepare next two channels for Rx */
    /* setup channel 1 for std and read the data field.
     * incoming data to the Spi_BUF field register generates the Dma Rx requests
     */
    ChSetup_t.Channel = Dma_MapChannel[HwUnit_u32].Dmachannel[0U];
    ChSetup_t.Direction = DMA_RX;

    ChSetup_t.SrcAddr = (uint32)&MStd_pt->Spi_BUF.RxData;

    /* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: this is checked earlier so it is always false and removed from coverage */
    if(ChBuf_pt->Spi_Rx_pt == NULL_PTR)
    {
        ChSetup_t.DstAddr = (uint32)&DlcEv_pt->Default_u16[SPI_DLC_RX];
        if(Spi_ConfigPtr_pt->Spi_ChannelCfg[ChID_u8].Spi_DataWidth == SPI_CLOCK_FRAME_BITS_SIZE_8)
        {
            ChSetup_t.ChCtrl = DMA_STDRX08_CONST;
            /* to receive real 8bit via Dma, the source and destination must be increased, see line 694 */
            ChSetup_t.DstAddr++;
            ChSetup_t.SrcAddr++;
        }
        else
        {
            ChSetup_t.ChCtrl = DMA_STDRX16_CONST;
        }
    }
    else
    {
    	/* only using 8 bit data size, so always true and removed from coverage */
        if(Spi_ConfigPtr_pt->Spi_ChannelCfg[ChID_u8].Spi_DataWidth == SPI_CLOCK_FRAME_BITS_SIZE_8)
        {
            ChSetup_t.ChCtrl = DMA_STDRX08_INC;
            /* to receive real 8bit via Dma, the source must be increased */
            ChSetup_t.SrcAddr++;
            /* write data to Rx channel */
            ChSetup_t.DstAddr  = (uint32) &(ChBuf_pt->Spi_Rx_pt)[Offset_u16];
        }
        else
        {
            ChSetup_t.ChCtrl = DMA_STDRX16_INC;
            /* write data to Rx channel */
            ChSetup_t.DstAddr  = (uint32) &((Spi_DlcFrame16PtrType)((void*)ChBuf_pt->Spi_Rx_pt))[Offset_u16];
        }
    }

    /* setup channel 1 for std and read the data fields */
    Dma_Setup(&ChSetup_t);
}


#endif /* defined(CFG_TMS570LS12X) */

/**  @brief dlc ram trigger data.
  *  @param[in]        HwUnit_u32 - Hardware unit id.ed
 */
static void Spi_DlcRamTriggerData(uint32 HwUnit_u32)
{
     /* transfer group is ready for transfer, trigger interrupt generation */
    Spi_HWUnitMap_at[HwUnit_u32].Reg_pt->Spi_RegTGCTL.Spi_TGCTRL[0U] |= TGCTRL_TGENA(1U) ;
}

#if defined(CFG_TMS570LS12X)

/* @CODECOV:CONFIG_LIMITATION: The following 2 functions would be used in case of a channel configured to use both RAM and DMA,
* but this is never the case, so they can be removed from coverage.
*/

/**  @brief dlc ram trigger data.
  *  @param[in]        HwUnit_u32 - Hardware unit id.
 */

 /*  if hardware unit has no RAM so it runs in standard mode. Our unit has ram so this will not be referenced */

static void Spi_DlcStdTriggerData(uint32 HwUnit_u32)
{
    /* data is ready for transfer, trigger interrupt generation */
    Spi_HWUnitMap_at[HwUnit_u32].Reg_pt->Spi_DAT1.TxData = Spi_DlcEvent_t[HwUnit_u32].Data_u16;
}


#endif /* defined(CFG_TMS570LS12X) */

#if defined(CFG_TMS570LS12X)
/**  @brief dlc consume event.
  *  @param[in]        HwUnit_u32 - Hardware unit id.
 */
static void Spi_DlcConsumeEvent(uint32 HwUnit_u32)
{
    Spi_HWUnitMapPtrType MStd_pt;
    uint8  Ram_u8 ;   /* temporary parameter for RamUsed ON/OFF */

    MStd_pt = &Spi_HWUnitMap_at[HwUnit_u32];
    Ram_u8  = MStd_pt->Prop_pt->Spi_RamUsed;

    Spi_DlcTransmit(HwUnit_u32) ;
    Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_DlcResult[HwUnit_u32] = SPI_DLC_PENDING;

    if(MStd_pt->Prop_pt->Spi_DmaUsed == STD_ON)
    {
        Spi_DlcStdPrepareDma(HwUnit_u32, SPI_DLC_TX);
        /* enable DmaReq to generate the first pulse */
        MStd_pt->Reg_pt->Spi_INT0 |= DMA_REQ_MASK;
    }
    else
    {
        Spi_DlcOptionSelect[Ram_u8].FillData(HwUnit_u32);
        /* this triggers the normal data transfer */
        Spi_DlcOptionSelect[Ram_u8].Trigger(HwUnit_u32);
    }

    Spi_RegisterPtrType MReg_pt;
	MReg_pt = Spi_HWUnitMap_at[(uint8)HwUnit_u32].Reg_pt;

	/* set master, external clk, enable SPI  */
	MReg_pt->Spi_GCR1 = MIBSPIEGCR1_MASTER(1U) |
						MIBSPIEGCR1_CLKMOD(1U) |
						MIBSPIEGCR1_SPIEN(1U);




}
#elif defined(CFG_TMS570LC43X)
/**  @brief dlc consume event.
  *  @param[in]        HwUnit_u32 - Hardware unit id.
 */
static void Spi_DlcConsumeEvent(uint32 HwUnit_u32)
{
    Spi_DlcTransmit(HwUnit_u32) ;
    Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_DlcResult[HwUnit_u32] = SPI_DLC_PENDING;

    Spi_DlcRamFillData(HwUnit_u32);
    /* this triggers the normal data transfer */
    Spi_DlcRamTriggerData(HwUnit_u32);

    Spi_RegisterPtrType MReg_pt;
	MReg_pt = Spi_HWUnitMap_at[(uint8)HwUnit_u32].Reg_pt;

	/* set master, external clk, enable SPI  */
	MReg_pt->Spi_GCR1 = MIBSPIEGCR1_MASTER(1U) |
						MIBSPIEGCR1_CLKMOD(1U) |
						MIBSPIEGCR1_SPIEN(1U);
}
#else
#error This SPI driver does not support this MCU.
#endif

/* @CODECOV:HARDWARE_DEPENDENCY_STATUS_BIT: DLC error has to be simulated with HW support */

/**  @brief dlc error function.
  *  @param[in]        HwUnit_u32 - Hardware unit id.
 */
static void Spi_DlcError(uint32 HwUnit_u32)
{
    Spi_DlcEventPtrType  DlcEv_pt;
    Spi_HWUnitMapPtrType MUnit_pt;
    uint16 Error_u16     ; /* local error level */
    uint8  JobIDLoc_u8   ; /* job identifier, used as index */
      /* set the simulated job, error and HW unit */
    JobIDLoc_u8   = SPI_DLC_LOWBYTE_GET(HwUnit_u32);

    uint32 HWUnitID = Spi_ConfigPtr_pt->Spi_JobCfg[JobIDLoc_u8].Spi_HWUnitID;

    MUnit_pt = &Spi_HWUnitMap_at[HWUnitID];
    DlcEv_pt = &Spi_DlcEvent_t[HWUnitID];
    /* this value if not zero, indicates that the error function was called from Fill/Drain function */
    if(DlcEv_pt->RxStat_u16 != 0U)
    {
#if (SPI_DEM_ERROR_REPORTING == STD_ON)
        if(SPI_DLC_CHECK_HEX16(DlcEv_pt->RxStat_u16, RXRAMCTRL_TXFULL))
        {
            /* the transmit function has been called, but the sequencer still has not processed the buffer */
            Dem_ReportErrorStatus(SPI_E_TXSTALL_ERROR, DEM_EVENT_STATUS_FAILED);
        }
        else if(SPI_DLC_CHECK_HEX16(DlcEv_pt->RxStat_u16, RXRAMCTRL_RXEMPTY))
        {
            /* the receive function has been called, but the sequencer still has not processed the buffer */
            Dem_ReportErrorStatus(SPI_E_RXSTALL_ERROR, DEM_EVENT_STATUS_FAILED);
        }
        else
        {
            /* no action */
        }
#endif
    }
    else
    {
        if (MUnit_pt->Prop_pt->Spi_RamUsed == STD_ON)
        {
            /* the ovverrun value ranges from 0x200 - 0x3FC, so we have to subtract an offset */
            Error_u16 = (uint16)(MUnit_pt->Reg_pt->Spi_RXOVRN_ADDR - SPI_DLC_MIBTXSIZE);
            DlcEv_pt->RxStat_u16 = MUnit_pt->Ram_pt->Spi_RxBank[Error_u16].RxStat;
        }
        else
        {
            DlcEv_pt->RxStat_u16 = MUnit_pt->Reg_pt->Spi_BUF.RxStat;
        }
#if (SPI_DEM_ERROR_REPORTING == STD_ON)
        /* report to DEM */
        if(SPI_DLC_CHECK_HEX16(DlcEv_pt->RxStat_u16, RXRAMCTRL_BITERR))
        {
            /* bit error*/
            Dem_ReportErrorStatus(SPI_E_BIT_ERROR, DEM_EVENT_STATUS_FAILED) ;
        }
        else if(SPI_DLC_CHECK_HEX16(DlcEv_pt->RxStat_u16, RXRAMCTRL_DESYNC))
        {
            /* desynch error*/
            Dem_ReportErrorStatus(SPI_E_DESYNC_ERROR, DEM_EVENT_STATUS_FAILED) ;
        }
        else if(SPI_DLC_CHECK_HEX16(DlcEv_pt->RxStat_u16, RXRAMCTRL_TIMEOUT))
        {
            /* timeout error */
            Dem_ReportErrorStatus(SPI_E_TO_ERROR, DEM_EVENT_STATUS_FAILED) ;
        }
        else if(SPI_DLC_CHECK_HEX16(DlcEv_pt->RxStat_u16, RXRAMCTRL_DLENERR))
        {
            /* data length error */
            Dem_ReportErrorStatus(SPI_E_DLEN_ERROR, DEM_EVENT_STATUS_FAILED) ;
        }
        else if(SPI_DLC_CHECK_HEX16(DlcEv_pt->RxStat_u16, RXRAMCTRL_RXOVR))
        {
            /* overwrite occurred, Rx */
            Dem_ReportErrorStatus(SPI_E_DOVR_ERROR, DEM_EVENT_STATUS_FAILED) ;
        }
        else
        {
            /* no action */
        }
#endif
    }

    /* release job */
    DlcEv_pt->RxStat_u16 = 0U;
    DlcEv_pt->Guard_u8 = (uint8)SPI_DLC_G_IDLE ;
    DlcEv_pt->Event_u8 = (uint8)SPI_DLC_EV_CONSUMED;
    Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_DlcResult[HWUnitID] = SPI_DLC_FAILED ;
    Spi_HwJobComplete(JobIDLoc_u8, (uint16)HWUnitID) ;
}


 /** @brief dlc switch channel.
  *  @param[in]        HwUnit_u32 - Hardware unit id.
  *  @param[in]        Ctrl_pt - Ctrl pointer.
  *  @param[in]        Ev_pt - Ev pointer.
  *  @param[in]        Dir_t - Dir pointer.
  *  @return		   Whether the channel has been switched or not.
  *  @retval E_OK      Channel has been switched
  *  @retval E_NOT_OK  Channel has not been switched
 */
static Std_ReturnType Spi_DlcSwitchChannel( uint32 HwUnit_u32,  volatile uint16*   Ctrl_pt,
    	Spi_DlcEventType*  Ev_pt, Spi_DlcTxRxDefType Dir_t)
{
    uint32 TGReg_u32;
    uint8  ChIDTxRx_u8  ; /* channel identifier, used as index */
    uint8  ChIdx_u8     ; /* channel index of a channel list */
    uint8  ExtDev_u8     ; /* channel index of a channel list */
    Std_ReturnType RVal = E_OK;

    /* one channel transferred, prepare next */
    ExtDev_u8 = Ev_pt->DFSel_u8[1U];
    Ev_pt->Num_u8[Dir_t]++;
    /* all channels in a job transferred ? */
    if(Ev_pt->Num_u8[Dir_t] > Spi_ConfigPtr_pt->Spi_JobCfg[Ev_pt->JobID_u8].Spi_ChannelList[0U])
    {
        /* execute this only if CS handling is selected as active and in TX mode */
        if(
			/* @CODECOV:OTHER_TEST_EXIST: This condition could be false only if we had a Spi communication test without using chip select.
			 * It should be tested on integration level */
			(Ev_pt->DFSel_u8[0U] != SPI_NO_CHIP_SELECT) &&
			(Ctrl_pt != NULL_PTR))
        {
            /* finish job, and deactivate CS */
            SPI_CLRVAL16(*Ctrl_pt, TXRAMCTRL_CSHOLD);
        }
        else
        {
            /* no action */
        }
        /* all channels in a job transmitted */
        if(Dir_t == SPI_DLC_TX)
        {
            /* if tx direction detects a end of all channels, the state is finished */
            Ev_pt->Guard_u8 = SPI_DLC_G_FINISHED;
        }
        else
        {
            /* if rx direction detects a end of all channels, the state is idle, because
             * all data has been transmitted and received
             * */
            Ev_pt->Guard_u8 = SPI_DLC_G_IDLE;
        }
        RVal = E_NOT_OK;
    }
    else
    {
        /* get next channel to receive */
        Ev_pt->Pos_u16[Dir_t] = 0U;
        ChIdx_u8              = Ev_pt->Num_u8[Dir_t];
        ChIDTxRx_u8           = Spi_ConfigPtr_pt->Spi_JobCfg[Ev_pt->JobID_u8].Spi_ChannelList[ChIdx_u8];
        Ev_pt->ID_u8[Dir_t]   = ChIDTxRx_u8;
        /* now get the format word an clear the channel related parameters */
        TGReg_u32 = Spi_HWUnitMap_at[HwUnit_u32].Reg_pt->Spi_FMT[0U];
        /* set the new values */
        SPI_CLRVAL32(TGReg_u32, SPIFMT_CHARLEN(SPIFMT_CHARLEN_MASK) | SPIFMT_SHIFTDIR(1U));

        /* set new char length (here 8bit) */
        /* @CODECOV:OTHER_TEST_EXIST: Data width is always 8, so this is always false and removed from coverage. */
        if(32U == (Spi_ConfigPtr_pt->Spi_ChannelCfg[ChIDTxRx_u8].Spi_DataWidth))
        {
           /* Hardware supports up to 16 bits */
           SPI_SETVAL32(TGReg_u32, SPIFMT_CHARLEN(16U));
        }
        else
        {
           SPI_SETVAL32(TGReg_u32, SPIFMT_CHARLEN(Spi_ConfigPtr_pt->Spi_ChannelCfg[ChIDTxRx_u8].Spi_DataWidth));
        }

         /* set shift dir (LSB or MSB) */
        SPI_SETVAL32(TGReg_u32, SPIFMT_SHIFTDIR(Spi_ConfigPtr_pt->Spi_ChannelCfg[ChIDTxRx_u8].Spi_TxStart));
        /* set WDELAY */
        SPI_SETVAL32(TGReg_u32, SPIFMT_WDELAY(Spi_ConfigPtr_pt->Spi_DevCfg[ExtDev_u8].Spi_CsIdleTime));
        /* values set, update the register */
        (void)SPI_SETVAL32_PR(Spi_HWUnitMap_at[HwUnit_u32].Reg_pt->Spi_FMT[0U], TGReg_u32);
    }
    return(RVal);
}

/** @brief dlc ram transmit.
  *  @param[in]        HwUnit_u32 - Hardware unit id.
 */
static void Spi_DlcTransmit(uint32 HwUnit_u32)
{
    uint32 TGReg_u32    ; /* local register mirror */
    uint32 CSVal_u32    ; /* local value for chip select */
    uint8  ExtDev_u8    ; /* local external device, used as index  */
    uint8  TMS_SpiModeWA[4U]; /* the modes of the TMS Spi do not match the Spi Mode Matrix, so they have to be converted */
    uint8  JobIDLoc_u8     ; /* job identifier, used as index */
    uint8  ChIDTxRx_u8     ; /* channel identifier, used as index */
    Spi_DlcEventPtrType DlcEv_pt;
    const Spi_ExternalDeviceConfigType* DevCfg_pt;
    const Spi_ChannelConfigType*        ChCfg_pt;
    Spi_HWUnitMapPtrType MUnit_pt;

    DlcEv_pt = &Spi_DlcEvent_t[HwUnit_u32];
    MUnit_pt = &Spi_HWUnitMap_at[HwUnit_u32];

    TGReg_u32 = 0U;

    TMS_SpiModeWA[0U] = TMS_SPI_MODE_1; /* the index is the real Spi mode, the contents the TMS Spi mode */
    TMS_SpiModeWA[1U] = TMS_SPI_MODE_0;
    TMS_SpiModeWA[2U] = TMS_SPI_MODE_3;
    TMS_SpiModeWA[3U] = TMS_SPI_MODE_2;

    /* start with high prio job, IdxLev0_uloc is the TG index, equal to the job priority  */
    JobIDLoc_u8 = DlcEv_pt->JobID_u8 ;
    /* external device assigned to a job */
    ExtDev_u8   = Spi_ConfigPtr_pt->Spi_JobCfg[JobIDLoc_u8].Spi_ExDev ;

    /* the guard signals the job to be transmitted */
    /* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: This routine is only referenced if there is data to be transmitted, so this condition is always true
     * and can be removed from code or at least code coverage */
    if(DlcEv_pt->Guard_u8 == SPI_DLC_G_PENDING)
    {
        /* start with first channel in a job */
        /* the assignment starts with index 1, index 0 is the number of channels */
        DlcEv_pt->Num_u8[SPI_DLC_TX] = 1U ;
        DlcEv_pt->Num_u8[SPI_DLC_RX] = 1U ;
        /* get first channel ID in a job */
        ChIDTxRx_u8 = Spi_ConfigPtr_pt->Spi_JobCfg[JobIDLoc_u8].Spi_ChannelList[1U] ;
        /* save ChID for later transmit */
        DlcEv_pt->ID_u8[SPI_DLC_TX] = ChIDTxRx_u8 ;
        DlcEv_pt->ID_u8[SPI_DLC_RX] = ChIDTxRx_u8 ;
        /* reset channel pointer for Tx,Rx  */
        DlcEv_pt->Pos_u16[SPI_DLC_TX] = 0U ;
        DlcEv_pt->Pos_u16[SPI_DLC_RX] = 0U ;
        DlcEv_pt->Default_u16[SPI_DLC_TX] = Spi_ConfigPtr_pt->Spi_ChannelCfg[ChIDTxRx_u8].Spi_DefaultTxData;
        DlcEv_pt->Default_u16[SPI_DLC_RX] = 0U; /* us a memory location to store and trash data */

        DevCfg_pt = &Spi_ConfigPtr_pt->Spi_DevCfg[ExtDev_u8];
        ChCfg_pt  = &Spi_ConfigPtr_pt->Spi_ChannelCfg[ChIDTxRx_u8];
        /* set other data related parameters                               */

        /* set clock polarity (clock idle level) and */
        /* set phase (data shift edge), apply the TMS WA */
        SPI_SETVAL32(TGReg_u32, SPIFMT_PHASE(TMS_SpiModeWA[DevCfg_pt->Spi_Mode]));
        /* this register holds the data format word, which is vital for transmission */

        (void)SPI_WRITEVAL_PR(MUnit_pt->Reg_pt->Spi_FMT[0U],TGReg_u32);
        /* For every channel we need to update the data format word */
        /* set new char length (here 8bit) */

        /* @CODECOV:OTHER_TEST_EXIST: Data width is always 8, so this is always false and removed from coverage. */
        if(32U == (ChCfg_pt->Spi_DataWidth))
        {
           /* Hardware supports up to 16 bits */
           SPI_SETVAL32(TGReg_u32, SPIFMT_CHARLEN(16U));
        }
        else
        {
           SPI_SETVAL32(TGReg_u32, SPIFMT_CHARLEN(ChCfg_pt->Spi_DataWidth));
        }

         /* set shift dir (LSB or MSB) */
        SPI_SETVAL32(TGReg_u32, SPIFMT_SHIFTDIR(ChCfg_pt->Spi_TxStart));
        /* set WDELAY */
        SPI_SETVAL32(TGReg_u32, SPIFMT_WDELAY(DevCfg_pt->Spi_CsIdleTime));

        /* Prescaler */
        SPI_SETVAL32(TGReg_u32, SPIFMT_PRESCALE((uint8)DevCfg_pt->Spi_Prescaler));

        /* values set, update the register */
        (void)SPI_SETVAL32_PR(MUnit_pt->Reg_pt->Spi_FMT[0U], TGReg_u32);

        if (DevCfg_pt->Spi_Prescaler >= 255) {
        	/* Write the full prescaler to extension register to ensure bits 9 and 10 are used for slow peripherals */
        	(void)SPI_SETVAL32_PR(MUnit_pt->Reg_pt->Spi_EXT_PRESCALE1, DevCfg_pt->Spi_Prescaler);
        }


        /* build the TX control field, set buffer mode to 3 */
#if defined(CFG_TMS570LS12X)
        DlcEv_pt->TxCtrl_u16  = Spi_DlcOptionSelect[MUnit_pt->Prop_pt->Spi_RamUsed].Transmit(HwUnit_u32);
#elif defined(CFG_TMS570LC43X)
        DlcEv_pt->TxCtrl_u16  = Spi_DlcRamTransmit(HwUnit_u32);
#else
#error This SPI driver does not support this MCU.
#endif
        /* @CODECOV:OTHER_TEST_EXIST: We are only using SPI_CONTINUOUS so this is always true and removed from coverage */
        if(DevCfg_pt->Spi_CsMode == (uint8) SPI_CONTINUOUS)
        {
            /* set chip select mode */
            SPI_SETVAL16(DlcEv_pt->TxCtrl_u16, TXRAMCTRL_CSHOLD) ;
        }
        else
        {
            /* enable WDELAY in single mode */
            SPI_SETVAL16(DlcEv_pt->TxCtrl_u16, TXRAMCTRL_WDEL) ;
        }

        /* get the chip select */
        CSVal_u32 = DevCfg_pt->Spi_DioPin;
        /* set Tx control field with the default value of Spi_Def register */
        SPI_SETVAL16(DlcEv_pt->TxCtrl_u16, SPI_DLC_LOWWORD_GET(MUnit_pt->Reg_pt->Spi_DEF)) ;
        /* execute this only if CS handling is selected as active */
        /* @CODECOV:OTHER_TEST_EXIST: Always true because we do not use any HW without CS, so removed from coveragee */
        if(CSVal_u32 != (uint32)SPI_NO_CHIP_SELECT)
        {
            /* low byte holds the CS idle level */

        	/* All our tests use SPI_LOW, so always false and removed from coverage. */
            if(SPI_DLC_LOWBYTE_GET(DevCfg_pt->Spi_CsProperty) == (uint8)SPI_HIGH)
            {
               SPI_CLRVAL32(MUnit_pt->Reg_pt->Spi_DEF, ((uint32)(1UL << CSVal_u32)));
               /* activate the corresponding CS for transmit __(IDLE)__/--(ACTIVE)-- */
               SPI_SETVAL16(DlcEv_pt->TxCtrl_u16, ((uint32)(1UL << CSVal_u32)));
            }
            else
            {
                SPI_SETVAL32(MUnit_pt->Reg_pt->Spi_DEF, ((uint32)(1UL << CSVal_u32)));
                /* activate the corresponding CS for transmit --(IDLE)--\__(ACTIVE)__ */
                SPI_CLRVAL16(DlcEv_pt->TxCtrl_u16, ((uint32)(1UL << CSVal_u32)));
            }
        }
        else
        {
            /* no action */
        }
        /* save the CS ID */
        DlcEv_pt->DFSel_u8[0U] = (uint8)CSVal_u32;
        /* save the external device */
        DlcEv_pt->DFSel_u8[1U] = ExtDev_u8;

        /* setup timings CS2_CLK[31..24], CLK_2CS[23..16], CS2_ENA[15..8], ENA_2CS[7..0] */
        uint16 delayVal = DevCfg_pt->Spi_ClkDelays.T2cd | ((uint16_t)(DevCfg_pt->Spi_ClkDelays.C2td) << 8);
        MUnit_pt->Reg_pt->Spi_DELAY[0U] = delayVal;
    }
    else
    {
        /* no action */
    }
}

/**	@brief dlc ram transmit.
  *	@param[in]        HwUnit_u32 - Hardware unit id.
 */
static uint16 Spi_DlcRamTransmit(uint32 HwUnit_u32)
{
    Spi_HWUnitMapPtrType MRamUnit_pt;

    MRamUnit_pt  = &Spi_HWUnitMap_at[HwUnit_u32];

#if defined(CFG_TMS570LS12X)
    /* set Transfer group as Software Triggered with ONESHOT*/

    /* @CODECOV:CONFIG_LIMITATION: This routine is only referenced in case of a channel using Ram and they all do not use Dma,
     * so this is always true and removed from coverage */
    if(MRamUnit_pt->Prop_pt->Spi_DmaUsed == STD_OFF)
    {
        /* start transfer every time the TG_ENA is set */
        MRamUnit_pt->Reg_pt->Spi_RegTGCTL.Spi_TGCTRL[0U] = TGCTRL_TRIGSRC(0x0U) | TGCTRL_TRIGEVT(0x7U);
    }
    else
    {
        /* no action */
    }

#elif defined(CFG_TMS570LC43X)
    /* start transfer every time the TG_ENA is set */
    MRamUnit_pt->Reg_pt->Spi_RegTGCTL.Spi_TGCTRL[0U] = TGCTRL_TRIGSRC(0x0U) | TGCTRL_TRIGEVT(0x7U);
#else
#error This SPI driver does not support this MCU.
#endif

    /* enable oneshot */
    SPI_SETVAL32(MRamUnit_pt->Reg_pt->Spi_RegTGCTL.Spi_TGCTRL[0U], TGCTRL_TGONESHOT(1U)) ;

    /* buffer mode 3 */
    return(SPI_DLC_TXCTRL_BUFMOD((uint16)3U));
}

#if defined(CFG_TMS570LS12X)
/**	@brief			dlc std transmit.
  *	@param[in]      HwUnit_u32 	Hardware unit id.
 */
 /*  if hardware unit has no RAM so it runs in standard mode. Our unit has ram so this will not be referenced */

static uint16 Spi_DlcStdTransmit(uint32 HwUnit_u32)
{
	/* To remove compiler warning returning (HwUnit_u32 & 0) instead of 0. */
    return(HwUnit_u32 & 0U);
}



#endif /* defined(CFG_TMS570LS12X) */

 /** @brief This method initialize dlc ram.
  *  @param[in]        HwUnit_u32 - Hardware unit id.
 */
static void Spi_DlcRamInit(uint32 HwUnit_u32)
{
    Spi_RegisterPtrType MRam_pt;

    MRam_pt = Spi_HWUnitMap_at[HwUnit_u32].Reg_pt;
    /* verify that the MIB ram finished auto initialization */

	/* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: If we got this far, the buffer is initialized and this condition is always false. */
    while(SPI_DLC_CHECK_HEX32(MRam_pt->Spi_FLG, SPI_BUFINIT))
    {
        /* no action */
    }

    /* prepare TG(x) ctrl register */
    /* set PStart to 0, we use the whole MIB RAM as one TG */
    MRam_pt->Spi_RegTGCTL.Spi_TGCTRL[0U] = 0U ;

#if defined(CFG_TMS570LS12X)
    /* store end address in LTGPEND register bit 14::8 */
    MRam_pt->Spi_RegTGCTL.Spi_LTGPEND = LTGPEND_LPEND(SPI_DLC_MIBTXSIZE-1) ;

	/* @CODECOV:CONFIG_LIMITATION: In this firmware, if RAM is used DMA is not used, so this condition is always true as the function is only executed for channels using RAM. */
    if(Spi_HWUnitMap_at[HwUnit_u32].Prop_pt->Spi_DmaUsed == STD_OFF)
    {
        /* set Irq parameters            */
        /* map the TG[0] transfer end interrupts to the INT1 line */
        /* map the TG[0] transfer error interrupts to the INT0 line */
        MRam_pt->Spi_RegTGCTL.Spi_TGITLVST = TGITLVST_SETINTLEVEL(1U,16U) ;
        /* enable the TG[0] interrupt generation (Value, bit for TG enable Irq) */
        MRam_pt->Spi_RegTGCTL.Spi_TGITENST = TGITENST_SETINTENRDY(1U,16U) | TGITENST_SETINTENRDY(1U,0U);
    }
    else
    {
        /* no dma for MIB */
    }


#elif defined(CFG_TMS570LC43X)
    /* store end address in LTGPEND register bit 14::8 */
    MRam_pt->Spi_RegTGCTL.Spi_TGCTRL[1U] = LTGPEND_LPEND(SPI_DLC_MIBTXSIZE);
    /* store end address in LTGPEND register bit 14::8 */
    MRam_pt->Spi_RegTGCTL.Spi_LTGPEND = LTGPEND_LPEND(SPI_DLC_MIBTXSIZE-1);

    /* set Irq parameters            */
    /* map the TG[0] transfer end interrupts to the INT1 line */
    /* map the TG[0] transfer error interrupts to the INT0 line */
    MRam_pt->Spi_RegTGCTL.Spi_TGITLVST = TGITLVST_SETINTLEVEL(1U,16U) ;
    /* enable the TG[0] interrupt generation (Value, bit for TG enable Irq) */
    MRam_pt->Spi_RegTGCTL.Spi_TGITENST = TGITENST_SETINTENRDY(1U,16U) | TGITENST_SETINTENRDY(1U,0U);
#else
#error This SPI driver does not support this MCU.
#endif
}

#if defined(CFG_TMS570LS12X)
 /*  if hardware unit has no RAM so it runs in standard mode. Our unit has ram so this will not be referenced */

/** @brief 		Initializes DlcStd.
  *  @param[in]	HwUnit_u32 Hardware unit id.
 */
static void Spi_DlcStdInit(uint32 HwUnit_u32)
{
    Spi_HWUnitMapPtrType MStd_pt;

    MStd_pt = &Spi_HWUnitMap_at[HwUnit_u32];
    /* set Tx Rx int levels to int line 1, error interrupts are mapped to line 0 */
    MStd_pt->Reg_pt->Spi_LVL = 0x00000300U;

    /*  @CODECOV:CONFIG_LIMITATION: This routine is referenced only for channels using Dma and not using Ram, so this condition is always false and removed from coverage. */
    if(MStd_pt->Prop_pt->Spi_DmaUsed == STD_OFF)
    {
        /* enable RxInt, error tracing -> overrun, biterr, desync err, */
        MStd_pt->Reg_pt->Spi_INT0 = 0x00000158U;
    }
    else
    {
        /* only enable error tracing -> overrun, biterr, desync err, */
        MStd_pt->Reg_pt->Spi_INT0 = 0x00000058U;
    }
}

/** @brief 		De-initializes DlcStd.
  *  @param[in]	HwUnit_u32 Hardware unit id.
 */
static void Spi_DlcStdClose(uint32 HwUnit_u32)
{
    Spi_HWUnit_at[HwUnit_u32]->Spi_INT0 = (uint32)SPI_DLC_BITCLR;
    Spi_HWUnit_at[HwUnit_u32]->Spi_LVL  = (uint32)SPI_DLC_BITCLR;
}



#endif /* defined(CFG_TMS570LS12X) */

 /** @brief This method close dlc ram.
  *  @param[in]        HwUnit_u32 - Hardware unit id.
 */
static void Spi_DlcRamClose(uint32 HwUnit_u32)
{
    uint32 MibIdx_u32;              /* index in MIBRAM */
    volatile uint16 temp;           /* dummy data for read */
    Spi_RegisterPtrType MReg_pt;

    MReg_pt = Spi_HWUnit_at[HwUnit_u32];
    MReg_pt->Spi_RegTGCTL.Spi_TGCTRL[0U] = (uint32)SPI_DLC_BITCLR;
    MReg_pt->Spi_RegTGCTL.Spi_TICKCNT   = (uint32)SPI_DLC_BITCLR;
    MReg_pt->Spi_RegTGCTL.Spi_LTGPEND   = (uint32)SPI_DLC_BITCLR;
    MReg_pt->Spi_RegTGCTL.Spi_TGITLVST  = (uint32)SPI_DLC_BITCLR;
    MReg_pt->Spi_RegTGCTL.Spi_TGITENCR  = (uint32)SPI_DLC_BITCLR;
    for(MibIdx_u32 = 0U ; MibIdx_u32 < SPI_DLC_MIBRXSIZE ; MibIdx_u32++)
    {
        /* read whole MIBRAM to reset all status flags */
        temp = Spi_RamUnit_at[HwUnit_u32]->Spi_RxBank[MibIdx_u32].RxStat;
        (void)temp; /* To silence the compiler about not used value */
        temp = Spi_RamUnit_at[HwUnit_u32]->Spi_RxBank[MibIdx_u32].RxData;
    }
    /* clear MIBSPI enable bit, this must be done at last */
    /* the bit works as switch to enable access to the MIBSPI registers */
    SPI_CLRVAL32(MReg_pt->Spi_EN, MIBSPIE_EN(1U));
    (void)temp;	/* To silence the compiler (set but not used message)*/
}

/** @brief This method initializes dlc. */
#if defined(CFG_TMS570LS12X)
static void Spi_DlcInit(void)
{
    uint32 CSVal_u32; /* local value for chip select */
    uint32 ExtDevIdx_u32; /* external device index to set the levels as configured */
    Spi_DlcEventType* DlcEv_pt;
    const Spi_HWUnitPropertyType* PropLoc_pt; /* pointer to unit properties */
    Spi_RegisterPtrType MReg_pt;
    uint8 UnitIdx_u8; /* hardware unit index of generated unit arrays */
    uint8 HWUnit_u8; /* local value for hardware unit */

    Spi_DlcOptionSelect[SPI_DLC_STDOPT].Init      = Spi_DlcStdInit;
    Spi_DlcOptionSelect[SPI_DLC_STDOPT].Close     = Spi_DlcStdClose;
    Spi_DlcOptionSelect[SPI_DLC_STDOPT].FillData  = Spi_DlcStdFillData;
    Spi_DlcOptionSelect[SPI_DLC_STDOPT].DrainData = Spi_DlcStdDrainData;
    Spi_DlcOptionSelect[SPI_DLC_STDOPT].Trigger   = Spi_DlcStdTriggerData;
    Spi_DlcOptionSelect[SPI_DLC_STDOPT].Transmit  = Spi_DlcStdTransmit;

    Spi_DlcOptionSelect[SPI_DLC_RAMOPT].Init      = Spi_DlcRamInit;
    Spi_DlcOptionSelect[SPI_DLC_RAMOPT].Close     = Spi_DlcRamClose;
    Spi_DlcOptionSelect[SPI_DLC_RAMOPT].FillData  = Spi_DlcRamFillData;
    Spi_DlcOptionSelect[SPI_DLC_RAMOPT].DrainData = Spi_DlcRamDrainData;
    Spi_DlcOptionSelect[SPI_DLC_RAMOPT].Trigger   = Spi_DlcRamTriggerData;
    Spi_DlcOptionSelect[SPI_DLC_RAMOPT].Transmit  = Spi_DlcRamTransmit;

    /*
     * set HW unit parameters
     */
    boolean initializeDmaFlag = FALSE;


    /* @CODECOV:SEARCHING_FOR_ELEMENT_IN_ARRAY: Spi_ConfigPtr_pt->Spi_MaxDlcs is always true because we are not using all channels and one must be with Dma
     * so the loop ends. This can never be a false condition, so removed from coverage */
    for(UnitIdx_u8 = 0U ; (UnitIdx_u8 < Spi_ConfigPtr_pt->Spi_MaxDlcs) && (initializeDmaFlag==FALSE) ; UnitIdx_u8++)
    {

		if((NULL_PTR != Spi_HWUnit_at[UnitIdx_u8]) && (Spi_UnitProperty_at[UnitIdx_u8].Spi_DmaUsed == STD_ON))
		{
            /* if any used unit utilizes Dma, it must be initialized */
			Dma_Init();
			initializeDmaFlag = TRUE;
		}
    }
    for(UnitIdx_u8 = 0U ;
		/* @CODECOV:SEARCHING_FOR_ELEMENT_IN_ARRAY: Always true because we do not use all Dlcs, so removed from coverage */
		UnitIdx_u8 < Spi_ConfigPtr_pt->Spi_MaxDlcs;
		UnitIdx_u8++)
    {
       if(NULL_PTR != Spi_HWUnit_at[UnitIdx_u8])
       {
          PropLoc_pt = &Spi_UnitProperty_at[UnitIdx_u8];
          HWUnit_u8  = PropLoc_pt->Spi_UnitID;
          Spi_HWUnitMap_at[HWUnit_u8].Reg_pt  = Spi_HWUnit_at[UnitIdx_u8];
          Spi_HWUnitMap_at[HWUnit_u8].Ram_pt  = Spi_RamUnit_at[UnitIdx_u8];
          Spi_HWUnitMap_at[HWUnit_u8].Prop_pt = PropLoc_pt;

          DlcEv_pt = &Spi_DlcEvent_t[HWUnit_u8];
          DlcEv_pt->Event_u8 = (uint8)SPI_DLC_EV_CONSUMED ;
          DlcEv_pt->Guard_u8 = (uint8)SPI_DLC_G_IDLE ;

          MReg_pt = Spi_HWUnitMap_at[HWUnit_u8].Reg_pt;
          /* Bring SPI out of RESET state */
          (void)SPI_WRITEVAL_PR(MReg_pt->Spi_GCR0,1U);

          /* added below so that BUF init is initiated much earlier */
          /* set all pins on the unit to functional */
            MReg_pt->Spi_PC.Spi_FUN = ALL_BITS_HIGH_MASK_16;
            MReg_pt->Spi_INT0 |= (1UL << 9U); /* enable TX interrupt */
            MReg_pt->Spi_INT0 |= (1UL << 8U); /* enable RX interrupt */
            MReg_pt->Spi_INT0 |= ALL_BITS_HIGH_MASK_8;
            MReg_pt->Spi_LVL |= (1UL << 9U);
            MReg_pt->Spi_LVL |= (1UL << 8U);

          if((PropLoc_pt->Spi_RamUsed == STD_ON)
        		  /* @CODECOV:CONFIG_LIMITATION: We are never using Ram and Dma at the same time, so this is always true and removed from coverage. */
        		  &&(PropLoc_pt->Spi_DmaUsed == STD_OFF)
				  )
          {
             /* enable MIB spi to get access to the MIB registers */
             SPI_SETVAL32(MReg_pt->Spi_EN, MIBSPIE_EN(1U));
          }


          for (ExtDevIdx_u32 = 0U; ExtDevIdx_u32 < Spi_ConfigPtr_pt->Spi_MaxExtDevs ; ExtDevIdx_u32++)
          {
        	  /* Only one HW instance, all channels have CS  */
             if(UnitIdx_u8 == Spi_ConfigPtr_pt->Spi_DevCfg[ExtDevIdx_u32].Spi_HwInstance)
             {
                /* get the chip select */
                CSVal_u32 = Spi_ConfigPtr_pt->Spi_DevCfg[ExtDevIdx_u32].Spi_DioPin;
                /* execute this only if CS handling is selected as active */

                /* @CODECOV:OTHER_TEST_EXIST: We are always using CS so this is always true and removed from coverage. */
                if(CSVal_u32 != SPI_NO_CHIP_SELECT)
                {
                	/* this is always false in our tests, so removed from coverage. */
                   if(SPI_DLC_LOWBYTE_GET(Spi_ConfigPtr_pt->Spi_DevCfg[ExtDevIdx_u32].Spi_CsProperty) == (uint16)SPI_HIGH)
                   {
                      /* set the CS idle levels - idle low */
                      SPI_CLRVAL32(MReg_pt->Spi_DEF, (1UL << CSVal_u32)) ;
                   }
                   else
                   {
                      /* set the CS idle levels - idle high */
                      SPI_SETVAL32(MReg_pt->Spi_DEF, (1UL << CSVal_u32)) ;
                   }
                }
                else
                {
                    /* disable CS functionality completely */
                    MReg_pt->Spi_PC.Spi_FUN &= ~(ALL_BITS_HIGH_MASK_8);
                    /* set the CS pins to outputs */
                    MReg_pt->Spi_PC.Spi_DIR  |= ALL_BITS_HIGH_MASK_8;
                    /* drive them low or high depending on the BSW configuration */
                    if (Spi_ConfigPtr_pt->Spi_DevCfg[ExtDevIdx_u32].Spi_CsProperty == (uint16)SPI_HIGH) {
                        MReg_pt->Spi_PC.Spi_DSET |= ALL_BITS_HIGH_MASK_8;
                    } else {
                        MReg_pt->Spi_PC.Spi_DCLR |= ALL_BITS_HIGH_MASK_8;
                    }
                }

             }

          }

          /* if hardware unit has no RAM so it runs in standard mode, the MIB features will not be initialized */
          Spi_DlcOptionSelect[PropLoc_pt->Spi_RamUsed].Init(HWUnit_u8);
       }
    }
}
#elif defined(CFG_TMS570LC43X)
static void Spi_DlcInit(void)
{
    uint32 CSVal_u32; /* local value for chip select */
    uint32 ExtDevIdx_u32; /* external device index to set the levels as configured */
    Spi_DlcEventType* DlcEv_pt;
    const Spi_HWUnitPropertyType* PropLoc_pt; /* pointer to unit properties */
    Spi_RegisterPtrType MReg_pt;
    uint8 UnitIdx_u8; /* hardware unit index of generated unit arrays */
    uint8 HWUnit_u8; /* local value for hardware unit */

    for(UnitIdx_u8 = 0U ; UnitIdx_u8 < Spi_ConfigPtr_pt->Spi_MaxDlcs ; UnitIdx_u8++)
    {
       if(NULL_PTR != Spi_HWUnit_at[UnitIdx_u8])
       {
          PropLoc_pt = &Spi_UnitProperty_at[UnitIdx_u8];
          HWUnit_u8  = PropLoc_pt->Spi_UnitID;
          Spi_HWUnitMap_at[HWUnit_u8].Reg_pt  = Spi_HWUnit_at[UnitIdx_u8];
          Spi_HWUnitMap_at[HWUnit_u8].Ram_pt  = Spi_RamUnit_at[UnitIdx_u8];
          Spi_HWUnitMap_at[HWUnit_u8].Prop_pt = PropLoc_pt;

          DlcEv_pt = &Spi_DlcEvent_t[HWUnit_u8];
          DlcEv_pt->Event_u8 = (uint8) SPI_DLC_EV_CONSUMED ;
          DlcEv_pt->Guard_u8 = SPI_DLC_G_IDLE ;

          MReg_pt = Spi_HWUnitMap_at[HWUnit_u8].Reg_pt;
          /* Bring SPI out of RESET state */
          (void)SPI_WRITEVAL_PR(MReg_pt->Spi_GCR0,1U);

          /* set master, external clk, enable SPI  */
          MReg_pt->Spi_GCR1 = MIBSPIEGCR1_MASTER(1U) |
                              MIBSPIEGCR1_CLKMOD(1U) |
                              MIBSPIEGCR1_SPIEN(1U);
          /* added below so that BUF init is initiated much earlier */
          /* enable MIB spi to get access to the MIB registers */
          SPI_SETVAL32(MReg_pt->Spi_EN, MIBSPIE_EN(1U));

          /* set all pins on the unit to functional */
          MReg_pt->Spi_PC.Spi_FUN = ALL_BITS_HIGH_MASK_16;

          for (ExtDevIdx_u32 = 0U; ExtDevIdx_u32 < Spi_ConfigPtr_pt->Spi_MaxExtDevs ; ExtDevIdx_u32++)
          {
             if(UnitIdx_u8 == Spi_ConfigPtr_pt->Spi_DevCfg[ExtDevIdx_u32].Spi_HwInstance)
             {
                /* get the chip select */
                CSVal_u32 = Spi_ConfigPtr_pt->Spi_DevCfg[ExtDevIdx_u32].Spi_DioPin;
                /* execute this only if CS handling is selected as active */
                if(CSVal_u32 != SPI_NO_CHIP_SELECT)
                {
                   if(SPI_DLC_LOWBYTE_GET(Spi_ConfigPtr_pt->Spi_DevCfg[ExtDevIdx_u32].Spi_CsProperty) == (uint8)SPI_HIGH)
                   {
                      /* set the CS idle levels - idle low */
                      SPI_CLRVAL32(MReg_pt->Spi_DEF, 1U << CSVal_u32) ;
                   }
                   else
                   {
                      /* set the CS idle levels - idle high */
                      SPI_SETVAL32(MReg_pt->Spi_DEF, 1U << CSVal_u32) ;
                   }
                }
                else
                {
                   /* no action */
                }
             }
          }
          /* if hardware unit has no RAM so it runs in standard mode, the MIB features will not be initialized */
          Spi_DlcRamInit(HWUnit_u8);
       }
    }
}
#endif

/** @brief This method closes dlc. */
static void Spi_DlcClose(void)
{
    uint32 HwUnit_u32;		/* hardware unit index */
#if defined(CFG_TMS570LS12X)
    uint32 OptSel_u32;		/* option selector (Std or Ram) */
#endif /* defined(CFG_TMS570LS12X) */
    Spi_RegisterPtrType MReg_pt;

    /* clear registers               */
    for(HwUnit_u32 = 0U ; HwUnit_u32 < Spi_ConfigPtr_pt->Spi_MaxDlcs ; HwUnit_u32++)
    {
       if(NULL_PTR != Spi_HWUnit_at[HwUnit_u32])
       {
#if defined(CFG_TMS570LS12X)
          MReg_pt = Spi_HWUnit_at[HwUnit_u32];
          /* power on default is 1 for each CS line */
          MReg_pt->Spi_DEF    = (uint32) 0x0Fu;
          (void)SPI_WRITEVAL_PR(MReg_pt->Spi_FMT[0U],(uint32)SPI_DLC_BITCLR);
          MReg_pt->Spi_GCR1   = (uint32)SPI_DLC_BITCLR;

          OptSel_u32 = Spi_UnitProperty_at[HwUnit_u32].Spi_RamUsed;
          Spi_DlcOptionSelect[OptSel_u32].Close(HwUnit_u32);
#elif defined(CFG_TMS570LC43X)
          MReg_pt = Spi_HWUnit_at[HwUnit_u32];
          Spi_DlcRamClose(HwUnit_u32);
          /* power on default is 1 for each CS line */
          MReg_pt->Spi_DEF    = (uint32) 0x0FU;
          (void)SPI_WRITEVAL_PR(MReg_pt->Spi_FMT[0U],(uint32)SPI_DLC_BITCLR);
          MReg_pt->Spi_GCR1   = (uint32)SPI_DLC_BITCLR;
#else
#error This SPI driver does not support this MCU.
#endif
       }
    }
}

 /** @brief This method set dlc event.
  *  @param[in]        Dlc_Event_pt - Dlc Event.
  *  @return		   Whether the event has been set or not.
  *  @retval E_OK      Event has been set
  *  @retval E_NOT_OK  Event has not been set
 */
static Std_ReturnType Spi_DlcSetEvent(const Spi_DlcEventType* Dlc_Event_pt)
{
    Std_ReturnType dlc_set_event_return = E_NOT_OK;
    uint32 HwUnit_u32; /* index of hardware unit */
    Spi_DlcEventPtrType DlcEv_pt;

    HwUnit_u32  = Spi_ConfigPtr_pt->Spi_JobCfg[Dlc_Event_pt->JobID_u8].Spi_HWUnitID;
    Spi_GlobalSuspend();
    DlcEv_pt  = &Spi_DlcEvent_t[HwUnit_u32];
    /* check if a job starts transmission */
    /* check if a job is waiting for transmit, do not queue him again */

    /* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: The routine is only referenced for a queued event yet to be consumed so this is always false and removed from coverage */
    if(DlcEv_pt->Event_u8 != (uint8)SPI_DLC_EV_CONSUMED)
    {
        /* stop critical section */
        Spi_GlobalRestore();
    }
    else
    {
        /* used for transmission mode */
        DlcEv_pt->Event_u8 = Dlc_Event_pt->Event_u8;
        /* high prio jobs are queued at pos 0, low prio jobs at pos. 3*/
        DlcEv_pt->JobID_u8 = Dlc_Event_pt->JobID_u8;
        DlcEv_pt->Guard_u8 = (uint8)SPI_DLC_G_PENDING ;
        /* stop critical section */
        Spi_GlobalRestore();
        Spi_DlcConsumeEvent(HwUnit_u32);
        /* Set return value */
        dlc_set_event_return = E_OK;
    }

    return (dlc_set_event_return);
}


/* @CODECOV:OTHER_TEST_EXIST:Errors depend on external chip and thus have to be tested on integration level. */

/*  @brief Hardware dependent interrupt service routine to handle Spi rx/tx errors
 *  @param[in] HwUnit_u32 	Hardware unit id.
 */
void Spi_Hw_IrqTxRxERR(uint32 HwUnit_u32){
    uint32 TGErr_u32; /* value for error check */
    Spi_DlcEventType* DlcEv_pt;

    DlcEv_pt = &Spi_DlcEvent_t[HwUnit_u32];
    /* check if a error is pending, get value */
    TGErr_u32 = SPI_GETVAL32(Spi_HWUnitMap_at[HwUnit_u32].Reg_pt->Spi_TGINTVECT[0U], TGINTVECT_INTVEC(0x1FU));
    /* reset value, used in DlcError function */
    DlcEv_pt->RxStat_u16 = 0U;
    /* bit five in the value signals a pending error */
    if(SPI_DLC_CHECK_BIT32(TGErr_u32, 6UL))
    {
        /* we caught an error, handle it */
        Spi_DlcError(HwUnit_u32);
    }
}




/*  @brief Hardware dependent interrupt service routine to receive/transmit data
 *  @param[in] HwUnit_u32 	Hardware unit id.
 */
void Spi_Hw_IrqTxRx(uint32 HwUnit_u32){
    volatile uint16 TGIdx_u16; /* index of transfergroup*/
    Spi_DlcEventPtrType DlcEv_pt;
    Spi_RegisterPtrType MStd_pt;
    Spi_HWUnitMapPtrType MUnit_pt;
    uint8  Ram_u8 ;   /* temporary parameter for RamUsed ON/OFF */

    MUnit_pt = &Spi_HWUnitMap_at[HwUnit_u32];
    /* check the TG which caused the IRQ    */
    /* and clear the interrupt flag by read */
    Ram_u8 = MUnit_pt->Prop_pt->Spi_RamUsed;


    /* @CODECOV:CONFIG_LIMITATION The ISR is only triggered for channels not using DMA and using RAM */
    if(Ram_u8 == STD_ON)
    {
        TGIdx_u16 = (uint16)(SPI_GETVAL32(Spi_HWUnitMap_at[HwUnit_u32].Reg_pt->Spi_TGINTVECT[1U], TGINTVECT_INTVEC(0x1FU)) >> 1U) - 1U;
        /* TG(ENA) is cleared by one shot option, so the timer does not trigger this TG again */
    }
    else
    {
        TGIdx_u16 = (uint16)(SPI_GETVAL32(Spi_HWUnitMap_at[HwUnit_u32].Reg_pt->Spi_FLG , 0x3FFU));
        /* just read the flag */        
        TGIdx_u16 = (TGIdx_u16 & 0U);
    }

    DlcEv_pt = &Spi_DlcEvent_t[HwUnit_u32];
#if defined(CFG_TMS570LS12X)
    Spi_DlcOptionSelect[Ram_u8].DrainData(HwUnit_u32);
#elif defined(CFG_TMS570LC43X)
    Spi_DlcRamDrainData(HwUnit_u32);
#else
#error This SPI driver does not support this MCU.
#endif

    /* check state if finished or idle */
    /* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: The ISR is triggered at the end of transfer so this condition is always true and removed from coverage */
    if(DlcEv_pt->Guard_u8 == SPI_DLC_G_IDLE)
    {
        MStd_pt  = Spi_HWUnitMap_at[HwUnit_u32].Reg_pt;
        Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_DlcResult[HwUnit_u32] = SPI_DLC_OK ;
        DlcEv_pt->Event_u8 = (uint8)SPI_DLC_EV_CONSUMED;
        SPI_CLRVAL16(MStd_pt->Spi_DAT1.TxCtrl, TXRAMCTRL_CSHOLD);
        /* report to job and sequence handler that a job has finished */
        Spi_HwJobComplete(DlcEv_pt->JobID_u8, (uint16)HwUnit_u32);
    }
    else
    {
        /* refill data and
         * trigger transfer  again
         */
        /* transfer group is ready for transfer, trigger interrupt generation */
#if defined(CFG_TMS570LS12X)
        Spi_DlcOptionSelect[Ram_u8].FillData(HwUnit_u32);
        Spi_DlcOptionSelect[Ram_u8].Trigger(HwUnit_u32);
#elif defined(CFG_TMS570LC43X)
        Spi_DlcRamFillData(HwUnit_u32);
        Spi_DlcRamTriggerData(HwUnit_u32);
#else
#error This SPI driver does not support this MCU.
#endif
    }

    (void)TGIdx_u16;	/* To silence the compiler (set but not used message)*/
}

#if (defined(CFG_TMS570LS12X)) && (SPI_HW_USE_DMA == STD_ON)
/* @brief   DLC callback function
 * @details Used for DMA transfer to switch to another DMA buffer
 ******************************************************************************/
void Spi_Hw_DlcBlockCbk(void)
{
    Spi_DlcEventPtrType DlcEv_pt;
    Spi_RegisterPtrType MStd_pt;

    /* Temporary ID of a hardware channel,
    * initialized with the ID of the hardware channel which caused this interrupt
    * Note: Reading BTCAOFFSET clears the respective BTCFLAG */
    uint8 HWChannel = (uint8)Dma_GlobalRegister->DMA_BTCAOFFSET - 1U;

    /* Check for valid DMA Channel to service */
    /* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: The ISR is triggered at the end of transfer so this condition is always true and removed from coverage */
    if(HWChannel < DMA_MAX_HW_CHN)
    {
        DlcEv_pt = &Spi_DlcEvent_t[Dma_ChanneltoHWunit[HWChannel]];
        MStd_pt  = Spi_HWUnitMap_at[Dma_ChanneltoHWunit[HWChannel]].Reg_pt;

        /* disable Dma requests */
        MStd_pt->Spi_INT0 &= ~(DMA_REQ_MASK);
        /* check if job has completed */

        /* The routine is referenced from an ISR triggered at the Dma transfer end,
         * so this is always true and also removed from coverage */
        if(DlcEv_pt->Guard_u8 == SPI_DLC_G_IDLE)
        {
            /* close DLC, report the job which has finished */
            Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_DlcResult[(uint32)Dma_ChanneltoHWunit[HWChannel]] = SPI_DLC_OK ;
            DlcEv_pt->Event_u8 = (uint8)SPI_DLC_EV_CONSUMED;
            /* Clear current CS */
            SPI_CLRVAL16(MStd_pt->Spi_DAT1.TxCtrl, TXRAMCTRL_CSHOLD);
            /* report to job and sequence handler that a job has finished */
            Spi_HwJobComplete(DlcEv_pt->JobID_u8, (uint32)Dma_ChanneltoHWunit[HWChannel]);
        }
        else
        {
            (void) Spi_DlcSwitchChannel((uint32)Dma_ChanneltoHWunit[HWChannel],
                                                        &DlcEv_pt->TxCtrl_u16,
                                                        DlcEv_pt,
                                                        SPI_DLC_TX);
            /* setup next channel Dma and enable Dma requests again */
            Spi_DlcStdPrepareDma((uint32)Dma_ChanneltoHWunit[HWChannel], SPI_DLC_TX);
            /* enable Dma requests to generate the first pulse */
            MStd_pt->Spi_INT0 |= DMA_REQ_MASK;
        }
    }

}



#endif /* defined(CFG_TMS570LS12X) */

#if (SPI_ENABLE_LOOPBACK_MODE_API == STD_ON)
/** @brief This method enable dlc LoopbackMode.
  *  @param[in]        HWUnit - Hardware unit id.
  *  @param[in]        LBMode - LB Mode.
 */
/*lint --e{528} LINT:OTHER:Symbol not referenced. */
static void Spi_DlcEnableLpbk(uint8 HwUnit, uint8 LbMode)
{
   if((uint8)SPI_ANALOG_LPBK == LbMode)
   {
      SPI_SETVAL32(Spi_HWUnit_at[HwUnit]->Spi_IOLPBTSTCR, SPI_ANALOG_LOOPBACK_MASK);
   }
   else
   {
      SPI_CLRVAL32(Spi_HWUnit_at[HwUnit]->Spi_IOLPBTSTCR, SPI_ANALOG_LOOPBACK_MASK);
      SPI_SETVAL32(Spi_HWUnit_at[HwUnit]->Spi_IOLPBTSTCR, SPI_DIGITAL_LOOPBACK_MASK);
   }
}
#endif

#if (SPI_DISABLE_LOOPBACK_MODE_API == STD_ON)
/** @brief This method disable dlc LoopbackMode.
  *  @param[in]        HWUnit - Hardware unit id.
 */
/*lint --e{528} LINT:OTHER:Symbol not referenced. */
static void Spi_DlcDisableLpbk(uint8 HwUnit)
{
   SPI_CLRVAL32(Spi_HWUnit_at[HwUnit]->Spi_IOLPBTSTCR, SPI_ANALOG_LOOPBACK_MASK);
}
#endif

#if (SPI_REGISTER_READBACK_API == STD_ON)
static uint32 Spi_DlcRegisterRdbk(Spi_DlcRegRdbkType DlcRegRdbck,uint8 HwUnit)
{
   uint32 Register_Readback_Return = 0;

   switch(DlcRegRdbck)
   {
      case  SPI_GCR0_RB:
         Register_Readback_Return = Spi_HWUnit_at[HwUnit]->Spi_GCR0;
         break;
      case  SPI_GCR1_RB:
         Register_Readback_Return = Spi_HWUnit_at[HwUnit]->Spi_GCR1;
         break;
      case  SPI_DEF_RB:
         Register_Readback_Return = Spi_HWUnit_at[HwUnit]->Spi_DEF;
         break;
      case  SPI_EN_RB:
         Register_Readback_Return = Spi_HWUnit_at[HwUnit]->Spi_EN;
         break;
      default:
      break ;
   }
   return(Register_Readback_Return);
}
#endif


/*  @brief Hardware dependent function for SPI initialization.
 *         Synchronous
 *  @note  Non Reentrant
 *  @note  A re-initialization of a SPI Handler/Driver by executing the Spi_Init() function requires a de-initialization before by executing a Spi_DeInit().
 *  @param[in] ConfigPtr - Pointer to configuration set.
 */
void Spi_Hw_Init( const Spi_ConfigType* ConfigPtr)
{
   uint32 Index_loc;
   Std_ReturnType validate = E_OK;

   Spi_param_validate((boolean)(Spi_DrvStatus == SPI_UNINIT), SPI_INIT_SERVICE_ID, SPI_E_ALREADY_INITIALIZED, &validate);

   if(validate == E_OK){
		/* Store configuration pointer */
		Spi_ConfigPtr_pt = ConfigPtr;
		/* Initialize driver status */
		Spi_DrvStatus = SPI_IDLE;

		/* Initialize all DLC's status */
		for (Index_loc = 0U; Index_loc < Spi_ConfigPtr_pt->Spi_MaxDlcs; Index_loc++)
		{
			Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_DlcResult[Index_loc] = SPI_DLC_OK;
		}
		/* Initialize all Jobs status */
		for (Index_loc = 0U; Index_loc < Spi_ConfigPtr_pt->Spi_MaxJobs; Index_loc++)
		{
			Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_JobResult[Index_loc] = SPI_JOB_OK;
		}
		/* Initialize all Sequences status */
		for (Index_loc = 0U; Index_loc < Spi_ConfigPtr_pt->Spi_MaxSequences; Index_loc++)
		{
			Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_SeqResult[Index_loc] = SPI_SEQ_OK;
		}
		Spi_InitController();
#if (SPI_USE_HW_UNIT_0 == STD_ON) && (SPI_HW_UNIT_0_USE_DMA == 0)
		ISR_INSTALL_ISR2("SPI1Level0", Spi_IrqUnit0TxRxERR, SPI1_LVL0_INT, 2, 0);
		ISR_INSTALL_ISR2("SPI1Level1", Spi_IrqUnit0TxRx, SPI1_LVL1_INT, 2, 0);
#endif

#if (SPI_USE_HW_UNIT_1 == STD_ON) && (SPI_HW_UNIT_1_USE_DMA == 0)
		ISR_INSTALL_ISR2("SPI2Level0", Spi_IrqUnit1TxRxERR, SPI2_LVL0_INT, 2, 0);
		ISR_INSTALL_ISR2("SPI2Level1", Spi_IrqUnit1TxRx, SPI2_LVL1_INT, 2, 0);
#endif

#if (SPI_USE_HW_UNIT_2 == STD_ON) && (SPI_HW_UNIT_2_USE_DMA == 0)
		ISR_INSTALL_ISR2("SPI3Level0", Spi_IrqUnit2TxRxERR, SPI3_LVL0_INT, 2, 0);
		ISR_INSTALL_ISR2("SPI3Level1", Spi_IrqUnit2TxRx, SPI3_LVL1_INT, 2, 0);
#endif

#if (SPI_USE_HW_UNIT_3 == STD_ON) && (SPI_HW_UNIT_3_USE_DMA == 0)
		ISR_INSTALL_ISR2("SPI4Level0", Spi_IrqUnit3TxRxERR, SPI4_LVL0_INT, 2, 0);
		ISR_INSTALL_ISR2("SPI4Level1", Spi_IrqUnit3TxRx, SPI4_LVL1_INT, 2, 0);
#endif

#if (SPI_USE_HW_UNIT_4 == STD_ON) && (SPI_HW_UNIT_4_USE_DMA == 0)
		ISR_INSTALL_ISR2("SPI5Level0", Spi_IrqUnit4TxRxERR, SPI5_LVL0_INT, 2, 0);
		ISR_INSTALL_ISR2("SPI5Level1", Spi_IrqUnit4TxRx, SPI5_LVL1_INT, 2, 0);
#endif

#if defined(CFG_TMS570LS12X)
#if (SPI_HW_USE_DMA == STD_ON)
		ISR_INSTALL_ISR2("SpiDmaBtc", Spi_Irq_DmaIsrBTC, SPI_DMABTC_INT, 2, 0);
#endif
#endif /* defined(CFG_TMS570LS12X) */
   }
}

/*  @brief Hardware dependent function for SPI de-initialization.
 *         Synchronous
 *  @note  Non Reentrant
 *  @note  The SPI Handler/Driver shall have been initialized before the function Spi_DeInit is called, otherwise see [SWS_Spi_00046].
 *  @return		      Whether the command has been accepted or not.
 *  @retval E_OK      De-initialisation command has been accepted.
 *  @retval E_NOT_OK  De-initialisation command has not been accepted.
 */
Std_ReturnType Spi_Hw_DeInit(void){

	Std_ReturnType deinit_return = E_OK;
	uint32 Index_loc;

	Spi_param_validate((boolean)(Spi_DrvStatus != SPI_UNINIT), SPI_DEINIT_SERVICE_ID, SPI_E_UNINIT, &deinit_return);

	if (Spi_DrvStatus  == SPI_BUSY){
		/* Do nothing */
		deinit_return = E_NOT_OK;
	}

	if(deinit_return == E_OK){
		Spi_DrvStatus  = SPI_UNINIT;
		for (Index_loc = 0U; Index_loc < Spi_ConfigPtr_pt->Spi_MaxDlcs; Index_loc++){
			Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_DlcResult[Index_loc] = SPI_DLC_OK ;
		}
		for (Index_loc = 0U; Index_loc < Spi_ConfigPtr_pt->Spi_MaxJobs; Index_loc++){
			Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_JobResult[Index_loc] = SPI_JOB_OK;
		}
		for (Index_loc = 0U; Index_loc < Spi_ConfigPtr_pt->Spi_MaxSequences; Index_loc++){
			Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_SeqResult[Index_loc] = SPI_SEQ_OK;
		}
		Spi_DlcClose();
	}

   return(deinit_return);
}

/*  @brief Hardware dependent function returns the SPI Handler/Driver software module status.
 *         Synchronous
 *  @note  Reentrant
 *  @return		        Spi status
 *  @retval SPI_UNINIT  The SPI Handler/Driver is not initialized or not usable.
 *  @retval SPI_IDLE    The SPI Handler/Driver is not currently transmitting any Job.
 *  @retval SPI_BUSY    The SPI Handler/Driver is performing a SPI Job( transmit )
 */
Spi_StatusType Spi_Hw_GetStatus(void){
	/* No need to check if driver is initialized because the calling function already checks this */
	return (Spi_DrvStatus);
}

/* @brief Hardware dependent function which returns the last transmission result of the specified Job.
 *         Synchronous
 *  @note  Reentrant
 *  @note  If SPI Handler/Driver has not been initialized before the function Spi_GetJobResult is called, the return value is undefined.
 *  @note  Every new transmit job that has been accepted by the SPI Handler/Driver overwrites the previous job result with SPI_JOB_QUEUED or SPI_JOB_PENDING.
 *  @param[in] Job              Job ID. An invalid job ID will return an undefined result.
 *  @return		                Spi job result
 *  @retval SPI_JOB_OK          Spi job is finished successfully
 *  @retval SPI_JOB_PENDING     Spi job is pending
 *  @retval SPI_JOB_FAILED      Spi job has failed
 *  @retval SPI_JOB_QUEUED      Spi job is queued
 *  @retval SPI_JOB_ACTIVE      Spi Job is currently being transmited
 */
Spi_JobResultType Spi_Hw_GetJobResult( Spi_JobType Job)
{
	/* no need to check Job < Spi_ConfigPtr_pt->Spi_MaxJobs because the calling function already checks this. */
	return Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_JobResult[Job];
}

#if (SPI_HW_STATUS_API == STD_ON)

/*  @brief Hardware dependent function which returns the status of the specified SPI Hardware microcontroller peripheral.
 *         Synchronous
 *  @note  Reentrant
 *  @note  If SPI Handler/Driver has not been initialized before the function Spi_GetHWUnitStatus is called, the return value is undefined.
 *  @param[in] HWUnit 		SPI Hardware microcontroller peripheral (unit) ID.
 *  @return Spi status
 *  @retval SPI_UNINIT 		Not initialized or not usable.
 *  @retval SPI_IDLE 		Not currently transmitting any Job.
 *  @retval SPI_BUSY      	Performing a SPI Job( transmit )
 */
Spi_StatusType Spi_Hw_GetHWUnitStatus( Spi_HWUnitType HWUnit)
{
	Spi_StatusType get_hw_unit_status_return = SPI_UNINIT;
	/* No need to check if HWUnit < Spi_ConfigPtr_pt->Spi_MaxDlcs because the calling function already checks this */

	/* @CODECOV:HARDWARE_DEPENDENCY_STATUS_BIT: Reproducing conditions other than SPI_DLC_OK depend on HW support. */
	switch(Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_DlcResult[HWUnit])
	{
	 case SPI_DLC_PENDING:
		/* need to fall through here, both results are mapped to SPI_BUSY  */
	 case SPI_DLC_FAILED:
		get_hw_unit_status_return = SPI_BUSY;
		break;
	 case SPI_DLC_OK:
		get_hw_unit_status_return = SPI_IDLE;
		break;
	 default:
		break;
	}

	return(get_hw_unit_status_return);
}
#endif

/*  @brief Hardware dependent function which returns the last transmission result of the specified Sequence.
 *         Synchronous
 *  @note  Reentrant
 *  @note  Every new transmit sequence that has been accepted by the SPI Handler/Driver overwrites the previous sequence result with SPI_SEQ_PENDING.
 *  @note  If the SPI Handler/Driver has not been initialized before the function Spi_GetSequenceResult is called, the return value is undefined.
 *  @param[in] Sequence - Sequence ID. An invalid sequence ID will return an undefined result.
 *  @retval Spi_SeqResultType  Spi_SeqResultType
 */
Spi_SeqResultType Spi_Hw_GetSequenceResult( Spi_SequenceType Seq )
{
	/* No need to check Seq < Spi_ConfigPtr_pt->Spi_MaxSequences because the calling function already checks this */
	return Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_SeqResult[Seq];
}


#if ((SPI_CHANNELBUFFERS == SPI_IB) || (SPI_CHANNELBUFFERS == SPI_IB_EB))
/** @req SWS_Spi_00018 - The function Spi_WriteIB shall write one or more data to an IB SPI Handler/Driver Channel specified by the respective parameter. (SRS_Spi_12101, SRS_Spi_12153)*/
/** @req SWS_Spi_00023 - If the given parameter "DataBufferPt" is null, the function Spi_WriteIB shall assume that the data to be transmitted is not relevant
 * and the default transmit value of the given channel shall be used instead.*/

/*  @brief Hardware dependent function for writing a bulk of 64 byte data to an IB SPI Handler/Driver Channel specified by parameter.
 *         Synchronous
 *  @note  Reentrant
 *  @note  The SPI Handler/Driver shall have been initialized before the function Spi_WriteIB is called. After calling this function, just execute a transfer for this channel.
 *  @param[in] Channel - Channel ID.
 *  @param[in] DataBufferPtr - Pointer to source data buffer. If this pointer is null, it is assumed that the data to be transmitted is not relevant and the default transmit value of this channel will be used instead.
 *  @return		      Whether the command has been accepted or not.
 *  @retval E_OK      Write command has been accepted
 *  @retval E_NOT_OK  Write command has not been accepted
 */
Std_ReturnType Spi_Hw_WriteIB( Spi_ChannelType Channel, const Spi_DataType* DataBufferPtr )
{
   Std_ReturnType write_ib_return = E_OK;

   uint16_least Index_loc;
   uint16_least Len_loc;
   uint16_least TxDefData_loc;
   uint16_least DataMode_loc;
   Spi_DataType* TxPtr_p;   /* pointer channel Tx data */

   Spi_param_validate((boolean)(Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_ChannelBuf == SPI_IB), SPI_WRITEIB_SERVICE_ID, SPI_E_PARAM_CHANNEL, &write_ib_return);
   Spi_param_validate((boolean)(Channel < Spi_ConfigPtr_pt->Spi_MaxChannels), SPI_WRITEIB_SERVICE_ID, SPI_E_PARAM_CHANNEL, &write_ib_return);

   if(write_ib_return == E_OK)
   {
		DataMode_loc  = Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_DataWidth;
		Len_loc       = Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_BufLength;
		TxDefData_loc = Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_DefaultTxData;
		TxPtr_p       = Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_Descriptor->Spi_Tx_pt;

		/* setup Rx and Tx length, the DLC module uses the generated lengths */
		Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_Descriptor->Spi_TxRxLength =  Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_BufLength;

		if(DataBufferPtr == NULL_PTR)
		{
			  /* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: This is always false, so removed from coverage. */
			 if(TxPtr_p == NULL_PTR)
			 {
				/* Do nothing */
				 write_ib_return = E_NOT_OK;
			 }
			 else
			 {
				/* copy default value */
				for(Index_loc=0U; Index_loc < Len_loc; Index_loc++)
				{
					/* @CODECOV:OTHER_TEST_EXIST: Unit tests only cover 8 byte size. Other bytes sizes have to be tested on integration level */
					if(DataMode_loc == 8U)
					{
					  /*lint:FALSE_POSITIVE:Pointer type depends on generator:Info: 734 PC-lint: Loss of precision (assignment) (17 bits to 16 bits) */
					  TxPtr_p[Index_loc] = (uint8)TxDefData_loc;
					}
					else
					{
					   /*lint -e{734} LINT:FALSE_POSITIVE:Pointer type depends on generator:Info: 734 PC-lint: Loss of precision (assignment) (17 bits to 16 bits) */
					   TxPtr_p[Index_loc] = (uint16)TxDefData_loc;
					}
				}
			 }
		}
		else
		{
			/* only 8bit data buffers are handled, so the length has to be adjusted */
			/* @CODECOV:OTHER_TEST_EXIST: Unit tests only cover 8 byte size. Other bytes sizes have to be tested on integration level */
			if(DataMode_loc == 16U)
			{
				/* the length is automatically adjusted by the generation tool, adjust to 8bit length */
				/*lint -e{734} LINT:FALSE_POSITIVE:Pointer type depends on generator:Info: 734 PC-lint: Loss of precision (assignment) (17 bits to 16 bits) */
				Len_loc = Len_loc << 1U;
			}

			 /* copy data to internal buffer */
			for(Index_loc=0U; Index_loc < Len_loc; Index_loc++)
			{
				Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_Descriptor->Spi_Tx_pt[Index_loc] = DataBufferPtr[Index_loc];
			}
		}
	}

   return(write_ib_return);
}
#endif


#if ((SPI_CHANNELBUFFERS == SPI_IB) || (SPI_CHANNELBUFFERS == SPI_IB_EB))
/** @req SWS_Spi_00049 - The channel data received shall be stored in 1 entry deep internal buffers by channel. The SPI Handler/Driver
 * shall not take care of the overwriting of these "receive" buffers by another transmission on the same channel. */

/*  @brief Hardware dependent functuion for reading bulk of 64 byte data from an IB SPI Handler/Driver Channel specified by parameter.
 *         Synchronous
 *  @note  Reentrant
 *  @note  The SPI Handler/Driver shall have been initialized before the function Spi_ReadIB is called.
 *  @param[in]        Channel - Channel ID.
 *  @param[in]        DataBufferPointer - Pointer to destination data buffer in RAM
 *  @return			  Whether the command has been accepted or not.
 *  @retval E_OK      Read command has been accepted
 *  @retval E_NOT_OK  Read command has not been accepted
 */
Std_ReturnType Spi_Hw_ReadIB( Spi_ChannelType Channel, Spi_DataType* DataBufferPtr)
{
	Std_ReturnType read_ib_return = E_OK;

	uint16_least Index_loc;
	uint16_least Len_loc;
	Spi_DataType* RxPtr_p;   /* pointer channel Rx data */

	Spi_param_validate((boolean)(Channel < Spi_ConfigPtr_pt->Spi_MaxChannels), SPI_READIB_SERVICE_ID, SPI_E_PARAM_CHANNEL, &read_ib_return);
	Spi_param_validate((boolean)(Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_ChannelBuf == SPI_IB), SPI_READIB_SERVICE_ID, SPI_E_PARAM_CHANNEL, &read_ib_return);

	if(read_ib_return == E_OK){
		/* @CODECOV:OTHER_TEST_EXIST: Unit tests only cover 8 byte size. Other bytes sizes have to be tested on integration level */
		if(Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_DataWidth == SPI_CLOCK_FRAME_BITS_SIZE_8){
			Len_loc = Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_BufLength;
		}
		else {
			/* the length is automatically adjusted by the generation tool, adjust to 8bit length */
			/*lint -e{734} LINT:FALSE_POSITIVE:Pointer type depends on generator:Info: 734 PC-lint: Loss of precision (assignment) (17 bits to 16 bits) */
			Len_loc = (Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_BufLength << 1U);
		}

		RxPtr_p = Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_Descriptor->Spi_Rx_pt;
		/* setup Rx and Tx length, the DLC module uses the generated lengths */
		Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_Descriptor->Spi_TxRxLength =
		Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_BufLength;

		/* No need to check if DataBufferPtr == NULL_PTR because the calling function already checks for this */
		/* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: This can not be made true unless user manually edits the config files */
		if(RxPtr_p == NULL_PTR) {
			/* Do nothing */
			read_ib_return = E_NOT_OK;
		}
		else {
			for(Index_loc=0U; Index_loc < Len_loc; Index_loc++){
				DataBufferPtr[Index_loc] = RxPtr_p[Index_loc];
			}
		}

	}

	return(read_ib_return);
}
#endif

#if ((SPI_CHANNELBUFFERS == SPI_EB) || (SPI_CHANNELBUFFERS == SPI_IB_EB))
/*  @brief Hardware dependent function to setup the buffers and the length of data for the EB SPI Handler/Driver Channel specified.
 *         Synchronous
 *  @note  Reentrant
 *  @note  The SPI Handler/Driver shall have been initialized before the function Spi_SetupEB is called
 *  @param[in] Channel - Channel ID.
 *  @param[in] SrcDataBufferPtr - Pointer to source data buffer.
 *  @param[in] DesDataBufferPtr - Pointer to destination data buffer in RAM.
 *  @param[in] Length - Length (number of data elements) of the data to be transmitted from SrcDataBufferPtr and/or received from DesDataBufferPtr Min.: 1 Max.: Max of data specified at configuration for this channel
 *  @return		      Whether the command has been accepted or not.
 *  @retval E_OK      Setup command has been accepted
 *  @retval E_NOT_OK  Setup command has not been accepted
 */
Std_ReturnType Spi_Hw_SetupEB(Spi_ChannelType Channel, const Spi_DataBufferType* SrcDataBufferPtr,
        Spi_DataBufferType* DesDataBufferPtr, Spi_NumberOfDataType Length){

	Std_ReturnType setup_eb_return = E_OK;
	Spi_NumberOfDataType LengthEB_t;

	Spi_param_validate((boolean)(Spi_DrvStatus != SPI_UNINIT), SPI_SETUPEB_SERVICE_ID, SPI_E_UNINIT, &setup_eb_return);
	Spi_param_validate((boolean)(Channel < Spi_ConfigPtr_pt->Spi_MaxChannels), SPI_SETUPEB_SERVICE_ID, SPI_E_PARAM_CHANNEL, &setup_eb_return);
	Spi_param_validate((boolean)(Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_ChannelBuf == SPI_EB), SPI_SETUPEB_SERVICE_ID, SPI_E_PARAM_CHANNEL, &setup_eb_return);

    if (setup_eb_return == E_OK) {
		/* check for frame mode if the length is aligned */

    	/* @CODECOV:OTHER_TEST_EXIST: Unit tests only cover 8 byte size. Other bytes sizes have to be tested on integration level */
		if(Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_DataWidth == SPI_CLOCK_FRAME_BITS_SIZE_8)
		{
		 LengthEB_t = Length;
		}
		else
		{
			LengthEB_t = (Length >> 1U);

			/* length must be even aligned in 16 or 32 bit mode */
			if(Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_DataWidth == SPI_CLOCK_FRAME_BITS_SIZE_32){
				Spi_param_validate((boolean)((Length % 4U) == 0U), SPI_SETUPEB_SERVICE_ID, SPI_E_PARAM_LENGTH, &setup_eb_return);
			}

			if(Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_DataWidth == SPI_CLOCK_FRAME_BITS_SIZE_16){
				Spi_param_validate((boolean)((Length & 1U) == 0U), SPI_SETUPEB_SERVICE_ID, SPI_E_PARAM_LENGTH, &setup_eb_return);
			}

			/* buffers must be even aligned in 16 bit mode */
			Spi_param_validate((boolean)(0U == ((uint32)SrcDataBufferPtr  & 1U)), SPI_SETUPEB_SERVICE_ID, SPI_E_PARAM_POINTER, &setup_eb_return);
			Spi_param_validate((boolean)(0U == ((uint32)DesDataBufferPtr & 1U)), SPI_SETUPEB_SERVICE_ID, SPI_E_PARAM_POINTER, &setup_eb_return);
		}

		/* now check length */
		Spi_param_validate((boolean)(Length > 0U), SPI_SETUPEB_SERVICE_ID, SPI_E_PARAM_LENGTH, &setup_eb_return);
		Spi_param_validate((boolean)(Length <= Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_BufLength), SPI_SETUPEB_SERVICE_ID, SPI_E_PARAM_LENGTH, &setup_eb_return);

		if (setup_eb_return == E_OK)  {
			 Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_Descriptor->Spi_Tx_pt = (Spi_DataType*)((uint32)SrcDataBufferPtr);
			 Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_Descriptor->Spi_Rx_pt = DesDataBufferPtr;
			 Spi_ConfigPtr_pt->Spi_ChannelCfg[Channel].Spi_Descriptor->Spi_TxRxLength = LengthEB_t;
		}
	}
    return(setup_eb_return);
}
#endif

#if ((SPI_LEVEL_DELIVERED == SPI_LEVEL_1) || (SPI_LEVEL_DELIVERED == SPI_LEVEL_2))
/** @req SWS_Spi_00268 - For asynchronous levels, LEVEL 1 and LEVEL 2, can call end notification functions at the end of a Sequence transmission. */
/** @req SWS_Spi_00269 - For asynchronous levels, LEVEL 1 and LEVEL 2 in case of interruptible Sequences, if another Sequence transmit request
 * is pending, a rescheduling is also done by the SPI Handler/Driver in order to elect the next Job to transmit. */

/*  @brief Hardware dependent function to transmit data on the SPI bus.
 *         Asynchronous
 *  @note  Reentrant
 *  @note  The SPI Handler/Driver shall have been initialized before the function Spi_AsyncTransmit is called.
 *  @param[in] Sequence - Sequence ID.
 *  @return		      Whether the command has been accepted or not.
 *  @retval E_OK      Transmission command has been accepted
 *  @retval E_NOT_OK  Transmission command has not been accepted
 */
Std_ReturnType Spi_Hw_AsyncTransmit( Spi_SequenceType Sequence)
{
   Spi_HwEventType HwEv_loc;
   Std_ReturnType  Ret_loc = E_OK;

   Spi_param_validate((boolean)(Sequence < Spi_ConfigPtr_pt->Spi_MaxSequences), SPI_ASYNCTRANSMIT_SERVICE_ID, SPI_E_PARAM_SEQ, &Ret_loc);
   Spi_param_validate((boolean)(Spi_GetSequenceResult(Sequence) != SPI_SEQ_PENDING), SPI_ASYNCTRANSMIT_SERVICE_ID, SPI_E_SEQ_PENDING, &Ret_loc);

   if(Ret_loc == E_OK)
   {
      /* check jobs of this sequence, if they are in service */
      HwEv_loc.Event_u8   = (uint8)SPI_HW_EV_SEQ_START;
      HwEv_loc.Guard_u8   = (uint8)SPI_HW_ASYNC;
      HwEv_loc.TaskID_u8  = Sequence;
      HwEv_loc.NrOfJobs_u8 = 0U;

      Ret_loc = Spi_HwSetEvent(&HwEv_loc);

      Spi_param_validate((boolean)(Ret_loc == E_OK), SPI_ASYNCTRANSMIT_SERVICE_ID, SPI_E_SEQ_PENDING, &Ret_loc);
   }
   return(Ret_loc);
}
#endif

#if defined(CFG_TMS570LS12X)
#if ((SPI_LEVEL_DELIVERED == SPI_LEVEL_0)  || (SPI_LEVEL_DELIVERED == SPI_LEVEL_2))
/** @req SWS_Spi_00035 - When the function Spi_SyncTransmit is called while a sequence is on transmission and SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT is disabled or another sequence is on transmition on same bus,
 * the SPI Handler/Driver shall not take into account this new transmission request and the function shall return the value E_NOT_OK (see [SWS_Spi_00114]). In this case
 * and according to [SWS_BSW_00042] and [SWS_BSW_00045], the SPI Handler/Driver shall report the SPI_E_SEQ_IN_PROCESS error.) (SRS_Spi_12200, SRS_Spi_12201)*/

/*  @brief Hardware dependent function to transmit data on the SPI bus
 *         Asynchronous
 *  @note  Reentrant
 *  @param[in] Sequence 	Sequence ID.
 *  @return 		  		Whether the command has been accepted or not.
 *  @retval E_OK      		Transmission command has been accepted
 *  @retval E_NOT_OK  		Transmission command has not been accepted
 */
Std_ReturnType Spi_Hw_SyncTransmit(  Spi_SequenceType Sequence )
{
   Spi_HwEventType HwEv_loc;
   Std_ReturnType  Ret_loc = E_OK;

   Spi_param_validate((boolean)(Sequence < Spi_ConfigPtr_pt->Spi_MaxSequences), SPI_SYNCTRANSMIT_SERVICE_ID, SPI_E_PARAM_SEQ, &Ret_loc);
   Spi_param_validate((boolean)(Spi_GetSequenceResult(Sequence) != SPI_SEQ_PENDING), SPI_SYNCTRANSMIT_SERVICE_ID, SPI_E_SEQ_IN_PROCESS, &Ret_loc);

   if(Ret_loc == E_OK)
   {
      /* check jobs of this sequence, if they are in service */
      HwEv_loc.Event_u8  = (uint8)SPI_HW_EV_SEQ_START;
      HwEv_loc.Guard_u8  = (uint8)SPI_HW_SYNC;
      HwEv_loc.TaskID_u8 = Sequence;
      Ret_loc = Spi_HwSetEvent(&HwEv_loc);

      Spi_param_validate((boolean)(Ret_loc == E_OK), SPI_SYNCTRANSMIT_SERVICE_ID, SPI_E_SEQ_IN_PROCESS, &Ret_loc);

      while(Spi_GetSequenceResult(Sequence) == SPI_SEQ_PENDING)
      {
         Spi_HwProcessState(Spi_ConfigPtr_pt->Spi_SeqCfg[Sequence].Spi_JobList[0U]);
      }
   }

   return(Ret_loc);
}
#endif
#endif /* defined(CFG_TMS570LS12X) */

#if (SPI_CANCEL_API == STD_ON)
/*  @brief Hardware dependent function which cancels the specified on-going sequence transmission.
 *         Asynchronous
 *  @note  Reentrant
 *  @note  The SPI Handler/Driver is not responsible on external devices damages or undefined state due to cancelling a sequence transmission. It is up to the SPI Handler/Drivers environment to be aware to what it is doing!
 *  @param[in] Sequence - Sequence ID.
 */
void Spi_Hw_Cancel( Spi_SequenceType Sequence)
{
   Spi_HwEventType HwEv_loc;

   /* No need to check for Sequence < Spi_ConfigPtr_pt->Spi_MaxSequences because the calling function already checks this */

	HwEv_loc.Guard_u8 = 0U;
	HwEv_loc.NrOfJobs_u8 = 0U;
	HwEv_loc.Event_u8 = (uint8)SPI_HW_EV_CANCEL;
	HwEv_loc.TaskID_u8 = Sequence;
	(void)Spi_HwSetEvent(&HwEv_loc);
}
#endif

#if (SPI_LEVEL_DELIVERED == SPI_LEVEL_2)
/** @req SWS_Spi_00150 - The type Spi_AsyncModeType is made available or not depending on the pre-compile time parameter: SpiLevelDelivered (LEVEL 2).*/

/* @brief Hardware dependent function to set the asynchronous mechanism mode for SPI busses handled asynchronously.
 *         				Synchronous
 *  @note  				Non Reentrant
 *  @param[in] Mode 	New mode required.
 *  @return				Whether the command has been accepted or not.
 *  @retval E_OK       	Setting command has been done
 *  @retval E_NOT_OK   	Setting command has not been accepted
 */
Std_ReturnType Spi_Hw_SetAsyncMode( Spi_AsyncModeType Mode)
{
   Std_ReturnType set_async_mode_return = E_OK;

   if(Mode == SPI_INTERRUPT_MODE)
   {
      if(Spi_DrvStatus  == SPI_IDLE)
      {
         Spi_HwSetMode(Mode);
      }
      else
      {
         set_async_mode_return = E_NOT_OK;
      }
   }
   else
   {
      /* set new mode */
      Spi_HwSetMode(Mode);
   }

   return(set_async_mode_return);
}
#endif

#if (SPI_LEVEL_DELIVERED == SPI_LEVEL_2)
/**
 * @brief This function polls the SPI interrupts linked to HW Units allocated to the
 * transmission of SPI sequences to enable the evolution of transmission state machine.
 */
void Spi_Hw_MainFunction_Handling(void)
{
	/* This is meant for pooling mode which is not supported on tms570 */
}

#endif

#if (SPI_ENABLE_LOOPBACK_MODE_API == STD_ON)
/** @brief This method enables spi LoopbackMode.
  *  @note 		 Not used anywhere. Perhaps should be removed.
  *  @param[in]        HWUnit - Hardware unit id.
  *  @param[in]        LBMode - LB Mode .
  *  @return		   Whether the LBMode has been enabled or not.
  *  @retval E_OK      LBMode has been enabled
  *  @retval E_NOT_OK  LBMode has not been enabled
 */
static Std_ReturnType Spi_EnableLoopbackMode( Spi_HWUnitType HWUnit, Spi_LoopbackModeType LBMode)
{
   Std_ReturnType enable_loopback_mode_return = E_NOT_OK;

   /* Check if Spi driver already initialized*/
   if (Spi_DrvStatus != SPI_UNINIT)
   {
      /* Check requested HW Unit validity */
      if (HWUnit < Spi_ConfigPtr_pt->Spi_MaxDlcs)
      {
         Spi_DlcEnableLpbk(HWUnit, LBMode);

         enable_loopback_mode_return = E_OK;
      }
   }

   return(enable_loopback_mode_return);
}
#endif


#if (SPI_DISABLE_LOOPBACK_MODE_API == STD_ON)

 /** @brief This method disable spi LoopbackMode.
  *  @note 				Not used anywhere. Perhaps should be removed
  *  @param[in]        HWUnit - Hardware unit id.
  *  @return		   Whether the LBMode has been disabled or not.
  *  @retval E_OK      LBMode has been disabled
  *  @retval E_NOT_OK  LBMode has not been disabled
 */
static Std_ReturnType Spi_DisableLoopbackMode( Spi_HWUnitType HWUnit )
{
   Std_ReturnType disable_loopback_mode_return = E_NOT_OK;


   if (HWUnit < Spi_ConfigPtr_pt->Spi_MaxDlcs)
   {
      Spi_DlcDisableLpbk(HWUnit);

      disable_loopback_mode_return = E_OK;
   }

   return(disable_loopback_mode_return);
}
#endif

#if (SPI_REGISTER_READBACK_API == STD_ON)
 /** @brief This method set registers callback.
  *  @note				Not used anywhere. Perhaps should be removed
  *  @param[in]        RegisterReadbackPtr - RegisterReadback pointer.
  *  @param[in]        HWUnit - Hardware unit id.
  *  @return		   Whether the RegisterReadbackPtr has been set or not.
  *  @retval E_OK      RegisterReadbackPtr has been set
  *  @retval E_NOT_OK  RegisterReadbackPtr has not been set
  *  */
static Std_ReturnType Spi_RegisterReadback( Spi_RegisterReadbackType* RegisterReadbackPtr, Spi_HWUnitType HWUnit)
{
   Std_ReturnType register_readback_return = E_NOT_OK;



   if(NULL_PTR == RegisterReadbackPtr)
   {
      /* Do nothing. Incorrect pointer. */
   }
   else if(HWUnit >= Spi_ConfigPtr_pt->Spi_MaxDlcs)
   {
      /* Do nothing. Incorrect HW Unit. */
   }
   else
   {
      RegisterReadbackPtr->Spi_GCR0 = Spi_DlcRegisterRdbk(SPI_GCR0_RB, HWUnit);
      RegisterReadbackPtr->Spi_GCR1 = Spi_DlcRegisterRdbk(SPI_GCR1_RB, HWUnit);
      RegisterReadbackPtr->Spi_DEF  = Spi_DlcRegisterRdbk(SPI_DEF_RB, HWUnit);
      RegisterReadbackPtr->Spi_EN   = Spi_DlcRegisterRdbk(SPI_EN_RB, HWUnit);

      register_readback_return = E_OK;
   }

   return(register_readback_return);
}
#endif

#if defined(CFG_TMS570LS12X)

/* @brief  Hardware specific function to initialize the DMA module.*/
static void Dma_Init( void )
{
    uint32 *volatile ReqMaskSet1 = VIM_REQMASKSET1;   /* Temporary pointer to interrupt request mask set register */

    if(Dma_ModuleInitFlag != DMA_IDLE)
    {	/* dma has not been initilized */

		/* ====== Initialization 1 of Global Control Register ====== */
		/* Cause a self reset of the DMA hardware module to reach a defined state of all global registers of DMA module,
		* switch the debug mode off and set DMA to disabled */
		Dma_GlobalRegister->DMA_GCTRL = 0x00000001U;
		/* Reset the reset bit of the DMA hardware module
		* switch the debug mode to "finish current frame transfer" and set DMA to disabled */
		Dma_GlobalRegister->DMA_GCTRL = 0x00000200U;

		/* ====== Initialization of HW Channel_u16 Enable Register ====== */
		/* No initialization needed, all Channel_u16s are disabled after reset. */
		/* Initialization not needed but done because there is no statement in manual about reset state of this register */
		Dma_GlobalRegister->DMA_HWCHENAR = ALL_BITS_HIGH_MASK_32;

		/* ====== Initialization of SW Channel_u16 Enable Register ====== */
		/* No initialization needed, all Channel_u16s are disabled after reset. */
		/* Initialization not needed but done because there is no statement in manual about reset state of this register */
		Dma_GlobalRegister->DMA_SWCHENAR = ALL_BITS_HIGH_MASK_32;

		/* ====== Initialization of Interrupt Enable Register ====== */
		/* Enable all Dma interrupts globally, but disable all Dma interrupts themselves */

		/* Initialization not needed but done because there is no statement in manual about reset state of this register */
		Dma_GlobalRegister->DMA_FTCINTENAR = ALL_BITS_HIGH_MASK_32;  /* disable frame transfer complete interrupt */
		/* Initialization not needed but done because there is no statement in manual about reset state of this register */
		Dma_GlobalRegister->DMA_LFSINTENAR = ALL_BITS_HIGH_MASK_32;  /* disable last frame started interrupt */
		/* Initialization not needed but done because there is no statement in manual about reset state of this register */
		Dma_GlobalRegister->DMA_HBCINTENAR = ALL_BITS_HIGH_MASK_32;  /* disable half block complete interrupt */
		/* Initialization not needed but done because there is no statement in manual about reset state of this register */
		Dma_GlobalRegister->DMA_BTCINTENAR = ALL_BITS_HIGH_MASK_32;  /* disable block transfer complete interrupt */

		/* DMA FTCA interrupt uses interrupt request line #33, enabled by REQMASKSET0 [33] = REQMASKSET1 [1]
		*                                                    disabled by REQMASKCLR0 [33] = REQMASKSET1 [1]
		* DMA LFSA interrupt uses interrupt request line #34, enabled by REQMASKSET0 [34] = REQMASKSET1 [2]
		*                                                    disabled by REQMASKCLR0 [34] = REQMASKSET1 [2]
		* DMA HBCA interrupt uses interrupt request line #39, enabled by REQMASKSET0 [39] = REQMASKSET1 [7]
		*                                                    disabled by REQMASKCLR0 [39] = REQMASKSET1 [7]
		* DMA BTCA interrupt uses interrupt request line #40, enabled by REQMASKSET0 [40] = REQMASKSET1 [8]
		*                                                    disabled by REQMASKCLR0 [40] = REQMASKSET1 [8]*/
		*ReqMaskSet1 |= (DMA_BIT(1U) | DMA_BIT(8U));   /* enable needed Dma interrupts by setting the RequestMask */

		Dma_GlobalRegister->DMA_GCHIENAS = ((uint32) ALL_BITS_HIGH_MASK_32);    /* enable all Dma interrupts globally */

		/* ====== Initialization of Port Assignment Registers ====== */
		/* Set Port assignment of all Channel_u16s to Port B only. Port A seems to be not implemented in TMS570PSFC66 */
		Dma_GlobalRegister->DMA_PAR[0U] = PORT_ASSIGNMENT_MASK;
		#if DMA_HW_Channel_u16_NUMBER > HW_CHANNEL_U16_NUMBER_8
		Dma_GlobalRegister->DMA_PAR[1U] = PORT_ASSIGNMENT_MASK;    /* only needed if more than 8 hardware Channel_u16s are available */
		#endif
		#if DMA_HW_Channel_u16_NUMBER > HW_CHANNEL_U16_NUMBER_16
		Dma_GlobalRegister->DMA_PAR[2U] = PORT_ASSIGNMENT_MASK;    /* only needed if more than 16 hardware Channel_u16s are available */
		#endif
		#if DMA_HW_Channel_u16_NUMBER > HW_CHANNEL_U16_NUMBER_24
		Dma_GlobalRegister->DMA_PAR[3U] = PORT_ASSIGNMENT_MASK;    /* only needed if more than 24 hardware Channel_u16s are available */
		#endif

		/* ====== Initialization of Channel_u16 Priority Register ====== */
		/* No initialization needed, all Channel_u16s are set to low priority after reset. */
		/* ====== Initialization of Interrupt Mapping Registers ====== */
		/* No initialization needed, all requests are routed to ARM core after reset. */
		/* ====== Initialization of Fall Back Register ====== */
		/* Currently unknown if initialization is needed. */
		/* ====== Initialization of Port Control Register ====== */
		/* Currently unknown if initialization is needed. */
		/* Note: Definition of priority scheme (fixed priority/round robin) can be made in this register. */
		/* Note: DMA module of TMS570 uses a FIFO buffer.
		* Bypassing of FIFO can be switched on in this register. */
		/* ====== Initialization of RAM Test Control Register ====== */
		/* Currently unknown if initialization is needed. */
		/* ====== Initialization of Debug Control Register ====== */
		/* Currently unknown if initialization is needed. */
		/* ====== Initialization of Watch Point Register ====== */
		/* Currently unknown if initialization is needed. */
		/* ====== Initialization of Watch Mask Register ====== */
		/* Currently unknown if initialization is needed. */
		/* ====== Initialization of Parity Control Register ====== */
		/* Currently unknown if initialization is needed. */
		/* ====== Initialization of Memory Protection Control Register ====== */
		/* Currently unknown if initialization is needed. */
		/* ====== Initialization of Memory Protection Region Registers ====== */
		/* Currently unknown if initialization is needed. */
		Dma_GlobalRegister->DMA_DMAPCR = 0x5U;
		/* ====== Initialization 2 of Global Control Register ====== */
		/* Set DMA to enabled */
		Dma_GlobalRegister->DMA_GCTRL    |= DMA_REQ_MASK;

		/* Set initialization flag to not uninit */
		Dma_ModuleInitFlag = DMA_IDLE;
    }
} /* End of Dma_Init() */


/* @brief  Hardware specific function to deinitialize the DMA module.*/
static void Dma_Setup( const Dma_ChannelSetupType* Setup)
{
    const Dma_RequestType Dma_MapReqLine[5U] =
    {
        {{SPI_DLC_RXUNIT0, SPI_DLC_TXUNIT0}},
        {{SPI_DLC_RXUNIT1, SPI_DLC_TXUNIT1}},
        {{SPI_DLC_RXUNIT2, SPI_DLC_TXUNIT2}},
        {{SPI_DLC_RXUNIT3, SPI_DLC_TXUNIT3}},
        {{SPI_DLC_RXUNIT4, SPI_DLC_TXUNIT4}}
    };

    uint16 Channel_u16;
    uint16 Unit_u16;

    Channel_u16 = Setup->Channel;
    Unit_u16    = Setup->Unit;

    DMA_PRIMARY_CONTROL_PACKET_BASE_ADDRESS->DMA_CHCTRL[Channel_u16].ISADDR   = Setup->SrcAddr;
    DMA_PRIMARY_CONTROL_PACKET_BASE_ADDRESS->DMA_CHCTRL[Channel_u16].IDADDR   = Setup->DstAddr;
    DMA_PRIMARY_CONTROL_PACKET_BASE_ADDRESS->DMA_CHCTRL[Channel_u16].IFTCOUNT = Setup->FCount;
    DMA_PRIMARY_CONTROL_PACKET_BASE_ADDRESS->DMA_CHCTRL[Channel_u16].IETCOUNT = Setup->ECount;
    DMA_PRIMARY_CONTROL_PACKET_BASE_ADDRESS->DMA_CHCTRL[Channel_u16].CHCTRL   = Setup->ChCtrl;

    /* configure the Channel_u16s for Dma transmission channels [0 = Tx, 1= Rx]
     * they will be connected later to the Spi Channel_u16 in DMAxCTRL
     */
    if(Setup->Direction == DMA_TX)
    {
       DMA_PRIMARY_CONTROL_PACKET_BASE_ADDRESS->DMA_CHCTRL[Channel_u16].CHCTRL_CHAIN = 0U;
       /* DMA_REQ_SPIx for C66 TxData */
       Dma_GlobalRegister->DMA_DREQASI[Channel_u16] = Dma_MapReqLine[Unit_u16].DmaReq[1U];
       /* enable channel for hardware requests */
       Dma_GlobalRegister->DMA_HWCHENAS = ((uint32)1U << Channel_u16);
    }
    else
    {
       DMA_PRIMARY_CONTROL_PACKET_BASE_ADDRESS->DMA_CHCTRL[Channel_u16].CHCTRL_CHAIN = 0U;
       /* DMA_REQ_SPIx for C66 RxData */
       Dma_GlobalRegister->DMA_DREQASI[Channel_u16] = Dma_MapReqLine[Unit_u16].DmaReq[0U];
       /* enable FTC interrupts only on channel 1 (Rx ready) */
       Dma_GlobalRegister->DMA_BTCINTENAS = ((uint32)1U << Channel_u16);
       /* enable channel for hardware requests */
       Dma_GlobalRegister->DMA_HWCHENAS = ((uint32)1U << Channel_u16);
    }

    DMA_PRIMARY_CONTROL_PACKET_BASE_ADDRESS->DMA_CHCTRL[Channel_u16].EIDXS    = Setup->EISrcInc;
    DMA_PRIMARY_CONTROL_PACKET_BASE_ADDRESS->DMA_CHCTRL[Channel_u16].EIDXD    = Setup->EIDstInc;
    DMA_PRIMARY_CONTROL_PACKET_BASE_ADDRESS->DMA_CHCTRL[Channel_u16].FIDXS    = Setup->FISrcInc;
    DMA_PRIMARY_CONTROL_PACKET_BASE_ADDRESS->DMA_CHCTRL[Channel_u16].FIDXD    = Setup->FIDstInc;
}





#endif

/* static structures */
static Spi_HwInstType Spi_HwSeqIdInst_t[SPI_MAX_HWUNIT];
/* job event structure, for actual job */
static Spi_HwEventType Spi_HwJobEvent_at[SPI_MAX_HWUNIT];
/* data structure for Spi_Dlc.c */
static Spi_DlcEventType Spi_DlcSetEvent_t[SPI_MAX_HWUNIT];

#if (SPI_LEVEL_DELIVERED == SPI_LEVEL_2)
/* mode variable */
/*lint -e551 LINT:OTHER:Symbol not referenced. */
static Spi_AsyncModeType Spi_HwMode_t;
#endif


/** @brief Spi Hw Seq Consume Event.
 *  @param[in]        HW_Inst_Nr_u8 - Instance of the SPI Hw.
 */
static void Spi_HwSeqConsumeEvent(uint16_least HW_Inst_Nr_u8)
{
    uint16_least SeqId_u16;
    Spi_HwEventDefType ev_loc_t ;

    SeqId_u16  = Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqIdAkt_u8;

    Spi_GlobalSuspend();
    /* back it up */
    ev_loc_t = (Spi_HwEventDefType) Spi_HwSeqEvent_at[SeqId_u16].Event_u8 ;
    /* consume event in global structure */
    Spi_HwSeqEvent_at[SeqId_u16].Event_u8 = (uint8)SPI_HW_EV_CONSUMED;
    Spi_GlobalRestore();

    /* @CODECOV:OTHER_TEST_EXIST: As injecting a hardware error depends on HW support the only case considered here is SPI_HW_EV_SEQ_START. */
    switch (ev_loc_t)
    {
        case SPI_HW_EV_INIT:
        break;

        case SPI_HW_EV_SEQ_START:
        Spi_HwJobEvent_at[HW_Inst_Nr_u8].Event_u8 = (uint8)SPI_HW_EV_JOB_START ;  /* start first job */
        Spi_HwJobConsumeEvent(HW_Inst_Nr_u8) ;
        break;

        case SPI_HW_EV_CANCEL:
        break;

        case SPI_HW_EV_FAILED:
        /* if a job fails, a sequence also fails ! See Spi_HwJobConsumeEvent() */
        break;

        default:
        break;
    }
}

/** @brief Spi Hw Job Consume Event.
 *  @param[in]        HW_Inst_Nr_u8 - Instance of the SPI Hw.
 */
static void Spi_HwJobConsumeEvent(uint16_least HW_Inst_Nr_u8)
{
    Spi_HwEventDefType ev_loc ;

    Spi_GlobalSuspend();
    ev_loc = (Spi_HwEventDefType) Spi_HwJobEvent_at[HW_Inst_Nr_u8].Event_u8 ;
    /* consume event in global structure */
    Spi_HwJobEvent_at[HW_Inst_Nr_u8].Event_u8 = (uint8)SPI_HW_EV_CONSUMED ;
    Spi_GlobalRestore();

    switch (ev_loc)
    {
    	/* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: This is never used and not testable, so removed from coverage. Could be removed from code too. */
        case SPI_HW_EV_INIT:
        	break;

        case SPI_HW_EV_JOB_START:
			/* start a job. If this job is synchronous it has to be decoupled from the ISR context */
			if(Spi_DlcSetEvent_t[HW_Inst_Nr_u8].Event_u8 == (uint8)SPI_DLC_EV_SYNCTX)
			{
				/* @CODECOV:REDUNDANT_PARAMETER_VALIDATION This can only be true if an already consumed event is scheduled for consumption. */
				if(Spi_DlcSetEvent(&Spi_DlcSetEvent_t[HW_Inst_Nr_u8]) == E_NOT_OK)
				{
					/* job transfer request was declined */
					Spi_JobsSorted_at[Spi_HwJobEvent_at[HW_Inst_Nr_u8].TaskID_u8].JobStatus_u8 = (uint8)SPI_JOB_PENDING ;
					Spi_HwJobEvent_at[HW_Inst_Nr_u8].Event_u8 = (uint8)SPI_HW_EV_JOB_START;
					Spi_DlcSetEvent_t[HW_Inst_Nr_u8].Event_u8 = (uint8)SPI_DLC_EV_SYNCTX;
				}
				else
				{
					/* no action */
				}

			}
			else
			{
				Spi_HwJobTransmit(HW_Inst_Nr_u8) ;
			}
			break;

        case SPI_HW_EV_JOB_FINISHED:
			/* check if a sequence has completed */
			Spi_HwSeqComplete(HW_Inst_Nr_u8);
			/* transmit a new job if it is pending */
			Spi_HwJobTransmit(HW_Inst_Nr_u8) ;
			break;


		/* @CODECOV:HARDWARE_DEPENDENCY_STATUS_BIT:Removed from coverage because generating hardware error depends on external HW support */
        case SPI_HW_EV_CANCEL:
        	break;

		 /* @CODECOV:HARDWARE_DEPENDENCY_STATUS_BIT:Removed from coverage because generating hardware error depends on external HW support */
        case SPI_HW_EV_FAILED:
			/* clean up the failed sequence */
			Spi_HwSeqCleanUp(HW_Inst_Nr_u8);
			/* transmit a new job if it is pending */
			Spi_HwJobTransmit(HW_Inst_Nr_u8) ;
			break;

        default:
        	break;
    }
}

 /** @brief This method sort jobs by priority.
 */
static void Spi_HwJobsSort(void)
{
    uint16_least JobIdx_u16;    /* job Id index for loop  */
    uint16_least SortedIdx_u16; /* Sorted index for priority array */
    uint16_least PrioIdx_u16;   /* priority index for loop*/
    uint16_least Prio_u16;      /* priority of a job */
    uint8_least  JobId;

    /* sort jobs by priority */
    /* sorting looks like this:
     *  Id             prio             ->  Id          prio
     * Job0             1          ------>  Job1         3
     * Job1             3  -------/         Job2         2
     * Job2             2                   Job4         2
     * Job3             0                   Job0         1
     * Job4             2                   Job3         0*/

    /* this loop decreases the priority from max to min */
    Prio_u16 = SPI_MAX_JOB_PRIO ;
    SortedIdx_u16 = 0U;
    for(PrioIdx_u16 = 0U ; PrioIdx_u16 <= SPI_MAX_JOB_PRIO ; PrioIdx_u16++)
    {
        /* this loop searches for all jobs with the same priority */
        for(JobIdx_u16 = 0U ; JobIdx_u16 < Spi_ConfigPtr_pt->Spi_MaxJobs ; JobIdx_u16++)
        {
            /* scan for actual priority */
            if(Spi_ConfigPtr_pt->Spi_JobCfg[JobIdx_u16].Spi_JobPrio == Prio_u16)
            {
                JobId = Spi_ConfigPtr_pt->Spi_JobCfg[JobIdx_u16].Spi_JobID;
                /* assign first job with highest priority [3,2,1,0] */
                Spi_JobsSorted_at[SortedIdx_u16].JobID_u8 = (uint8)JobId;
                Spi_JobPrioConvTbl_at[JobId] = (uint8)SortedIdx_u16;
                SortedIdx_u16++;
                /* job assigned, scan for next */
            }
            else
            {
                /* no action */
            }
            Spi_JobsSorted_at[JobIdx_u16].SeqID_u8  = ALL_BITS_HIGH_MASK_8 ;
        }
        /* scan all jobs for next lower priority */
        Prio_u16--;
    }
}


 /** @brief This method queues jobs by priority.
  *  @param[in]        SequenceID - Sequence ID.
  *  @return		   Whether the job has been accepted or not.
  *  @retval E_OK      Job has been accepted
  *  @retval E_NOT_OK  Job has not been accepted
 */
static Std_ReturnType Spi_HwJobQueue(uint16_least SequenceID){
    uint16_least JobCnt_u16; /* loop over the number of jobs in a sequence */
    uint16_least JobIdx_u16; /* index to loop over the max number of jobs */
    uint16_least JobId_u16;  /* ID of a job*/
    Spi_JobSortedType* JobChain_pt; /* pointer for a sequence chain of jobs */
    Std_ReturnType HwJobQueueReturn = E_OK;

    /* first check all jobs if they are allowed to be queued */
    for(JobCnt_u16 = 2U ; JobCnt_u16 <= (Spi_ConfigPtr_pt->Spi_SeqCfg[SequenceID].Spi_JobList[1U] + 1U) ; JobCnt_u16++)
    {
        /* get first assigned job of a sequence, starts a index 1 */
        JobId_u16  = Spi_ConfigPtr_pt->Spi_SeqCfg[SequenceID].Spi_JobList[JobCnt_u16];
        JobIdx_u16 = Spi_JobPrioConvTbl_at[JobId_u16];
        /* check the job for collision  */
#if defined(CFG_TMS570LS12X)
        /* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: Always false due to no commonly used jobs. perhaps a test could be written for this, but for now remove from coverage. */
        if(  (Spi_JobsSorted_at[JobIdx_u16].JobStatus_u8 == (uint8)SPI_JOB_PENDING)
          || (Spi_JobsSorted_at[JobIdx_u16].JobStatus_u8 == (uint8)SPI_JOB_QUEUED))
        {
            /* the sequence is rejected due to common used jobs */
        	HwJobQueueReturn = E_NOT_OK ;
        	break;
        }
#elif defined(CFG_TMS570LC43X)
        if(  (Spi_JobsSorted_at[JobIdx_u16].JobStatus_u8 == (uint8)SPI_JOB_PENDING)
          || (Spi_JobsSorted_at[JobIdx_u16].JobStatus_u8 ==(uint8) SPI_JOB_ACTIVE))
        {
            /* the sequence is rejected due to common used jobs */
        	HwJobQueueReturn = E_NOT_OK ;
        	break;
        }
#else
#error This SPI driver does not support this MCU.
#endif
    }

    /* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: Since we do not have commonly used jobs and previous check does not set to E_NOT_OK, this is always true and removed from coverage */
    if(HwJobQueueReturn == E_OK){
		/* checking passed, continue to queue
		 * clear last index marker
		 */
		JobChain_pt = (Spi_JobSortedType *) NULL_PTR;
		/* loop over all jobs sorted by priority */
		for(JobCnt_u16 = 2U ; JobCnt_u16 <= ( Spi_ConfigPtr_pt->Spi_SeqCfg[SequenceID].Spi_JobList[1U] + 1U) ; JobCnt_u16++)
		{
			/* get first assigned job of a sequence, starts a index 1 */
			JobId_u16  = Spi_ConfigPtr_pt->Spi_SeqCfg[SequenceID].Spi_JobList[JobCnt_u16] ;
			JobIdx_u16 = Spi_JobPrioConvTbl_at[JobId_u16];
			/* assign the first job with highest priority in a sequence */
			Spi_JobsSorted_at[JobIdx_u16].SeqID_u8   = (uint8)SequenceID ;
			/* job is marked for transfer */
			Spi_JobsSorted_at[JobIdx_u16].JobStatus_u8 = (uint8)SPI_JOB_PENDING ;
			/* now build up job chain */
			if(JobChain_pt != NULL_PTR)
			{
				/* set next pointer to second assigned job */
				JobChain_pt->JobNext_pt = &Spi_JobsSorted_at[JobIdx_u16];
			}
			else
			{
				/* no action */
			}
			/* set global job status*/
	#if defined(CFG_TMS570LS12X)
			Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_JobResult[JobId_u16] = SPI_JOB_PENDING;
	#elif defined(CFG_TMS570LC43X)
			Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_JobResult[JobId_u16] = SPI_JOB_QUEUED;
	#else
	#error This SPI driver does not support this MCU.
	#endif
			/* save actual pointer to chain pointer for later use */
			JobChain_pt = &Spi_JobsSorted_at[JobIdx_u16];
		}
		/* all jobs accepted and queued,
		 * sequence successfully added
		 */
		Spi_HwSeqIdInst_t[Spi_ConfigPtr_pt->Spi_SeqCfg[SequenceID].Spi_JobList[0U]].SeqNrPend_u8++ ;
    }
    return(HwJobQueueReturn) ;
}

/***********************************************************************************************************************
 *  Spi_HwJobClear
 **********************************************************************************************************************/
 /** @brief This method clears queued jobs.
  *  @param[in]        SequenceID - Sequence ID.
 */
static void Spi_HwJobClear(uint16_least SequenceID){
    uint16_least JobIdx_u16; /* index to loop over the max number of jobs */
    uint16_least JobId_u16;  /* ID of a job*/
    Spi_JobSortedType* JobChain_pt; /* pointer for a sequence chain of jobs */
    Spi_JobSortedType* JobAkt_pt;   /* pointer for a job chain in a sequence */

    /* get first assigned job of a sequence, starts a index 1 */
    JobId_u16   = Spi_ConfigPtr_pt->Spi_SeqCfg[SequenceID].Spi_JobList[2U] ;
    JobIdx_u16  = Spi_JobPrioConvTbl_at[JobId_u16];
    JobChain_pt = &Spi_JobsSorted_at[JobIdx_u16];

    /* now clean up the remaining chained jobs */
    while(JobChain_pt != NULL_PTR)
    {
        /* clear all pending jobs belonging to this sequence */
        JobId_u16 = JobChain_pt->JobID_u8;
#if defined(CFG_TMS570LS12X)
        /* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: This routine is referenced after the job is finished so JobStatus_u8 is always SPI_JOB_QUEUED. */
        if( (JobChain_pt->JobStatus_u8 == (uint8)SPI_JOB_PENDING)
        	|| (JobChain_pt->JobStatus_u8 == (uint8)SPI_JOB_QUEUED))
        {
            /* set job state */
            JobChain_pt->JobStatus_u8  = (uint8)SPI_JOB_OK;
            Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_JobResult[JobId_u16] = SPI_JOB_OK;
        }
#elif defined(CFG_TMS570LC43X)
        if(  (JobChain_pt->JobStatus_u8 == (uint8)SPI_JOB_PENDING)
          || (JobChain_pt->JobStatus_u8 == (uint8)SPI_JOB_ACTIVE))
        {
            /* set job state */
            JobChain_pt->JobStatus_u8  = (uint8)SPI_JOB_OK;
            Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_JobResult[JobId_u16] = SPI_JOB_OK;
        }
#else
#error This SPI driver does not support this MCU.
#endif
        /* save current job */
        JobAkt_pt   = JobChain_pt;
        /* get next job */
        JobChain_pt = JobAkt_pt->JobNext_pt;
        /* and remove the reference */
        JobAkt_pt->JobNext_pt = NULL_PTR;
    }
    /* clear number of jobs */
    Spi_HwSeqEvent_at[SequenceID].NrOfJobs_u8 = 0U ;
    return;
}

#if defined(CFG_TMS570LS12X)
 /** @brief This method transmits queued jobs.
  *  @param[in]        HW_Inst_Nr_u8 - Instance of the SPI Hw..
 */
static void Spi_HwJobTransmit(uint16_least HW_Inst_Nr_u8){
    uint16_least JobCnt_u16;
    uint16_least JobIdx_u16;    /* index to loop over the max number of jobs */
    uint16_least SeqId_u16;     /* ID of a sequence */
    uint16_least SeqIdAt_u16;   /* ID of a sequence attached to a job */
    uint16_least SeqIdRep_u16;  /* ID of a sequence reported by a job complete */

    /* skip the remaining code, if no sequence has been queued */
    if(Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqNrPend_u8 == 0U)
    {
        /* Do nothing */
    }
    else
    {
        /* get actual sequence ID */
        SeqId_u16    = Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqIdAkt_u8;
        /* get reported sequence ID, but beware of the init value */
        SeqIdRep_u16 = Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqIdRep_u8;

        /* if a synchronous sequence was reported, finish the complete sequence regardless of job priority */
        /* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: Not possible to get here while a synchronous sequence is in progress, so always false and removed from coverage */
        if(  (SeqIdRep_u16 != 0x00FFU)
          && (Spi_HwSeqEvent_at[SeqIdRep_u16].Guard_u8 == (uint8)SPI_HW_SYNC) )
        {
            JobIdx_u16 =  Spi_JobPrioConvTbl_at[Spi_HwJobEvent_at[HW_Inst_Nr_u8].TaskID_u8];
            Spi_JobsSorted_at[JobIdx_u16].JobNext_pt->JobStatus_u8 = (uint8)SPI_JOB_QUEUED ;
            /* now prepare job transmission ! */
            Spi_DlcSetEvent_t[HW_Inst_Nr_u8].JobID_u8 = Spi_JobsSorted_at[JobIdx_u16].JobNext_pt->JobID_u8;
            Spi_DlcSetEvent_t[HW_Inst_Nr_u8].Event_u8 = (uint8)SPI_DLC_EV_SYNCTX;
            Spi_HwJobEvent_at[HW_Inst_Nr_u8].Event_u8 = (uint8)SPI_HW_EV_JOB_START;
        }
        else
        {
        	/* @CODECOV:SEARCHING_FOR_ELEMENT_IN_ARRAY: Always true because the loop is ended using a break, so removed from coverage, but really,
        	 * it should be written differently. Removed from coverage as always true. */
        	/*lint --e{9011} MISRA:OTHER:Readability:[MISRA 2012 Rule 15.4, advisory] */
            /* search for serviceable jobs in the Seq*/
            for(JobCnt_u16 = 2U; JobCnt_u16 <= ( Spi_ConfigPtr_pt->Spi_SeqCfg[SeqId_u16].Spi_JobList[1U] + 1U) ; JobCnt_u16++)
            {
                /* get first assigned job of a sequence, starts a index 1 */
                JobIdx_u16 = Spi_JobPrioConvTbl_at[Spi_ConfigPtr_pt->Spi_SeqCfg[SeqId_u16].Spi_JobList[JobCnt_u16]];

                /* check all jobs if they are marked for transmission     */
                /* one of these jobs will be transmitted, done by queuing */
                if(  (Spi_JobsSorted_at[JobIdx_u16].JobStatus_u8 == (uint8)SPI_JOB_PENDING)
                  /* @CODECOV:OTHER_TEST_EXIST: Job is never queued for MCAL tests.  */
                  || (Spi_JobsSorted_at[JobIdx_u16].JobStatus_u8 == (uint8)SPI_JOB_QUEUED ))
                {
                    /* if a job is marked for transmission, but belongs not to the actual
                     * sequence, it can be transmitted because the JobIdx_u16 loop goes from highest to lowest priority
                     * get Job ID
                     */
                    Spi_DlcSetEvent_t[HW_Inst_Nr_u8].JobID_u8 = Spi_JobsSorted_at[JobIdx_u16].JobID_u8;
                    SeqIdAt_u16                = Spi_JobsSorted_at[JobIdx_u16].SeqID_u8;
                    /* if a sequence is synchronous, handle this first. This also includes a reported sequence
                     * If a job starts a sync sequence, this sequence must be transmitted completely regardless
                     * of the job priority
                     */
                    if(   (Spi_HwSeqEvent_at[SeqId_u16].Guard_u8    == (uint8)SPI_HW_SYNC)
                    /* @CODECOV:OTHER_TEST_EXIST: Job is never queued for MCAL tests.  */
                       || (Spi_HwSeqEvent_at[SeqIdAt_u16].Guard_u8  == (uint8)SPI_HW_SYNC))
                    {
                        /* now prepare job transmission ! */
                        Spi_DlcSetEvent_t[HW_Inst_Nr_u8].Event_u8 = (uint8)SPI_DLC_EV_SYNCTX;
                        Spi_HwJobEvent_at[HW_Inst_Nr_u8].Event_u8 = (uint8)SPI_HW_EV_JOB_START;
                        /* the transmission should not take place in an ISR context, so break here and schedule again */
                        break;
                    }
                    else
                    {
                        Spi_DlcSetEvent_t[HW_Inst_Nr_u8].Event_u8 = (uint8)SPI_DLC_EV_ASYNCTX;
                    }
                    /* if the sequence interruptible and a job is not attached to this sequence */
                    /* @CODECOV:OTHER_TEST_EXIST: no such test to make SeqIdAt_u16 != SeqId_u16, so always false and removed from coverage */
                    if(  (Spi_ConfigPtr_pt->Spi_SeqCfg[SeqId_u16].Spi_SeqInt == TRUE)
                      && (SeqIdAt_u16 != SeqId_u16))
                    {
                        /* prepare job transmission ! */
                        Spi_JobsSorted_at[JobIdx_u16].JobStatus_u8 = (uint8)SPI_JOB_QUEUED ;
                    }

                    /* sequence is not interruptible */
                    else
                    {
                    	/* We get here because SeqIdAt_u16 == SeqId_u16 so this is always true and removed from coverage. */
                        if(SeqIdAt_u16 == SeqId_u16)
                        {
                            /* job transmission is asynchronous */
                            Spi_JobsSorted_at[JobIdx_u16].JobStatus_u8 = (uint8)SPI_JOB_QUEUED ;
                        }
                        else
                        {
                            /* no action */
                        }
                    }

                    /* This was already checked in this function so is we got here, it is true and removed from coverage */
                    if(Spi_JobsSorted_at[JobIdx_u16].JobStatus_u8 == (uint8)SPI_JOB_QUEUED)
                    {
                        if(Spi_DlcSetEvent(&Spi_DlcSetEvent_t[HW_Inst_Nr_u8]) == E_NOT_OK)
                        {
                            /* job transfer request was declined */
                            Spi_JobsSorted_at[JobIdx_u16].JobStatus_u8 = (uint8)SPI_JOB_PENDING ;
                            Spi_HwJobEvent_at[HW_Inst_Nr_u8].Event_u8 = (uint8)SPI_HW_EV_JOB_START;
                            Spi_DlcSetEvent_t[HW_Inst_Nr_u8].Event_u8 = (uint8)SPI_DLC_EV_CONSUMED;
                        }
                        else
                        {
                            /* no action */
                        }
                        break ;
                    }
                }
                else
                {
                    /* no action */
                }
            }
        }
    }
}
#elif defined(CFG_TMS570LC43X)
/***********************************************************************************************************************
 *  Spi_HwJobTransmit
 **********************************************************************************************************************/
 /** @brief This method transmits queued jobs.
  *  @param[in]        HW_Inst_Nr_u8 - Instance of the SPI Hw.
 */
static void Spi_HwJobTransmit(uint16_least HW_Inst_Nr_u8){
    uint16_least JobCnt_u16;
    uint16_least JobIdx_u16;    /* index to loop over the max number of jobs */
    uint16_least SeqId_u16;     /* ID of a sequence */
    uint16_least SeqIdAt_u16;   /* ID of a sequence attached to a job */

    /* skip the remaining code, if no sequence has been queued */
    if(Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqNrPend_u8 == 0U)
    {
        /* Do nothing */
    }
    else
    {
        /* get actual sequence ID */
        SeqId_u16    = Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqIdAkt_u8;

        /* search for serviceable jobs in the Seq*/
        for(JobCnt_u16 = 2U; JobCnt_u16 <= ( Spi_ConfigPtr_pt->Spi_SeqCfg[SeqId_u16].Spi_JobList[1U] + 1U) ; JobCnt_u16++)
        {
            /* get first assigned job of a sequence, starts a index 1 */
            JobIdx_u16 = Spi_JobPrioConvTbl_at[Spi_ConfigPtr_pt->Spi_SeqCfg[SeqId_u16].Spi_JobList[JobCnt_u16]];

            /* check all jobs if they are marked for transmission     */
            /* one of these jobs will be transmitted, done by queuing */
            if(  (Spi_JobsSorted_at[JobIdx_u16].JobStatus_u8 == (uint8)SPI_JOB_PENDING)
              || (Spi_JobsSorted_at[JobIdx_u16].JobStatus_u8 == (uint8)SPI_JOB_ACTIVE ))
            {
                /* if a job is marked for transmission, but belongs not to the actual
                 * sequence, it can be transmitted because the JobIdx_u16 loop goes from highest to lowest priority
                 * get Job ID
                 */
                Spi_DlcSetEvent_t[HW_Inst_Nr_u8].JobID_u8 = Spi_JobsSorted_at[JobIdx_u16].JobID_u8;
                SeqIdAt_u16                = Spi_JobsSorted_at[JobIdx_u16].SeqID_u8;

                Spi_DlcSetEvent_t[HW_Inst_Nr_u8].Event_u8 = (uint8)SPI_DLC_EV_ASYNCTX;

                /* if the sequence interruptible and a job is not attached to this sequence */
                if(  (Spi_ConfigPtr_pt->Spi_SeqCfg[SeqId_u16].Spi_SeqInt == TRUE)
                  && (SeqIdAt_u16 != SeqId_u16))
                {
                    /* prepare job transmission ! */
                    Spi_JobsSorted_at[JobIdx_u16].JobStatus_u8 = (uint8)SPI_JOB_ACTIVE ;
                    /* Set Global Status */
                    Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_JobResult[Spi_JobsSorted_at[JobIdx_u16].JobID_u8] = SPI_JOB_PENDING;
                }
                /* sequence is not interruptible */
                else
                {
                    if(SeqIdAt_u16 == SeqId_u16)
                    {
                        /* job transmission is asynchronous */
                        Spi_JobsSorted_at[JobIdx_u16].JobStatus_u8 = (uint8)SPI_JOB_ACTIVE ;
                        /* Set Global Status */
                        Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_JobResult[Spi_JobsSorted_at[JobIdx_u16].JobID_u8] = SPI_JOB_PENDING;
                    }
                    else
                    {
                        /* no action */
                    }
                }
                if(Spi_JobsSorted_at[JobIdx_u16].JobStatus_u8 == (uint8)SPI_JOB_ACTIVE)
                {
                    if(Spi_DlcSetEvent(&Spi_DlcSetEvent_t[HW_Inst_Nr_u8]) == E_NOT_OK)
                    {
                        /* job transfer request was declined */
                        Spi_JobsSorted_at[JobIdx_u16].JobStatus_u8 = (uint8)SPI_JOB_PENDING ;
                        Spi_HwJobEvent_at[HW_Inst_Nr_u8].Event_u8 = (uint8)SPI_HW_EV_JOB_START;
                        Spi_DlcSetEvent_t[HW_Inst_Nr_u8].Event_u8 = (uint8)SPI_DLC_EV_CONSUMED;
                    }
                    else
                    {
                        /* no action */
                    }
                    break ;
                }
             }
             else
             {
                 /* no action */
             }
        }
    }
}
#else
#error This SPI driver does not support this MCU.
#endif

/** @brief Spi Hw Seq Adjust
 *  @param[in]  SequenceID - Sequence ID.
 */
static void Spi_HwSeqAdjust(uint16_least SequenceID){
	if(Spi_HwSeqEvent_at[SequenceID].SeqPrev_pt != NULL_PTR)
	{
		/* adjust pointer to prev sequence */

		/* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: if there is a next sequence, the pointer to it can not be NULL_PTR unless user edits the config files,
		 * so this is always true and removed from coverage. */
        if(Spi_HwSeqEvent_at[SequenceID].SeqNext_pt != NULL_PTR)
        {
            Spi_HwSeqEvent_at[SequenceID].SeqNext_pt->SeqPrev_pt = Spi_HwSeqEvent_at[SequenceID].SeqPrev_pt;
        }
	}
    if(Spi_HwSeqEvent_at[SequenceID].SeqNext_pt != NULL_PTR)
    {
    	/* adjust pointer to next sequence */
        if(Spi_HwSeqEvent_at[SequenceID].SeqPrev_pt != NULL_PTR)
        {
            Spi_HwSeqEvent_at[SequenceID].SeqPrev_pt->SeqNext_pt = Spi_HwSeqEvent_at[SequenceID].SeqNext_pt;
        }
    }
    /* clear pointer's */
    Spi_HwSeqEvent_at[SequenceID].SeqNext_pt = NULL_PTR;
    Spi_HwSeqEvent_at[SequenceID].SeqPrev_pt = NULL_PTR;
}


/** @brief Spi Seq Next
 *  @param[in]  HW_Inst_Nr_u8 - Instance of the SPI Hw.
 */
static void Spi_HwSeqNext(uint16_least HW_Inst_Nr_u8){
    uint16_least SeqId_u16;    /* Id of a sequence */

    /* this sequence was reported as finished */
    SeqId_u16 = Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqIdRep_u8;
    /* we need to check the sequence which was reported by JobComplete */
    /* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: The routine is referenced in case of HW error after canceling current sequence */
    if(Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqNrPend_u8 == 0U)
    {
        /* all sequences were executed, set global status to IDLE */
        /* clear pointer's */
        Spi_HwSeqEvent_at[SeqId_u16].SeqNext_pt = NULL_PTR;
        Spi_HwSeqEvent_at[SeqId_u16].SeqPrev_pt = NULL_PTR;
        Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqIdAkt_u8  = ALL_BITS_HIGH_MASK_8;
        Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqIdPend_u8 = ALL_BITS_HIGH_MASK_8;
        Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqIdRep_u8  = ALL_BITS_HIGH_MASK_8;
        Spi_DrvStatus = SPI_IDLE;
    }
    else
    {
        /* check if this sequence is the one actually being exectuted */
        if(Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqIdAkt_u8 == SeqId_u16)
        {
            /* set next sequence to execute */
            Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqIdAkt_u8 = Spi_HwSeqEvent_at[SeqId_u16].SeqNext_pt->TaskID_u8;
        }
        else
        {
            /* no action */
        }
        /* due to the priority of the jobs, any sequence may be reported as finished */
        /* so the pointers need to be adjusted and the next sequence in line has to be executed */
        Spi_HwSeqAdjust(SeqId_u16);
    }
}


/* @CODECOV:HARDWARE_DEPENDENCY_STATUS_BIT:Removed from coverage because generating hardware error depends on external HW support */

/** @req SWS_Spi_00267 - When a hardware error is detected, the SPI Handler/Driver shall stop the current Sequence, report an error to the DEM
 * as configured and set the state of the Job to SPI_JOB_FAILED and the state of the Sequence to SPI_SEQ_FAILED. */
 
/** @brief Spi Seq Clean Up
 *  @param[in]  HW_Inst_Nr_u8 - Instance of the SPI Hw.
 */
static void Spi_HwSeqCleanUp(uint16_least HW_Inst_Nr_u8){
    uint16_least JobIdx_u16;    /* Index of a job   */
    uint16_least JobId_u16;     /* ID of a job      */
    uint16_least SeqId_u16;    /* Id of a sequence */

    Spi_JobSortedType* JobChain_pt; /* pointer for a job chain in a sequence */
    Spi_JobSortedType* JobAkt_pt;   /* pointer for a job chain in a sequence */

    /* this sequence was reported as finished */
    SeqId_u16 = Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqIdRep_u8;
    /* this is set by the DLC module, every time a job has completed */
    JobId_u16   = Spi_HwJobEvent_at[HW_Inst_Nr_u8].TaskID_u8;
    JobIdx_u16  = Spi_JobPrioConvTbl_at[JobId_u16];
    /* set chain pointer */
    JobChain_pt = &Spi_JobsSorted_at[JobIdx_u16];

    /* Enter Critical Section */
    Spi_GlobalSuspend();

    /* next seek all jobs belonging to this sequence  and clear these jobs */
    while(JobChain_pt != NULL_PTR)
    {
        JobId_u16 = JobChain_pt->JobID_u8;
        /* reset sequence ID */
        JobChain_pt->SeqID_u8 = ALL_BITS_HIGH_MASK_8;
        /* set jobstate */
        JobChain_pt->JobStatus_u8  = (uint8)SPI_JOB_FAILED;
        Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_JobResult[JobId_u16] = SPI_JOB_FAILED;
        /* save current job */
        JobAkt_pt = JobChain_pt;
        /* get next job */
        JobChain_pt = JobAkt_pt->JobNext_pt;
        /* and remove the reference */
        JobAkt_pt->JobNext_pt = NULL_PTR;
    }
    /* clear number of jobs */
    Spi_HwSeqEvent_at[SeqId_u16].NrOfJobs_u8 = 0U;
    /* clear transmission mode */
    Spi_HwSeqEvent_at[SeqId_u16].Guard_u8    = (uint8)SPI_HW_UNDEF;

    Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqNrPend_u8--;
    /* set sequence result */
    Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_SeqResult[SeqId_u16] = SPI_SEQ_FAILED ;

    /* goto next sequence */
    Spi_HwSeqNext(HW_Inst_Nr_u8);
    /* now call configured sequence error notification */
    if(Spi_ConfigPtr_pt->Spi_SeqCfg[SeqId_u16].Spi_SequenceEndNotification != NULL_PTR)
    {
        Spi_ConfigPtr_pt->Spi_SeqCfg[SeqId_u16].Spi_SequenceEndNotification() ;
    }

    /* Exit Critical Section */
    Spi_GlobalRestore();
}



/** @brief Complite a Hw Sequence to the SPI bus.
 *  @param[in]        HW_Inst_Nr_u8 - Instance of the SPI Hw.
 */
static void Spi_HwSeqComplete(uint16_least HW_Inst_Nr_u8)
{
    uint16_least SeqId_u16;    /* Id of a sequence */

    /* this sequence was reported as finished */
    SeqId_u16 = Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqIdRep_u8;

    /* now check if a sequence has completed */
    if((Spi_HwSeqEvent_at[SeqId_u16].NrOfJobs_u8 == 0U)
    		/* @CODECOV:REDUNDANT_PARAMETER_VALIDATION_ The routine is referenced after a sequence ends, so SeqId_u16 has previously
    		 * been changed and this condition is always true. */
    		&& (SeqId_u16 != ALL_BITS_HIGH_MASK_8)
    		)
    {
        /* Enter Critical Section */
        Spi_GlobalSuspend();

        /* check if sequence has been canceled */
        if(Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_SeqResult[SeqId_u16] != SPI_SEQ_CANCELLED)
        {
            /* this part has already been done in the cancel part */
            Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqNrPend_u8--;
            Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_SeqResult[SeqId_u16] = SPI_SEQ_OK;
        }
        /* clear transmission mode */
        Spi_HwSeqEvent_at[SeqId_u16].Guard_u8 = (uint8)SPI_HW_UNDEF;
        /* goto next sequence, handled in the Processing function */
        Spi_HwSeqNext(HW_Inst_Nr_u8);

        /** @req SWS_Spi_00120 - When a valid notification function pointer is configured, the SPI Handler/Driver shall call this notification function at the
        end of a Sequence transmission regardless of the result of the Sequence transmission being either SPI_SEQ_FAILED, SPI_SEQ_OK or SPI_SEQ_CANCELLED. */
        /** @req SWS_Spi_00264 - Use the callback routines Spi_SeqEndNotification to inform other software modules about certain states or state changes. */
        /* call configured sequence end notification */
        if(Spi_ConfigPtr_pt->Spi_SeqCfg[SeqId_u16].Spi_SequenceEndNotification != NULL_PTR )
        {
            Spi_ConfigPtr_pt->Spi_SeqCfg[SeqId_u16].Spi_SequenceEndNotification() ;
        }

        /* Exit Critical Section */
        Spi_GlobalRestore();
    }
    else
    {
        /* no action */
    }
}


/** @brief Complite a Hw job to the SPI bus.
 *  @param[in]        Job_u16 - Index of a job.
 *  @param[in]        DLC_u16 - Instance of the SPI Hw.
 */
static void Spi_HwJobComplete(uint16_least Job_u16, uint16_least DLC_u16)
{
    uint16_least JobIdx_u16;    /* Index of a job*/
    uint16_least SeqId_u16;     /* ID of a sequence */

    /* this is set by the DLC module, every time a job has completed */
    JobIdx_u16 = Spi_JobPrioConvTbl_at[Job_u16];
    /* reset job in priority queue */
    /* backup sequence ID */
    SeqId_u16 = Spi_JobsSorted_at[JobIdx_u16].SeqID_u8 ;

    Spi_HwSeqIdInst_t[DLC_u16].SeqIdRep_u8 = (uint8)SeqId_u16;
    Spi_HwJobEvent_at[DLC_u16].TaskID_u8   = (uint8)Job_u16;
    /* reset sequence ID */
    Spi_JobsSorted_at[JobIdx_u16].SeqID_u8 = ALL_BITS_HIGH_MASK_8;

    /* one job less remaining in this sequence */
    if(Spi_HwSeqEvent_at[SeqId_u16].NrOfJobs_u8 > 0U)
    {
        Spi_HwSeqEvent_at[SeqId_u16].NrOfJobs_u8-- ;
    }

    /** @req SWS_Spi_00071 - If the SpiJobEndNotification is configured (i.e. not a null pointer),
     * the SPI Handler/Driver shall call the configured callback notification at the end of a Job transmission. */
    /** @req SWS_Spi_00075 - The SPI Handler/Driver shall use the callback routines Spi_JobEndNotification to
     * inform other software modules about certain states or state changes. */
    /* call notification */
    if(Spi_ConfigPtr_pt->Spi_JobCfg[Job_u16].Spi_JobEndNotification != NULL_PTR)
    {
        /* call job end notification */
        Spi_ConfigPtr_pt->Spi_JobCfg[Job_u16].Spi_JobEndNotification() ;
    }
    /* set result of the JobID */
    /* this is important to do this after the callback notification */
    /* otherwise if a sequence is queued with the same job, the job is reloaded endless */
    /* Now check if an error was detected and update the status */
    /** @req SWS_Spi_00118 - If Jobs are configured with a specific end notification function, the SPI Handler/Driver shall call this
     *  notification function at the end of the Job transmission. */
    /** @req SWS_Spi_00119 - When a valid notification function pointer is configured, the SPI Handler/Driver shall call this notification function at the
    *	end of a Job transmission regardless of the result of the Job transmission being either SPI_JOB_FAILED or SPI_JOB_OK */

    /* @CODECOV:OTHER_TEST_EXIST: Removed from coverage because introducing a DLC error depends on HW support */
    if(Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_DlcResult[DLC_u16] == SPI_DLC_FAILED)
    {
        Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_JobResult[Job_u16] = SPI_JOB_FAILED ;
        Spi_JobsSorted_at[JobIdx_u16].JobStatus_u8 = (uint8)SPI_JOB_FAILED;
        Spi_HwJobEvent_at[DLC_u16].Event_u8 = (uint8)SPI_HW_EV_FAILED ;
    }
    else
    {
        Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_JobResult[Spi_HwJobEvent_at[DLC_u16].TaskID_u8] = SPI_JOB_OK ;
        Spi_JobsSorted_at[JobIdx_u16].JobStatus_u8 = (uint8)SPI_JOB_OK;
        Spi_HwJobEvent_at[DLC_u16].Event_u8 = (uint8)SPI_HW_EV_JOB_FINISHED ;
    }

    /* job was serviced */
    Spi_DlcSetEvent_t[DLC_u16].Event_u8 = (uint8)SPI_DLC_EV_CONSUMED;

    /* reload the next transmission in the current context (interrupt) */
    Spi_HwJobConsumeEvent(DLC_u16) ;
}

/**  @brief Service for SPI HW initialization.
 */
static void Spi_InitController(void){
    uint16_least SeqIdx_u16 ;
    uint16_least HW_Inst_Nr_u8;   /* Instance of the SPI Hw */

    /* reset global data variables */

    for(HW_Inst_Nr_u8 = 0U ; HW_Inst_Nr_u8 < Spi_ConfigPtr_pt->Spi_MaxDlcs ; HW_Inst_Nr_u8++)
    {
      /* reset the working index of current processed sequence in the sequence event array */
      Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqIdAkt_u8  = ALL_BITS_HIGH_MASK_8;
      /* reset the working index of a pending sequence in the sequence event array */
      Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqIdPend_u8 = ALL_BITS_HIGH_MASK_8;
      /* reset the number of current queued sequences */
      Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqNrPend_u8 = 0U;
      /* reset the number of reported sequences */
      Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqIdRep_u8 = ALL_BITS_HIGH_MASK_8;
      Spi_HwJobEvent_at[HW_Inst_Nr_u8].Event_u8 = (uint8)SPI_HW_EV_CONSUMED ;
      Spi_DlcSetEvent_t[HW_Inst_Nr_u8].Event_u8 = (uint8)SPI_DLC_EV_CONSUMED;
    }

#if (SPI_LEVEL_DELIVERED == SPI_LEVEL_2)
    Spi_HwMode_t = SPI_INTERRUPT_MODE;
#endif

    for(SeqIdx_u16 = 0U ; SeqIdx_u16 < Spi_ConfigPtr_pt->Spi_MaxSequences ; SeqIdx_u16++)
    {
        Spi_HwSeqEvent_at[SeqIdx_u16].Event_u8 = (uint8)SPI_HW_EV_CONSUMED ;
        Spi_HwSeqEvent_at[SeqIdx_u16].Guard_u8 = (uint8)SPI_HW_UNDEF ;
    }
    Spi_HwJobsSort() ;
    Spi_DlcInit() ;
}


/** @brief Set Spi HW event
 *  @param[in]        Hw_Event_pt - pointer to Hw_Event.
 *  @return		      Whether the Evant has been set or not.
 *  @retval E_OK      Event has been set
 *  @retval E_NOT_OK  Event has not been set
 */
static Std_ReturnType Spi_HwSetEvent( const Spi_HwEventType* Hw_Event_pt)
{
    uint16_least SeqId_u16;       /* id of a sequence, used as index of the sequence array */
    uint16_least JobNr_u16;       /* number of jobs in a configuration */
    uint16_least HW_Inst_Nr_u8;   /* Instance of the SPI Hw */
    Std_ReturnType Ret_loc ;

    SeqId_u16 = (uint16_least)Hw_Event_pt->TaskID_u8;
    HW_Inst_Nr_u8 =  Spi_ConfigPtr_pt->Spi_SeqCfg[SeqId_u16].Spi_JobList[0U];
    Ret_loc = E_NOT_OK;

    if (Hw_Event_pt->Event_u8 == (uint8)SPI_HW_EV_CANCEL)
    {
        /* start critical section */
        Spi_GlobalSuspend();
        /* only a pending sequence can be cancelled */
        if(Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_SeqResult[SeqId_u16] == SPI_SEQ_PENDING)
        {
            /* only a pending sequence can be canceled */
            /* adjust pointers to next and previous sequence */
            Spi_HwSeqAdjust(SeqId_u16);
            Spi_HwSeqEvent_at[SeqId_u16].Event_u8 = (uint8)SPI_HW_EV_CANCEL;
            Spi_HwSeqEvent_at[SeqId_u16].Guard_u8 = 0U;
            Spi_HwSeqEvent_at[SeqId_u16].NrOfJobs_u8 = 0U;
            Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqNrPend_u8--;
            /* clear all jobs belonging to this sequence */
            Spi_HwJobClear(SeqId_u16) ;
            Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_SeqResult[SeqId_u16] = SPI_SEQ_CANCELLED ;
        }
        else
        {
            /* no action */
        }
        /* stop critical section */
        Spi_GlobalRestore();
    }
    else
    {
        /* start critical section */
        Spi_GlobalSuspend();


        /* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: Calling functions already check if a sequence is pending so this is always true and removed from coverage */
        if(Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_SeqResult[SeqId_u16] != SPI_SEQ_PENDING) /* sequence pending ? */
        {
            /* sequence ID is the index of this array Spi_HwSeqEvent_at[] */
            /* try to queue the jobs, if a job belonging to a sequence is still pending, the check fails */
            Ret_loc = Spi_HwJobQueue(SeqId_u16) ;

            /* Not sure if we can write a test to set this to false, so for now removed from coverage */
            if(Ret_loc == E_OK)
            {
                /* set event ID */
                Spi_HwSeqEvent_at[SeqId_u16].Event_u8  = Hw_Event_pt->Event_u8;
                /* set sequence ID */
                Spi_HwSeqEvent_at[SeqId_u16].TaskID_u8 = (uint8)SeqId_u16;
                /* set sequence to pending */
                Spi_ConfigPtr_pt->Spi_GlobalStatus_pt->Spi_SeqResult[SeqId_u16] = SPI_SEQ_PENDING ;
                Spi_DrvStatus = SPI_BUSY ;
                /* guard is used for sync or async tx */
                Spi_HwSeqEvent_at[SeqId_u16].Guard_u8 = Hw_Event_pt->Guard_u8;
                /* get number of jobs from the configuration */
                JobNr_u16 = Spi_ConfigPtr_pt->Spi_SeqCfg[SeqId_u16].Spi_JobList[1U] ;
                Spi_HwSeqEvent_at[SeqId_u16].NrOfJobs_u8 = (uint8)JobNr_u16 ;

                /* assign a queue number to this sequence */
                /* The reason we got this far is that a sequence is pending, so this is always true and removed from coverage */
                if(Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqNrPend_u8 == 1U)
                {
                    /* start transmit if no sequence was pending  -> Spi_HwSeqConsumeEvent */
                    Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqIdAkt_u8  = (uint8)SeqId_u16;
                    Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqIdPend_u8 = (uint8)SeqId_u16;
                    /* stop critical section */
                    Spi_GlobalRestore();
                    Spi_HwSeqConsumeEvent(HW_Inst_Nr_u8); /* consume event */
                }
                else
                {
                    /* assign pointer to next sequence */
                    Spi_HwSeqEvent_at[Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqIdPend_u8].SeqNext_pt = &Spi_HwSeqEvent_at[SeqId_u16];
                    /* assign last queued sequence to prev pointer */
                    Spi_HwSeqEvent_at[SeqId_u16].SeqPrev_pt = &Spi_HwSeqEvent_at[Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqIdPend_u8];
                    /* all settings done, now update pending variable */
                    Spi_HwSeqIdInst_t[HW_Inst_Nr_u8].SeqIdPend_u8 = (uint8)SeqId_u16;
                    /* stop critical section */
                    Spi_GlobalRestore();
                    /* any other transmit is done by the queued sequences, the queue */
                    /* is checked any time a job has completed */
                }
            }
            else
            {
                /* stop critical section */
                /* shared job still pending !*/
                Spi_GlobalRestore();
            }
        }
        else
        {
            /* sequence is pending! */
            /* stop critical section */
            Spi_GlobalRestore();
        }

    }

    return (Ret_loc);
}

#if (SPI_LEVEL_DELIVERED == SPI_LEVEL_2)
/** @brief Set Spi HW Mode
 *  @param[in]        Spi_AsyncModeType - AsyncModeType.
 */
static void Spi_HwSetMode(Spi_AsyncModeType Mode)
{
    Spi_HwMode_t = Mode;
}
#endif

#if defined(CFG_TMS570LS12X)
/** @brief Spi Hw Process State
 *  @param[in] HW_Inst_Nr_u8 - Instance of the SPI Hw.
 */
static void Spi_HwProcessState(uint16_least HW_Inst_Nr_u8)
{
   /* schedule the event, check if a sequence has completed */
   Spi_HwJobConsumeEvent(HW_Inst_Nr_u8);
}
#endif

/** @}*/
/** @}*/
