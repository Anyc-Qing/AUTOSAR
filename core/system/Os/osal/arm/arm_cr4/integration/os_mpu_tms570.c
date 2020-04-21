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

/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */
/* ----------------------------[includes]------------------------------------*/
/* @req ARC_SWS_OSAL_00034 */
#include "os_i.h"
#include "os_mm_regs.h"

/*lint -e845 LINT:OTHER: The | operator used used with 0 for readability */
/* lint -esym(950, __asm) MISRA:FALSE_POSITIVE:keyword asm for assembly instruction execution:
 *[MISRA 2012 Directive 2.1, required], [MISRA 2012 Rule 1.1, required], [MISRA 2012 Rule 1.2, advisory] */

/* ----------------------------[private define]------------------------------*/

#if (OS_SC3 == STD_ON ) || (OS_SC4 == STD_ON )

#define AP_SRW_URO               2   /* Supervisor RW, User RO */
#define AP_SRW_URW               3   /* Supervisor RW, User RW */

#define RSIZE_128                6   /* 2^(6+1) */
#define RSIZE_256                7
#define RSIZE_512                8
#define RSIZE_1K                 9
#define RSIZE_2K                 10
#define RSIZE_4K                 11
#define RSIZE_64K                15
#define RSIZE_128K               16
#define RSIZE_256K               17
#define RSIZE_512K               18
#define RSIZE_1M                 19
#define RSIZE_2M                 20
#define RSIZE_4M                 21
#define RSIZE_8M                 22
#define RSIZE_16M                23
#define RSIZE_32M                24
#define RSIZE_64M                25
/* .. */
#define RSIZE_4G                 31

#define RSIZE_TO_BYTES(_size)   (1 << ((_size)+1))

#define CALC_SIZE               0xCAFEFACEu
#define NOT_USED                0xFACECAFEu

/* Regions */
#define REGION_0                0u
#define REGION_1                1u
#define REGION_2                2u
#define REGION_3                3u
#define REGION_4                4u
#define REGION_5                5u      /* shared */
#define REGION_6                6u      /* shared */
#define REGION_7                7u
#define REGION_8                8u
#define REGION_9                9u
#define REGION_10               10u
#define REGION_11               11u
#define REGION_12               12u

/* MPU access control bits */
#define S_0                     0u
#define S_1                     1u
#define C_0                     0u
#define C_1                     1u
#define B_0                     0u
#define B_1                     1u

#define XN_0                    0u
#define XN_1                    1u

#define TEX_000                 0x0u
#define TEX_001                 0x1u

#define SHIFT_32(_val,_shift) ((uint32)(_val) << (uint32)(_shift))


#define ACCESS_CONTROL_RAM  ( \
                    SHIFT_32(0U, 13U) |  /* Reserved */ \
                    SHIFT_32(1U, 12U) |  /* XN */ \
                    SHIFT_32(AP_SRW_URW, 8U) |   /* AP[2:0], 3 - R/W */\
                    SHIFT_32(1U        , 3U) |   /* TEX[2:0] */ \
                    SHIFT_32(0U        , 2U) |   /* S - Sharable */ \
                    SHIFT_32(0U        , 1U) |   /* C */ \
                    SHIFT_32(0U        , 0U))    /* B */


/* ----------------------------[private macro]-------------------------------*/

#if !defined(ARRAY_LENGTH)
#define ARRAY_LENGTH(arr_var) (sizeof(arr_var)/sizeof(arr_var[0]))
#endif

/* Size Enable */
#define MPU_SIZE_ENABLE(_enable, _subregion, _size)      \
                    (SHIFT_32((_subregion), 8U) |     /* Sub Region */                    \
                     SHIFT_32((_size)     , 1U) |     /* Region Size (size = 2^(N+1)  */  \
                     SHIFT_32((_enable)   , 0U))      /* Enable */

/* Access control */
#define MPU_ACC_CTRL(_xn, _ap, _tex, _s,_c,_b)                                  \
                       (SHIFT_32((_xn)   , 12U) |     /* XN */                      \
                        SHIFT_32((_ap)   , 8U) |      /* AP[2:0] */                 \
                        SHIFT_32((_tex)  , 3U) |      /* TEX[2:0] */                \
                        SHIFT_32((_s)    , 2U) |      /* S - Sharable */            \
                        SHIFT_32((_c)    , 1U) |      /* C */                       \
                        SHIFT_32((_b)    , 0U))       /* B */


/* ----------------------------[private typedef]-----------------------------*/

typedef struct {
    uint32 region;
    uint32 start;
    uint32 end;
    uint32 rsize;
    uint32 sizeEnable;
    uint32 accCtrl;
} RegionType;


typedef struct {
    const RegionType *rPtr;
    uint32      rSize;
} RegionInfoType;


/* ----------------------------[private function prototypes]-----------------*/
void WriteRegion(uint32 region, uint32 baseAddr, uint32 sizeEnable, uint32 accessControl );
void EnableMMU( void );
static inline void setupRegion(const RegionType *pCfg, uint32 rcount );

/* ----------------------------[private variables]---------------------------*/

extern uint8 __OS_START_SEC_shared_bss_shared[];
extern uint8 __OS_STOP_SEC_shared_bss_shared[];

extern uint8 __OS_START_SEC_shared_data_shared[];
extern uint8 __OS_STOP_SEC_shared_data_shared[];


/*
 *
 * Sizes
 *   The region size is 2^(N+1) where N is the size, e.g N=7 -> size is 2^(7+1) =  256 bytes.
 *   The region can be subdivided into 8 equally sized regions
 *   Memory Map is located: "2.2.2 Memory-Map" Table in TRM
 *
 * TMS570 Memory Map
 * -------------------------------
 *   0x0000.0000 -- 0x0013.FFFF Flash
 *   0x0800.0000 -- 0x0802.FFFF RAM
 *   0x0840.0000 -- 0x0842.FFFF RAM ECC
 *   0xFC00.0000 -- 0xFCFF.FFFF Peri Frame 2
 *   0xFF00.0000 -- 0xFFFF.FFFF Peri Frame 1 + System Modules
 *
 *   B5.2.1
 *   PL0 - User Mode
 *   PL1 - Supervisor MOde
 *
 *   http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.dui0553a/BABDJJGF.html
 *
 *
 *  Attribute Tips:
 *  - TMS570LS12 does not have a cache (So C attribute should not matter)
 *  - The default memory map have "0xFFFFFFFF - 0xC0000000 Strongly-ordered",
 *    so we should to for peripherals.
 *
 *  TEX C B Description Memory type
 *  --------------------------------------------------------
 *  000 0 0 Strongly-ordered Strongly-ordered
 *  001 0 0 Outer and Inner non-cacheable Normal
 *
 */
const RegionType mpuInitRegion[] = {
        {
            /* Flash (TCM memory*/
            .region         = REGION_0,
            .start          = 0U,
            .end            = NOT_USED,
            .rsize          = NOT_USED,
            .sizeEnable     = MPU_SIZE_ENABLE(1u,0u,RSIZE_4M),
            .accCtrl        = MPU_ACC_CTRL( XN_0 , AP_SRW_URO, TEX_001, S_0, C_0, B_0),
        },
        {
             /* RAM (TCM memory) */
            .region         = REGION_1,
            .start          = (uint32)0x08000000U,
            .end            = NOT_USED,
            .rsize          = NOT_USED,
            .sizeEnable     = MPU_SIZE_ENABLE(1u,0u,RSIZE_256K),
            .accCtrl        = MPU_ACC_CTRL( XN_1 , AP_SRW_URO, TEX_001, S_0, C_0, B_0),
        },
        {
             /*  .bss.shared */
            .region         = REGION_2,
            .start          = (uint32)__OS_START_SEC_shared_bss_shared,
            .end            = (uint32)__OS_STOP_SEC_shared_bss_shared,
            .rsize          = CALC_SIZE,
            .sizeEnable     = MPU_SIZE_ENABLE(1u,0u,0u),
            .accCtrl        = MPU_ACC_CTRL( XN_1 , AP_SRW_URW, TEX_001, S_0, C_0, B_0),
        },
        {
             /*  .data.shared */
            .region         = REGION_3,
            .start          = (uint32)__OS_START_SEC_shared_data_shared,
            .end            = (uint32)__OS_STOP_SEC_shared_data_shared,
            .rsize          = CALC_SIZE,
            .sizeEnable     = MPU_SIZE_ENABLE(1u,0u,0u),
            .accCtrl        = MPU_ACC_CTRL( XN_1 , AP_SRW_URW, TEX_001, S_0, C_0, B_0),
        },
        {
             /* Allow to read from RTI */
            .region         = REGION_4,
            .start          = 0xFFFFFC00U,
            .end            = NOT_USED,
            .rsize          = NOT_USED,
            .sizeEnable     = MPU_SIZE_ENABLE(1u,0u,RSIZE_256),
            .accCtrl        = MPU_ACC_CTRL( XN_1 , AP_SRW_URO, TEX_000, S_0, C_0, B_0),
        },

};


#if defined(CFG_SAFETY_PLATFORM)
/* Peripherals in the QM region */
const RegionType PRegionCfg_QM[] = {
    /* Dio */
    {
        .region         = REGION_8,
        .start          = (uint32)0xFC000000U,
        .end            = (uint32)0u,
        .rsize          = NOT_USED,
        .sizeEnable     = MPU_SIZE_ENABLE(1u,0u,RSIZE_64M),
        .accCtrl        = MPU_ACC_CTRL( XN_1 , AP_SRW_URW, TEX_000, S_0, C_0, B_0),
    },

    /* DCAN1 */
    {
        .region         = REGION_9,
        .start          = 0xFFF7DC00u,
        .end            = NOT_USED,
        .rsize          = NOT_USED,
        .sizeEnable     = MPU_SIZE_ENABLE(1u,0u,RSIZE_512),
        .accCtrl        = MPU_ACC_CTRL( XN_1 , AP_SRW_URW, TEX_000, S_0, C_0, B_0),
    },

    /* NOT USED */
    {
        .region         = REGION_10,
        .start          = NOT_USED,
        .end            = NOT_USED,
        .rsize          = NOT_USED,
        .sizeEnable     = MPU_SIZE_ENABLE(0u,0u,0u),
        .accCtrl        = MPU_ACC_CTRL( XN_1 , AP_SRW_URW, TEX_000, S_0, C_0, B_0),
    },

    /* NOT USED */
    {
        .region         = REGION_11,
        .start          = NOT_USED,
        .end            = NOT_USED,
        .rsize          = NOT_USED,
        .sizeEnable     = MPU_SIZE_ENABLE(0u,0u,0u),
        .accCtrl        = MPU_ACC_CTRL( XN_1 , AP_SRW_URW, TEX_000, S_0, C_0, B_0),
    },
    /* NOT USED */
    {
        .region         = REGION_7,
        .start          = NOT_USED,
        .end            = NOT_USED,
        .rsize          = NOT_USED,
        .sizeEnable     = MPU_SIZE_ENABLE(0u,0u,0u),
        .accCtrl        = MPU_ACC_CTRL( XN_1 , AP_SRW_URW, TEX_000, S_0, C_0, B_0),
    },
};


/* Peripherals in the A region
 * */
const RegionType PRegionCfg_A0[] = {
    /* PWM */
    {
        .region         = REGION_8,
        .start          = (uint32)0xFCF78800u,      /* Starts at 0xFCF78C00u .. must subregion */
        .end            = (uint32)0u,
        .rsize          = NOT_USED,
        .sizeEnable     = MPU_SIZE_ENABLE(1u,0x0Fu,RSIZE_2K),
        .accCtrl        = MPU_ACC_CTRL( XN_1 , AP_SRW_URW, TEX_000, S_0, C_0, B_0),
    },
    /* SPI */
    {
        .region         = REGION_9,
        .start          = (uint32)0xFFF7F400U,
        .end            = (uint32)0u,
        .rsize          = NOT_USED,
        .sizeEnable     = MPU_SIZE_ENABLE(1u,0u,RSIZE_4K),
        .accCtrl        = MPU_ACC_CTRL( XN_1 , AP_SRW_URW, TEX_000, S_0, C_0, B_0),
    },
    /* SPI RAM */
    {
        .region         = REGION_10,
        .start          = (uint32)0xFF080000U,      /* Starts at 0xFF0A0000 ... must subregion */
        .end            = (uint32)0u,
        .rsize          = NOT_USED,
        .sizeEnable     = MPU_SIZE_ENABLE(1u,0x03u,RSIZE_512K),
        .accCtrl        = MPU_ACC_CTRL( XN_1 , AP_SRW_URW, TEX_000, S_0, C_0, B_0),
    },
    /* ADC */
    {
        .region         = REGION_11,
        .start          = (uint32)0xFFF7C000U,
        .end            = (uint32)0u,
        .rsize          = NOT_USED,
        .sizeEnable     = MPU_SIZE_ENABLE(1u,0u,RSIZE_1K),
        .accCtrl        = MPU_ACC_CTRL( XN_1 , AP_SRW_URW, TEX_000, S_0, C_0, B_0),
    },
    /* Dio Read
     * Having this on both QM and A side is of course wrong... but this is demo only
     * */
    {
        .region         = REGION_7,
        .start          = (uint32)0xFC000000U,
        .end            = (uint32)0u,
        .rsize          = NOT_USED,
        .sizeEnable     = MPU_SIZE_ENABLE(1u,0u,RSIZE_64M),
        .accCtrl        = MPU_ACC_CTRL( XN_1 , AP_SRW_URW, TEX_000, S_0, C_0, B_0),
    },


};


RegionInfoType PRegionInfo[] =
{
        [APPLICATION_ID_OsApplication_A0].rPtr = &PRegionCfg_A0,
        [APPLICATION_ID_OsApplication_A0].rSize = sizeof(PRegionCfg_A0)/sizeof(PRegionCfg_A0[0]),

        [APPLICATION_ID_OsApplication_QM].rPtr = &PRegionCfg_QM,
        [APPLICATION_ID_OsApplication_QM].rSize = sizeof(PRegionCfg_QM)/sizeof(PRegionCfg_QM[0]),

};
#else
#include "os_mpu_peripheral.h"
#endif


/* ----------------------------[private functions]---------------------------*/

/* lint -save -e9033 -e970 -e923 MISRA:FALSE_POSITIVE:Allow calculation of address using pointers arithmetic:
 *[MISRA 2012 Rule 10.8, required], [MISRA 2012 Directive 4.6, advisory], [MISRA 2012 Rule 18.4, advisory],  [MISRA 2012 Rule 11.1, required], [MISRA 2012 Rule 11.4, advisory], [MISRA 2012 Rule 11.6, required] */
/* lint -save -e9027 -e715 -e701 -e9050 -e838 -e845 -e9053 -e970 -e834 -e545 -e818 -e754 -e940 MISRA:FALSE_POSITIVE:Allow bitwise and arithmetic operation on essential types:
 *[MISRA 2012 Rule 10.1, required], [MISRA 2012 Rule 2.7, advisory], [MISRA 2012 Rule 12.1, advisory], [MISRA 2012 Rule 12.2, required], [MISRA 2012 Rule 8.13, advisory]*/
/* lint -save -e522 -e438 MISRA:FALSE_POSITIVE:Allow assembly execution:[MISRA 2012 Rule 2.2, required] */
/* lint -save -e651 -e542 MISRA:FALSE_POSITIVE:Allow assembly execution:[MISRA 2004 Info, required] */



static inline void setupRegion(const RegionType *pCfg, uint32 rcount )
{
    uint32 rsize;
    uint32 size;

    for( uint8 i = 0; i < rcount; i++ ) {

        if( pCfg[i].rsize == CALC_SIZE ) {
            size = pCfg[i].end - pCfg[i].start;
            if( size != 0UL) {
                rsize = (uint32)ilog2( (size * 2UL) - 1UL  ) - 1;
                WriteRegion(pCfg[i].region, pCfg[i].start, pCfg[i].sizeEnable | (rsize << (uint32)1u), pCfg[i].accCtrl );
            }
        } else {
            WriteRegion(pCfg[i].region, pCfg[i].start, pCfg[i].sizeEnable, pCfg[i].accCtrl );
        }
    }
}


/**
 *
 * @param region
 * @param baseAddr
 * @param sizeEnable
 * @param accessControl
 */

/*lint -e{950} */
void WriteRegion(uint32 region, uint32 baseAddr, uint32 sizeEnable, uint32 accessControl ) {
#if (CFG_OS_DEBUG == STD_ON)
    printf("r=%x base=%08x, sizeCtrl=%08x(%08x), ac=%04x\n",region, baseAddr, size, 1 << ((size >> 1)+1), accessControl);
#endif
	if( sizeEnable == 0UL ) {
		/* If the size is zero, just disable the entry */
		__asm volatile ("mcr p15, 0, %0, c6, c2, 0" : : "r" (region));
		__asm volatile ("mcr p15, 0, %0, c6, c1, 2" : : "r" (sizeEnable));
	} else {
		ASSERT((baseAddr & 0x1fUL) == 0UL );
		ASSERT(RSIZE_TO_BYTES((sizeEnable >> 1u) & 0x1fu  ) >= 32u); /* Smallest allowed region is 32 bytes */

		__asm volatile ("mcr p15, 0, %0, c6, c2, 0" : : "r" (region));
		__asm volatile ("mcr p15, 0, %0, c6, c1, 0" : : "r" (baseAddr));
		__asm volatile ("mcr p15, 0, %0, c6, c1, 4" : : "r" (accessControl));
		__asm volatile ("mcr p15, 0, %0, c6, c1, 2" : : "r" (sizeEnable));
	}
}

/*lint -e{950} */
static uint32 SCTLR_Read(void) {
    uint32 r = 0;
    __asm volatile("mrc   p15, 0, %0, c1, c0, 0 " : "=r" (r));
    return r;
}

/*lint -e{950} */
static void SCTLR_Write(uint32 r) {
    __asm volatile("mcr   p15, 0, %0, c1, c0, 0" : : "r" (r));
}

/*lint -e{950} */
static uint32 CLIDR_Read( void ) {
    uint32 r = 0;
    __asm volatile("mrc   p15, 1, %0, c0, c0, 1 " : "=r" (r));
    return r;
}

static inline void DataSync(void) {
    __asm volatile("dsb");
}

static inline void InstSync(void) {
    __asm volatile("isb");
}

void EnableMMU( void ) {
    uint32 r;
    uint32 clidr;

    DataSync();
    r = SCTLR_Read();


    clidr = CLIDR_Read();
    /* check if cache is implemented */
    if( (clidr & 0x3) != 0 ) {
        r |= (1UL << 2 ) |   /* Cache enable */
             (1UL << 0 );    /* MPU enable */
    } else {
        /* Just enable the MPU */
        r |= (1UL << 0 );    /* MPU enable */
    }

    /* Enable background region (BR bit), according to this:
     * http://www.ti.com/lit/an/spna120/spna120.pdf
     * "the default background region is only valid in Supervisor mode"
     * , then we need only to setup the User mode.
     */
    r |= (1U << 17U );

    SCTLR_Write(r);
    InstSync();
}

/*
 * MPU: We have unified map.
 *
 */

#if (CFG_OS_DEBUG == STD_ON )
typedef union {
    vuint32_t R;
    struct {
        vuint32_t BaseAddr:30;
        vuint32_t :2;
    } B;
} MpuBAR_T;

typedef union {
    vuint32_t R;
    struct {
        vuint32_t :16;
        vuint32_t SxD:3;    /* Subregion disable */
        vuint32_t :2;
        vuint32_t RSize:5;  /* Region Size field. */
        vuint32_t En:5;
    } B;
} MpuBR_T;

typedef union {
    vuint32_t R;
    struct {
        vuint32_t :19;
        vuint32_t XN:1;
        vuint32_t :1;
        vuint32_t AP:2;
        vuint32_t :2;
        vuint32_t TEX:3;
        vuint32_t S:1;
        vuint32_t C:1;
        vuint32_t B:1;
    } B;
} MpuACR_T;

struct MpuEntryT {
    uint32   region;
    MpuBAR_T bar;
    MpuBR_T  br;
    MpuACR_T acr;
};

struct MpuEntryT MpuTable[] =  {
     {
         .region = 0,
         .bar.R = 0x0UL,
         .br.R = 0x0UL,
         .acr.R = 0x0UL,
     },
     {
         .region = 1,
         .bar.R = 0x0UL,            /* Base Address */

         .br.B.SxD = 0x0UL,
         .br.B.RSize = 0x3fUL,      /* Region Size (size = 2^(N+1)  */
         .br.B.En = 0x1UL,          /* Enable */

         .acr.B.AP  = 0x0UL, .acr.B.TEX = 0x0UL,.acr.B.S = 0x0UL,
         .acr.B.C   = 0x0UL, .acr.B.B   = 0x0UL,
     },
     {
         .region = 2,
         .bar.R = 0x0UL,

         .br.B.SxD = 0x0UL,         /* Base Address */
         .br.B.RSize = 0x3fUL,      /* Region Size (size = 2^(N+1)  */
         .br.B.En = 0x1UL,          /* Enable */

         .acr.B.AP  = 0x0UL, .acr.B.TEX = 0x0UL,.acr.B.S = 0x0UL,
         .acr.B.C   = 0x0UL, .acr.B.B   = 0x0UL,
     },
};
#endif /*defined(CFG_OPT_DEBUG) */
#endif /* (OS_SC3 == STD_ON ) || (OS_SC4 == STD_ON ) */

/* ----------------------------[public functions]----------------------------*/

#if (OS_SC3 == STD_ON ) || (OS_SC4 == STD_ON )
/* @req ARC_SWS_OSAL_00015 */
void Os_MMInit( void ) {

    setupRegion( mpuInitRegion,sizeof(mpuInitRegion)/sizeof(mpuInitRegion[0]));

    /* Array length must match for peripheral regions,
     * Peripheral regions that is used on one side must be disabled/re-used
     * on the other side */
#if defined(CFG_SAFETY_PLATFORM)
    ASSERT( ARRAY_LENGTH(PRegionCfg_QM) == ARRAY_LENGTH(PRegionCfg_A0) );
#endif

    EnableMMU();
}


/**
 * @breif Set application MPU settings.
 * @param aP
 */
/* @req ARC_SWS_OSAL_00016 */
void Os_MMSetApplUserMode( const  OsAppVarType *aP ) {

    /* User Mode, .data */

    /* @req SWS_Os_00086 */
    /* @req SWS_Os_00198 */
    /* @req SWS_Os_00207 */
    /* @req SWS_Os_00356 */
    WriteRegion(REGION_5, aP->regs[MPU0_REG_TASK_DATA_BASEADDR], aP->regs[MPU0_REG_TASK_DATA_SIZEENABLE], ACCESS_CONTROL_RAM );
    /* @req SWS_Os_00355 */
    /* User Mode, .bss */
    WriteRegion(REGION_6, aP->regs[MPU0_REG_TASK_BSS_BASEADDR], aP->regs[MPU0_REG_TASK_BSS_SIZEENABLE], ACCESS_CONTROL_RAM );


#if defined(CFG_SAFETY_PLATFORM)
    switch(GetApplicationID()) {
        case APPLICATION_ID_OsApplication_QM:
            setupRegion(PRegionCfg_QM, ARRAY_LENGTH(PRegionCfg_QM));
            break;
        case APPLICATION_ID_OsApplication_A0:
            setupRegion(PRegionCfg_A0, ARRAY_LENGTH(PRegionCfg_A0));
            break;
        default:
            break;
    }


#endif

}

/* @req ARC_SWS_OSAL_00017 */
void Os_MMSetUserModeIsr( const OsIsrVarType *isrPtr  ) {
    OsAppVarType *aP = Os_ApplGet(isrPtr->constPtr->appOwner);

    if( aP->trusted == 0) {
        Os_MMSetApplUserMode(aP);
    }
}

/* @req ARC_SWS_OSAL_00018 */
void Os_MMSetUserMode( const OsTaskVarType *pcbPtr ) {
    OsAppVarType *aP = Os_ApplGet(pcbPtr->constPtr->applOwnerId);

    if( aP->trusted == 0) {
        Os_MMSetApplUserMode(aP);
    }
}


boolean Os_MMValidPerAddressRange( AreaIdType area, uint32 addr, uint32 size ) {
    boolean rv = FALSE;
    ApplicationType id = GetApplicationID();
    const RegionType *rPtr;

    rPtr =  PRegionInfo[id].rPtr;

    /* Peripheral regions, check addr */
    for( uint8 i = 0; i < PRegionInfo[id].rSize; i++ ) {

        if( (addr >= rPtr->start) && ((addr+size) < rPtr->end) ) {
            rv = TRUE;
            break;
        }
    }

    return rv;
}



#endif /* (OS_SC3 == STD_ON ) || (OS_SC4 == STD_ON ) */

