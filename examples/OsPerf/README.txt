OsOrti
========
This example shows the following features:
  - SchM module
  - Timer (Timer_xx API)
  - The Task "TaskLoad" that increases the load by 10% every 10ms until it hits 90%.
  - ORTI
  - GPT channels can also be used to add load to the system.
      - Will start two timers:
          Name                                       uS    %load        
          -----------------------------------------------------------------
          GptConf_GptChannelConfiguration_GptCh0     100    10 
          GptConf_GptChannelConfiguration_GptCh1     500    3
      Assumes:
        - Gpt_Arc_GetClock(..) is available. 
        - Configuration
         
          Name       ChannelMode            Notification       
          -----------------------------------------------------------------
          GptCh0     GPT_CH_MODE_CONTINUOS  Gpt_NotifCh0
          GptCh1     GPT_CH_MODE_CONTINUOS  Gpt_NotifCh1
        
       
Supported boards:
  - See the configurations.
  
Serial Port:
  - Some board support serial with 57600, 8N1.
    - mpc5645s
      - Make sure you have connected 
        - J17[1-3] and J17[2-4] (connect LinFlex_0 with ftdi USB)
        - Connect USB cord to J1
        - Connect terminal with 57600, 8N1 (Use FTDI Virtual COM Driver)  
  
Files:
 - src/tasks.c            - implementation of tasks
 - src/system_hoooks.c    - implementation of hooks
 - OsPerf_Generic.arxml   - generic BSW modules
 - OsPerf_mpc551it.arxml  - configuration referencing generic modules and board specific modules.
 - build_config.mk        - the build configuration
 - makefile               - the makefile

Debuggers:

  T32
    Some scripts to work with Lauterbach T32 is located at tools/t32. You should be able to use it
    either on the simulator or on real HW. To use the scripts run "do start" in that tools/t32 directory.
   
   To view the context switching, check menu->Arccore->Os->xxx
   
   View the software calculated load in:
   - Perf_TaskTimers
   - Perf_IsrTimers
   - Perf_KernelTimers
   
   
   
   
   

  


