  .syntax unified
 .cpu cortex-m3
 .fpu softvfp
 .thumb
.global g_pfnVectors
.global Default_Handler
.word _sidata
.word _sdata
.word _edata
.word _sbss
.word _ebss
    .section .text.Reset_Handler
.weak Reset_Handler
.type Reset_Handler, %function
Reset_Handler:
 ldr r0, =_estack
    msr PSP, r0
    movs r0, #2
    msr CONTROL, r0
    isb
 ldr r0, =_emspstack
    msr MSP, r0
  ldr r0, =_sdata
  ldr r3, =_edata
  ldr r5, =_sidata
  movs r1, #0
  b LoopCopyDataInit
CopyDataInit:
 ldr r4, [r5, r1]
 str r4, [r0, r1]
 adds r1, r1, #4
LoopCopyDataInit:
 adds r2, r0, r1
 cmp r2, r3
 bcc CopyDataInit
 ldr r2, =_sbss
 b LoopFillZerobss
FillZerobss:
 movs r3, #0
 str r3, [r2], #4
LoopFillZerobss:
 ldr r3, = _ebss
 cmp r2, r3
 bcc FillZerobss
 ldr r2, =_smspstack
 ldr r4, = _emspstack
 ldr r3,=0x42424242
_Stackfill:
 str r3, [r2], #4
_LoopStackfill:
 cmp r2, r4
 bcc _Stackfill
 bl main
 bx lr
.size Reset_Handler, .-Reset_Handler
    .section .text.Default_Handler,"ax",%progbits
Default_Handler:
Infinite_Loop:
 b Infinite_Loop
 .size Default_Handler, .-Default_Handler
  .section .isr_vector,"a",%progbits
 .type g_pfnVectors, %object
.extern Irq_Handler
.extern SVC_Handler
.extern PendSV_Handler
.word _estack
.word Reset_Handler
.word NMI_Handler
.word HardFault_Handler
.word MemManage_Handler
.word BusFault_Handler
.word UsageFault_Handler
.word 0
.word 0
.word 0
.word 0
.word SVC_Handler
.word DebugMon_Handler
.word 0
.word PendSV_Handler
.word Irq_Handler+1
.rept 83
.word Irq_Handler+1
.endr
.weak NMI_Handler
.thumb_set NMI_Handler, Default_Handler
.weak HardFault_Handler
.thumb_set HardFault_Handler, Default_Handler
.weak DebugMon_Handler
.thumb_set DebugMon_Handler, Default_Handler
.weak MemManage_Handler
.thumb_set MemManage_Handler, Default_Handler
.weak BusFault_Handler
.thumb_set BusFault_Handler, Default_Handler
.weak UsageFault_Handler
.thumb_set UsageFault_Handler, Default_Handler
.weak SVC_Handler
.thumb_set SVC_Handler, Default_Handler
.weak PendSV_Handler
.thumb_set PendSV_Handler, Default_Handler
