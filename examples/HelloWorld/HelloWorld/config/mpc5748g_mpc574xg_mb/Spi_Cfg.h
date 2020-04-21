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

/* Generator version: 2.0.0
 * AUTOSAR version:   4.1.2
 */

#if !(((SPI_SW_MAJOR_VERSION == 2) && (SPI_SW_MINOR_VERSION == 0)) )
#error Spi: Configuration file expected BSW module version to be 2.0.X
#endif

#if !(((SPI_AR_RELEASE_MAJOR_VERSION == 4) && (SPI_AR_RELEASE_MINOR_VERSION == 1)) )
#error Spi: Configuration file expected AUTOSAR version to be 4.1.*
#endif


#ifndef SPI_CFG_H
#define SPI_CFG_H

/*
 * General configuration
 */
#define SPI_CONFIG_VERSION      		1

#define SPI_CANCEL_API						STD_ON

// Selects the SPI Handler/Driver Channel Buffers usage allowed and delivered.
// LEVEL 0 - Only Internal buffers
// LEVEL 1 - Only external buffers
// LEVEL 2 - Both internal/external buffers
#define SPI_CHANNEL_BUFFERS_ALLOWED			1

#define SPI_DEV_ERROR_DETECT 					STD_ON
#define SPI_HW_STATUS_API						STD_ON
#define SPI_INTERRUPTIBLE_SEQ_ALLOWED			STD_OFF
#define SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT 	STD_OFF

// LEVEL 0 - Simple sync
// LEVEL 1 - Basic async
// LEVEL 2 - Enhanced mode
#define SPI_LEVEL_DELIVERED				2

#define SPI_ARC_CTRL_MAX             		4
#define SPI_VERSION_INFO_API				STD_ON
#define SPI_CONTROLLER_CNT                  1
#define SPI_EXT_DEVICES_CNT                 1
#define SPI_IMPLEMENTATION                  SPI_FIFO

#define SPI_CHANNELS_CONFIGURED				((1uL<<CSIB4))  	  			 

// External devices
typedef enum {
	SPI_device_1
} Spi_ExternalDeviceTypeType;

// Channels
#define SpiConf_SpiChannel_CH_ADDR   0
#define Spi_CH_ADDR   SpiConf_SpiChannel_CH_ADDR
#define SpiConf_SpiChannel_CH_CMD   1
#define Spi_CH_CMD   SpiConf_SpiChannel_CH_CMD
#define SpiConf_SpiChannel_CH_DATA   2
#define Spi_CH_DATA   SpiConf_SpiChannel_CH_DATA
#define SpiConf_SpiChannel_CH_WREN   3
#define Spi_CH_WREN   SpiConf_SpiChannel_CH_WREN

// Jobs
#define SpiConf_SpiJob_JOB_WREN   0
#define Spi_JOB_WREN   SpiConf_SpiJob_JOB_WREN
#define SpiConf_SpiJob_JOB_DATA   1
#define Spi_JOB_DATA   SpiConf_SpiJob_JOB_DATA
#define SpiConf_SpiJob_JOB_CMD2   2
#define Spi_JOB_CMD2   SpiConf_SpiJob_JOB_CMD2
#define SpiConf_SpiJob_JOB_CMD   3
#define Spi_JOB_CMD   SpiConf_SpiJob_JOB_CMD


// Sequences
#define SpiConf_SpiSequence_SEQ_CMD   0
#define Spi_SEQ_CMD   SpiConf_SpiSequence_SEQ_CMD
#define SpiConf_SpiSequence_SEQ_CMD2   1
#define Spi_SEQ_CMD2   SpiConf_SpiSequence_SEQ_CMD2
#define SpiConf_SpiSequence_SEQ_READ   2
#define Spi_SEQ_READ   SpiConf_SpiSequence_SEQ_READ
#define SpiConf_SpiSequence_SEQ_WRITE   3
#define Spi_SEQ_WRITE   SpiConf_SpiSequence_SEQ_WRITE

#define SPI_MAX_JOB             4				
#define SPI_MAX_CHANNEL			4
#define SPI_MAX_SEQUENCE		4

#define SPI_USE_HW_UNIT_0       STD_OFF
#define SPI_USE_HW_UNIT_1   	STD_OFF
#define SPI_USE_HW_UNIT_2   	STD_OFF
#define SPI_USE_HW_UNIT_3       STD_OFF
#define SPI_USE_HW_UNIT_4   	STD_ON
#define SPI_USE_HW_UNIT_5   	STD_OFF
#define SPI_USE_HW_UNIT_6   	STD_OFF
#define SPI_USE_HW_UNIT_7   	STD_OFF
#define SPI_USE_HW_UNIT_8   	STD_OFF
#define SPI_USE_HW_UNIT_9   	STD_OFF


/* Configuration Set Handles */
#define SpiDriver (SpiConfigData)
#define Spi_SpiDriver (SpiConfigData)

/* Function prototype for PC-Lint */		
uint32 Spi_GetExternalDeviceCnt(void );

/*************************************************************/
/*           data from Spi.h      start                      */
/*************************************************************/

typedef enum
{
  SPI_EB = 0, // External Buffer
  SPI_IB // Internal Buffer
} Spi_BufferType;

typedef enum
{
  SPI_TRANSFER_START_LSB,
  SPI_TRANSFER_START_MSB,
} Spi_TransferStartType;

typedef enum {
    SPI_EDGE_LEADING,
    SPI_EDGE_TRAILING
} Spi_EdgeType;

typedef struct Spi_ExternalDevice {
  uint32 SpiBaudrate;
  uint32 SpiCsIdentifier;
  uint8 SpiCsPolarity;
  Spi_EdgeType SpiDataShiftEdge;
  uint8 SpiEnableCs;
  uint32 SpiHwUnit;
  uint8 SpiShiftClockIdleLevel;
  uint32 SpiTimeClk2Cs;
  uint32 SpiTimeCs2Clk;
  void (*SpiCsCallback)(uint32 active);
} Spi_ExternalDeviceType;


typedef struct Spi_ChannelConfig {
  Spi_ChannelType SpiChannelId;
  Spi_BufferType SpiChannelType;
  uint32 SpiDataWidth;
  uint32 SpiDefaultData;
  Spi_NumberOfDataType SpiEbMaxLength;
  Spi_NumberOfDataType SpiIbNBuffers;
  Spi_TransferStartType SpiTransferStart;
} Spi_ChannelConfigType;

typedef void (*SpiJobEndNotification_Type)(void);

typedef struct Spi_JobConfig {
  Spi_JobType SpiJobId;
  uint32 SpiHwUnit;
  SpiJobEndNotification_Type SpiJobEndNotification;
  unsigned SpiJobPriority;
#if defined(SPI_CONFIG_VERSION)
  const Spi_ChannelConfigType *SpiChannelAssignment[SPI_MAX_CHANNEL+1];
#else
  Spi_ChannelType ChannelAssignment[SPI_MAX_CHANNEL+1];
#endif
#if defined(SPI_CONFIG_VERSION)
  const struct Spi_ExternalDevice * SpiDeviceAssignment;
#else
  Spi_ExternalDeviceTypeType DeviceAssignment;
#endif
} Spi_JobConfigType;

typedef void (*Spi_CallbackType)(void);

typedef struct Spi_SequenceConfig {
  const sint16 * SpiSeqSharingCommonJobsTablePtr;
  unsigned SpiInterruptibleSequence;
  Spi_CallbackType SpiSeqEndNotification;
  Spi_SequenceType SpiSequenceId;
#if defined(SPI_CONFIG_VERSION)
  const Spi_JobConfigType *SpiJobAssignment[SPI_MAX_JOB+1];
#else
  Spi_JobType JobAssignment[SPI_MAX_JOB+1];
#endif
} Spi_SequenceConfigType;


typedef struct Spi_Driver {
  uint8 SpiMaxChannel;
  uint8 SpiMaxJob;
  uint8 SpiMaxSequence;
  const struct Spi_ChannelConfig * SpiChannelConfig;
  const struct Spi_ExternalDevice * SpiExternalDevice;
  const struct Spi_JobConfig * SpiJobConfig;
  const struct Spi_SequenceConfig * SpiSequenceConfig;
#if defined(SPI_USE_ARC_HW_STRUCT)
  const Spi_Hw_DeviceConfigType * SpiHwDeviceConfig;
#endif
} Spi_CfgType;

/*************************************************************/
/*            data from Spi.h      end                       */
/*************************************************************/


#endif /* SPI_CFG_H_ */

