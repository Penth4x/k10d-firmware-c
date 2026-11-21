; initialize_rtos_kernel @ 0x10008000 — hand-written, byte-faithful, symbolic call targets.
;
; Kernel boot trampoline (152 bytes in the original). It:
;   1. calls 7 peripheral-init routines (companion-SPI / DMA / ctrl-block bring-up),
;   2. zeroes an SDRAM region (word loop at 0x80014b1c, count 0x4697c),
;   3. runs a (zero-count) SDRAM byte-clear loop at 0x8005b498,
;   4. copies 0x10830 bytes of initialized data from ROM 0x10011fe4 -> SDRAM 0x800042ec,
;   5. sets SP (r15=0x8800), interrupt level mask (stilm #0x10) and TBR (sr0=0x10003c00),
;   6. TAIL-JUMPS to initialize_rtos_kernel_state_1000ea00 — it NEVER returns.
;
; Why hand-asm and not C (BESTIARY B-8, frame-pointer-destroying boot entry):
;   The original uses NO frame pointer and explicitly SETS the stack pointer, and it calls
;   harvested peripheral-init routines that use r14 as a scratch base and never restore it.
;   fcc recompiles this as an ENTER/leave framed function (514-line decompiler fantasy, 12 KB
;   object); the r14-clobbering callees then smash fcc's frame pointer, so the (nonexistent in
;   the original) `leave; ret` epilogue reads poison and jumps to 0x1f1f1f1f. A framed recompile
;   of a frame-pointer-free, SP-setting, non-returning boot trampoline is impossible to make
;   faithful — so it is transcribed verbatim here. Call/jump targets are emitted as symbols so
;   the recompiled callee tree stays in the execution path (the differential emulator still sees
;   divergences inside them); everything else is byte-exact.
;
; This file OVERRIDES src/000_rtos_kernel/initialize_rtos_kernel.c (the .c is kept as a decompiled
; reference and excluded from the C build by cpu/build.sh's gen/*.asm override rule).

	.SECTION	CODE, CODE, ALIGN=2
	.GLOBAL	_initialize_rtos_kernel
_initialize_rtos_kernel:
	; --- 7 peripheral-init calls (ldi:32 #target,r12 ; call @r12) ---
	LDI:32	#_init_spi_register_table_15, R12
	.DATA.B	0x97,0x1c
	LDI:32	#_init_dma_buffer_pointers, R12
	.DATA.B	0x97,0x1c
	LDI:32	#_init_dma_config_16, R12
	.DATA.B	0x97,0x1c
	LDI:32	#_init_mmio_ctrl_regs, R12
	.DATA.B	0x97,0x1c
	LDI:32	#_halt_loop_infinite, R12
	.DATA.B	0x97,0x1c
	LDI:32	#_init_dma_status_regs, R12
	.DATA.B	0x97,0x1c
	LDI:32	#_init_ctrl_block_17, R12
	.DATA.B	0x97,0x1c
	; --- SDRAM clear/copy + CPU-state setup (absolute addresses; branches are self-contained) ---
	.DATA.B	0xc0,0x00                     ; ldi:8  #0x0,r0
	.DATA.B	0x9f,0x81,0x00,0x04,0x69,0x7c ; ldi:32 #0x4697c,r1       (word-clear byte count)
	.DATA.B	0x9f,0x8d,0x80,0x01,0x4b,0x1c ; ldi:32 #0x80014b1c,r13   (clear base)
	.DATA.B	0xa8,0x01                     ; cmp    #0,r1
	.DATA.B	0xe2,0x03                     ; beq    +0x8 (skip loop)
	.DATA.B	0xa5,0xc1                     ; add2   #-4,r1
	.DATA.B	0xf3,0xfe                     ; bne:d  -0x2
	.DATA.B	0x10,0x10                     ;   st   r0,@(r13,r1)      (delay slot)
	.DATA.B	0xc0,0x01                     ; ldi:8  #0x0,r1          (byte-clear count = 0)
	.DATA.B	0x9f,0x8d,0x80,0x05,0xb4,0x98 ; ldi:32 #0x8005b498,r13
	.DATA.B	0xa8,0x01                     ; cmp    #0,r1
	.DATA.B	0xe2,0x03                     ; beq    +0x8
	.DATA.B	0xa5,0xf1                     ; add2   #-1,r1
	.DATA.B	0xf3,0xfe                     ; bne:d  -0x2
	.DATA.B	0x12,0x10                     ;   stb  r0,@(r13,r1)
	.DATA.B	0x9f,0x80,0x80,0x00,0x42,0xec ; ldi:32 #0x800042ec,r0    (copy dst)
	.DATA.B	0x9f,0x81,0x10,0x01,0x1f,0xe4 ; ldi:32 #0x10011fe4,r1    (copy src, ROM)
	.DATA.B	0x9f,0x8d,0x00,0x01,0x08,0x30 ; ldi:32 #0x10830,r13      (copy count)
	.DATA.B	0xa8,0x0d                     ; cmp    #0,r13
	.DATA.B	0xe2,0x04                     ; beq    +0xa
	.DATA.B	0xa5,0xfd                     ; add2   #-1,r13
	.DATA.B	0x02,0x1c                     ; ldub   @(r13,r1),r12
	.DATA.B	0xf3,0xfd                     ; bne:d  -0x4
	.DATA.B	0x12,0x0c                     ;   stb  r12,@(r13,r0)
	.DATA.B	0x9f,0x8f,0x00,0x00,0x88,0x00 ; ldi:32 #0x8800,r15       (set stack pointer)
	.DATA.B	0x87,0x10                     ; stilm  #0x10             (interrupt level mask)
	.DATA.B	0x9f,0x80,0x10,0x00,0x3c,0x00 ; ldi:32 #0x10003c00,r0
	.DATA.B	0xb3,0x00                     ; mov    r0,sr0            (TBR = 0x10003c00)
	; --- tail-jump into the kernel-state init (never returns) ---
	LDI:32	#_initialize_rtos_kernel_state_1000ea00, R0
	.DATA.B	0x97,0x00                     ; jmp @r0
	.END
