/* @k10d compute_shifted_byte_value @ 0x000c3144
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns a value derived from a byte at an offset in a global buffer, shifted and
 *   masked, under a flag and threshold condition.
 * summary:
 *   Checks if bit 1 of DAT_0003c126 is clear and if compute_signed_fixed_point_value()
 *   returns a value less than 0x141. If both conditions are met, it reads a byte from the
 *   global buffer s_0000000000000000_000f9c88 at index param_1 + 0x20, shifts it left by 7
 *   bits, passes the result to unsigned_divide, and returns the result shifted right by 4
 *   bits. Otherwise, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_shifted_byte_value(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (((DAT_0003c126 & 2) == 0) && (uVar1 = compute_signed_fixed_point_value(), uVar1 < 0x141)) {
    uVar2 = unsigned_divide((uint)(byte)s_0000000000000000_000f9c88[param_1 + 0x20] << 7, __frv_reg_unset(5));
    uVar2 = uVar2 >> 4;
  }
  return uVar2;
}
