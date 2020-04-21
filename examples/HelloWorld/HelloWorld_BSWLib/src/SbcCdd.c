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
#if defined(BRD_MPC5604B_XPC560B)
#include "mpc55xx.h"



// Tasks

static vuint32_t i = 0;                      /* Dummy idle counter */

static uint16_t RecDataMaster = 0;           /* Data recieved on master SPI */



static void initDSPI_1(void) {

            DSPI_1.MCR.R = 0x80010001;     /* Configure DSPI_1 as master */

            DSPI_1.CTAR[0].R = 0x780A7727; /* Configure CTAR0  */

            DSPI_1.MCR.B.HALT = 0x0;      /* Exit HALT mode: go from STOPPED to RUNNING state*/

}






static void ReadDataDSPI_1(void) {

            while (DSPI_1.SR.B.RFDF != 1){}  /* Wait for Receive FIFO Drain Flag = 1 */

            RecDataMaster = DSPI_1.POPR.R;   /* Read data received by master SPI */

            DSPI_1.SR.R = 0x90020000;        /* Clear TCF, RDRF, EOQ flags by writing 1 */

}



static void initLINAndCANonTRKboard(void) {

            initDSPI_1();                /* Initialize DSPI_1 as Slave SPI and init CTAR0 */

            DSPI_1.PUSHR.R = 0x08014E28; /* Transmit data from master to slave SPI with EOQ */

            ReadDataDSPI_1();            /* Read data on slave DSPI */

            DSPI_1.PUSHR.R = 0x08015A00; /* Transmit data from master to slave SPI with EOQ */

            ReadDataDSPI_1();            /* Read data on slave DSPI */

            DSPI_1.PUSHR.R = 0x08015E18; /* Transmit data from master to slave SPI with EOQ */

            ReadDataDSPI_1();            /* Read data on slave DSPI */

            DSPI_1.PUSHR.R = 0x080160C0; /* Transmit data from master to slave SPI with EOQ */

            ReadDataDSPI_1();            /* Read data on slave DSPI */

            DSPI_1.PUSHR.R = 0x080166C4; /* Transmit data from master to slave SPI with EOQ */

            ReadDataDSPI_1();            /* Read data on slave DSPI */

            DSPI_1.PUSHR.R = 0x080168C4; /* Transmit data from master to slave SPI with EOQ */

            ReadDataDSPI_1();            /* Read data on slave DSPI */

}

#endif

void SbcCdd_Init(void) {
#if defined(BRD_MPC5604B_XPC560B)
	initLINAndCANonTRKboard();
#endif
}

