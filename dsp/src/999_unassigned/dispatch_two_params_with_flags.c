/* @k10d dispatch_two_params_with_flags @ 0x000f27be
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Saves a flag, calls five helper functions with the two parameters and fixed constants,
 *   clears bit 3 of a RAM byte, and restores the flag.
 * summary:
 *   The function preserves the value of DAT_00000420, then invokes FUN_000f2978,
 *   FUN_000f3046(0xc0), write_two_bytes_to_mmio(2,param_1),
 *   wait_and_write_byte_000f2912(param_2), and configure_two_parameter_state(1,0). It
 *   clears bit 3 of bRam00000000 (mask 0xf7) and restores DAT_00000420 before returning 1.
 *   No verified callee names are available, so the specific subsystem is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_two_params_with_flags(uint32_t param_1,uint32_t param_2)

{
  uint8_t uVar1;
  
  uVar1 = DAT_00000420;
  FUN_000f2978();
  FUN_000f3046(0xc0);
  bRam00000000 = bRam00000000 & 0xf7;
  write_two_bytes_to_mmio(2,param_1);
  wait_and_write_byte_000f2912(param_2);
  configure_two_parameter_state(1,0);
  DAT_00000420 = uVar1;
  return 1;
}
