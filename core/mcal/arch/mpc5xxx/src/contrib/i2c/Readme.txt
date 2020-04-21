This I2C driver is delivered "as is". It's a modified version of example code 
from NXP used in an MPC5748 project. No testing performed of this.
The driver is NOT THREAD SAFE! 
It can be used in either polling mode or interrupt mode. They work in similar 
ways. If interrupt mode the write or read function should be continously called
 while it returns I2C_FRAME_NO_ENDED.
 In polling mode only one call of the write/read function will be needed, the 
 call will block until data is written/read or error returned.  
