.section ".rcw","ax"

 .global _resetconfiguration
_resetconfiguration:
    .byte 0x00
    .byte 0x5A #Boot identifier
    .byte 0x0
    .byte 0x02 #Boot core 0
    .long 0x0 #Core 2 start address
    .long 0x0 #Configuration bits 0
    .long 0x0 #Configuration bits 1
    .long _start #Core 0 start address
    .long 0x0 #Core 1 start address
    .long 0x0 #RFU
 .long 0xffffffff
 .long 0xffffffff
 .long 0xffffffff
 .long 0xffffffff
 .long 0xffffffff
 .long 0xffffffff
 .long 0xffffffff
 .long 0xffffffff
 .long 0xffffffff
 .long 0xffffffff
 .long 0xffffffff
 .long 0xffffffff
 .long 0xffffffff
 .long 0xffffffff
 .long 0xffffffff
 .long 0xffffffff
 .long 0xffffffff
 .extern _SDA_BASE_
 .extern _SDA2_BASE_
 .extern __SP_INIT
 .extern __SP_END
 .extern __DATA_RAM
 .extern __DATA_END
 .extern __BSS_START
 .extern __BSS_END
 .extern __DATA_ROM
 .extern exit
 .extern main
 .extern init
 .extern ShutdownOS
.section ".text","ax"

 .balign 4
 .globl _start
 .type _start,@function
.global _start_z0
_start_z0:
 e_lis 1, (__SP_INIT_Z0)@ha; e_add16i 1, 1, (__SP_INIT_Z0)@l
 e_lis 13, (_SDA_BASE_)@ha; e_add16i 13, 13, (_SDA_BASE_)@l
 e_lis 2, (_SDA2_BASE_)@ha; e_add16i 2, 2, (_SDA2_BASE_)@l
 e_subi 1,1,16
 e_b main
__start:
_start:
 e_lis 1, (__SP_INIT)@ha; e_add16i 1, 1, (__SP_INIT)@l
 e_lis 3, (__SP_END)@ha; e_add16i 3, 3, (__SP_END)@l
 subf 3, 3, 1
 e_srwi 3, 3, 3
 mtctr 3
 e_li 31,0
 e_li 30,0
init_ram_loop:
 e_subi 1,1,2*4
 e_stmw 30,0(1)
 e_bdnz init_ram_loop
 e_lis 1, (__SP_INIT)@ha; e_add16i 1, 1, (__SP_INIT)@l
 e_lmw 2, (-30*4)(1)
 e_lis 13, (_SDA_BASE_)@ha; e_add16i 13, 13, (_SDA_BASE_)@l
 e_lis 2, (_SDA2_BASE_)@ha; e_add16i 2, 2, (_SDA2_BASE_)@l
 e_clrlwi 3,1,(32-3)
 se_cmpi 3,0
 e_bne badAlignment
 e_subi 1,1,8
 e_bl init
 e_li 3,1
 e_bl main
 e_b exit
 .globl _exit
_exit:
 e_b _exit
 .global badAlignment
badAlignment:
 e_b badAlignment
.global memset_uint64
memset_uint64:
 e_stwu 1, -16(1)
    e_stmw 30, 8(1)
    e_lmw 30, 0(4)
    e_srwi 5, 5, 3
    mtctr 5
memset_uint64_do:
    e_stmw 30, 0(3)
    e_add16i 3, 3, 8
    e_bdnz memset_uint64_do
    e_lmw 30, 8(1)
    e_add16i 1, 1, 16
 se_blr
.global initECC_128bytesAligned
initECC_128bytesAligned:
    e_srwi 4, 4, 7
    mtctr 4
initECC_128bytesAligned_do:
    e_stmw 0, 0(3)
    e_add16i 3, 3, 128
    e_bdnz initECC_128bytesAligned_do
    se_blr
 .end
