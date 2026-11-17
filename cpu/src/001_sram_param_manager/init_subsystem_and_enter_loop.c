/* @k10d init_subsystem_and_enter_loop @ 0x100f0808
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Performs a multi-stage initialization sequence with error checks, sets a global
 *   pointer, and enters an infinite loop.
 * summary:
 *   The function calls two initial check functions (check_bit6_after_call,
 *   check_bit3_after_call). If they pass, it initializes a global pointer _DAT_800042c0 to
 *   0x84000000 and calls write_buffer_in_chunks_100f0a94. It then performs a second stage
 *   of initialization (check_sram_block_magic, write_three_config_bytes_and_call_helper,
 *   write_buffer_in_chunks_100f0a94, check_sram_block_magic). Upon success, it sets bit 0
 *   of DAT_5000010e, calls a series of setup functions (write_byte_and_call_helper_100f098c
 *   through empty_stub_100f0086), invokes a function pointer, and finally enters an
 *   infinite loop after calling write_byte_to_dat_50000106. The structure suggests a main
 *   initialization routine for a specific module or task.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t init_subsystem_and_enter_loop(void)

{
  int iVar1;
  
  iVar1 = check_bit6_after_call();
  if ((iVar1 != 0) && (iVar1 = check_bit3_after_call(), iVar1 != 0)) {
    initialize_subsystem_modules();
    empty_stub_100f0086();
    _DAT_800042c0/*SDRAM*/ = 0x84000000/*SDRAM*/;
    iVar1 = write_buffer_in_chunks_100f0a94(0x84000000/*SDRAM*/,0);
    if ((iVar1 != 0) && (iVar1 = check_sram_block_magic(0), iVar1 != 0)) {
      write_three_config_bytes_and_call_helper();
      iVar1 = write_buffer_in_chunks_100f0a94(_DAT_800042c0/*SDRAM*/,1);
      if ((iVar1 != 0) && (iVar1 = check_sram_block_magic(1), iVar1 != 0)) {
        DAT_5000010e = DAT_5000010e | 1;
        write_byte_and_call_helper_100f098c();
        write_byte_and_call_helper_100f09a6();
        wait_for_bit16_clear();
        set_flag_and_call_helper_100f09ba();
        write_e0_to_50000106_and_call_helper();
        copy_1096_bytes_to_sram();
        empty_stub_100f0086();
        (*(code *)&SUB_80000002)();
      }
      write_byte_to_dat_50000106();
      __halt();
    }
  }
  return 0;
}
