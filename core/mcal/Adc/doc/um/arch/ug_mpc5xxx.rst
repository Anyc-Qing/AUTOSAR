
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

|
|

This page describes generic information that is applicable for all AUTOSAR ADC modules when developed according to the standard e.g. buffer layout.

The ADC is developed according to ASR Specification of ADC driver according to ASR 4.3.0 The ADC module initializes and controls the internal Analogue Digital Converter Unit(s) of the microcontroller. It provides services to start and stop a conversion respectively to enable and disable the trigger source for a conversion. Furthermore it provides services to enable and disable a notification mechanism and routines to query the status and result of a conversion.

The ADC Driver can consist of several more or less independent hardware units (AdcHwUnit). Each hardware Unit includes all parts necessary to perform an analogue to digital conversion.

For each hardware unit one or more ADCChannelGroup can be configured. Each group is a sub container to a AdcHWUnit and can be seen as part of the unit. 
Each ADCChannelGroup refers to one or many ADCChannel which represents a logical ADC entity bound to one port pin. The channels are also subcontainers to the AdcHwUnit may be referred in several AdcChannelGroups. All interfaces within the ADC module uses AdcChannelGroups e.g. for starting conversions. The conversion of the whole ADCChannelGroup  is triggered by one source and there are two types of sources (hardware trigger and software triggers). The ADC channels within the group are then converted one after another and the result saved in a buffer.

The hardware units always work on groups and never on individual channels. If you want to sample just one channel you put that channel in a group with only one member.

|
|

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
  * - ADC_INIT_ID
    - 
  * - 
    - 
|
|

Data flow between the software units
------------------------------------------

* Design contains several units and there is a date flow  between them.
* This section provides with sequence diagram for read and write channel service operating in both normal and development error mode. Other services follows the same sequence of operation.


The complete sequence diagrams of Adc APIs can refer to chapter 9 of "AUTOSAR_SWS_ADCDriver, Release: 4.3.0".

Following are examples of the sequence diagrams.

|
|

Adc initialization sequence diagram:


.. image:: pictures/Adc_Init_dataflow_diagram.png

|
|


Limitations
-----------------------------
 * IoHwAb_Adc_Notification is not supported
 * QueueSupport is not supported
 * SelectTriggerSrc is not supported
 * Hardware trigger is not supported 
 * AlignmentSelect is not supported
 * LimitCheck is not supported
 * Grppriority is not supported
 * Power managemenet is not supported (introduced in ASR 4.1.2)
 * External ADC channels are not supported


|
|

Parameters
-----------------------

This chapter includes all parameters used in the ADC module. Parameters starting with Arc are ARCCORE extensions to the module.

| 

AdcConfigSet container
^^^^^^^^^^^^^^^^^^^^^^^^
 * Path: Adc/
 * Multiplicity: 1
 * Description: This is the base container that contains the post-build selectable configuration parameters.
 
|
|

AdcHwUnit container
^^^^^^^^^^^^^^^^^^^^^^
 * Path: Adc/AdcConfigSet/
 * Multiplicity: 1..
 * Description: This container contains the Driver configuration (parameters) depending on grouping of channels


.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Parameter Name
    - Multiplicity 
    - Default
    - Supported
    - Description
  * - AdcClockSource
    - 0..1
    - 
    - No
    - The ADC module specific clock input for the conversion unit can
  * - AdcHwUnitId
    - 1
    - 
    - No
    - Description: Numeric ID of the HW Unit. This symbolic name allows accessing Hw Unit data. Enumeration literals are defined vendor specific.
  * - ArcAdcPrescaleDivideFactor
    - 0..1
    - 
    - Yes
    - Description: ArcAdcPrescaleDivideFactor describes the clock divide factor. Half bus clock (Value 2) and Same bus clock (Value 1)
  * - AdcPrescale
    - 0..1
    - 
    - No
    - Optional ADC module specific clock prescale factor, if supported by hardware.




|
|  


AdcChannel container
^^^^^^^^^^^^^^^^^^^^^^
 * Path: Adc/AdcConfigSet/AdcHwUnit/
 * Multiplicity: 1..
 * Description: This container contains the channel configuration (parameters) depending on the hardware capability.


.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Parameter Name
    - Multiplicity 
    - Default
    - Supported
    - Description
  * - AdcChannelHighLimit
    - 0..1
    - 
    - No
    - High limit - used for limit checking.
  * - AdcChannelLimitCheck
    - 0..1
    - 
    - No
    - Enables or disables limit checking for an ADC channel.
  * - AdcChannelLowLimit
    - 0..1
    - 
    - No
    - Low limit - used for limit checking.
  * - AdcChannelRangeSelect
    - 0..1
    - 
    - No
    - In case of active limit checking: defines which conversion values are taken into account related to the boarders defined with AdcChannelLowLimit and AdcChannelHighLimit.
  * - AdcChannelRefVoltsrcHigh
    - 0..1
    - 
    - No
    - Upper reference voltage source for each channel.
  * - AdcChannelRefVoltsrcLow
    - 0..1
    - 
    - No
    - Lower reference voltage source for each channel.
  * - AdcChannelResolution
    - 0..1
    - 
    - No
    - Channel resolution in bits.
  * - ArcAdcChannelId
    - 1
    - 
    - Yes
    - This parameter defines the assignment of the channel to the physical ADC hardware channel.
  * - AdcChannelConvTime
    - 0..1
    - 
    - No
    - Configuration of conversion time, i.e. the time during which the analogue value is converted into digital representation, (in clock cycles) for each channel, if supported by hardware.
  * - AdcChannelId
    - 1
    - 
    - No
    - This parameter defines the assignment of the channel to the physical ADC hardware channel.
  * - AdcChannelSampTime
    - 0..1
    - 
    - No
    - Configuration of sampling time, i.e. the time during which the value is sampled, (in clock cycles) for each channel, if supported by hardware.


|
|

 
AdcGroup container
^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Path: Adc/AdcConfigSet/AdcHwUnit/
 * Multiplicity: 1..
 * Description: This container contains the Group configuration (parameters).



.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Parameter Name
    - Multiplicity     
    - Default
    - Supported
    - Description
  * - AdcGroupAccessMode
    - 1
    - 
    - NO
    - Type of access mode to group conversion results.
  * - AdcGroupConversionMode
    - 1
    - 
    - Yes
    - Type of conversion mode supported by the driver.
  * - AdcGroupId
    - 1
    - 
    - No
    - Numeric ID of the group. This parameter is the symbolic name to be used on the API. This symbolic name allows accessing Channel Group data. This value will be assigned to the symbolic name derived of the AdcGroup container shortName.
  * - AdcGroupPriority
    - 0..1
    - 
    - NO
    - Priority level of the AdcGroup.
  * - AdcGroupReplacement
    - 0..1
    - 
    - NO
    - Replacement mechanism, which is used on ADC group level, if a group conversion is interrupted by a group which has a higher priority.
  * - AdcGroupTriggSrc
    - 1
    - 
    - NO
    - Type of source event that starts a group conversion.
  * - AdcHwTrigSignal
    - 0..1
    - 
    - NO
    - Configures on which edge of the hardware trigger signal the driver should react, i.e. start the conversion (only if supported by the ADC hardware).
  * - AdcHwTrigTimer
    - 0..1
    - 
    - NO
    - Reload value of the ADC module embedded timer (only if supported by ADC hardware).
  * - AdcStreamingBufferMode
    - 1
    - 
    - NO
    - Configure streaming buffer as "linear buffer" (i.e. the ADC Driver stops the conversion as soon as the stream buffer is full) or as "ring buffer" (wraps around if the end of the stream buffer is reached).
  * - AdcStreamingNumSamples
    - 1
    - 1
    - NO
    - Number of ADC values to be acquired per channel in streaming access mode.
  * - ArcAdcChannelConvTimeSampTime
    - 0..1
    - 
    - Yes
    - Description: Configuration of INPSAMP field of Conversion Time Register (CTR).Sampling time during which the value is sampled, (in clock cycles). Ref. MPC5604b reference manual
  * - ArcAdcChannelConvTimeCmpTime
    - 0..1
    - 
    - Yes
    - Description: Configuration of INPCMP field of Conversion Time Register (CTR). This decides the number of clock cycles for evaluation phase i.e conversion after sampling to digital representation. [Ref. MPC5604b reference manual]
  * - ArcAdcChannelConvTimeLatchTime
    - 0..1
    - 
    - Yes
    - Description: Configuration of INPLATCH field of Conversion Time Register (CTR). This decides duration of Latch phase 0.5 CLK (Value 0) and 1 CLK (Value 1). Ref. MPC5604b reference manual
  * - AdcGroupDefinition
    - 1..
    - 
    - Yes
    - Assignment of AdcChannels to a AdcGroups.
    

|
|
 
 
AdcGeneral container
^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Path: Adc/
 * Multiplicity: 1
 * Description: General configuration (parameters) of the ADC Driver software module.


.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Parameter Name
    - Multiplicity 
    - Default
    - Supported
    - Description
  * - AdcDeInitApi
    - 1
    - 0
    - Yes
    - Adds / removes the service Adc_DeInit() from the code.
  * - AdcDevErrorDetect
    - 1
    - 0
    - Yes
    - Switches the Development Error Detection and Notification ON or OFF.
  * - AdcEnableLimitCheck
    - 1
    - 
    - No
    - Enables or disables limit checking feature in the ADC driver.
  * - AdcEnableQueuing
    - 1
    - 
    - No
    - Determines, if the queuing mechanism is active in case of priority mechanism disabled.
  * - AdcEnableStartStopGroupApi
    - 1
    - 0
    - Yes
    - Adds / removes the services Adc_StartGroupConversion() and Adc_StopGroupConversion()from the code.
  * - AdcGrpNotifCapability
    - 1
    - 0
    - Yes
    - Determines, if the group notification mechanism (the functions to enable and disable the notifications) is available at runtime.
  * - AdcHwTriggerApi
    - 1
    - 
    - No
    - Adds / removes the services Adc_EnableHardwareTrigger() and Adc_DisableHardwareTrigger() from the code.
  * - AdcPriorityImplementation
    - 1
    - 0
    - No
    - Determines whether a priority mechanism is available for prioritization of the conversion requests and if available, the type of prioritization mechanism. The selection applies for groups with trigger source software and trigger source hardware.
  * - AdcReadGroupApi
    - 1
    - 1
    - Yes
    - Adds / removes the service Adc_ReadGroup() and from the code.
  * - AdcResultAlignment
    - 1
    - 
    - No
    - Alignment of ADC raw results in ADC result buffer (left/right alignment).
  * - AdcVersionInfoApi
    - 1
    - 
    - Yes
    - Adds / removes the service Adc_GetVersionInfo() from the code.
  * - AdcLowPowerStatesSupport
    - 0..1
    - False
    - No
    - Adds / removes all power state management related APIs (ADC_SetPowerState, ADC_GetCurrentPowerState, ADC_GetTargetPowerState, ADC_PreparePowerState, ADC_Main_PowerTransitionManager), indicating if the HW offers low power state management.
  * - AdcPowerStateAsynchTransitionMode
    - 0..1
    - False
    - No
    - Enables / disables support of the ADCDriver to the asynchronous powerstate transition.
 
 
|
|
 
AdcPowerStateConfig container
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Path: Adc/AdcGeneral/
 * Multiplicity: 0..
 * Description: Each instance of this parameter defines a power state and the callback to be called when this power state is reached.


.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Parameter Name
    - Multiplicity 
    - Default
    - Supported
    - Description
  * - AdcPowerState
    - 1
    - 
    - No
    - Each instance of this parameter describes a different power state supported by the ADC HW. It should be defined by the HW supplier and used by the ADCDriver to reference specific HW configurations which set the ADC HW module in the referenced power state.


|
|
 
AdcPublishedInformation container
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

 * Path: Adc/
 * Multiplicity: 1
 * Description: Additional published parameters not covered by CommonPublishedInformation container.


.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Parameter Name
    - Multiplicity 
    - Default
    - Supported
    - Description
  * - AdcChannelValueSigned
    - 1
    - 
    - No
    - Information whether the result value of the ADC driver has sign information (true) or not(false). If the result shall be interpreted as signed value it shall apply to C-language rules.
  * - AdcGroupFirstChannelFixed
    - 1
    - 
    - No
    - Information whether the first channel of an ADC Channel group can be configured (false) or is fixed (true) to a value determined by the ADC HW Unit.
  * - AdcMaxChannelResolution
    - 1
    - 
    - No
    - Maximum Channel resolution in bits (does not specify accuracy).


|
|


MCAL specifc implementation 
---------------------------------

An analog-to-digital converter (ADC) is an electronic system that converts an analog signal into a digital signal such that the converted data can be processed by the central processing unit.  The input analog signal has to be sampled with a frequency at least higher than twice the highest frequency of the signal, then a digital representation of the analog signal, which is a binary sequence code, is produced after the sampled signal (a certain voltage value, a certain current value, etc) being processed by the converting circuit within the ADC. An important concept of ADC is the resolution, which indicates the number of discrete values it can produce over the range of analog values. For example, an ADC with a resolution of 8 bits can encode an analog input to one in 256 different levels, since 28 = 256. If an analog signal with a range 0-16 V is converted to digital value by this 8-bit resolution ADC, each digit will represent 16/256 = 0.0625 V, e.g. 00110101 represents roughly 3.3 V.

 
You can find all information about pad configuration in Chapter 16 *MPC5744P Reference Manual, Rev. 2, 06/2013* . 