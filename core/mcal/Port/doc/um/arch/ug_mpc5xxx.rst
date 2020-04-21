
.. |mcu| replace:: MPC5XXX 

User guide for |mcu|
=======================

Hardware support
-----------------------------

The module supports at least the following MCUs:

#. MPC5516
#. MPC5567
#. MPC5604B
#. MPC5606B
#. MPC5606S
#. MPC5607B
#. MPC5634M
#. MPC5643L
#. MPC5644A
#. MPC5645S
#. MPC5646B
#. MPC5668G
#. MPC5744P
#. MPC5747C
#. MPC5748G
#. MPC5777M


Configuration
-------------------------

Configurable parameters are described in the Autosar specification. However not all parameters are supported and these are listed in the "Parameters" chapter.
This module configures the MIO routing for peripherals. Supported peripheral configurations TTC, SWDT, SRAM/NOR, NAND FLASH, QUAD SPI, SDIO, GPIO, USB, ETHERNET, SPI, CAN, UART, I2C, PJTAG and TRACE.

The following considerations need to be made: 
 * Pins which supports both input and output directions should be configured as output. 
 * Any pin configured as input makes the output buffer enter tri-state. 
 * PortPinId represents the MIO pin (pin 0-53). 
 * PortPinLevelValue is only configurable in DIO in output mode.
 * SuspendInterrupts/ResumeInterrupts referred in SchM_Port.h shall be implemented by the integrator to disable/enable all interrupts.
 
Note: The MDIO pin for Ethernet should be configured twice once as input and other as output. The port validation reports error which can be ignored in this specific case.

|
|

Data flow between the software units
------------------------------------------

Design contains several units and there is a date flow  between them.


|

Limitations
-----------------------------
 * Port direction and mode is always changeable
 * Deviations for configuring SPI mode in mpc5634m 
 * Port_SetPinMode() may set other things than the mode which is not according to AUTOSAR.,It assigns the SIU.PCR.R register (further info is found in the reference manual for the corresponding device)

|
|

Parameters
-----------------------------

This chapter includes all parameters used in the PORT module. Parameters starting with Arc are ARCCORE extensions to the module.


| 
PortConfigSet container
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

 * Path: Port/
 * Multiplicity: 1
 * Description: This container is the base of a multiple configuration set.
|
|

PortPin container
^^^^^^^^^^^^^^^^^^^^^^


 * Path: Port/PortConfigSet/PortContainer/
 * Multiplicity: 1..
 * Description: Configuration of the individual port pins.


.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Parameter Name
    - Multiplicity 
    - Default
    - Supported
    - Description
  * - PortPinDirection
    - 1
    - 
    - Yes
    - The initial direction of the pin (IN or OUT). If the direction is not changeable, the value configured here is fixed.
  * - PortPinDirectionChangeable
    - 1
    - 
    - No
    - Parameter to indicate if the direction is changeable on a port pin during runtime.
  * - PortPinId
    - 1
    - 
    - Yes
    - Pin Id of the port pin. This value will be assigned to the symbolic name derived from the port pin container short name.
  * - PortPinInitialMode
    - 1
    - 
    - Yes
    - Port pin mode from mode list for use with Port_Init() function.
  * - PortPinLevelValue
    - 1
    - 
    - Yes
    - Port Pin Level value from Port pin list.
  * - PortPinMode
    - 1..
    - 
    - No
    - Port pin mode from mode list.
  * - PortPinModeChangeable
    - 1
    - 
    - No
    - Parameter to indicate if the mode is changeable on a port pin during runtime. True: Port Pin mode changeable allowed. False: Port Pin mode changeable not permitted.
  * - ArcPortPinPull
    - 1
    - 
    - Yes
    - Sets internal pull up or pull down for this pin.
  * - ArcPortPinSlewRate
    - 1
    - 
    - Yes
    - Sets the slew rate for this pin.
  * - ArcPortPinOpenDrainEnable
    - 1
    - 0
    - Yes
    - Parameter to indicate if this pin has Open drain output enabled.



|
|  


PortGeneral container
^^^^^^^^^^^^^^^^^^^^^^
 * Path: Port/
 * Multiplicity: 1
 * Description: Module wide configuration parameters of the PORT driver.


.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Parameter Name
    - Multiplicity 
    - Default
    - Supported
    - Description
  * - DioChannelId
    - 1
    - 
    - Yes
    - Channel Id of the DIO channel. This value will be assigned to the symbolic names.


|
|

 
DioChannelGroup container
^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Path: Dio/DioConfig/DioPort/
 * Multiplicity: 0..
 * Description: Definition and configuration of DIO channel groups. A channel group represents several adjoining DIO channels represented by a logical group.


..   :widths: 30 10 10 10 40
.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Parameter Name
    - Multiplicity     
    - Default
    - Supported
    - Description
  * - PortDevErrorDetect
    - 1
    - 1
    - Yes
    - Switches the Development Error Detection and Notification on or off.
  * - PortSetPinDirectionApi
    - 1
    - 0
    - Yes
    - Pre-processor switch to enable / disable the use of the function Port_SetPinDirection().
  * - PortSetPinModeApi
    - 1
    - 0
    - Yes
    - Pre-processor switch to enable / disable the use of the function Port_SetPinMode().
  * - PortVersionInfoApi
    - 1
    - 0
    - Yes
    - Pre-processor switch to enable / disable the API to read out the modules version information.
    

|
|
 