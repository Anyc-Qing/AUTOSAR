
.. |mcu| replace:: MPC5XXX 

User guide for |mcu|
=======================

Hardware support
-----------------------------

The module supports at least the following MCUs:

#. MPC5744P
#. MPC5747C
#. MPC5748G
#. MPC5777M


Configuration
-------------------------

***************

|
|

Data flow between the software units
------------------------------------------

Design contains several units and there is a date flow  between them.Mcu data process is subjected to different layers as shown below.
First it passes through AUTOSAR specified generic driver where it is examined for the validity of the data access and required pre-conditions.
It is then given to Mcu architecture specific driver which is common for all the controllers with same family of CPU architecture.
If required it will be passed to Mcu controller specific driver where it is handled for controller specific items.

.. image:: pictures/Data_flow.png

|

Limitations
-----------------------------
 * Mcu Callbacks are not used
 * Pre Compile is supported but it still needs the module still needs to be initialized via a configuration
 * Initialization RAM sections is not supported
 * Sleep currently supported for MPC5606B, MPC5607B and MPC5645S
 * Only LPM = STANDBY is supported
 
 
Parameters
-----------------------------

This chapter includes all parameters used in the MCU module. Parameters starting with Arc are ARCCORE extensions to the module.

 
McuGeneralConfiguration container
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

 * Path: Mcu/
 * Multiplicity: 1
 * Description: This container contains the configuration (parameters) of the MCU driver.


.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Parameter Name
    - Multiplicity 
    - Default
    - Supported
    - Description
  * - McuDevErrorDetect
    - 1
    - 
    - Yes
    - Pre-processor switch for enabling the development error detection and reporting.
  * - McuGetRamStateApi
    - 1
    - 
    - Yes
    - Pre-processor switch to enable/disable the API Mcu_GetRamState.
  * - McuInitClock
    - 1
    - 1
    - Yes
    - If this parameter is set to FALSE, the clock initialization has to be disabled from the MCU driver. This concept applies when there are some write once clock registers and a bootloader is present. If this parameter is set to TRUE, the MCU driver is responsible of the clock initialization.
  * - McuNoPll
    - 1
    - 0
    - Yes
    - This parameter shall be set True, if the H/W does not have a PLL or the PLL circuitry is enabled after the power on without S/W intervention. In this case MCU_DistributePllClock has to be disabled and MCU_GetPllStatus has to return MCU_PLL_STATUS_UNDEFINED. Otherwise this parameters has to be set False
  * - McuPerformResetApi
    - 1
    - 
    - Yes
    - Pre-processor switch to enable / disable the use of the function Mcu_PerformReset()
  * - McuVersionInfoApi
    - 1
    - 
    - Yes
    - Pre-processor switch to enable / disable the API to read out the modules version information.


|
|  


McuModuleConfiguration container
^^^^^^^^^^^^^^^^^^^^^^
 * Path: Mcu/
 * Multiplicity: 1
 * Description: This container contains the configuration (parameters) of the MCU driver


.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Parameter Name
    - Multiplicity 
    - Default
    - Supported
    - Description
  * - McuClockSrcFailureNotification
    - 1
    - 
    - Yes
    - Enables/Disables clock failure notification. In case this feature is not supported by HW the setting should be disabled.
  * - McuNumberOfMcuModes
    - 1
    - 
    - No
    - This parameter shall represent the number of Modes available for the MCU.
  * - McuRamSectors
    - 1
    - 
    - No
    - This parameter shall represent the number of RAM sectors available for the MCU.
  * - McuResetSetting
    - 0..1
    - 
    - No
    - This parameter relates to the MCU specific reset configuration. This applies to the function Mcu_PerformReset, which performs a microcontroller reset using the hardware feature of the microcontroller.
  * - ArcDefaultClockRef
    - 1
    - 
    - Yes
    - This parameter contains a reference to the default clock that will be used at initialization.


|
|

 
McuClockSettingConfig container
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Path: Mcu/McuModuleConfiguration/
 * Multiplicity: 1..
 * Description: This container contains the configuration (parameters) for the Clock settings of the MCU. Please see MCU031 for more information on the MCU clock settings.


.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Parameter Name
    - Multiplicity     
    - Default
    - Supported
    - Description
  * - McuClockSettingId
    - 1
    - 
    - No
    - The Id of this McuClockSettingConfig to be used as argument for the API call "Mcu_InitClock".



|
|

 
McuClockReferencePoint container
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Path: Mcu/McuModuleConfiguration/McuClockSettingConfig/
 * Multiplicity: 1..
 * Description: This container defines a reference point in the Mcu Clock tree. It defines the frequency which then can be used by other modules as an input value. Lower multiplicity is 1, as even in the simplest case (only one frequency is used), there is one frequency to be defined.

.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Parameter Name
    - Multiplicity     
    - Default
    - Supported
    - Description
  * - Frequency
    - 1
    - 
    - Yes
    - This is the frequency for the specific instance of the McuClockReferencePoint container. It shall be given in Hz.
  * - McuClockReferencePointFrequency
    - 1
    - 8000000.0
    - Yes
    - This is the frequency for the specific instance of the McuClockReferencePoint container. It shall be given in Hz.

|
|

 
PLLSettings container
^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Path: Mcu/McuModuleConfiguration/McuClockSettingConfig/
 * Multiplicity: 1..
 * Description: PLL Settings


.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Parameter Name
    - Multiplicity     
    - Default
    - Supported
    - Description
  * - IDF
    - 1
    - 
    - Yes
    - Value for the IDF register.
  * - NDIV
    - 1
    - 
    - Yes
    - Value for the NDIV register.
  * - ODF
    - 1
    - 
    - Yes
    - The value for the ODF register.
    


|
|

 
McuDemEventParameterRefs container
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Path: Mcu/McuModuleConfiguration/
 * Multiplicity: 0..1
 * Description: Container for the references to DemEventParameter elements which shall be invoked using the API Dem_ReportErrorStatus API in case the corresponding error occurs. The EventId is taken from the referenced DemEventParameter's DemEventId symbolic name. The standardized errors are provided in the container and can be extended by vendor specific error references.

.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Parameter Name
    - Multiplicity     
    - Default
    - Supported
    - Description
  * - MCU_E_CLOCK_FAILURE
    - 0..1
    - 
    - Yes
    - Reference to configured DEM event to report "Clock source failure".


|
|

 
McuModeSettingConf container
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Path: Mcu/McuModuleConfiguration/
 * Multiplicity: 1..
 * Description: This container contains the configuration (parameters) for the Mode setting of the MCU. Please see MCU035 for more information on the MCU mode settings.


.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Parameter Name
    - Multiplicity     
    - Default
    - Supported
    - Description
  * - McuMode
    - 1
    - 
    - No
    - The parameter represents the MCU Mode settings.


|
|

 
McuRamSectorSettingConf container
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Path: Mcu/McuModuleConfiguration/
 * Multiplicity: 0..
 * Description: This container contains the configuration (parameters) for the RAM Sector setting. Please see MCU030 for more information on RAM sec-tor settings.

.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Parameter Name
    - Multiplicity     
    - Default
    - Supported
    - Description
  * - McuRamDefaultValue
    - 1
    - 
    - Yes
    - This parameter shall represent the Data pre-setting to be initialized.
  * - McuRamSectionBaseAddress
    - 1
    - 
    - Yes
    - This parameter shall represent the MCU RAM section base address.
  * - McuRamSectionSize
    - 1
    - 
    - Yes
    - This parameter represents the MCU RAM Section size in bytes.



|
|

 
McuPublishedInformation container
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Path: Mcu/
 * Multiplicity: 1
 * Description: Container holding all MCU specific published information parameters. 


|
|

 
McuResetReasonConf container
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Path: Mcu/McuPublishedInformation/
 * Multiplicity: 1..
 * Description: This container contains the configuration for the different type of reset reason that can be retrieved from Mcu_GetResetReason Api.

.. list-table:: 
  :widths: auto
  :header-rows: 1
  :align: left

  * - Parameter Name
    - Multiplicity     
    - Default
    - Supported
    - Description
  * - McuResetReason
    - 1
    - 
    - No
    - The parameter represents the different type of reset that a Micro supports. This parameter is referenced by the parameter EcuMResetReason in the ECU State manager module.

 