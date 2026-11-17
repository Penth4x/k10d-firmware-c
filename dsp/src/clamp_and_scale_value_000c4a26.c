/* @k10d clamp_and_scale_value_000c4a26 @ 0x000c4a26
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Reads a short value, clamps it to 0-125, scales by 16, and adds 0x7bc.
 * summary:
 *   Calls compute_clamped_offset_value_000d8a3a to get a short value. Adds 0x4c, clamps the
 *   result to the range [0, 0x7d] (125), multiplies by 0x10 (16), and adds 0x7bc. Returns
 *   the final 16-bit result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint clamp_and_scale_value_000c4a26(uint32_t param_x0)

{
  short sVar2;
  uint uVar1;
  
  sVar2 = compute_clamped_offset_value_000d8a3a(__frv_reg_unset(4));
  uVar1 = (uint)(short)(sVar2 + 0x4c);
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  if (0x7d < (int)uVar1) {
    uVar1 = 0x7d;
  }
  return (uVar1 & 0xffff) * 0x10 + 0x7bc & 0xffff;
}
