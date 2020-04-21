
.. |mcu| replace:: MPC5XXX 

User guide for |mcu|
=======================

Hardware support
-----------------------------

The module supports at least the following MCUs

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

Configuration
-----------------------------

Configurable parameters are described in the Autosar specification. However not all parameters are supported and these are listed in the "Parameters" chapter.
Parameters that needs further explanation are listed below.

.. list-table:: Document References
  :widths: 50 50 
  :header-rows: 1
  :align: left

  * - Parameter
    - Description 
  * - 
    - 

Data flow between the software units
-----------------------------------------
 * Design contains several units and there is a date flow between them.



Limitations
-----------------------------

 * Power management is not supported (Introduced in 4.1.2)
 * FlexPWM: Only independant channels supported. Channel used configured via parameter PwmChannelId (0: FlexPWM_0 PWMA[0], 1: FlexPWM_0 PWMB[0] , 2: FlexPWM_0 PWMX[0], 3: FlexPWM_0 PWMA[1], "number of FlexPWM_0 channels": FlexPWM_1 PWMA[0], etc).
 * eMIOS: Each eMIOS global prescaler is shared between PWM and ICU modules, but only configurable in PWM module.
 * FlexPWM : Pwm_GetOutputState API not supported on MCUs with FlexPWM (Since the hardware does not have any such functionality)
 * MPC5634M, MPC5644A. Pwm edge notification functionality not supported
 * MPC5746C : Counter bus F, G and H are not supported



Parameters
-----------------------------
Parameters starting with Arc are ARCCORE extensions to the module.


PwmChannelConfigSet container
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Path: Pwm/
Multiplicity: 1
Description: Multiple Configuration Set Container


PwmChannel container
^^^^^^^^^^^^^^^^^^^^^^^^

Path: Pwm/PwmChannelConfigSet/
Multiplicity: 1..
Description: Configuration of an individual PWM channel.

..list-table::
  :widths: auto
  :header-rows: 1
  :align: left
  
  * - Parameter Name
    - Multiplicity
    - Default
    - Supported
    - Description
  * - PwmChannelClass
    - 0..1
    -  
    - Yes
    - Class of PWM Channel.
  * - PwmChannelId
    - 1
    - 
    - Yes
    - Channel Id of the PWM channel. This value will be assigned to the symbolic name derived of the PWM Channel container short name.
  * - PwmDutycycleDefault
    - 1
    - 0
    - Yes
    - Value of duty cycle used for Initialization
  * - PwmIdleState
    - 1
    - PWM_LOW
    - Yes
    - The parameter PWM_IDLE_STATE represents the output state of the PWM after the signal is stop ped (e.g. call of Pwm_SetOutputToIdle).
  * - PwmPeriodDefault
    - 1
    - 
    - Yes
    - Value of period used for Initialization.(in seconds).
  * - PwmPolarity
    - 1
    - PWM_HIGH
    - Yes
    - Defines the starting polarity of each PWM channel.
  * - ArcPwmMode
    - 1
    - PWM_MODE_BASIC
    - Yes
    - The parameter PWM_IDLE_STATE represents the output state of the PWM after the signal is stopped (e.g. call of Pwm_SetOutputToIdle).
  * - ArcPwmClkSrc
    - 1
    - PWM_MODE_BASIC
    - Yes
    - Defines the clock source of each PWM channel. I.e. INTERNAL_COUNTER to select the internal counter bus.

  
PwmConfigurationOfOptApiServices container
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Path: Pwm/
Multiplicity: 1
Description: Configuration of optional interfaces.

..list-table::
  :widths: auto
  :header-rows: 1
  :align: left
  
  * - Parameter Name
    - Multiplicity
    - Default
    - Supported
    - Description
  * - PwmDeInitApi
    - 1
    - 0 
    - Yes
    - Adds / removes the service Pwm_DeInit() from the code.
  * - PwmGetOutputState
    - 1
    - 0
    - Yes
    - Adds / removes the service PwmGetOutputState() from the code.
  * - PwmSetDutyCycle
    - 1
    - 1
    - Yes
    - Adds / removes the service PwmSetDutyCycle() from the code.
  * - PwmSetOutputToIdle
    - 1
    - 0
    - Yes
    - Adds / removes the service PwmSetOutputToIdle() from the code.
  * - PwmSetPeriodAndDuty
    - 1
    - 0
    - Yes
    - Adds / removes the service PwmSetPeriodAndDuty() from the code.

  * - PwmVersionInfoApi
    - 1
    - 0
    - Yes
    - Switch to indicate that the Pwm_ GetVersionInfo is supported



PwmGeneral container
^^^^^^^^^^^^^^^^^^^^^^^^^


Path: Pwm/
Multiplicity: 1
Description: General properties of the Pwm module

..list-table::
  :widths: auto
  :header-rows: 1
  :align: left
  
  * - Parameter Name
    - Multiplicity
    - Default
    - Supported
    - Description
  * - PwmDevErorDetect
    - 1
    - 1 
    - Yes
    - Switch for enabling the development error detection.
  * - PwmDutycycleUpdatedEndperiod
    - 1
    - 0
    - No
    - Switch for enabling the update of the duty cycle parameter at the end of the current period.
  * - ArcPwmGlobalPrescalerDivisorEMIOS0
    - 1
    - 
    - Yes
    - Module wide prescaler divisor value
  * - PwmNotificationSupported
    - 1
    - 0
    - Yes
    - Switch to indicate that the notifications are supported
  * - PwmPeriodUpdatedEndperiod
    - 1
    - 
    - No
    - Switch for enabling the update of the period parameter at the end of the current period.
  * - ArcPwmGlobalPrescalerDivisorEMIOS1
    - 1
    - 
    - Yes
    - Module wide prescaler divisor value
  * - PwmIndex
    - 1
    - 
    - No
    - Specifies the InstanceId of this module instance. If only one instance is present it shall have the Id 0.
  * - PwmLowPowerStatesSupport
    - 0..1
    - False
    - No
    - Adds / removes all power state management related APIs (PWM_SetPowerState, PWM_GetCurrentPowerState, PWM_GetTargetPowerState, PWM_PreparePowerState, PWM_Main_PowerTransitionManager), indicating if the HW offers low power state management.
  * - PwmPowerStateAsynchTransitionMode
    - 0..1
    - False
    - No
    - Enables / disables support of the PWM Driver to the asynchronous power state transition.
  * - PwmDevErrorDetect
    - 1
    - 1
    - Yes
    - Switch for enabling the development error detection.


PwmPowerStateConfig container
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Path: Pwm/PwmGeneral/
Multiplicity: 0..
Description: Each instance of this parameter defines a power state and the callback to be called when this power state is reached. 


..list-table::
  :widths: auto
  :header-rows: 1
  :align: left
  
  * - Parameter Name
    - Multiplicity
    - Default
    - Supported
    - Description
  * - PwmPowerState
    - 1
    -  
    - No
    - Each instance of this parameter describes a different power state supported by the PWM HW. It should be defined by the HW supplier and used by the PWMDriver to reference specific HW configurations which set the PWM HW module in the referenced power state.
