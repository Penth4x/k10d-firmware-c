/* @k10d clamp_and_call_helper @ 0x000c121a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clamps a 16-bit input to zero if it exceeds 0x7fff, then passes it to
 *   clamp_value_to_range_000d9ac0 with fixed arguments 0x80 and 0x3ff.
 * summary:
 *   The function takes a single parameter, checks if it is greater than 0x7fff, and if so
 *   sets it to 0. It then calls clamp_value_to_range_000d9ac0 with the truncated 16-bit
 *   value, 0x80, and 0x3ff. The role of clamp_value_to_range_000d9ac0 is unknown, so the
 *   specific effect of this call cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clamp_and_call_helper(uint param_1)

{
  uint32_t uVar1;
  
  if (0x7fff < param_1) {
    param_1 = 0;
  }
  uVar1 = clamp_value_to_range_000d9ac0((int)(short)param_1,0x80,0x3ff);
  return uVar1;
}
