.extern Os_Sys
 .syntax unified
 .thumb
 .section .text
.global Irq_Handler
.type Irq_Handler, %function
.global SVC_Handler
.type SVC_Handler, %function
.global ContextRestore
.type ContextRestore, %function
.global Os_ArchSwapAndTrigPendSv
Os_ArchSwapAndTrigPendSv:
 bl Os_ArchDoSwap
.global Os_ArchTrigPendSV
Os_ArchTrigPendSV:
    ldr r0,=0xE000ED04
    ldr r1,=0x10000000
    str r1,[r0,#0]
    cpsie i;dsb;isb
waitForIt:
 b waitForIt
.global Os_ArchSetSpAndCall
.type Os_ArchSetSpAndCall, %function
Os_ArchSetSpAndCall:
 mov.w sp,r0
 mov.w lr,r1
 bx lr
.global Os_ArchSwapContext
.type Os_ArchSwapContext, %function
Os_ArchSwapContext:
    push {r4-r11,lr}
    mov.w r4,sp
    str r4,[r0,#0]
.global Os_ArchSwapContextTo
.type Os_ArchSwapContextTo, %function
Os_ArchSwapContextTo:
    ldr r4,[r1,#0]
    mov.w sp,r4
    ldr r5,= Os_Sys
    str r1,[r5,#0]
    pop {r4-r11,pc}
