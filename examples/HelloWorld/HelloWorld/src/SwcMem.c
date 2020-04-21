/*-------------------------------- Arctic Core ------------------------------
 * Copyright (C) 2014, ArcCore AB, Sweden, www.arccore.com.
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

/*
 * Example how to use the NvRAM from within an SWC. There are two different
 * methods configured.
 *
 * Method1: Uses PIM1 to store the data into. The data is read by the BSW
 * to the PIM memory during startup and if the memory have been changed
 * in run mode it will be stored back to the BSW during shutdown.
 *
 * Method2: Uses PIM2 to store the data. Here the read and writes are totally
 * controlled by the SWC and it requests via service interface when to read and
 * when to program. Because the asyncronous nature of read and write ther is
 * a callback (SwcMem_JobFinishedPIM2) called from the NVM Manager when the
 * job is done.
 *
 */
#ifdef USE_NVM
#include "Rte_SwcMemType.h"
#include "NvM.h"
#include <string.h>

enum {
	MEM_PIM1_INDEX = 0,
	MEM_PIM2_INDEX,
	MEM_NUM_BLOCKS
};

#define MEM_PIM1_SIZE     4u
#define MEM_PIM2_SIZE     4u

#define IS_VALID_REQUEST(_x) ((SWCMEM_REQ_WRITE_BLOCK == (_x)) || (SWCMEM_REQ_READ_BLOCK == (_x)))
#define IS_VALID_BLOCK(_x) ((MEM_PIM1_INDEX == (_x)) || (MEM_PIM2_INDEX == (_x)))


NvmCmdType PimBlock2State;

typedef struct {
    uint32 nofAcceptedWrites;
    uint32 nofFailedWrites;
    uint32 nofOkWrites;
    uint32 nofAcceptedReads;
    uint32 nofFailedReads;
    uint32 nofOkReads;
}SwcMemStatisticsType;

static SwcMemStatisticsType SwcMemStats[MEM_NUM_BLOCKS];

/*
 * This should never happend due to the fact that PIM1 is loaded/saved
 * during startup/shutdown.
 */
Std_ReturnType SwcMem_JobFinishedPIM1(uint8 ServiceId, NvM_RequestResultType JobResult)
{
    (void)ServiceId; /* added for lint exception */
    (void)JobResult;
	return E_OK;
}

/*
 * PIM 2 callback after a readblock or writeblock.
 */
Std_ReturnType SwcMem_JobFinishedPIM2(uint8 ServiceId, NvM_RequestResultType JobResult)
{
    const uint32 invalidData = 0xFFFFFFFFU;
    if( ((NVM_WRITE_BLOCK_ID == ServiceId) && (SWCMEM_REQ_WRITE_BLOCK == PimBlock2State)) ||
            ((NVM_READ_BLOCK_ID == ServiceId) && (SWCMEM_REQ_READ_BLOCK == PimBlock2State)) ) {
        NvmResType result;
        uint32 data;

        if( JobResult == NVM_REQ_OK ) {
        	const uint32 *dataPtr = Rte_Pim_PIM2();
            data = *dataPtr;

            if( NVM_WRITE_BLOCK_ID == ServiceId ) {
                SwcMemStats[MEM_PIM2_INDEX].nofOkWrites++;
            } else {
                SwcMemStats[MEM_PIM2_INDEX].nofOkReads++;
            }
            result = (NVM_WRITE_BLOCK_ID == ServiceId) ? SWCMEM_RES_WRITE_BLOCK_OK : SWCMEM_RES_READ_BLOCK_OK;
        } else {
            data = invalidData;

            if( NVM_WRITE_BLOCK_ID == ServiceId ) {
                SwcMemStats[MEM_PIM2_INDEX].nofFailedWrites++;
            } else {
                SwcMemStats[MEM_PIM2_INDEX].nofFailedReads++;
            }
            result = (NVM_WRITE_BLOCK_ID == ServiceId) ? SWCMEM_RES_WRITE_BLOCK_FAILED : SWCMEM_RES_READ_BLOCK_FAILED;
        }

        (void)Rte_Write_SwcMemTx_blockId(MEM_PIM2_INDEX);
        (void)Rte_Write_SwcMemTx_payload(data);
        (void)Rte_Write_SwcMemTx_result(result);

        PimBlock2State = SWCMEM_REQ_IDLE;
    }

    return E_OK;
}

/**
 * Initialized SwcMem
 */
void SwcMem_Init(void)
{
	PimBlock2State = SWCMEM_REQ_IDLE;
}

/**
 * Mainfunction for SwcMem
 */
void SwcMem_MainFunction(void) {
	NvmCmdType request;
	uint8 blockId;
	uint32 data;

	request = Rte_IRead_Main_SwcMemRx_command();
	blockId = Rte_IRead_Main_SwcMemRx_blockId();
	data = Rte_IRead_Main_SwcMemRx_payload();

	if (IS_VALID_REQUEST(request) && IS_VALID_BLOCK(blockId)) {
		/* New request */
		NvmResType result = SWCMEM_RES_NONE;
		uint32 *dataPtr;

		if (blockId == MEM_PIM1_INDEX) {
			dataPtr = Rte_Pim_PIM1();
			switch (request) {
			case SWCMEM_REQ_WRITE_BLOCK:
				if (0 != data) {
					*dataPtr = ~data; /* Storing the inverse */

					SwcMemStats[MEM_PIM2_INDEX].nofOkWrites++;
					SwcMemStats[blockId].nofAcceptedWrites++;

					/* Set NVBlockStatus to save it on shutdown. */
					(void)Rte_Call_SwcMemType_SwcMem_ServicePIM1_SetRamBlockStatus(TRUE);

					result = SWCMEM_RES_WRITE_BLOCK_OK;
				} else {
					result = SWCMEM_RES_REQ_INVALID;
				}
				break;
			case SWCMEM_REQ_READ_BLOCK:
				//data = *dataPtr;

				SwcMemStats[blockId].nofAcceptedReads++;
				SwcMemStats[MEM_PIM2_INDEX].nofOkReads++;

				result = SWCMEM_RES_READ_BLOCK_OK;
				break;
			default:
				break;
			}
		} else if (blockId == MEM_PIM2_INDEX) {
		 if(SWCMEM_REQ_IDLE == PimBlock2State) {
	            dataPtr = Rte_Pim_PIM2();
				switch (request) {
				case SWCMEM_REQ_WRITE_BLOCK:
					if (0 != data) {
						*dataPtr = ~data; /* Storing the inverse */

						if ( E_OK == Rte_Call_SwcMemType_SwcMem_ServicePIM2_WriteBlock(dataPtr)) {
							SwcMemStats[blockId].nofAcceptedWrites++;
							PimBlock2State = SWCMEM_REQ_WRITE_BLOCK;
						} else {
							result = SWCMEM_RES_WRITE_BLOCK_FAILED;
						}
					} else {
						result = SWCMEM_RES_REQ_INVALID;
					}
					break;
				case SWCMEM_REQ_READ_BLOCK:
					memset(dataPtr, 0, MEM_PIM2_SIZE);

					if ( E_OK == Rte_Call_SwcMemType_SwcMem_ServicePIM2_ReadBlock(dataPtr)) {
					    SwcMemStats[blockId].nofAcceptedReads=SwcMemStats[blockId].nofAcceptedReads+1;
						PimBlock2State = SWCMEM_REQ_READ_BLOCK;
					} else {
						result = SWCMEM_RES_READ_BLOCK_FAILED;
					}
					break;
				default:
					break;
				}
			} else {
				result = SWCMEM_RES_REQ_BUSY;
			}
		}else{
		    /* do nothing */
		}

		if ( SWCMEM_RES_NONE != result) {
			(void)Rte_Write_SwcMemTx_blockId(blockId);
			(void)Rte_Write_SwcMemTx_payload(*dataPtr);/*lint !e644  WCMEM_RES_NONE != result condtion will take care data pointer is initilised*/
			(void)Rte_Write_SwcMemTx_result(result);
		}
	}
}
#else
/* Dummy functions just to make configurations without NVM happy */
void SwcMem_Init() {
}

void SwcMem_MainFunction() {
}
#endif /* USE_NVM */
