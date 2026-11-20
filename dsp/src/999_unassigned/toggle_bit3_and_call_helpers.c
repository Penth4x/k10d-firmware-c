/* @k10d toggle_bit3_and_call_helpers @ 0x000f273a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Clears bit 3 of bRam00000000, calls four helper functions with fixed and passed
 *   arguments, then sets bit 3 again.
 * summary:
 *   Saves DAT_00000420, calls FUN_000f3046(0xc0), clears bit 3 of bRam00000000, calls
 *   write_two_bytes_to_mmio(3, param_1), sets bit 3 of bRam00000000, calls
 *   wait_and_write_byte_000f2912(0) and configure_two_parameter_state(1,1), restores
 *   DAT_00000420, and returns the result of wait_and_write_byte_000f2912. The bit-3
 *   clear/set pattern suggests a critical section or interrupt disable/enable around the
 *   helper calls, but the specific meaning of bRam00000000 is not established.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t toggle_bit3_and_call_helpers(uint16_t param_1)

{
  uint8_t uVar1;
  uint32_t uVar2;
  
  uVar1 = DAT_00000420;
  FUN_000f3046(0xc0);
  bRam00000000 = bRam00000000 & 0xf7;
  write_two_bytes_to_mmio(3,param_1);
  bRam00000000 = bRam00000000 | 8;
  uVar2 = wait_and_write_byte_000f2912(0);
  configure_two_parameter_state(1,1);
  DAT_00000420 = uVar1;
  return uVar2;
}
