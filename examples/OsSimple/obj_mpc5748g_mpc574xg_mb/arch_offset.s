	.file	"arch_offset.c"
	.section	".text","axv"
.Ltext0:
	.cfi_sections	.debug_frame
	.section	.text.oil_foo,"axv",@progbits
	.align 1
	.p2align 2,,3
	.globl oil_foo
	.type	oil_foo, @function
oil_foo:
.LFB15:
	.file 1 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c"
	.loc 1 41 0
	.cfi_startproc
	e_stwu 1,-16(1)
.LCFI0:
	.cfi_def_cfa_offset 16
	se_stw 31,12(1)
	.cfi_offset 31, -4
	se_mr 31,1
.LCFI1:
	.cfi_def_cfa_register 31
	.loc 1 46 0
 # 46 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define EXC_FRM_SIZE 48
 # 0 "" 2
	.loc 1 47 0
 # 47 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define EXC_FRM_SP 0
 # 0 "" 2
	.loc 1 48 0
 # 48 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define EXC_FRM_SRR0 12
 # 0 "" 2
	.loc 1 49 0
 # 49 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define EXC_FRM_SRR1 16
 # 0 "" 2
	.loc 1 50 0
 # 50 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define EXC_FRM_LR 20
 # 0 "" 2
	.loc 1 51 0
 # 51 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define EXC_FRM_CTR 24
 # 0 "" 2
	.loc 1 52 0
 # 52 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define EXC_FRM_XER 28
 # 0 "" 2
	.loc 1 53 0
 # 53 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define EXC_FRM_CR 32
 # 0 "" 2
	.loc 1 54 0
 # 54 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define EXC_FRM_R3 40
 # 0 "" 2
	.loc 1 55 0
 # 55 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define EXC_FRM_VECTOR 36
 # 0 "" 2
	.loc 1 56 0
 # 56 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define EXC_FRM_USPRG0 44
 # 0 "" 2
	.loc 1 59 0
 # 59 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define VOLATILE_FRM_SIZE 80
 # 0 "" 2
	.loc 1 60 0
 # 60 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define VOLATILE_FRM_R0 0
 # 0 "" 2
	.loc 1 61 0
 # 61 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define VOLATILE_FRM_R3 4
 # 0 "" 2
	.loc 1 62 0
 # 62 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define VOLATILE_FRM_R4 8
 # 0 "" 2
	.loc 1 63 0
 # 63 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define VOLATILE_FRM_R5 12
 # 0 "" 2
	.loc 1 64 0
 # 64 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define VOLATILE_FRM_R6 16
 # 0 "" 2
	.loc 1 65 0
 # 65 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define VOLATILE_FRM_R7 20
 # 0 "" 2
	.loc 1 66 0
 # 66 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define VOLATILE_FRM_R8 24
 # 0 "" 2
	.loc 1 67 0
 # 67 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define VOLATILE_FRM_R9 28
 # 0 "" 2
	.loc 1 68 0
 # 68 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define VOLATILE_FRM_R10 32
 # 0 "" 2
	.loc 1 69 0
 # 69 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define VOLATILE_FRM_R11 36
 # 0 "" 2
	.loc 1 70 0
 # 70 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define VOLATILE_FRM_R12 40
 # 0 "" 2
	.loc 1 71 0
 # 71 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define VOLATILE_FRM_LR 44
 # 0 "" 2
	.loc 1 72 0
 # 72 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define VOLATILE_FRM_CTR 48
 # 0 "" 2
	.loc 1 73 0
 # 73 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define VOLATILE_FRM_XER 52
 # 0 "" 2
	.loc 1 74 0
 # 74 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define VOLATILE_FRM_CR 56
 # 0 "" 2
	.loc 1 77 0
 # 77 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define MPC5XXX_INFO_SIZE 20
 # 0 "" 2
	.loc 1 78 0
 # 78 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define MPC5XXX_INFO_C_SRR0 0
 # 0 "" 2
	.loc 1 79 0
 # 79 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define MPC5XXX_INFO_C_SRR1 4
 # 0 "" 2
	.loc 1 80 0
 # 80 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define MPC5XXX_INFO_MCSR 8
 # 0 "" 2
	.loc 1 81 0
 # 81 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define MPC5XXX_INFO_ESR 12
 # 0 "" 2
	.loc 1 82 0
 # 82 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define MPC5XXX_INFO_DEAR 16
 # 0 "" 2
	.loc 1 84 0
 # 84 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define FUNC_FRM_SIZE 96
 # 0 "" 2
	.loc 1 85 0
 # 85 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define FUNC_FRM_CR 16
 # 0 "" 2
	.loc 1 86 0
 # 86 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define FUNC_FRM_LR 20
 # 0 "" 2
	.loc 1 87 0
 # 87 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define FUNC_FRM_PATTERN 12
 # 0 "" 2
	.loc 1 88 0
 # 88 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define FUNC_FRM_R14 24
 # 0 "" 2
	.loc 1 89 0
 # 89 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define FUNC_FRM_R15 28
 # 0 "" 2
	.loc 1 90 0
 # 90 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define FUNC_FRM_R16 32
 # 0 "" 2
	.loc 1 91 0
 # 91 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define FUNC_FRM_R17 36
 # 0 "" 2
	.loc 1 92 0
 # 92 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define FUNC_FRM_R18 40
 # 0 "" 2
	.loc 1 93 0
 # 93 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define FUNC_FRM_R19 44
 # 0 "" 2
	.loc 1 94 0
 # 94 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define FUNC_FRM_R20 48
 # 0 "" 2
	.loc 1 95 0
 # 95 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define FUNC_FRM_R21 52
 # 0 "" 2
	.loc 1 96 0
 # 96 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define FUNC_FRM_R22 56
 # 0 "" 2
	.loc 1 97 0
 # 97 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define FUNC_FRM_R23 60
 # 0 "" 2
	.loc 1 98 0
 # 98 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define FUNC_FRM_R24 64
 # 0 "" 2
	.loc 1 99 0
 # 99 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define FUNC_FRM_R25 68
 # 0 "" 2
	.loc 1 100 0
 # 100 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define FUNC_FRM_R26 72
 # 0 "" 2
	.loc 1 101 0
 # 101 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define FUNC_FRM_R27 76
 # 0 "" 2
	.loc 1 102 0
 # 102 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define FUNC_FRM_R28 80
 # 0 "" 2
	.loc 1 103 0
 # 103 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define FUNC_FRM_R29 84
 # 0 "" 2
	.loc 1 104 0
 # 104 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define FUNC_FRM_R30 88
 # 0 "" 2
	.loc 1 105 0
 # 105 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define FUNC_FRM_R31 92
 # 0 "" 2
	.loc 1 114 0
 # 114 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_SIZE 128
 # 0 "" 2
	.loc 1 115 0
 # 115 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R0 16
 # 0 "" 2
	.loc 1 116 0
 # 116 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R4 20
 # 0 "" 2
	.loc 1 117 0
 # 117 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R5 24
 # 0 "" 2
	.loc 1 118 0
 # 118 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R6 28
 # 0 "" 2
	.loc 1 119 0
 # 119 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R7 32
 # 0 "" 2
	.loc 1 120 0
 # 120 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R8 36
 # 0 "" 2
	.loc 1 121 0
 # 121 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R9 40
 # 0 "" 2
	.loc 1 122 0
 # 122 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R10 44
 # 0 "" 2
	.loc 1 123 0
 # 123 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R11 48
 # 0 "" 2
	.loc 1 124 0
 # 124 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R12 52
 # 0 "" 2
	.loc 1 125 0
 # 125 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R14 56
 # 0 "" 2
	.loc 1 126 0
 # 126 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R15 60
 # 0 "" 2
	.loc 1 127 0
 # 127 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R16 64
 # 0 "" 2
	.loc 1 128 0
 # 128 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R17 68
 # 0 "" 2
	.loc 1 129 0
 # 129 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R18 72
 # 0 "" 2
	.loc 1 130 0
 # 130 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R19 76
 # 0 "" 2
	.loc 1 131 0
 # 131 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R20 80
 # 0 "" 2
	.loc 1 132 0
 # 132 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R21 84
 # 0 "" 2
	.loc 1 133 0
 # 133 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R22 88
 # 0 "" 2
	.loc 1 134 0
 # 134 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R23 92
 # 0 "" 2
	.loc 1 135 0
 # 135 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R24 96
 # 0 "" 2
	.loc 1 136 0
 # 136 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R25 100
 # 0 "" 2
	.loc 1 137 0
 # 137 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R26 104
 # 0 "" 2
	.loc 1 138 0
 # 138 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R27 108
 # 0 "" 2
	.loc 1 139 0
 # 139 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R28 112
 # 0 "" 2
	.loc 1 140 0
 # 140 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R29 116
 # 0 "" 2
	.loc 1 141 0
 # 141 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R30 120
 # 0 "" 2
	.loc 1 142 0
 # 142 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_R31 124
 # 0 "" 2
	.loc 1 143 0
 # 143 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define ISR_FRM_PATTERN 12
 # 0 "" 2
	.loc 1 144 0
 # 144 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define INTC_HI 64516
 # 0 "" 2
	.loc 1 145 0
 # 145 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define INTC_LO 0
 # 0 "" 2
	.loc 1 161 0
 # 161 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define INTC_IACR_OFFS 32
 # 0 "" 2
	.loc 1 162 0
 # 162 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define INTC_EOIR_OFFS 48
 # 0 "" 2
	.loc 1 164 0
 # 164 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define INTC_SSCIR0_OFFS 64
 # 0 "" 2
	.loc 1 165 0
 # 165 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define NUM_SOFT_INT 24
 # 0 "" 2
	.loc 1 181 0
 # 181 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c" 1
	#define E_OS_BAD_CONTEXT_ASM 35
 # 0 "" 2
	.loc 1 184 0
	e_addi 11,31,16
	e_lwz 31,-4(11)
.LCFI2:
	.cfi_def_cfa 11, 0
	se_mfar 1,11
.LCFI3:
	.cfi_restore 31
	.cfi_def_cfa_register 1
	se_blr
	.cfi_endproc
.LFE15:
	.size	oil_foo, .-oil_foo
	.section	".text","axv"
.Letext0:
	.file 2 "d:\\arcticstudio-21.0.0-win32.win32.x86_64\\msys\\opt\\mingw-powerpc-eabivle-4.9.4\\powerpc-eabivle\\include\\machine\\_default_types.h"
	.file 3 "d:\\arcticstudio-21.0.0-win32.win32.x86_64\\msys\\opt\\mingw-powerpc-eabivle-4.9.4\\powerpc-eabivle\\include\\stdint.h"
	.file 4 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/include/Arc_Types.h"
	.file 5 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/include/Platform_Types.h"
	.file 6 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/mcal/arch/mpc5xxx/mpc5748g.h"
	.file 7 "d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/rtos/inc/Os.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x68d
	.2byte	0x2
	.4byte	.Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.4byte	.LASF111
	.byte	0x1
	.4byte	.LASF112
	.4byte	.Ldebug_ranges0+0
	.4byte	0
	.4byte	0
	.4byte	.Ldebug_line0
	.uleb128 0x2
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x3
	.byte	0x4
	.byte	0x7
	.4byte	.LASF0
	.uleb128 0x3
	.byte	0x4
	.byte	0x5
	.4byte	.LASF1
	.uleb128 0x4
	.4byte	.LASF3
	.byte	0x2
	.byte	0x1b
	.4byte	0x45
	.uleb128 0x3
	.byte	0x1
	.byte	0x6
	.4byte	.LASF2
	.uleb128 0x4
	.4byte	.LASF4
	.byte	0x2
	.byte	0x1d
	.4byte	0x57
	.uleb128 0x3
	.byte	0x1
	.byte	0x8
	.4byte	.LASF5
	.uleb128 0x3
	.byte	0x2
	.byte	0x5
	.4byte	.LASF6
	.uleb128 0x4
	.4byte	.LASF7
	.byte	0x2
	.byte	0x2b
	.4byte	0x70
	.uleb128 0x3
	.byte	0x2
	.byte	0x7
	.4byte	.LASF8
	.uleb128 0x4
	.4byte	.LASF9
	.byte	0x2
	.byte	0x41
	.4byte	0x82
	.uleb128 0x3
	.byte	0x4
	.byte	0x7
	.4byte	.LASF10
	.uleb128 0x3
	.byte	0x8
	.byte	0x5
	.4byte	.LASF11
	.uleb128 0x3
	.byte	0x8
	.byte	0x7
	.4byte	.LASF12
	.uleb128 0x4
	.4byte	.LASF13
	.byte	0x3
	.byte	0x14
	.4byte	0x3a
	.uleb128 0x4
	.4byte	.LASF14
	.byte	0x3
	.byte	0x15
	.4byte	0x4c
	.uleb128 0x4
	.4byte	.LASF15
	.byte	0x3
	.byte	0x21
	.4byte	0x65
	.uleb128 0x4
	.4byte	.LASF16
	.byte	0x3
	.byte	0x2d
	.4byte	0x77
	.uleb128 0x4
	.4byte	.LASF17
	.byte	0x4
	.byte	0x15
	.4byte	0xce
	.uleb128 0x5
	.4byte	0xa2
	.uleb128 0x4
	.4byte	.LASF18
	.byte	0x4
	.byte	0x18
	.4byte	0xde
	.uleb128 0x5
	.4byte	0xad
	.uleb128 0x4
	.4byte	.LASF19
	.byte	0x4
	.byte	0x1b
	.4byte	0xee
	.uleb128 0x5
	.4byte	0xb8
	.uleb128 0x4
	.4byte	.LASF20
	.byte	0x5
	.byte	0x6e
	.4byte	0x97
	.uleb128 0x4
	.4byte	.LASF21
	.byte	0x5
	.byte	0x6f
	.4byte	0xa2
	.uleb128 0x3
	.byte	0x1
	.byte	0x8
	.4byte	.LASF22
	.uleb128 0x4
	.4byte	.LASF23
	.byte	0x5
	.byte	0x76
	.4byte	0xb8
	.uleb128 0x3
	.byte	0x4
	.byte	0x4
	.4byte	.LASF24
	.uleb128 0x3
	.byte	0x8
	.byte	0x4
	.4byte	.LASF25
	.uleb128 0x6
	.4byte	0xa2
	.4byte	0x139
	.uleb128 0x7
	.4byte	0x139
	.byte	0x7
	.byte	0
	.uleb128 0x3
	.byte	0x4
	.byte	0x7
	.4byte	.LASF26
	.uleb128 0x6
	.4byte	0xa2
	.4byte	0x150
	.uleb128 0x7
	.4byte	0x139
	.byte	0x3
	.byte	0
	.uleb128 0x8
	.byte	0x4
	.byte	0x6
	.2byte	0x1d1a
	.4byte	0x1a2
	.uleb128 0x9
	.4byte	.LASF27
	.byte	0x6
	.2byte	0x1d1c
	.4byte	0xe3
	.byte	0x4
	.byte	0x1
	.byte	0x13
	.byte	0x2
	.byte	0x23
	.uleb128 0
	.uleb128 0x9
	.4byte	.LASF28
	.byte	0x6
	.2byte	0x1d1e
	.4byte	0xe3
	.byte	0x4
	.byte	0x1
	.byte	0x17
	.byte	0x2
	.byte	0x23
	.uleb128 0
	.uleb128 0x9
	.4byte	.LASF29
	.byte	0x6
	.2byte	0x1d20
	.4byte	0xe3
	.byte	0x4
	.byte	0x1
	.byte	0x1b
	.byte	0x2
	.byte	0x23
	.uleb128 0
	.uleb128 0x9
	.4byte	.LASF30
	.byte	0x6
	.2byte	0x1d22
	.4byte	0xe3
	.byte	0x4
	.byte	0x1
	.byte	0x1f
	.byte	0x2
	.byte	0x23
	.uleb128 0
	.byte	0
	.uleb128 0xa
	.byte	0x4
	.byte	0x6
	.2byte	0x1d18
	.4byte	0x1c0
	.uleb128 0xb
	.string	"R"
	.byte	0x6
	.2byte	0x1d19
	.4byte	0xe3
	.uleb128 0xb
	.string	"B"
	.byte	0x6
	.2byte	0x1d23
	.4byte	0x150
	.byte	0
	.uleb128 0x8
	.byte	0x4
	.byte	0x6
	.2byte	0x1d28
	.4byte	0x1ed
	.uleb128 0xc
	.string	"ID"
	.byte	0x6
	.2byte	0x1d2a
	.4byte	0xe3
	.byte	0x4
	.byte	0x2
	.byte	0x1a
	.byte	0x2
	.byte	0x23
	.uleb128 0
	.uleb128 0x9
	.4byte	.LASF31
	.byte	0x6
	.2byte	0x1d2c
	.4byte	0xe3
	.byte	0x4
	.byte	0x1
	.byte	0x1f
	.byte	0x2
	.byte	0x23
	.uleb128 0
	.byte	0
	.uleb128 0xa
	.byte	0x4
	.byte	0x6
	.2byte	0x1d26
	.4byte	0x20b
	.uleb128 0xb
	.string	"R"
	.byte	0x6
	.2byte	0x1d27
	.4byte	0xe3
	.uleb128 0xb
	.string	"B"
	.byte	0x6
	.2byte	0x1d2d
	.4byte	0x1c0
	.byte	0
	.uleb128 0x8
	.byte	0x4
	.byte	0x6
	.2byte	0x1d33
	.4byte	0x227
	.uleb128 0xc
	.string	"PRI"
	.byte	0x6
	.2byte	0x1d35
	.4byte	0xe3
	.byte	0x4
	.byte	0x4
	.byte	0x1c
	.byte	0x2
	.byte	0x23
	.uleb128 0
	.byte	0
	.uleb128 0xa
	.byte	0x4
	.byte	0x6
	.2byte	0x1d31
	.4byte	0x245
	.uleb128 0xb
	.string	"R"
	.byte	0x6
	.2byte	0x1d32
	.4byte	0xe3
	.uleb128 0xb
	.string	"B"
	.byte	0x6
	.2byte	0x1d36
	.4byte	0x20b
	.byte	0
	.uleb128 0x8
	.byte	0x4
	.byte	0x6
	.2byte	0x1d3c
	.4byte	0x273
	.uleb128 0x9
	.4byte	.LASF32
	.byte	0x6
	.2byte	0x1d3d
	.4byte	0xe3
	.byte	0x4
	.byte	0x14
	.byte	0
	.byte	0x2
	.byte	0x23
	.uleb128 0
	.uleb128 0x9
	.4byte	.LASF33
	.byte	0x6
	.2byte	0x1d3e
	.4byte	0xe3
	.byte	0x4
	.byte	0xa
	.byte	0x14
	.byte	0x2
	.byte	0x23
	.uleb128 0
	.byte	0
	.uleb128 0xa
	.byte	0x4
	.byte	0x6
	.2byte	0x1d3a
	.4byte	0x291
	.uleb128 0xb
	.string	"R"
	.byte	0x6
	.2byte	0x1d3b
	.4byte	0xe3
	.uleb128 0xb
	.string	"B"
	.byte	0x6
	.2byte	0x1d40
	.4byte	0x245
	.byte	0
	.uleb128 0x8
	.byte	0x4
	.byte	0x6
	.2byte	0x1d46
	.4byte	0x2ad
	.uleb128 0xc
	.string	"EOI"
	.byte	0x6
	.2byte	0x1d47
	.4byte	0xe3
	.byte	0x4
	.byte	0x20
	.byte	0
	.byte	0x2
	.byte	0x23
	.uleb128 0
	.byte	0
	.uleb128 0xa
	.byte	0x4
	.byte	0x6
	.2byte	0x1d44
	.4byte	0x2cb
	.uleb128 0xb
	.string	"R"
	.byte	0x6
	.2byte	0x1d45
	.4byte	0xe3
	.uleb128 0xb
	.string	"B"
	.byte	0x6
	.2byte	0x1d48
	.4byte	0x291
	.byte	0
	.uleb128 0x8
	.byte	0x1
	.byte	0x6
	.2byte	0x1d4e
	.4byte	0x2f9
	.uleb128 0xc
	.string	"SET"
	.byte	0x6
	.2byte	0x1d50
	.4byte	0xc3
	.byte	0x1
	.byte	0x1
	.byte	0x6
	.byte	0x2
	.byte	0x23
	.uleb128 0
	.uleb128 0xc
	.string	"CLR"
	.byte	0x6
	.2byte	0x1d51
	.4byte	0xc3
	.byte	0x1
	.byte	0x1
	.byte	0x7
	.byte	0x2
	.byte	0x23
	.uleb128 0
	.byte	0
	.uleb128 0xa
	.byte	0x1
	.byte	0x6
	.2byte	0x1d4c
	.4byte	0x317
	.uleb128 0xb
	.string	"R"
	.byte	0x6
	.2byte	0x1d4d
	.4byte	0xc3
	.uleb128 0xb
	.string	"B"
	.byte	0x6
	.2byte	0x1d52
	.4byte	0x2cb
	.byte	0
	.uleb128 0x8
	.byte	0x2
	.byte	0x6
	.2byte	0x1d58
	.4byte	0x357
	.uleb128 0x9
	.4byte	.LASF34
	.byte	0x6
	.2byte	0x1d59
	.4byte	0xd3
	.byte	0x2
	.byte	0x4
	.byte	0
	.byte	0x2
	.byte	0x23
	.uleb128 0
	.uleb128 0x9
	.4byte	.LASF35
	.byte	0x6
	.2byte	0x1d5b
	.4byte	0xd3
	.byte	0x2
	.byte	0x1
	.byte	0x7
	.byte	0x2
	.byte	0x23
	.uleb128 0
	.uleb128 0xc
	.string	"PRI"
	.byte	0x6
	.2byte	0x1d5d
	.4byte	0xd3
	.byte	0x2
	.byte	0x4
	.byte	0xc
	.byte	0x2
	.byte	0x23
	.uleb128 0
	.byte	0
	.uleb128 0xa
	.byte	0x2
	.byte	0x6
	.2byte	0x1d56
	.4byte	0x375
	.uleb128 0xb
	.string	"R"
	.byte	0x6
	.2byte	0x1d57
	.4byte	0xd3
	.uleb128 0xb
	.string	"B"
	.byte	0x6
	.2byte	0x1d5e
	.4byte	0x317
	.byte	0
	.uleb128 0xd
	.4byte	.LASF101
	.2byte	0x860
	.byte	0x6
	.2byte	0x1d17
	.4byte	0x438
	.uleb128 0xe
	.string	"MCR"
	.byte	0x6
	.2byte	0x1d24
	.4byte	0x1a2
	.byte	0x2
	.byte	0x23
	.uleb128 0
	.uleb128 0xf
	.4byte	.LASF31
	.byte	0x6
	.2byte	0x1d2e
	.4byte	0x1ed
	.byte	0x2
	.byte	0x23
	.uleb128 0x4
	.uleb128 0xf
	.4byte	.LASF36
	.byte	0x6
	.2byte	0x1d30
	.4byte	0x129
	.byte	0x2
	.byte	0x23
	.uleb128 0x8
	.uleb128 0xe
	.string	"CPR"
	.byte	0x6
	.2byte	0x1d37
	.4byte	0x438
	.byte	0x2
	.byte	0x23
	.uleb128 0x10
	.uleb128 0xf
	.4byte	.LASF37
	.byte	0x6
	.2byte	0x1d39
	.4byte	0x140
	.byte	0x2
	.byte	0x23
	.uleb128 0x1c
	.uleb128 0xf
	.4byte	.LASF38
	.byte	0x6
	.2byte	0x1d41
	.4byte	0x448
	.byte	0x2
	.byte	0x23
	.uleb128 0x20
	.uleb128 0xf
	.4byte	.LASF39
	.byte	0x6
	.2byte	0x1d43
	.4byte	0x140
	.byte	0x2
	.byte	0x23
	.uleb128 0x2c
	.uleb128 0xf
	.4byte	.LASF40
	.byte	0x6
	.2byte	0x1d49
	.4byte	0x458
	.byte	0x2
	.byte	0x23
	.uleb128 0x30
	.uleb128 0xf
	.4byte	.LASF41
	.byte	0x6
	.2byte	0x1d4b
	.4byte	0x140
	.byte	0x2
	.byte	0x23
	.uleb128 0x3c
	.uleb128 0xf
	.4byte	.LASF42
	.byte	0x6
	.2byte	0x1d53
	.4byte	0x468
	.byte	0x2
	.byte	0x23
	.uleb128 0x40
	.uleb128 0xf
	.4byte	.LASF43
	.byte	0x6
	.2byte	0x1d55
	.4byte	0x129
	.byte	0x2
	.byte	0x23
	.uleb128 0x58
	.uleb128 0xe
	.string	"PSR"
	.byte	0x6
	.2byte	0x1d5f
	.4byte	0x478
	.byte	0x2
	.byte	0x23
	.uleb128 0x60
	.byte	0
	.uleb128 0x6
	.4byte	0x227
	.4byte	0x448
	.uleb128 0x7
	.4byte	0x139
	.byte	0x2
	.byte	0
	.uleb128 0x6
	.4byte	0x273
	.4byte	0x458
	.uleb128 0x7
	.4byte	0x139
	.byte	0x2
	.byte	0
	.uleb128 0x6
	.4byte	0x2ad
	.4byte	0x468
	.uleb128 0x7
	.4byte	0x139
	.byte	0x2
	.byte	0
	.uleb128 0x6
	.4byte	0x2f9
	.4byte	0x478
	.uleb128 0x7
	.4byte	0x139
	.byte	0x17
	.byte	0
	.uleb128 0x6
	.4byte	0x357
	.4byte	0x489
	.uleb128 0x10
	.4byte	0x139
	.2byte	0x3ff
	.byte	0
	.uleb128 0x4
	.4byte	.LASF44
	.byte	0x7
	.byte	0x2f
	.4byte	0xfe
	.uleb128 0x11
	.4byte	.LASF45
	.byte	0x7
	.2byte	0x105
	.4byte	0xf3
	.uleb128 0x12
	.byte	0x4
	.byte	0x7
	.2byte	0x3a2
	.4byte	0x5ee
	.uleb128 0x13
	.4byte	.LASF46
	.sleb128 0
	.uleb128 0x13
	.4byte	.LASF47
	.sleb128 1
	.uleb128 0x13
	.4byte	.LASF48
	.sleb128 2
	.uleb128 0x13
	.4byte	.LASF49
	.sleb128 3
	.uleb128 0x13
	.4byte	.LASF50
	.sleb128 4
	.uleb128 0x13
	.4byte	.LASF51
	.sleb128 5
	.uleb128 0x13
	.4byte	.LASF52
	.sleb128 6
	.uleb128 0x13
	.4byte	.LASF53
	.sleb128 7
	.uleb128 0x13
	.4byte	.LASF54
	.sleb128 8
	.uleb128 0x13
	.4byte	.LASF55
	.sleb128 9
	.uleb128 0x13
	.4byte	.LASF56
	.sleb128 10
	.uleb128 0x13
	.4byte	.LASF57
	.sleb128 11
	.uleb128 0x13
	.4byte	.LASF58
	.sleb128 12
	.uleb128 0x13
	.4byte	.LASF59
	.sleb128 13
	.uleb128 0x13
	.4byte	.LASF60
	.sleb128 14
	.uleb128 0x13
	.4byte	.LASF61
	.sleb128 15
	.uleb128 0x13
	.4byte	.LASF62
	.sleb128 16
	.uleb128 0x13
	.4byte	.LASF63
	.sleb128 17
	.uleb128 0x13
	.4byte	.LASF64
	.sleb128 18
	.uleb128 0x13
	.4byte	.LASF65
	.sleb128 19
	.uleb128 0x13
	.4byte	.LASF66
	.sleb128 20
	.uleb128 0x13
	.4byte	.LASF67
	.sleb128 21
	.uleb128 0x13
	.4byte	.LASF68
	.sleb128 22
	.uleb128 0x13
	.4byte	.LASF69
	.sleb128 23
	.uleb128 0x13
	.4byte	.LASF70
	.sleb128 24
	.uleb128 0x13
	.4byte	.LASF71
	.sleb128 25
	.uleb128 0x13
	.4byte	.LASF72
	.sleb128 26
	.uleb128 0x13
	.4byte	.LASF73
	.sleb128 27
	.uleb128 0x13
	.4byte	.LASF74
	.sleb128 28
	.uleb128 0x13
	.4byte	.LASF75
	.sleb128 29
	.uleb128 0x13
	.4byte	.LASF76
	.sleb128 30
	.uleb128 0x13
	.4byte	.LASF77
	.sleb128 31
	.uleb128 0x13
	.4byte	.LASF78
	.sleb128 32
	.uleb128 0x13
	.4byte	.LASF79
	.sleb128 33
	.uleb128 0x13
	.4byte	.LASF80
	.sleb128 34
	.uleb128 0x13
	.4byte	.LASF81
	.sleb128 35
	.uleb128 0x13
	.4byte	.LASF82
	.sleb128 36
	.uleb128 0x13
	.4byte	.LASF83
	.sleb128 37
	.uleb128 0x13
	.4byte	.LASF84
	.sleb128 38
	.uleb128 0x13
	.4byte	.LASF85
	.sleb128 39
	.uleb128 0x13
	.4byte	.LASF86
	.sleb128 40
	.uleb128 0x13
	.4byte	.LASF87
	.sleb128 41
	.uleb128 0x13
	.4byte	.LASF88
	.sleb128 42
	.uleb128 0x13
	.4byte	.LASF89
	.sleb128 43
	.uleb128 0x13
	.4byte	.LASF90
	.sleb128 44
	.uleb128 0x13
	.4byte	.LASF91
	.sleb128 45
	.uleb128 0x13
	.4byte	.LASF92
	.sleb128 46
	.uleb128 0x13
	.4byte	.LASF93
	.sleb128 47
	.uleb128 0x13
	.4byte	.LASF94
	.sleb128 48
	.uleb128 0x13
	.4byte	.LASF95
	.sleb128 49
	.uleb128 0x13
	.4byte	.LASF96
	.sleb128 50
	.uleb128 0x13
	.4byte	.LASF97
	.sleb128 51
	.uleb128 0x13
	.4byte	.LASF98
	.sleb128 52
	.uleb128 0x13
	.4byte	.LASF99
	.sleb128 53
	.byte	0
	.uleb128 0x11
	.4byte	.LASF100
	.byte	0x7
	.2byte	0x3e0
	.4byte	0x4a0
	.uleb128 0x14
	.4byte	.LASF102
	.byte	0x10
	.byte	0x7
	.2byte	0x3e2
	.4byte	0x644
	.uleb128 0xf
	.4byte	.LASF103
	.byte	0x7
	.2byte	0x3e3
	.4byte	0x5ee
	.byte	0x2
	.byte	0x23
	.uleb128 0
	.uleb128 0xf
	.4byte	.LASF104
	.byte	0x7
	.2byte	0x3e4
	.4byte	0x110
	.byte	0x2
	.byte	0x23
	.uleb128 0x4
	.uleb128 0xf
	.4byte	.LASF105
	.byte	0x7
	.2byte	0x3e5
	.4byte	0x110
	.byte	0x2
	.byte	0x23
	.uleb128 0x8
	.uleb128 0xf
	.4byte	.LASF106
	.byte	0x7
	.2byte	0x3e6
	.4byte	0x110
	.byte	0x2
	.byte	0x23
	.uleb128 0xc
	.byte	0
	.uleb128 0x11
	.4byte	.LASF107
	.byte	0x7
	.2byte	0x3e7
	.4byte	0x5fa
	.uleb128 0x15
	.byte	0x1
	.4byte	.LASF113
	.byte	0x1
	.byte	0x29
	.byte	0x1
	.4byte	.LFB15
	.4byte	.LFE15
	.4byte	.LLST0
	.byte	0x1
	.uleb128 0x16
	.4byte	.LASF108
	.byte	0x7
	.2byte	0x109
	.4byte	0x494
	.byte	0x1
	.byte	0x1
	.uleb128 0x16
	.4byte	.LASF109
	.byte	0x7
	.2byte	0x10a
	.4byte	0x494
	.byte	0x1
	.byte	0x1
	.uleb128 0x16
	.4byte	.LASF110
	.byte	0x7
	.2byte	0x3e9
	.4byte	0x644
	.byte	0x1
	.byte	0x1
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x55
	.uleb128 0x6
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x52
	.uleb128 0x1
	.uleb128 0x10
	.uleb128 0x6
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x35
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x13
	.byte	0x1
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0xd
	.uleb128 0xb
	.uleb128 0xc
	.uleb128 0xb
	.uleb128 0x38
	.uleb128 0xa
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x17
	.byte	0x1
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0xd
	.uleb128 0xb
	.uleb128 0xc
	.uleb128 0xb
	.uleb128 0x38
	.uleb128 0xa
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0x5
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xa
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xa
	.byte	0
	.byte	0
	.uleb128 0x10
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x5
	.byte	0
	.byte	0
	.uleb128 0x11
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x12
	.uleb128 0x4
	.byte	0x1
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x13
	.uleb128 0x28
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1c
	.uleb128 0xd
	.byte	0
	.byte	0
	.uleb128 0x14
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x15
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0xc
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x1
	.uleb128 0x40
	.uleb128 0x6
	.uleb128 0x2117
	.uleb128 0xc
	.byte	0
	.byte	0
	.uleb128 0x16
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3c
	.uleb128 0xc
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_loc,"",@progbits
.Ldebug_loc0:
.LLST0:
	.4byte	.LFB15
	.4byte	.LCFI0
	.2byte	0x2
	.byte	0x71
	.sleb128 0
	.4byte	.LCFI0
	.4byte	.LCFI1
	.2byte	0x2
	.byte	0x71
	.sleb128 16
	.4byte	.LCFI1
	.4byte	.LCFI2
	.2byte	0x2
	.byte	0x8f
	.sleb128 16
	.4byte	.LCFI2
	.4byte	.LCFI3
	.2byte	0x2
	.byte	0x7b
	.sleb128 0
	.4byte	.LCFI3
	.4byte	.LFE15
	.2byte	0x2
	.byte	0x71
	.sleb128 0
	.4byte	0
	.4byte	0
	.section	.debug_aranges,"",@progbits
	.4byte	0x1c
	.2byte	0x2
	.4byte	.Ldebug_info0
	.byte	0x4
	.byte	0
	.2byte	0
	.2byte	0
	.4byte	.LFB15
	.4byte	.LFE15-.LFB15
	.4byte	0
	.4byte	0
	.section	.debug_ranges,"",@progbits
.Ldebug_ranges0:
	.4byte	.LFB15
	.4byte	.LFE15
	.4byte	0
	.4byte	0
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF20:
	.string	"sint8"
.LASF101:
	.string	"INTC_tag"
.LASF105:
	.string	"param2"
.LASF62:
	.string	"OSServiceId_StartOS"
.LASF106:
	.string	"param3"
.LASF103:
	.string	"serviceId"
.LASF13:
	.string	"int8_t"
.LASF71:
	.string	"OSServiceId_GetISRID"
.LASF55:
	.string	"OSServiceId_GetEvent"
.LASF63:
	.string	"OSServiceId_ShutdownOS"
.LASF85:
	.string	"OSServiceId_IncrementCounter"
.LASF32:
	.string	"VTBA"
.LASF79:
	.string	"OSServiceId_StopScheduleTable"
.LASF86:
	.string	"OSServiceId_GetCounterValue"
.LASF91:
	.string	"OSServiceId_ReadPeripheral8"
.LASF12:
	.string	"long long unsigned int"
.LASF7:
	.string	"__uint16_t"
.LASF9:
	.string	"__uint32_t"
.LASF69:
	.string	"OSServiceId_GetTaskState"
.LASF104:
	.string	"param1"
.LASF33:
	.string	"INTVEC"
.LASF108:
	.string	"Os_IntDisableAllCnt"
.LASF97:
	.string	"OSServiceId_ModifyPeripheral8"
.LASF6:
	.string	"short int"
.LASF30:
	.string	"HVEN0"
.LASF77:
	.string	"OSServiceId_StartScheduleTableRel"
.LASF82:
	.string	"OSServiceId_SyncScheduleTable"
.LASF40:
	.string	"EOIR"
.LASF53:
	.string	"OSServiceId_SetEvent"
.LASF14:
	.string	"uint8_t"
.LASF27:
	.string	"HVEN3"
.LASF21:
	.string	"uint8"
.LASF45:
	.string	"Os_IntCounterType"
.LASF75:
	.string	"OSServiceId_CheckObjectAccess"
.LASF87:
	.string	"OSServiceId_GetElapsedValue"
.LASF60:
	.string	"OSServiceId_SetAbsAlarm"
.LASF59:
	.string	"OSServiceId_SetRelAlarm"
.LASF81:
	.string	"OSServiceId_StartScheduleTableSynchron"
.LASF78:
	.string	"OSServiceId_StartScheduleTableAbs"
.LASF76:
	.string	"OSServiceId_CheckObjectOwnership"
.LASF11:
	.string	"long long int"
.LASF112:
	.string	"d:/ArcticStudio-21.0.0-win32.win32.x86_64/workspace/core-21.0.0/core/system/Os/osal/ppc/mpc5xxx/kernel/arch_offset.c"
.LASF49:
	.string	"OSServiceId_Schedule"
.LASF44:
	.string	"StatusType"
.LASF47:
	.string	"OSServiceId_TerminateTask"
.LASF111:
	.ascii	"GNU C 4.9.4 20160726 (Sat May 27 11:09:55 CDT 2017         b"
	.ascii	"uild.sh rev=gd8b6c20 s=F494 ELe200 -V release_gd8b6c20_bu"
	.string	"ild_Fed_ELe200_ML0) -msdata=none -mno-spe -msoft-float -mno-eabi -mmultiple -mstrict-align -mcpu=e200z3 -g -gdwarf-2 -gdwarf-2 -O0 -std=gnu99 -ffunction-sections -fno-strict-aliasing -fno-builtin -frounding-math -fsignaling-nans -fstrict-volatile-bitfields"
.LASF54:
	.string	"OSServiceId_ClearEvent"
.LASF66:
	.string	"OSServiceId_PostTaskHook"
.LASF95:
	.string	"OSServiceId_WritePeripheral16"
.LASF89:
	.string	"OSServiceId_AllowAccess"
.LASF4:
	.string	"__uint8_t"
.LASF50:
	.string	"OSServiceId_GetTaskID"
.LASF29:
	.string	"HVEN1"
.LASF94:
	.string	"OSServiceId_WritePeripheral8"
.LASF92:
	.string	"OSServiceId_ReadPeripheral16"
.LASF17:
	.string	"vuint8_t"
.LASF67:
	.string	"OSServiceId_StartupHook"
.LASF99:
	.string	"OSServiceId_ModifyPeripheral32"
.LASF5:
	.string	"unsigned char"
.LASF72:
	.string	"OSServiceId_CallTrustedFunction"
.LASF84:
	.string	"OSServiceId_SetScheduleTableAsync"
.LASF2:
	.string	"signed char"
.LASF74:
	.string	"OSServiceId_TaskMemoryAccess"
.LASF73:
	.string	"OSServiceId_CheckISRMemoryAccess"
.LASF16:
	.string	"uint32_t"
.LASF0:
	.string	"unsigned int"
.LASF15:
	.string	"uint16_t"
.LASF90:
	.string	"OSServiceId_GetApplicationState"
.LASF46:
	.string	"OSServiceId_ActivateTask"
.LASF93:
	.string	"OSServiceId_ReadPeripheral32"
.LASF36:
	.string	"INTC_reserved0"
.LASF37:
	.string	"INTC_reserved1"
.LASF39:
	.string	"INTC_reserved2"
.LASF41:
	.string	"INTC_reserved3"
.LASF43:
	.string	"INTC_reserved4"
.LASF28:
	.string	"HVEN2"
.LASF3:
	.string	"__int8_t"
.LASF22:
	.string	"char"
.LASF56:
	.string	"OSServiceId_WaitEvent"
.LASF1:
	.string	"long int"
.LASF8:
	.string	"short unsigned int"
.LASF34:
	.string	"PRC_SEL"
.LASF88:
	.string	"OSServiceId_TerminateApplication"
.LASF83:
	.string	"OSServiceId_GetScheduleTableStatus"
.LASF64:
	.string	"OSServiceId_ErrorHook"
.LASF31:
	.string	"MPROT"
.LASF19:
	.string	"vuint32_t"
.LASF102:
	.string	"OsError"
.LASF24:
	.string	"float"
.LASF18:
	.string	"vuint16_t"
.LASF23:
	.string	"uint32"
.LASF68:
	.string	"OSServiceId_ShutdownHook"
.LASF10:
	.string	"long unsigned int"
.LASF25:
	.string	"double"
.LASF80:
	.string	"OSServiceId_NextScheduleTable"
.LASF42:
	.string	"SSCIR"
.LASF113:
	.string	"oil_foo"
.LASF70:
	.string	"OSServiceId_GetApplicationID"
.LASF38:
	.string	"IACKR"
.LASF51:
	.string	"OSServiceId_GetResource"
.LASF35:
	.string	"SWTN"
.LASF57:
	.string	"OSServiceId_GetAlarmBase"
.LASF107:
	.string	"OsErrorType"
.LASF65:
	.string	"OSServiceId_PreTaskHook"
.LASF109:
	.string	"Os_IntSuspendAllCnt"
.LASF26:
	.string	"sizetype"
.LASF61:
	.string	"OSServiceId_CancelAlarm"
.LASF100:
	.string	"OsServiceIdType"
.LASF96:
	.string	"OSServiceId_WritePeripheral32"
.LASF110:
	.string	"os_error"
.LASF48:
	.string	"OSServiceId_ChainTask"
.LASF52:
	.string	"OSServiceId_ReleaseResource"
.LASF58:
	.string	"OSServiceId_GetAlarm"
.LASF98:
	.string	"OSServiceId_ModifyPeripheral16"
	.ident	"GCC: (GNU) 4.9.4 20160726 (Sat May 27 11:09:55 CDT 2017         build.sh rev=gd8b6c20 s=F494 ELe200 -V release_gd8b6c20_build_Fed_ELe200_ML0)"
