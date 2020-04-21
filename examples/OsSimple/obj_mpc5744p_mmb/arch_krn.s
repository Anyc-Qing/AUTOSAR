.extern os_intc_pcb_tbl
.extern os_intc_types_tbl
.extern Os_Sys
.extern Os_ArchPanic
.extern Os_Isr
.extern exception_IVOR0
.extern exception_IVOR1
.extern exception_IVOR2
.extern exception_IVOR3
.extern exception_IVOR5
.extern exception_IVOR6
.extern exception_IVOR7
.extern exception_IVOR8
.extern exception_IVOR9
.extern exception_IVOR11
.extern exception_IVOR12
.extern exception_IVOR13
.extern exception_IVOR14
.global exception_IVOR4
.global exception_IVOR10
.global Os_ArchSwapContextTo
.global Os_ArchSwapContext
.global Os_ArchSetSpAndCall
.global GetCoreID
.global Os_ArchGetStackPtr
.global Os_ArchGetSpinlock
.global Os_ArchTryToGetSpinlock
.global Os_ArchReleaseSpinlock
.global Os_ArchCallIsrEntry
.global Os_SetPrivilegedMode
.section ".text","ax"

Os_ArchGetStackPtr:
 se_mr 3,1
 se_blr
 .global Os_ArchSetStackPointer
Os_ArchSetStackPointer:
 se_mr 1,3
 se_blr
Os_ArchSetSpAndCall:
  se_mr 1,3
  mtlr 4
  se_blr
Os_ArchSwapContext:
 e_stwu 1,-96(1)
 mflr 0
 e_stw 0,20(1)
 mfcr 0
 e_stw 0,16(1)
 e_li 0,0xad
 e_stw 0,12(1)
 e_stw 14, 24(1)
 e_stw 15, 28(1)
 e_stw 16, 32(1)
 e_stw 17, 36(1)
 e_stw 18, 40(1)
 e_stw 19, 44(1)
 e_stw 20, 48(1)
 e_stw 21, 52(1)
 e_stw 22, 56(1)
 e_stw 23, 60(1)
 e_stw 24, 64(1)
 e_stw 25, 68(1)
 e_stw 26, 72(1)
 e_stw 27, 76(1)
 e_stw 28, 80(1)
 e_stw 29, 84(1)
 e_stw 30, 88(1)
 e_stw 31, 92(1)
 e_stw 1,0(3)
Os_ArchSwapContextTo:
 e_lwz 1,0(4)
 e_lis 3, (Os_Sys)@ha; e_add16i 3, 3, (Os_Sys)@l
 e_stw 4,0(3)
 e_lwz 0,16(1)
    mtcr 0
    e_lwz 0,20 (1)
    mtlr 0
 e_lwz 0, 12(1)
 e_cmpl16i 0, 0xad
 e_beq restoreFuncContext
 e_cmpl16i 0,0xde
 e_beq restoreIsrContext2
 e_li 3, 35
 e_b ShutdownOS
restoreFuncContext:
 e_lwz 14, 24(1)
 e_lwz 15, 28(1)
 e_lwz 16, 32(1)
 e_lwz 17, 36(1)
 e_lwz 18, 40(1)
 e_lwz 19, 44(1)
 e_lwz 20, 48(1)
 e_lwz 21, 52(1)
 e_lwz 22, 56(1)
 e_lwz 23, 60(1)
 e_lwz 24, 64(1)
 e_lwz 25, 68(1)
 e_lwz 26, 72(1)
 e_lwz 27, 76(1)
 e_lwz 28, 80(1)
 e_lwz 29, 84(1)
 e_lwz 30, 88(1)
 e_lwz 31, 92(1)
 e_add16i 1,1,(96)
 se_blr
restoreIsrContext2:
 e_b restoreIsrContext
  .global exception_IVOR4
  .global restoreIsrContext
  .balign 16
exception_IVOR4:
 e_stwu 1,-48(1)
 e_stw 3,40(1)
 mfsrr0 3
 e_stw 3, 12(1)
 mfsrr1 3
 e_stw 3, 16(1)
 mfcr 3
 e_stw 3, 32(1)
 mfxer 3
 e_stw 3, 28(1)
 mfctr 3
 e_stw 3, 24(1)
 mflr 3
 e_stw 3, 20(1)
 e_li 3,4
 e_stw 3, 36(1)
 e_add16i 1,1,-128
 mfspr 3,512
 e_stw 3,8(1)
 e_stw 0, 16(1)
 e_stw 4, 20(1)
 e_stw 5, 24(1)
 e_stw 6, 28(1)
 e_stw 7, 32(1)
 e_stw 8, 36(1)
 e_stw 9, 40(1)
 e_stw 10, 44(1)
 e_stw 11, 48(1)
 e_stw 12, 52(1)
 e_stw 14, 56(1)
 e_stw 15, 60(1)
 e_stw 16, 64(1)
 e_stw 17, 68(1)
 e_stw 18, 72(1)
 e_stw 19, 76(1)
 e_stw 20, 80(1)
 e_stw 21, 84(1)
 e_stw 22, 88(1)
 e_stw 23, 92(1)
 e_stw 24, 96(1)
 e_stw 25, 100(1)
 e_stw 26, 104(1)
 e_stw 27, 108(1)
 e_stw 28, 112(1)
 e_stw 29, 116(1)
 e_stw 30, 120(1)
 e_stw 31, 124(1)
 e_li 3,0xde
 e_stw 3,12(1)
 se_mr 4,1
    e_lis 3, (Os_Sys+20)@ha; e_lwz 3, (Os_Sys+20)@l(3)
    e_cmpl16i 3,0
 e_bne on_int_stack
 e_lis 1, (Os_Sys+32)@ha; e_lwz 1, (Os_Sys+32)@l(1)
on_int_stack:
 e_lis 6, (64516*0x10000 + 0 + 32)@ha
 e_lwz 6, (64516*0x10000 + 0 + 32)@l(6)
 se_mr 5,6
vectorOk:
 e_extrwi 5,5,30,0
 e_cmpl16i 5,(16 - 1)
 e_bgt noSoftInt
 e_li 0,1
 e_lis 3, (64516*0x10000 + 0 + 64)@ha
 e_add16i 3, 3, (64516*0x10000 + 0 + 64)@l
 stbx 0,5,3
noSoftInt:
 e_lis 3, (Os_Isr)@ha; e_add16i 3, 3, (Os_Isr)@l
    mtlr 3
 se_mr 3,4
 se_mr 4,5
    se_blrl
 se_mr 1,3
restoreIsrContext:
 e_lwz 3,8(1)
 mtspr 512,3
 e_lwz 0, 16(1)
 e_lwz 4, 20(1)
 e_lwz 5, 24(1)
 e_lwz 6, 28(1)
 e_lwz 7, 32(1)
 e_lwz 8, 36(1)
 e_lwz 9, 40(1)
 e_lwz 10, 44(1)
 e_lwz 11, 48(1)
 e_lwz 12, 52(1)
 e_lwz 14, 56(1)
 e_lwz 15, 60(1)
 e_lwz 16, 64(1)
 e_lwz 17, 68(1)
 e_lwz 18, 72(1)
 e_lwz 19, 76(1)
 e_lwz 20, 80(1)
 e_lwz 21, 84(1)
 e_lwz 22, 88(1)
 e_lwz 23, 92(1)
 e_lwz 24, 96(1)
 e_lwz 25, 100(1)
 e_lwz 26, 104(1)
 e_lwz 27, 108(1)
 e_lwz 28, 112(1)
 e_lwz 29, 116(1)
 e_lwz 30, 120(1)
 e_lwz 31, 124(1)
 e_add16i 1,1,128
 e_lwz 3, 20(1)
 mtlr 3
 e_lwz 3, 24(1)
 mtctr 3
 e_lwz 3, 28(1)
 mtxer 3
 e_lwz 3, 32(1)
 mtcr 3
 e_lwz 3, 12(1)
 mtsrr0 3
 e_lwz 3, 16(1)
 mtsrr1 3
 e_lwz 3, 40(1)
 e_add16i 1,1,48
 se_rfi
exception_IVOR10:
    e_stwu 3,-8(1)
    e_stw 4,4(1)
    e_lis 3,0x0800
    mtspr 336,3
    e_li 4,2
 e_lis 3, (64516*0x10000 + 0 + 64 + 7)@ha
 e_stb 4, (64516*0x10000 + 0 + 64 + 7)@l(3)
    e_lwz 3,0(1)
    e_lwz 4,4(1)
    e_add16i 1,1,8
    se_rfi
