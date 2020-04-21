.global exception_IVOR0
.global exception_IVOR1
.global exception_IVOR2
.global exception_IVOR3
.extern exception_IVOR4
.global exception_IVOR5
.global exception_IVOR6
.global exception_IVOR7
.global exception_IVOR8
.global exception_IVOR9
.extern exception_IVOR10
.global exception_IVOR11
.global exception_IVOR12
.global exception_IVOR13
.global exception_IVOR14
.global exception_IVOR15
.global exception_IVOR32
.global exception_IVOR33
.global exception_IVOR34
.extern Mpc5xxx_Exception_IVOR0
.extern Mpc5xxx_Exception_IVOR1
.extern Mpc5xxx_Exception_IVOR2
.extern Mpc5xxx_Exception_IVOR3
.extern Mpc5xxx_Exception_IVOR5
.extern Mpc5xxx_Exception_IVOR6
.extern Mpc5xxx_Exception_IVOR7
.extern Mpc5xxx_Exception_IVOR8
.extern Mpc5xxx_Exception_IVOR9
.extern Mpc5xxx_Exception_IVOR11
.extern Mpc5xxx_Exception_IVOR12
.extern Mpc5xxx_Exception_IVOR13
.extern Mpc5xxx_Exception_IVOR14
.extern Mpc5xxx_Exception_IVOR32
.extern Mpc5xxx_Exception_IVOR33
.extern Mpc5xxx_Exception_IVOR34
.extern Mpc5xxx_Exception_IVOR35
.extern MM_TlbSetupOne
.extern Mcu_Arc_InitMM
.section ".text","ax"

exception_IVOR0:
 e_stwu 1,-80(1); e_stw 0, 0(1); e_stw 3, 4(1); e_stw 4, 8(1); e_stw 5, 12(1); e_stw 6, 16(1); e_stw 7, 20(1); e_stw 8, 24(1); e_stw 9, 28(1); e_stw 10, 32(1); e_stw 11, 36(1); e_stw 12, 40(1); mfcr 3; e_stw 3, 56(1); mfxer 3; e_stw 3, 52(1); mfctr 3; e_stw 3, 48(1); mflr 3; e_stw 3, 44(1); e_subi 1,1,16
 e_bl Mpc5xxx_Exception_IVOR0
 mtspr 58,3
 e_add16i 1,1,16; e_lwz 3, 44(1); mtlr 3; e_lwz 3, 48(1); mtctr 3; e_lwz 3, 52(1); mtxer 3; e_lwz 3, 56(1); mtcr 3; e_lwz 0, 0(1); e_lwz 3, 4(1); e_lwz 4, 8(1); e_lwz 5, 12(1); e_lwz 6, 16(1); e_lwz 7, 20(1); e_lwz 8, 24(1); e_lwz 9, 28(1); e_lwz 10, 32(1); e_lwz 11, 36(1); e_lwz 12, 40(1); e_add16i 1,1,80;
 se_rfci
exception_IVOR1:
 e_stwu 1,-80(1); e_stw 0, 0(1); e_stw 3, 4(1); e_stw 4, 8(1); e_stw 5, 12(1); e_stw 6, 16(1); e_stw 7, 20(1); e_stw 8, 24(1); e_stw 9, 28(1); e_stw 10, 32(1); e_stw 11, 36(1); e_stw 12, 40(1); mfcr 3; e_stw 3, 56(1); mfxer 3; e_stw 3, 52(1); mfctr 3; e_stw 3, 48(1); mflr 3; e_stw 3, 44(1); e_subi 1,1,16
 e_bl Mpc5xxx_Exception_IVOR1
 mtspr 570, 3
 e_add16i 1,1,16; e_lwz 3, 44(1); mtlr 3; e_lwz 3, 48(1); mtctr 3; e_lwz 3, 52(1); mtxer 3; e_lwz 3, 56(1); mtcr 3; e_lwz 0, 0(1); e_lwz 3, 4(1); e_lwz 4, 8(1); e_lwz 5, 12(1); e_lwz 6, 16(1); e_lwz 7, 20(1); e_lwz 8, 24(1); e_lwz 9, 28(1); e_lwz 10, 32(1); e_lwz 11, 36(1); e_lwz 12, 40(1); e_add16i 1,1,80;
 se_rfmci
exception_IVOR2:
 e_stwu 1,-80(1); e_stw 0, 0(1); e_stw 3, 4(1); e_stw 4, 8(1); e_stw 5, 12(1); e_stw 6, 16(1); e_stw 7, 20(1); e_stw 8, 24(1); e_stw 9, 28(1); e_stw 10, 32(1); e_stw 11, 36(1); e_stw 12, 40(1); mfcr 3; e_stw 3, 56(1); mfxer 3; e_stw 3, 52(1); mfctr 3; e_stw 3, 48(1); mflr 3; e_stw 3, 44(1); e_subi 1,1,16
 e_bl Mpc5xxx_Exception_IVOR2
 mtsrr0 3
 e_add16i 1,1,16; e_lwz 3, 44(1); mtlr 3; e_lwz 3, 48(1); mtctr 3; e_lwz 3, 52(1); mtxer 3; e_lwz 3, 56(1); mtcr 3; e_lwz 0, 0(1); e_lwz 3, 4(1); e_lwz 4, 8(1); e_lwz 5, 12(1); e_lwz 6, 16(1); e_lwz 7, 20(1); e_lwz 8, 24(1); e_lwz 9, 28(1); e_lwz 10, 32(1); e_lwz 11, 36(1); e_lwz 12, 40(1); e_add16i 1,1,80;
 se_rfi
exception_IVOR3:
 e_stwu 1,-80(1); e_stw 0, 0(1); e_stw 3, 4(1); e_stw 4, 8(1); e_stw 5, 12(1); e_stw 6, 16(1); e_stw 7, 20(1); e_stw 8, 24(1); e_stw 9, 28(1); e_stw 10, 32(1); e_stw 11, 36(1); e_stw 12, 40(1); mfcr 3; e_stw 3, 56(1); mfxer 3; e_stw 3, 52(1); mfctr 3; e_stw 3, 48(1); mflr 3; e_stw 3, 44(1); e_subi 1,1,16
 e_bl Mpc5xxx_Exception_IVOR3
 mtsrr0 3
 e_add16i 1,1,16; e_lwz 3, 44(1); mtlr 3; e_lwz 3, 48(1); mtctr 3; e_lwz 3, 52(1); mtxer 3; e_lwz 3, 56(1); mtcr 3; e_lwz 0, 0(1); e_lwz 3, 4(1); e_lwz 4, 8(1); e_lwz 5, 12(1); e_lwz 6, 16(1); e_lwz 7, 20(1); e_lwz 8, 24(1); e_lwz 9, 28(1); e_lwz 10, 32(1); e_lwz 11, 36(1); e_lwz 12, 40(1); e_add16i 1,1,80;
 se_rfi
exception_IVOR5:
 e_stwu 1,-80(1); e_stw 0, 0(1); e_stw 3, 4(1); e_stw 4, 8(1); e_stw 5, 12(1); e_stw 6, 16(1); e_stw 7, 20(1); e_stw 8, 24(1); e_stw 9, 28(1); e_stw 10, 32(1); e_stw 11, 36(1); e_stw 12, 40(1); mfcr 3; e_stw 3, 56(1); mfxer 3; e_stw 3, 52(1); mfctr 3; e_stw 3, 48(1); mflr 3; e_stw 3, 44(1); e_subi 1,1,16
 e_bl Mpc5xxx_Exception_IVOR5
 mtsrr0 3
 e_add16i 1,1,16; e_lwz 3, 44(1); mtlr 3; e_lwz 3, 48(1); mtctr 3; e_lwz 3, 52(1); mtxer 3; e_lwz 3, 56(1); mtcr 3; e_lwz 0, 0(1); e_lwz 3, 4(1); e_lwz 4, 8(1); e_lwz 5, 12(1); e_lwz 6, 16(1); e_lwz 7, 20(1); e_lwz 8, 24(1); e_lwz 9, 28(1); e_lwz 10, 32(1); e_lwz 11, 36(1); e_lwz 12, 40(1); e_add16i 1,1,80;
 se_rfi
exception_IVOR6:
 e_stwu 1,-80(1); e_stw 0, 0(1); e_stw 3, 4(1); e_stw 4, 8(1); e_stw 5, 12(1); e_stw 6, 16(1); e_stw 7, 20(1); e_stw 8, 24(1); e_stw 9, 28(1); e_stw 10, 32(1); e_stw 11, 36(1); e_stw 12, 40(1); mfcr 3; e_stw 3, 56(1); mfxer 3; e_stw 3, 52(1); mfctr 3; e_stw 3, 48(1); mflr 3; e_stw 3, 44(1); e_subi 1,1,16
 e_bl Mpc5xxx_Exception_IVOR6
 mtsrr0 3
 e_add16i 1,1,16; e_lwz 3, 44(1); mtlr 3; e_lwz 3, 48(1); mtctr 3; e_lwz 3, 52(1); mtxer 3; e_lwz 3, 56(1); mtcr 3; e_lwz 0, 0(1); e_lwz 3, 4(1); e_lwz 4, 8(1); e_lwz 5, 12(1); e_lwz 6, 16(1); e_lwz 7, 20(1); e_lwz 8, 24(1); e_lwz 9, 28(1); e_lwz 10, 32(1); e_lwz 11, 36(1); e_lwz 12, 40(1); e_add16i 1,1,80;
 se_rfi
exception_IVOR7:
 e_stwu 1,-80(1); e_stw 0, 0(1); e_stw 3, 4(1); e_stw 4, 8(1); e_stw 5, 12(1); e_stw 6, 16(1); e_stw 7, 20(1); e_stw 8, 24(1); e_stw 9, 28(1); e_stw 10, 32(1); e_stw 11, 36(1); e_stw 12, 40(1); mfcr 3; e_stw 3, 56(1); mfxer 3; e_stw 3, 52(1); mfctr 3; e_stw 3, 48(1); mflr 3; e_stw 3, 44(1); e_subi 1,1,16
 e_bl Mpc5xxx_Exception_IVOR7
 mtsrr0 3
 e_add16i 1,1,16; e_lwz 3, 44(1); mtlr 3; e_lwz 3, 48(1); mtctr 3; e_lwz 3, 52(1); mtxer 3; e_lwz 3, 56(1); mtcr 3; e_lwz 0, 0(1); e_lwz 3, 4(1); e_lwz 4, 8(1); e_lwz 5, 12(1); e_lwz 6, 16(1); e_lwz 7, 20(1); e_lwz 8, 24(1); e_lwz 9, 28(1); e_lwz 10, 32(1); e_lwz 11, 36(1); e_lwz 12, 40(1); e_add16i 1,1,80;
 se_rfi
exception_IVOR8:
 e_stwu 1,-80(1); e_stw 0, 0(1); e_stw 3, 4(1); e_stw 4, 8(1); e_stw 5, 12(1); e_stw 6, 16(1); e_stw 7, 20(1); e_stw 8, 24(1); e_stw 9, 28(1); e_stw 10, 32(1); e_stw 11, 36(1); e_stw 12, 40(1); mfcr 3; e_stw 3, 56(1); mfxer 3; e_stw 3, 52(1); mfctr 3; e_stw 3, 48(1); mflr 3; e_stw 3, 44(1); e_subi 1,1,16
 e_bl Mpc5xxx_Exception_IVOR8
 mtsrr0 3
 e_add16i 1,1,16; e_lwz 3, 44(1); mtlr 3; e_lwz 3, 48(1); mtctr 3; e_lwz 3, 52(1); mtxer 3; e_lwz 3, 56(1); mtcr 3; e_lwz 0, 0(1); e_lwz 3, 4(1); e_lwz 4, 8(1); e_lwz 5, 12(1); e_lwz 6, 16(1); e_lwz 7, 20(1); e_lwz 8, 24(1); e_lwz 9, 28(1); e_lwz 10, 32(1); e_lwz 11, 36(1); e_lwz 12, 40(1); e_add16i 1,1,80;
 se_rfi
exception_IVOR9:
 se_rfi
exception_IVOR11:
 e_stwu 1,-80(1); e_stw 0, 0(1); e_stw 3, 4(1); e_stw 4, 8(1); e_stw 5, 12(1); e_stw 6, 16(1); e_stw 7, 20(1); e_stw 8, 24(1); e_stw 9, 28(1); e_stw 10, 32(1); e_stw 11, 36(1); e_stw 12, 40(1); mfcr 3; e_stw 3, 56(1); mfxer 3; e_stw 3, 52(1); mfctr 3; e_stw 3, 48(1); mflr 3; e_stw 3, 44(1); e_subi 1,1,16
 e_bl Mpc5xxx_Exception_IVOR11
 mtsrr0 3
 e_add16i 1,1,16; e_lwz 3, 44(1); mtlr 3; e_lwz 3, 48(1); mtctr 3; e_lwz 3, 52(1); mtxer 3; e_lwz 3, 56(1); mtcr 3; e_lwz 0, 0(1); e_lwz 3, 4(1); e_lwz 4, 8(1); e_lwz 5, 12(1); e_lwz 6, 16(1); e_lwz 7, 20(1); e_lwz 8, 24(1); e_lwz 9, 28(1); e_lwz 10, 32(1); e_lwz 11, 36(1); e_lwz 12, 40(1); e_add16i 1,1,80;
 se_rfi
exception_IVOR12:
 e_stwu 1,-80(1); e_stw 0, 0(1); e_stw 3, 4(1); e_stw 4, 8(1); e_stw 5, 12(1); e_stw 6, 16(1); e_stw 7, 20(1); e_stw 8, 24(1); e_stw 9, 28(1); e_stw 10, 32(1); e_stw 11, 36(1); e_stw 12, 40(1); mfcr 3; e_stw 3, 56(1); mfxer 3; e_stw 3, 52(1); mfctr 3; e_stw 3, 48(1); mflr 3; e_stw 3, 44(1); e_subi 1,1,16
 e_bl Mpc5xxx_Exception_IVOR12
 mtcsrr0 3
 e_add16i 1,1,16; e_lwz 3, 44(1); mtlr 3; e_lwz 3, 48(1); mtctr 3; e_lwz 3, 52(1); mtxer 3; e_lwz 3, 56(1); mtcr 3; e_lwz 0, 0(1); e_lwz 3, 4(1); e_lwz 4, 8(1); e_lwz 5, 12(1); e_lwz 6, 16(1); e_lwz 7, 20(1); e_lwz 8, 24(1); e_lwz 9, 28(1); e_lwz 10, 32(1); e_lwz 11, 36(1); e_lwz 12, 40(1); e_add16i 1,1,80;
 se_rfci
exception_IVOR13:
 e_stwu 1,-80(1); e_stw 0, 0(1); e_stw 3, 4(1); e_stw 4, 8(1); e_stw 5, 12(1); e_stw 6, 16(1); e_stw 7, 20(1); e_stw 8, 24(1); e_stw 9, 28(1); e_stw 10, 32(1); e_stw 11, 36(1); e_stw 12, 40(1); mfcr 3; e_stw 3, 56(1); mfxer 3; e_stw 3, 52(1); mfctr 3; e_stw 3, 48(1); mflr 3; e_stw 3, 44(1); e_subi 1,1,16
 e_bl Mpc5xxx_Exception_IVOR13
 mtsrr0 3
 e_add16i 1,1,16; e_lwz 3, 44(1); mtlr 3; e_lwz 3, 48(1); mtctr 3; e_lwz 3, 52(1); mtxer 3; e_lwz 3, 56(1); mtcr 3; e_lwz 0, 0(1); e_lwz 3, 4(1); e_lwz 4, 8(1); e_lwz 5, 12(1); e_lwz 6, 16(1); e_lwz 7, 20(1); e_lwz 8, 24(1); e_lwz 9, 28(1); e_lwz 10, 32(1); e_lwz 11, 36(1); e_lwz 12, 40(1); e_add16i 1,1,80;
 se_rfi
exception_IVOR14:
 e_stwu 1,-80(1); e_stw 0, 0(1); e_stw 3, 4(1); e_stw 4, 8(1); e_stw 5, 12(1); e_stw 6, 16(1); e_stw 7, 20(1); e_stw 8, 24(1); e_stw 9, 28(1); e_stw 10, 32(1); e_stw 11, 36(1); e_stw 12, 40(1); mfcr 3; e_stw 3, 56(1); mfxer 3; e_stw 3, 52(1); mfctr 3; e_stw 3, 48(1); mflr 3; e_stw 3, 44(1); e_subi 1,1,16
 e_bl Mpc5xxx_Exception_IVOR14
 mtsrr0 3
 e_add16i 1,1,16; e_lwz 3, 44(1); mtlr 3; e_lwz 3, 48(1); mtctr 3; e_lwz 3, 52(1); mtxer 3; e_lwz 3, 56(1); mtcr 3; e_lwz 0, 0(1); e_lwz 3, 4(1); e_lwz 4, 8(1); e_lwz 5, 12(1); e_lwz 6, 16(1); e_lwz 7, 20(1); e_lwz 8, 24(1); e_lwz 9, 28(1); e_lwz 10, 32(1); e_lwz 11, 36(1); e_lwz 12, 40(1); e_add16i 1,1,80;
 se_rfi
exception_IVOR15:
 e_b exception_IVOR15
handleException:
 e_b handleException
.section ".exception_tbl","ax"

 .balign 0x1000
 .global exception_tbl
exception_tbl:
 .balign 16; e_b exception_IVOR0
 .balign 16; e_b exception_IVOR1
    .balign 16; e_b exception_IVOR2
    .balign 16; e_b exception_IVOR3
    .balign 16; e_b exception_IVOR4
 .balign 16; e_b exception_IVOR5
 .balign 16; e_b exception_IVOR6
 .balign 16; e_b exception_IVOR7
 .balign 16; e_b exception_IVOR8
 .balign 16; e_b exception_IVOR9
  .balign 16; e_b exception_IVOR10
 .balign 16; e_b exception_IVOR11
 .balign 16; e_b exception_IVOR12
 .balign 16; e_b exception_IVOR13
 .balign 16; e_b exception_IVOR14
 .balign 16; e_b exception_IVOR15
