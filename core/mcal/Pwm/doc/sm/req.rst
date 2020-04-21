Requirements and recommendations for usage of PWM
====================================================


Introduction
---------------
The MCAL Module PWM is an abstraction layer between the HW and the SafeIoHwAb or application, respectively.
E.g. any component connected to the RTE can setup PWM pulses on pins on a board without having to care about the specific on every board.
Each public API provided by the PWM module checks the incoming argument to confirm that it is valid before performing any functionality. If at least one argument is invalid the called function will return a fault code, report a DET error and immediately stop performing any functionality. A typical invalid argument can be e.g. trying to adjust PWM duty-cycle on a pin which is not configured as changeable or trying to adjust a PWM period higher than maximum allowed.

Requirements and Recommendations for usage of PWM
--------------------------------------

The integrator is responsible for the configuration of the MCAL module PWM.


.. list-table:: Requirements and Recommendations
  :widths: 30 70
  :header-rows: 1
  :align: left

  * - Requirement	
    - Description 
  * - ARC_INT_MCAL_PWM_00001
    - The user shall set the PwmDevErrorDetect to True.
      
      | The MCAL module report errors during runtime to the module Det. These reported errors are collected by the Safety Monitor and forwarded e.g. to a safety related application, which takes decision how to react on the detected error. 
      That's why the API has to be enabled in any case.        
  * - ARC_INT_MCAL_PWM_00002
    - The user shall not change manually the generated Pwm configuration code.
      
      | After configuration of the MCAL module Pwm, the configuration code will be generated using a code generator. The code generate will do some validations and will throw an error, if any errors are detected. That's why the user shall not modify the generated code any more.
  * - ARC_INT_MCAL_PWM_00003
    - The user shall set the PwmVersionInfoApi to True.
      
      | The version of the MCAL module Pwm can only be read during runtime, if the API is enabled.
        
  * - ARC_INT_MCAL_PWM_00004
    - The user shall ensure the right ranges of the parameters.
      
      | Certain parameter may have limitations depending on their usage for a dedicated HW. 
      That's why it is on the integrator to check the correct parameter range, because it can not be checked by the code generator validation tool.
      In case of Pwm all parameter are concerned.
  * - ARC_INT_SP_00013
    - The user shall use the same compiler as was used in ARCCORE testing.
      
      | Furthermore the integrator needs to fulfill all 14-06-813-16002 Integration Requirements of the Safety Platform. Especially important for MCAL module Port are:

Important implication of the integration requirement is, that The source code delivered from ARCCORE shall not be modified by the integrator.



Autosar Requirements For Port 
---------------------------------
You can find all DIO requirement in *Document ID 037: AUTOSAR_SWS_PwmDriver*.
 


Chip Errata and Safety manual considerations
-----------------------------------------------------
You can find considerations in ‘Safety Manual for MPC5744P, Rev. 3, 06/2014 ‘ reference and see
‘MPC5744P_1N65H Rev. JAN2017’ for more information about errata.


Integration testing
===============================


Unit testing of Pwm module was performed on a MPC5744P evaluation board. For this, the following steps were performed:
 * Setup Pwm channel on defined "Output Pin" (Configure via BSW editor in ArcticStudio and initialize using Pwm_Init() function)
 * Connect an "Input Pin" pin via external wired loop back with defined "Output Pin".
 * Setup a loop to run for a predefined length of time.
 * Read value back from defined "Input Pin" and use internal counter to read number of flanks (changes).
 * Calculate expected number of flanks for the setup time loop to compare with detected number of flanks.
 * Diagnostic and integration of the target hardware application.
For the intergration it is recommended to configure the SafeIoHwAbs and connect it to the Pwm module. The integrator could check the output with an osciloscope. The integratior could test diferent combinations of Duty and Frequency, and check the output on the osciloscope.
Another recommended step for the integration is to use the notification functions to flip a pin and also check it with an osciloscope, at the same time the Pwm signal is measured.

  