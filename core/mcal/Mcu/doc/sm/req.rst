Requirements and recommendations for usage of Port
====================================================


Introduction
---------------
The Mcu module which belongs to MCAL is an intermediate layer between the HW and AUTOSAR Basic Software. The Mcu Driver provides services for basic micro controller initialization, power down functionality, reset and micro controller specific functions required from other MCAL software modules.
All the public API provided by the Mcu module checks the validity of all the arguments provided before performing the functionality. Even if one of the arguments provided is invalid the API will report a DET error and will not perform the intended functionality.
All public API's will check whether Mcu module is initialized before performing the functionality. Similar checks will be made on all the arguments provided. A simple argument check can be for eg. when the Mcu initialization API will invalid pointer (Null pointer). This will be checked and DET error will be reported with specific fault code.

|
|
Requirements and Recommendations for usage of MCU
-------------------------------------------------------

The integrator is responsible for the configuration of the MCAL module Mcu.

Information regarding requirements and recommendations in the Mcu module are listed in the table below.


.. list-table:: Requirements and recommendations
  :widths: 30 70
  :header-rows: 1
  :align: left

  * - Requirement	
    - Description 
  * - ARC_INT_MCAL_MCU_00001
    -  The user shall set the McuDevErrorDetect to True.
      
      | The MCAL module report errors during runtime to the module Det. These reported errors are collected by the Safety Monitor and forwarded e.g. to a safety related application, which takes decision how to react on the detected error. That's why the API has to be enabled in any case.        
  * - ARC_INT_MCAL_MCU_00002
    -  The user shall not change manually the generated Mcu configuration code.
      
      | After configuration of the MCAL module Mcu, the configuration code will be generated using a code generator. The code generate will do some validations and will throw an error, if some errors are detected. That's why the user shall not modify the generated code any more.
  * - ARC_INT_MCAL_MCU_00003
    - The user shall set the McuVersionInfoApi to True, if the version number of the module is required during runtime operation.
      
      | The version of the MCAL module Mcu can only be read during runtime, if the API is enabled.
        
  * - ARC_INT_MCAL_MCU_00004
    -  The user shall ensure the right ranges of the parameters.
      
      | Certain parameter may have limitations depending on their usage for a dedicated HW. That's why it is on the integrator to check the correct parameter range, because it can not be checked by the code generator validation tool.
  * - ARC_INT_SP_00013
    - The user shall use the same compiler as was used in ARCCORE testing.
      
      | Furthermore the integrator needs to fulfill all 14-06-813-16002 Integration Requirements of the Safety Platform. Especially important for MCAL module Port are:

Important implication of the integration requirement is, that The source code delivered from ARCCORE shall not be modified by the integrator.



Autosar Requirements For MCU 
---------------------------------
You can find all MCU requirement in *Document ID 031: AUTOSAR_SWS_MCU_Driver*.
 


Chip Errata and Safety manual considerations
-----------------------------------------------------
You can find considerations in ‘Safety Manual for MPC5744P, Rev. 3, 06/2014 ‘ reference and see
‘MPC5744P_1N65H Rev. JAN2017’ for more information about errata.


Limitations
----------------------
As Dem module cannot be called from the Safety portion, MCU_E_CLOCK_FAILURE parameter is not allowed.
For limitations of the APIs, please refer to the Appendix - Mcu module limitation.




Integration testing
===============================


The integrator can check the functioning of this module by configuring a module which depends on clock and verify the clock frequency of the configured module as expected.
Integrator need to perform integration testing of Mcu functionality with the complete hardware and software application.  