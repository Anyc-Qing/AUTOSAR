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

#include "Spi.h"
/*Lint exception */
/*lint -save -e785 Using only designated initializers */

/* Callbacks */
extern void Spi_device_1( uint32 in );



// External Devices 
const Spi_ExternalDeviceType SpiExternalConfigData[] =
{
 {
  .SpiBaudrate = 4000000UL,
  .SpiCsIdentifier = 1,
  .SpiCsCallback = Spi_device_1,
  .SpiCsPolarity = STD_LOW,
  .SpiHwUnit = CSIB0,
  .SpiDataShiftEdge = SPI_EDGE_LEADING,
  .SpiEnableCs = 0, // NOT SUPPORTED IN TOOLS
  .SpiShiftClockIdleLevel = STD_LOW,
  .SpiTimeClk2Cs = 6000,   // ns
  .SpiTimeCs2Clk = 6000    // ns
 }
};


// Channels 
const Spi_ChannelConfigType SpiChannelConfigData[] =
{
{
  .SpiChannelId = SpiConf_SpiChannel_CH_ADDR,
  .SpiChannelType = SPI_EB,
  .SpiDataWidth = 16,
  .SpiIbNBuffers = 0, 
  .SpiEbMaxLength = 32,
  .SpiDefaultData = 0,
  .SpiTransferStart = SPI_TRANSFER_START_MSB,
 }
,{
  .SpiChannelId = SpiConf_SpiChannel_CH_CMD,
  .SpiChannelType = SPI_EB,
  .SpiDataWidth = 8,
  .SpiIbNBuffers = 0, 
  .SpiEbMaxLength = 64,
  .SpiDefaultData = 0,
  .SpiTransferStart = SPI_TRANSFER_START_MSB,
 }
,{
  .SpiChannelId = SpiConf_SpiChannel_CH_DATA,
  .SpiChannelType = SPI_EB,
  .SpiDataWidth = 8,
  .SpiIbNBuffers = 0, 
  .SpiEbMaxLength = 64,
  .SpiDefaultData = 0,
  .SpiTransferStart = SPI_TRANSFER_START_MSB,
 }
,{
  .SpiChannelId = SpiConf_SpiChannel_CH_WREN,
  .SpiChannelType = SPI_EB,
  .SpiDataWidth = 8,
  .SpiIbNBuffers = 0, 
  .SpiEbMaxLength = 1,
  .SpiDefaultData = 6,
  .SpiTransferStart = SPI_TRANSFER_START_MSB,
 }
,{
  .SpiChannelId = SpiConf_SpiChannel_CH_WATCHDOG,
  .SpiChannelType = SPI_EB,
  .SpiDataWidth = 16,
  .SpiIbNBuffers = 0, 
  .SpiEbMaxLength = 0,
  .SpiDefaultData = 23040,
  .SpiTransferStart = SPI_TRANSFER_START_MSB,
 }
,
 {
   .SpiChannelId = CH_NOT_VALID,
 }

};


// Jobs
const Spi_JobConfigType SpiJobConfigData[] =
{
   {
      .SpiJobId = SpiConf_SpiJob_JOB_WREN,
      .SpiHwUnit = CSIB0,
      .SpiJobPriority = 3,
      .SpiJobEndNotification = NULL,
      .SpiChannelAssignment = {
         &SpiChannelConfigData[SpiConf_SpiChannel_CH_WREN],
         NULL
      },
      .SpiDeviceAssignment = &SpiExternalConfigData[SPI_device_1],
   }
,   {
      .SpiJobId = SpiConf_SpiJob_JOB_DATA,
      .SpiHwUnit = CSIB0,
      .SpiJobPriority = 2,
      .SpiJobEndNotification = NULL,
      .SpiChannelAssignment = {
         &SpiChannelConfigData[SpiConf_SpiChannel_CH_CMD],
         &SpiChannelConfigData[SpiConf_SpiChannel_CH_ADDR],
         &SpiChannelConfigData[SpiConf_SpiChannel_CH_DATA],
         NULL
      },
      .SpiDeviceAssignment = &SpiExternalConfigData[SPI_device_1],
   }
,   {
      .SpiJobId = SpiConf_SpiJob_JOB_CMD2,
      .SpiHwUnit = CSIB0,
      .SpiJobPriority = 0,
      .SpiJobEndNotification = NULL,
      .SpiChannelAssignment = {
         &SpiChannelConfigData[SpiConf_SpiChannel_CH_CMD],
         &SpiChannelConfigData[SpiConf_SpiChannel_CH_DATA],
         NULL
      },
      .SpiDeviceAssignment = &SpiExternalConfigData[SPI_device_1],
   }
,   {
      .SpiJobId = SpiConf_SpiJob_JOB_CMD,
      .SpiHwUnit = CSIB0,
      .SpiJobPriority = 0,
      .SpiJobEndNotification = NULL,
      .SpiChannelAssignment = {
         &SpiChannelConfigData[SpiConf_SpiChannel_CH_CMD],
         NULL
      },
      .SpiDeviceAssignment = &SpiExternalConfigData[SPI_device_1],
   }
};

const sint16 SEQ_CMD_SeqSharingCommonJobTable [] = {



	-1
};
const sint16 SEQ_CMD2_SeqSharingCommonJobTable [] = {



	-1
};
const sint16 SEQ_READ_SeqSharingCommonJobTable [] = {



			SpiConf_SpiSequence_SEQ_WRITE,
	-1
};
const sint16 SEQ_WRITE_SeqSharingCommonJobTable [] = {



			SpiConf_SpiSequence_SEQ_READ,
	-1
};

// Sequences 
const Spi_SequenceConfigType SpiSequenceConfigData[] =
{
   {
      .SpiSequenceId = SpiConf_SpiSequence_SEQ_CMD,
      .SpiInterruptibleSequence = FALSE,
      .SpiSeqEndNotification = NULL,
      .SpiJobAssignment = {
          &SpiJobConfigData[SpiConf_SpiJob_JOB_CMD],
          NULL          
      },
      .SpiSeqSharingCommonJobsTablePtr = SEQ_CMD_SeqSharingCommonJobTable,
   }
,   {
      .SpiSequenceId = SpiConf_SpiSequence_SEQ_CMD2,
      .SpiInterruptibleSequence = FALSE,
      .SpiSeqEndNotification = NULL,
      .SpiJobAssignment = {
          &SpiJobConfigData[SpiConf_SpiJob_JOB_CMD2],
          NULL          
      },
      .SpiSeqSharingCommonJobsTablePtr = SEQ_CMD2_SeqSharingCommonJobTable,
   }
,   {
      .SpiSequenceId = SpiConf_SpiSequence_SEQ_READ,
      .SpiInterruptibleSequence = FALSE,
      .SpiSeqEndNotification = NULL,
      .SpiJobAssignment = {
          &SpiJobConfigData[SpiConf_SpiJob_JOB_DATA],
          NULL          
      },
      .SpiSeqSharingCommonJobsTablePtr = SEQ_READ_SeqSharingCommonJobTable,
   }
,   {
      .SpiSequenceId = SpiConf_SpiSequence_SEQ_WRITE,
      .SpiInterruptibleSequence = FALSE,
      .SpiSeqEndNotification = NULL,
      .SpiJobAssignment = {
          &SpiJobConfigData[SpiConf_SpiJob_JOB_WREN],
          &SpiJobConfigData[SpiConf_SpiJob_JOB_DATA],
          NULL          
      },
      .SpiSeqSharingCommonJobsTablePtr = SEQ_WRITE_SeqSharingCommonJobTable,
   }
};

uint32 Spi_GetExternalDeviceCnt(void ) { return sizeof(SpiExternalConfigData)/sizeof(SpiExternalConfigData[0]); }


const Spi_ConfigType SpiConfigData =
{
  .SpiMaxChannel = SPI_MAX_CHANNEL,
  .SpiMaxJob = SPI_MAX_JOB,
  .SpiMaxSequence = SPI_MAX_SEQUENCE,
  .SpiChannelConfig = &SpiChannelConfigData[0],
  .SpiSequenceConfig = &SpiSequenceConfigData[0],
  .SpiJobConfig = &SpiJobConfigData[0],
  .SpiExternalDevice = &SpiExternalConfigData[0],
};

//lint -restore

