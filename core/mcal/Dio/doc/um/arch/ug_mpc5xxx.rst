
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

The functionality is implemented with MPC5xxx series System Integration Unit (SIU). 
Originally the name was SIU but now light versions of the SIU exist and in the 
latest version of the MPC5xxx it's called System Integration Unit Light (SIUL)
or System Integration Unit Light2 (SIUL2)

NXP normally names a port with a letter, e.g. port A. A channel within a port 
an index that runs from 0 up to port width is used, e.g. B[2], C[15], D[0].

A pad can have several functions, signals, 
that is configured in the PORT module. 
The pad is bound to a pin e.g. Pad 1 can be bound to pin 73 on a LQFP144 package and to 
ball P12 on a BGA257 package. 

For MPC5XXX devices the Autosar DioPortId is the numeric value for the port name.

=====  ==========
Port   DioPortId     
=====  ========== 
 A        0  
 B        1 
 C        2
 ..      .. 
=====  ==========

The Autosar DioChannelId is mapped as follows 

.. table:: PortPin
  :align: Left

=======  ==============
PortPin  DioChannelId     
=======  ============== 
 A[0]     0
 A[1]     1
 A[2]     2
 ..      ..  
 B[0]     16 
 B[1]     17
 ..      .. 
=======  ==============


Configuration
-----------------------------

Configurable parameters are described in the Autosar specification. However not all parameters are supported and these are listed in the "Parameters" chapter.
Parameters that needs further explanation are listed below.

.. list-table:: Parameters
  :widths: 50 50 
  :header-rows: 1
  :align: left

  * - Parameter
    - Description 
  * - Dio/DioConfig/DioPort/DioPortId
    - DioPortId is the port number.
  * - Dio/DioConfig/DioPort/DioChannel/DioChannelId
    - The Id here is the same as the Id in Port, e.g. if the "PortPinId"="5" this should also be "5"

|
|

Data flow between the software units
------------------------------------------

* Design contains several units and there is a date flow  between them.
* This section provides with sequence diagram for read and write channel service operating in both normal and development error mode. Other services follows the same sequence of operation.
Sequence diagram for READ service (normal operation mode)

Dio_Readchannel
     >       Dio_HW_Readchannel
                    >        Check pin (SIU.PCR[channelId].B.IBE)





Sequence diagram for READ service (development error operation mode):

...

Sequence diagram for WRITE service (normal operation mode:

...

Sequence diagram for WRITE service (development error operation mode:

...


|

Limitations
-----------------------------
API's :
 * Dio_FlipChannel is  not supported.

Configuration Parameters :
 * DioChannelGroupIdentification,   DioPortOffset  (DioChannelGroup container) and DioFlipChannelApi (DioGeneral container) are not supported.

|
|

Parameters
-----------------------------

This chapter includes all parameters used in the DIO module. Parameters starting with Arc are ARCCORE extensions to the module.

| 
DioConfig container
^^^^^^^^^^^^^^^^^^^^^^
 * Path: Dio/
 * Multiplicity: 1
 * Description: This container contains the configuration parameters and sub containers of the AUTOSAR DIO module. This container is a MultipleConfigurationContainer, i.e. this container and its sub-containers exist once per configuration setDioPort container
|
|
 * Path: Dio/DioConfig/
 * Multiplicity: 1..
 * Description: Configuration of individual DIO ports, consisting of channels and possible channel groups.


.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Parameter Name
    - Multiplicity 
    - Default
    - Supported
    - Description
  * - DioPortId
    - 1
    - 
    - Yes
    - Numeric identifier of the DIO port. Not all MCU ports may be used for DIO, thus there may be "gaps" in the list of all IDs. This value will be




|
|  


DioChannel container
^^^^^^^^^^^^^^^^^^^^^^
 * Path: Dio/DioConfig/DioPort/
 * Multiplicity: 0..
 * Description: Configuration of an individual DIO channel.


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
  * - DioChannelGroupIdentification
    - 1
    - 
    - NO
    - The DIO channel group is identified in DIO API by a pointer to a data structure (of type Dio_ChannelGroupType). That data structure contains the channel group information.
  * - DioPortMask
    - 1
    - 
    - Yes
    - This shall be the mask which defines the positions of the channel
  * - DioPortOffset
    - 1
    - 
    - No
    - The position of the Channel Group on the port, counted
    

|
|
 
 
DioGeneral container
^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Path: Dio/
 * Multiplicity: 1
 * Description: General DIO module configuration parameters.


.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Parameter Name
    - Multiplicity 
    - Default
    - Supported
    - Description
  * - DioDevErrorDetect
    - 1
    - 1
    - Yes
    - Switches the Development Error Detection and Notification
  * - DioFlipChannelApi
    - 1
    - 
    - No
    - Adds / removes the service Dio_FlipChannel() from the code.
  * - DioVersionInfoApi
    - 1
    - 0
    - Yes
    - Adds / removes the service Dio_GetVersionInfo() from the code.
 

MCAL specific implementation 
---------------------------------

The System Integration Unit Lite2 provides control over all the electrical pin controls and up to 32 ports with 16 bits of bidirectional, general-purpose input and output signals. 
One of the most important functions of the SIUL2 is that it enables the user to select the functions and electrical characteristics that appear on external device pins. 
It also controls the multiplexing of internal signals from one module to another and controls device I/O.
It supports up to 32 external interrupts with trigger event configuration. The following figure is the block diagram of SIUL2 and its interfaces to other system components.
The module provides dedicated pad control to general-purpose pads that can be configured as either inputs or outputs. 
The SIUL2 module provides registers that enable user software to read values from GPIO pads configured as inputs, and write values to GPIO pads configured as outputs:

 * When configured as output, you can write to an internal register to control the state driven on the associated output pad.
 * When configured as input, you can detect the state of the associated pad by reading the value from an internal register.
 * When configured as input and output, the pad value can be read back, which can be used
 
You can find all information about pad configuration in Chapter 16 *MPC5744P Reference Manual, Rev. 2, 06/2013* . 

Board specific testing
^^^^^^^^^^^^^^^^^^^^^^^^^^

.. todo::
   We should probably have a board manual instead......
   
The DIO test-framework     

.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Channel
    - API
    - Notes
  * - TEST_DIO_CHANNEL_1 (PORT configured as input)
    - Dio_ReadChannel, Port_SetPinDirection
    - 
  * - TEST_DIO_CHANNEL_2 (PORT configured as output)
    - Dio_WriteChannel, Port_SetPinDirection, Dio_ReadChannel
    - 
  * - TEST_DIO_USE_PORTS
    - Dio_ReadPort, Dio_WritePort, 
    - 
  * - TEST_DIO_GRP_PTR
    - Dio_ReadChannelGroup, Dio_WriteChannelGroup
    -
  * - TEST_DIO_CHANNEL_3
    - 
    - Used for readback testing for channels.
      Supported by boards: MPC5606B_XPC560B, SPC560B54_SPC56XXMB, BRD_MPC5645S_DEMO_V2 and ZYNQ   
  * - TEST_DIO_CGRP_W + TEST_DIO_CGRP_R
    - Dio_WriteChannelGroup, Dio_ReadChannelGroup
    - Used for readback testing for channels.
      Supported by boards: MPC5606B_XPC560B, SPC560B54_SPC56XXMB, BRD_MPC5645S_DEMO_V2 and ZYNQ
  * - TEST_DIO_PORT      
    - Dio_ReadPort, Dio_WritePort
    - Testing of physical loopback connection from DIO port to DIO port.


.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Channel
    - API
    - Notes
  * - TEST_DIO_CHANNEL_1
    - Dio_ReadChannel, Port_SetPinDirection
    - 
  * - TEST_DIO_CHANNEL_1
    - Dio_WriteChannel, Port_SetPinDirection, Dio_ReadChannel
    - 
  * - TEST_DIO_USE_PORTS
    - Dio_ReadPort, Dio_WritePort, 
    - 
  * - TEST_DIO_GRP_PTR
    - Dio_ReadChannelGroup, Dio_WriteChannelGroup




   

.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Board
    - Tested 
    - Notes
  * - mpc5516it
    - 
    - 
  * - mpc5567qrtech
    - 
    - 
  * - mpc5604b_xpc560b
    - 
    - 
  * - mpc5606b_xpc560b
    - 
    - 
  * - mpc5606s_xpc560s
    - 
    - 
  * - mpc5607b_xpc560b
    - 
    - 
  * - mpc5634m_trk
    - 
    - 
  * - mpc5643l_spc56l
    - 
    - 
  * - mpc5644a_xpc564a
    - 
    - 
  * - mpc5646b_xpc564xbc
    - 
    - 
  * - mpc5668_gkit
    - 
    - 
  * - mpc5668_gkit
    - 
    - 





