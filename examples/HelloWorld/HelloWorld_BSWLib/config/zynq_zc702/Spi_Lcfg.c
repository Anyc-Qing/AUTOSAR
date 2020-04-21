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

/*lint -save -e785 Misra 2012 9.3  Too few initializers */
/*lint -save -e957 Misra 2004 8.1  Some function defined without a prototype in scope */

#include "Spi.h"

// Callbacks
 


// External Devices 
const Spi_ExternalDeviceType SpiExternalConfigData[] =
{
 {
  .SpiBaudrate = 434027UL,
  .SpiCsIdentifier = 0,
   
  .SpiHwUnit = CSIB0,
  .SpiDataShiftEdge = SPI_EDGE_TRAILING,
  .SpiEnableCs   = 0, // NOT SUPPORTED IN TOOLS
  .SpiShiftClockIdleLevel = STD_HIGH,
  .SpiTimeClk2Cs = 0,   // ns
 }
};

const SpiZynqDelay0RegType SpiExternalDeviceDelayCfg[] =
{
    {
        .SpiArcDAfter  = 0, 
        .SpiArcDBtwn   = 0, 
        .SpiArcDNss    = 0,
    }
};

const Spi_Hw_DeviceConfigType SpiHwDeviceCfg = {
    .SpiHwDelayReg = SpiExternalDeviceDelayCfg,
    .SpiHwExternalDeviceIdx = {
    0,  
    0,  
    0,  
    0,  
    },
};

// Channels 
const Spi_ChannelConfigType SpiChannelConfigData[] =
{
{
  .SpiChannelId = SpiConf_SpiChannel_CH_ADDR,
  .SpiChannelType = SPI_EB,
  .SpiDataWidth = 16,
  .SpiIbNBuffers = 0, 
  .SpiEbMaxLength = 64,
  .SpiDefaultData = 0,
 }
,{
  .SpiChannelId = SpiConf_SpiChannel_CH_CMD,
  .SpiChannelType = SPI_EB,
  .SpiDataWidth = 8,
  .SpiIbNBuffers = 0, 
  .SpiEbMaxLength = 64,
  .SpiDefaultData = 0,
 }
,{
  .SpiChannelId = SpiConf_SpiChannel_CH_DATA,
  .SpiChannelType = SPI_EB,
  .SpiDataWidth = 8,
  .SpiIbNBuffers = 0, 
  .SpiEbMaxLength = 64,
  .SpiDefaultData = 0,
 }
,{
  .SpiChannelId = SpiConf_SpiChannel_CH_WREN,
  .SpiChannelType = SPI_EB,
  .SpiDataWidth = 8,
  .SpiIbNBuffers = 0, 
  .SpiEbMaxLength = 1,
  .SpiDefaultData = 6,
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

const sint16 SEQ_CMD_SeqSharingCommonJobTable [SPI_MAX_JOB] = {
	-1
};
const sint16 SEQ_CMD2_SeqSharingCommonJobTable [SPI_MAX_JOB] = {
	-1
};
const sint16 SEQ_READ_SeqSharingCommonJobTable [SPI_MAX_JOB] = {
	SpiConf_SpiSequence_SEQ_WRITE,
	-1
};
const sint16 SEQ_WRITE_SeqSharingCommonJobTable [SPI_MAX_JOB] = {
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


uint32 Spi_GetChanneCnt(void ) { return sizeof(SpiChannelConfigData)/sizeof(SpiChannelConfigData[0]); }

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
  .SpiHwDeviceConfig = &SpiHwDeviceCfg,
};

/*lint -restore*/
