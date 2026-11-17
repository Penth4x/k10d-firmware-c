/* @k10d clamp_shifted_value_to_16_bits @ 0x000ce6a6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Shifts input left by 8 bits, calls a helper, and clamps the result to 0xffff.
 * summary:
 *   The function takes param_1, left-shifts it by 8 bits, and passes the result to
 *   unsigned_divide. The return value from that callee is then clamped to a maximum of
 *   0xffff (65535) before being returned. The role of unsigned_divide is unknown, so the
 *   specific domain meaning of this operation cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint clamp_shifted_value_to_16_bits(int param_1)

{
  uint uVar1;
  
  uVar1 = unsigned_divide(param_1 << 8, __frv_reg_unset(5));
  if (0xffff < uVar1) {
    uVar1 = 0xffff;
  }
  return uVar1;
}
