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


#include "arc_assert.h"

#include "Std_Types.h"
#include "mpc55xx.h"
#include "Mcu.h"
#include "Dma.h"
#include <string.h>

#if defined(CFG_MPC5777C)
volatile struct EDMA_tag * Dma_HwUnitReg[] = {  (volatile struct EDMA_tag *)&EDMA ,
                                                (volatile struct EDMA_tag *)&EDMB,
                                             };
#endif

void Dma_Init (const Dma_ConfigType *ConfigPtr)
{
#if defined(MPC5646B)

  Dma_ChannelType channel;
  /*** There is possible to configure 64 muxes = DMA_NUMBER_OF_MUXES , but in Header file is "space" for 32 only, then 
  we will use also only 32. Channels >32 are used for LINFlex anyway.
  Later when needed LINFlex to DMA access (not likely) could be extended.  ***/
  
  for (channel = (Dma_ChannelType)DMA_START_CHANNEL; channel < DMA_NUMBER_OF_CHANNELS ; channel++)
  {
    /* DMA mux configuration. */
    DMAMUX.CHCONFIG[channel].B.SOURCE = ConfigPtr->dmaMuxConfigPtr[channel].DMA_CHANNEL_SOURCE;
    DMAMUX.CHCONFIG[channel].B.TRIG = ConfigPtr->dmaMuxConfigPtr[channel].DMA_CHANNEL_TRIG_ENABLE;
    DMAMUX.CHCONFIG[channel].B.ENBL = ConfigPtr->dmaMuxConfigPtr[channel].DMA_CHANNEL_ENABLE;
  }  

  for (channel = (Dma_ChannelType)DMA_START_CHANNEL; channel < DMA_NUMBER_OF_CHANNELS; channel++)
  {
    /* DMA channel configration. */
    EDMA.CPR[channel].B.ECP = ConfigPtr->dmaChannelConfigPtr[channel].DMA_CHANNEL_PREEMTION_ENABLE;
    EDMA.CPR[channel].B.CHPRI = ConfigPtr->dmaChannelConfigPtr[channel].DMA_CHANNEL_PRIORITY;
  }
  
  
  /* Write channel arbitration mode. */
  EDMA.CR.B.ERCA = ConfigPtr->dmaChannelArbitration;

#else 
    
  Dma_ChannelType channel;
  for (channel = (Dma_ChannelType)DMA_START_CHANNEL; channel < DMA_NUMBER_OF_CHANNELS; channel++)
  {
#   if defined(CFG_DMA_MUX)
    /* DMA mux configuration. */
    DMAMUX.CHCONFIG[channel].B.ENBL = ConfigPtr->dmaMuxConfigPtr[channel].DMA_CHANNEL_ENABLE;
    DMAMUX.CHCONFIG[channel].B.TRIG = ConfigPtr->dmaMuxConfigPtr[channel].DMA_CHANNEL_TRIG_ENABLE;
    DMAMUX.CHCONFIG[channel].B.SOURCE = ConfigPtr->dmaMuxConfigPtr[channel].DMA_CHANNEL_SOURCE;
#   endif

    /* DMA channel configration. */
    EDMA.CPR[channel].B.ECP = ConfigPtr->dmaChannelConfigPtr[channel].DMA_CHANNEL_PREEMTION_ENABLE;
    EDMA.CPR[channel].B.CHPRI = ConfigPtr->dmaChannelConfigPtr[channel].DMA_CHANNEL_PRIORITY;
#if defined(CFG_MPC5777C)
    EDMB.CPR[channel].B.ECP = ConfigPtr->dmaChannelConfigPtr[channel].DMA_CHANNEL_PREEMTION_ENABLE;
    EDMB.CPR[channel].B.CHPRI = ConfigPtr->dmaChannelConfigPtr[channel].DMA_CHANNEL_PRIORITY;
#endif
  }

  /* Write channel arbitration mode. */
  EDMA.CR.B.ERCA = ConfigPtr->dmaChannelArbitration;
#if defined(CFG_MPC5777C)
  EDMB.CR.B.ERCA = ConfigPtr->dmaChannelArbitration;
#endif
#endif  
}


#if defined(CFG_MPC5777C)
void Dma_ConfigureChannel (const Dma_TcdType *tcd, Dma_ChannelType channel, uint8_t unitID)
{
    Dma_HwUnitReg[unitID]->TCD[channel] = *tcd;
    Dma_HwUnitReg[unitID]->CERQ.R = channel;

    /* Check configuration. */
    if (Dma_HwUnitReg[unitID]->ES.B.VLD)
    {
        ASSERT(0);
    }
}

volatile Dma_TcdType * Dma_GetTcd( Dma_ChannelType channel, uint8_t unitID)
{
    return &Dma_HwUnitReg[unitID]->TCD[channel];
}

boolean Dma_CheckConfig(uint8_t unitID)
{

    /* Check configuration. */
    if (Dma_HwUnitReg[unitID]->ES.B.VLD)
    {
        ASSERT(0);
    }
    else
    {
        /* Configuration seems to be OK. Do nothing. */
    }
    return TRUE;
}

void Dma_ConfigureChannelTranferSize (uint32_t nbrOfIterations, Dma_ChannelType channel, uint8_t unitID)
{
    Dma_HwUnitReg[unitID]->TCD[channel].BITER = nbrOfIterations;
    Dma_HwUnitReg[unitID]->TCD[channel].CITER = nbrOfIterations;
}

void Dma_ConfigureChannelSourceCorr (uint32_t sourceCorrection, Dma_ChannelType channel, uint8_t unitID)
{
    Dma_HwUnitReg[unitID]->TCD[channel].SLAST = sourceCorrection;
}

void Dma_ConfigureChannelDestinationCorr (uint32_t destinationCorrection, Dma_ChannelType channel, uint8_t unitID)
{
    Dma_HwUnitReg[unitID]->TCD[channel].DLAST_SGA = destinationCorrection;
}

void Dma_ConfigureDestinationAddress (uint32_t destAddr, Dma_ChannelType channel, uint8_t unitID)
{
    Dma_HwUnitReg[unitID]->TCD[channel].DADDR = destAddr;
}

void Dma_ConfigureSourceAddress (uint32_t sourceAddr, Dma_ChannelType channel, uint8_t unitID)
{
    Dma_HwUnitReg[unitID]->TCD[channel].SADDR = sourceAddr;
}

int Dma_Active(Dma_ChannelType channel, uint8_t unitID)
{
    return Dma_HwUnitReg[unitID]->TCD[channel].ACTIVE;
}

void Dma_StartChannel (Dma_ChannelType channel, uint8_t unitID)
{
    /* Start the channel... */
    Dma_HwUnitReg[unitID]->SERQ.R = channel;
}

#if 0
void Dma_EnableInterrupt (Dma_ChannelType channel)
{
    /* Start the channel... */
    EDMA.IRQRL.R = (1uL<<channel);
}
#endif

void Dma_ClearInterrupt (Dma_ChannelType channel, uint8_t unitID)
{
    /* Start the channel... */
    //EDMA.CIRQ.R = channel;
    Dma_HwUnitReg[unitID]->CINT.R = channel;
}

void Dma_StopChannel (Dma_ChannelType channel, uint8_t unitID)
{
    /* Stop the channel... */
    Dma_HwUnitReg[unitID]->CERQ.R = channel;
}

Std_ReturnType Dma_ChannelDone (Dma_ChannelType channel, uint8_t unitID)
{
    return (Std_ReturnType)Dma_HwUnitReg[unitID]->TCD[channel].DONE;
}


#else

void Dma_DeInit( void ) {
    Dma_ChannelType channel;
    for (channel = (Dma_ChannelType)DMA_START_CHANNEL; channel < DMA_NUMBER_OF_CHANNELS; channel++)
    {
        Dma_StopChannel(channel);
    }
}
void Dma_ConfigureChannel (const Dma_TcdType *tcd, Dma_ChannelType channel)
{
    /* Copy transfer configuration to correct channel. */
    EDMA.TCD[channel] = *tcd;

    /* Disable channel. */
    EDMA.CERQ.R = channel;

    /* Check configuration. */
    if (EDMA.ES.B.VLD)
    {
        ASSERT(0);
    }
    else
    {
        /* Configuration seems to be OK. Do nothing. */
    }
}

volatile Dma_TcdType * Dma_GetTcd( Dma_ChannelType channel)
{
    return &EDMA.TCD[channel];
}

boolean Dma_CheckConfig(void)
{

    /* Check configuration. */
    if (EDMA.ES.B.VLD)
    {
        ASSERT(0);
    }
    else
    {
        /* Configuration seems to be OK. Do nothing. */
    }
    return TRUE;
}

void Dma_ConfigureChannelTranferSize (uint32_t nbrOfIterations, Dma_ChannelType channel)
{
    EDMA.TCD[channel].BITER = nbrOfIterations;
    EDMA.TCD[channel].CITER = nbrOfIterations;
}

void Dma_ConfigureChannelSourceCorr (uint32_t sourceCorrection, Dma_ChannelType channel)
{
    EDMA.TCD[channel].SLAST = sourceCorrection;
}

void Dma_ConfigureChannelDestinationCorr (uint32_t destinationCorrection, Dma_ChannelType channel)
{
    EDMA.TCD[channel].DLAST_SGA = destinationCorrection;
}

void Dma_ConfigureDestinationAddress (uint32_t destAddr, Dma_ChannelType channel)
{
    EDMA.TCD[channel].DADDR = destAddr;
}

void Dma_ConfigureSourceAddress (uint32_t sourceAddr, Dma_ChannelType channel)
{
    EDMA.TCD[channel].SADDR = sourceAddr;
}

int Dma_Active(Dma_ChannelType channel)
{
    return EDMA.TCD[channel].ACTIVE;
}

void Dma_StartChannel (Dma_ChannelType channel)
{
    /* Start the channel... */
    EDMA.SERQ.R = channel;
}

#if 0
void Dma_EnableInterrupt (Dma_ChannelType channel)
{
  /* Start the channel... */
  EDMA.IRQRL.R = (1uL<<channel);
}
#endif

void Dma_ClearInterrupt (Dma_ChannelType channel)
{
  /* Start the channel... */
  //EDMA.CIRQ.R = channel;
    EDMA.CINT.R = channel;
}


void Dma_StopChannel (Dma_ChannelType channel)
{
    /* Stop the channel... */
    EDMA.CERQ.R = channel;
}

Std_ReturnType Dma_ChannelDone (Dma_ChannelType channel)
{
    return (Std_ReturnType)EDMA.TCD[channel].DONE;
}
#endif
