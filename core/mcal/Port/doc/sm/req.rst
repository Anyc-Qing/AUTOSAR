Requirements and recommendations for usage of Port
====================================================


Introduction
---------------
The Port module which belongs to MCAL is an intermediate layer between the HW and SafeIoHwAb or application. This module is responsible for initializing and configuration of the port structure which is used in the Dio. Port module should be initialized before Dio or else Dio functions will exhibit undefined behavior.
All the public API provided by the Port module checks the validity of all the arguments provided before performing the functionality. Even if one of the arguments provided is invalid the API will report a DET error and will not perform the intended functionality.
All public API's will check whether Port module is initialized before performing the functionality. Similar checks will be made on all the arguments provided. A simple argument check can be for eg. when the Port initialization API will invalid pointer (Null pointer). This will be checked and DET error will be reported with specific fault code.


Requirements and Recommendations for usage of Port
--------------------------------------

The integrator is responsible for the configuration of the MCAL module Port. The integrator has to make sure that Port module is initialized before Dio or else Dio functions will exhibit undefined behavior.

Since the Port MCAL module only reports back a value for the Port. It cannot by itself determine what kind of physical interpretation the value has. This also means that it cannot detect if there is a short circuit present, it is the integrator's responsibility to interpret the acquired value and determine if the value correspond to a short circuit value.



.. list-table:: Requirements and Recommendations
  :widths: 30 70
  :header-rows: 1
  :align: left

  * - Requirement	
    - Description 
  * - ARC_INT_MCAL_PORT_00001
    - The user shall set the PortDevErrorDetect to True.
      
      | The MCAL module report errors during runtime to the module Det. 
      These reported errors are collected by the Safety Monitor and forwarded e.g. to a safety related application, which takes decision how to react on the detected error. 
      That's why the API has to be enabled in any case.        
  * - ARC_INT_MCAL_PORT_00002
    - The user shall not change manually the generated Port configuration code.
      
      | After configuration of the MCAL module Port, the configuration code will be generated using a code generator. 
      The code generate will do some validations and will throw an error, if some errors are detected. 
      That's why the user shall not modify the generated code any more. 
  * - ARC_INT_MCAL_PORT_00003
    - The user shall set the PortVersionInfoApi to True, if the version number of the module is required during runtime operation.
      
      | The version of the MCAL module Port can only be read during runtime, if the API is enabled.
        
  * - ARC_INT_MCAL_PORT_00004
    - The user shall ensure the right ranges of the parameters.
      
      | Certain parameter may have limitations depending on their usage for a dedicated HW. 
      That's why it is on the integrator to check the correct parameter range, because it can not be checked by the code generator validation tool.        
  * - ARC_INT_SP_00013
    - The user shall use the same compiler as was used in ARCCORE testing.
      
      | Furthermore the integrator needs to fulfill all 14-06-813-16002 Integration Requirements of the Safety Platform. Especially important for MCAL module Port are:

Important implication of the integration requirement is, that The source code delivered from ARCCORE shall not be modified by the integrator.



Autosar Requirements For Port 
---------------------------------
You can find all DIO requirement in *Document ID 040: AUTOSAR_SWS_PortDriver*.
 


Chip Errata and Safety manual considerations
-----------------------------------------------------
You can find considerations in ‘Safety Manual for MPC5744P, Rev. 3, 06/2014 ‘ reference and see
‘MPC5744P_1N65H Rev. JAN2017’ for more information about errata.


Integration testing
===============================


For the integrator of the MCAL Module Port , to test the proper functioning of Port module a simple test will to configure a pin, write a particular value to the pin and verify the output of the pin using an analyzer or oscilloscope.
Integrator  has to make sure that other modules such as Dio, Pwm , Adc etc are configured along with Port module configuration for full testing.
Integrator need to perform integration testing of Port functionality with the complete hardware and software application.

  