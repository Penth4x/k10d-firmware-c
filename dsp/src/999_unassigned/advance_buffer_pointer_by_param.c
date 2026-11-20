/* @k10d advance_buffer_pointer_by_param @ 0x000c8324
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Advances a 16-bit pointer by param_1*4 bytes and passes it to
 *   clamp_value_to_range_000d9ac0 with a flag-dependent third argument.
 * summary:
 *   Reads a 16-bit value from DAT_0003c488, adds param_1*4 to it, and calls
 *   clamp_value_to_range_000d9ac0 with the result, 0x20, and either 0x40 or 0x48 depending
 *   on bit 7 of DAT_0003f324. The return value of clamp_value_to_range_000d9ac0 is stored
 *   back into DAT_0003c488. The role of clamp_value_to_range_000d9ac0 and the two DAT
 *   globals is not established from the given information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void advance_buffer_pointer_by_param(short param_1)

{
  uint32_t uVar1;
  
  if ((DAT_0003f324 & 0x80) == 0) {
    uVar1 = 0x40;
  }
  else {
    uVar1 = 0x48;
  }
  DAT_0003c488 = clamp_value_to_range_000d9ac0((int)(short)(param_1 * 4 + (ushort)DAT_0003c488),0x20,uVar1);
  return;
}
