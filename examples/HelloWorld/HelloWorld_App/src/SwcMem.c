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
#include "NvM.h"
#include "Com.h"

#ifdef CFG_MPC5604B
#define MEM_BLOCK1_SIZE     4u
#define MEM_BLOCK2_SIZE     4u
#define MEM_BLOCK_1_INDEX   0u
#define MEM_BLOCK_2_INDEX   1u
#define MEM_NUM_BLOCKS      2u

typedef enum {
    SWCMEM_REQ_IDLE = 0,
    SWCMEM_REQ_WRITE_BLOCK,
    SWCMEM_REQ_READ_BLOCK,
}SwcMemStateType;

typedef enum {
    SWCMEM_RES_NONE = 0,
    SWCMEM_RES_WRITE_BLOCK_OK,
    SWCMEM_RES_WRITE_BLOCK_FAILED,
    SWCMEM_RES_READ_BLOCK_OK,
    SWCMEM_RES_READ_BLOCK_FAILED,
    SWCMEM_RES_REQ_BUSY,
    SWCMEM_RES_REQ_INVALID
}SwcMemResponseType;

typedef struct {
    NvM_BlockIdType blockHandle;
    uint8           blockSize;
}MemBlockCfgType;

const MemBlockCfgType MemBlockCfg[MEM_NUM_BLOCKS] = {
        [MEM_BLOCK_1_INDEX] = {
                .blockHandle = NvMConf_NvMBlockDescriptor_SwcMem_Block1,
                .blockSize = MEM_BLOCK1_SIZE
        },
        [MEM_BLOCK_2_INDEX] = {
                 .blockHandle = NvMConf_NvMBlockDescriptor_SwcMem_Block2,
                 .blockSize = MEM_BLOCK2_SIZE
        }
};

#define IS_VALID_REQUEST(_x) ((SWCMEM_REQ_WRITE_BLOCK == (_x)) || (SWCMEM_REQ_READ_BLOCK == (_x)))
#define IS_VALID_BLOCK(_x) ((MEM_BLOCK_1_INDEX == (_x)) || (MEM_BLOCK_2_INDEX == (_x)))

static uint8 DataBuffer[(MEM_BLOCK1_SIZE + MEM_BLOCK2_SIZE)*2];
static SwcMemStateType lastRequest = SWCMEM_REQ_IDLE;
static uint8 lastBlockId = 0;
const uint32 invalidData = 0xFFFFFFFF;

typedef struct {
    SwcMemStateType state;
    uint8*           readDataPtr;
    uint8*           writeDataPtr;
}SwcMemBlockStateType;
SwcMemBlockStateType MemBlockStatus[MEM_NUM_BLOCKS];

typedef struct {
    uint32 nofAcceptedWrites;
    uint32 nofFailedWrites;
    uint32 nofOkWrites;
    uint32 nofAcceptedReads;
    uint32 nofFailedReads;
    uint32 nofOkReads;
}SwcMemStatisticsType;
SwcMemStatisticsType SwcMemStats[MEM_NUM_BLOCKS];

/**
 * Handles job finished notification from NvM
 * @param blockIndex
 * @param ServiceId
 * @param JobResult
 */
static void MemBlockJobFinished(uint8 blockIndex, uint8 ServiceId, NvM_RequestResultType JobResult)
{
    if( ((NVM_WRITE_BLOCK_ID == ServiceId) && (SWCMEM_REQ_WRITE_BLOCK == MemBlockStatus[blockIndex].state)) ||
            ((NVM_READ_BLOCK_ID == ServiceId) && (SWCMEM_REQ_READ_BLOCK == MemBlockStatus[blockIndex].state)) ) {
        SwcMemResponseType result;
        uint32 data = 0;
        if( JobResult == NVM_REQ_OK ) {
            uint8 *dataPtr = (NVM_WRITE_BLOCK_ID == ServiceId) ? MemBlockStatus[blockIndex].writeDataPtr : MemBlockStatus[blockIndex].readDataPtr;
            result = (NVM_WRITE_BLOCK_ID == ServiceId) ? SWCMEM_RES_WRITE_BLOCK_OK : SWCMEM_RES_READ_BLOCK_OK;
            for( uint8 idx = 0; (idx < MemBlockCfg[blockIndex].blockSize) && (idx < sizeof(uint32)); idx++ ) {
                data |= (dataPtr[idx]<<(idx*8));
            }
            (void)Com_SendSignal(ComConf_ComSignal_SwcMemTx_Data, &data);
            if( NVM_WRITE_BLOCK_ID == ServiceId ) {
                SwcMemStats[blockIndex].nofOkWrites++;
            } else {
                SwcMemStats[blockIndex].nofOkReads++;
            }
        } else {
            result = (NVM_WRITE_BLOCK_ID == ServiceId) ? SWCMEM_RES_WRITE_BLOCK_FAILED : SWCMEM_RES_READ_BLOCK_FAILED;
            (void)Com_SendSignal(ComConf_ComSignal_SwcMemTx_Data, &invalidData);
            if( NVM_WRITE_BLOCK_ID == ServiceId ) {
                SwcMemStats[blockIndex].nofFailedWrites++;
            } else {
                SwcMemStats[blockIndex].nofFailedReads++;
            }
        }

        (void)Com_SendSignal(ComConf_ComSignal_SwcMemTx_BlockId, &blockIndex);
        (void)Com_SendSignal(ComConf_ComSignal_SwcMemTx_Result, &result);

        MemBlockStatus[blockIndex].state = SWCMEM_REQ_IDLE;
    }
}

/* NvM callbacks */
/**
 * Init block callback for block 1
 * @return E_OK
 */
Std_ReturnType Rte_Call_PNInitBlock_SwcMem_Block1_InitBlock(void)
{
    return E_OK;
}

/**
 * Jon finished notification for block 1
 * @param ServiceId
 * @param JobResult
 * @return E_OK
 */
Std_ReturnType Rte_Call_PNJobFinished_SwcMem_Block1_JobFinished(uint8 ServiceId, NvM_RequestResultType JobResult)
{
    MemBlockJobFinished(MEM_BLOCK_1_INDEX, ServiceId, JobResult);
    return E_OK;
}

/**
 * Init block callback for block 2
 * @return E_OK
 */
Std_ReturnType Rte_Call_PNInitBlock_SwcMem_Block2_InitBlock(void)
{
    return E_OK;
}

/**
 * Jon finished notification for block 2
 * @param ServiceId
 * @param JobResult
 * @return E_OK
 */
Std_ReturnType Rte_Call_PNJobFinished_SwcMem_Block2_JobFinished(uint8 ServiceId, NvM_RequestResultType JobResult)
{
    MemBlockJobFinished(MEM_BLOCK_2_INDEX, ServiceId, JobResult);
    return E_OK;
}

/* Exported function */

/**
 * Initialized SwcMem
 */
void SwcMem_Init(void)
{
    uint8 bufIndex = 0;
    for( uint8 blockIndex = 0; blockIndex < MEM_NUM_BLOCKS; blockIndex++ ) {
        MemBlockStatus[blockIndex].state = SWCMEM_REQ_IDLE;
        MemBlockStatus[blockIndex].writeDataPtr = &DataBuffer[bufIndex];
        bufIndex += MemBlockCfg[blockIndex].blockSize;
        MemBlockStatus[blockIndex].readDataPtr = &DataBuffer[bufIndex];
        bufIndex += MemBlockCfg[blockIndex].blockSize;
    }
}

/**
 * Mainfunction for SwcMem
 */
void SwcMem_MainFunction(void)
{
    SwcMemStateType request;
    uint8 blockId = 0;
    uint32 data = 0;

    uint8 status = Com_ReceiveSignal(ComConf_ComSignal_SwcMemRx_Request, &request);
    status += Com_ReceiveSignal(ComConf_ComSignal_SwcMemRx_BlockId, &blockId);
    if( 0 == status ) {
        if(IS_VALID_REQUEST(request) && IS_VALID_BLOCK(blockId) && ((request != lastRequest) || (blockId != lastBlockId))) {
            /* New request */
            SwcMemResponseType result = SWCMEM_RES_NONE;
            if( SWCMEM_REQ_IDLE == MemBlockStatus[blockId].state ) {
                switch(request) {
                    case SWCMEM_REQ_WRITE_BLOCK:
                        if( 0 == Com_ReceiveSignal(ComConf_ComSignal_SwcMemRx_Data, &data) && (0 != data)) {
                            data = ~data;
                            for( uint8 idx = 0; idx < MemBlockCfg[blockId].blockSize; idx++ ) {
                                if( idx < sizeof(uint32) ) {
                                    MemBlockStatus[blockId].writeDataPtr[idx] = (uint8)(data & 0xFF);
                                    data >>= 8;
                                } else {
                                    MemBlockStatus[blockId].writeDataPtr[idx] = 0;
                                }
                            }
                            if( E_OK == NvM_WriteBlock(MemBlockCfg[blockId].blockHandle, MemBlockStatus[blockId].writeDataPtr) ) {
                                SwcMemStats[blockId].nofAcceptedWrites++;
                                MemBlockStatus[blockId].state = SWCMEM_REQ_WRITE_BLOCK;
                            } else {
                                result = SWCMEM_RES_WRITE_BLOCK_FAILED;
                            }
                        } else {
                            result = SWCMEM_RES_REQ_INVALID;
                        }
                        break;
                    case SWCMEM_REQ_READ_BLOCK:
                        memset(MemBlockStatus[blockId].readDataPtr, 0, MemBlockCfg[blockId].blockSize);
                        if( E_OK == NvM_ReadBlock(MemBlockCfg[blockId].blockHandle, MemBlockStatus[blockId].readDataPtr) ) {
                            SwcMemStats[blockId].nofAcceptedReads++;
                            MemBlockStatus[blockId].state = SWCMEM_REQ_READ_BLOCK;
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
            if( SWCMEM_RES_NONE != result ) {
                (void)Com_SendSignal(ComConf_ComSignal_SwcMemTx_Result, &result);
                (void)Com_SendSignal(ComConf_ComSignal_SwcMemTx_BlockId, &blockId);
                (void)Com_SendSignal(ComConf_ComSignal_SwcMemTx_Data, &invalidData);
            }
        }
        lastRequest = request;
        lastBlockId = blockId;
    }
}
#endif
