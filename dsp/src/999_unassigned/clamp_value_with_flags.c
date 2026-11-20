/* @k10d clamp_value_with_flags @ 0x000f49ca
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Returns a clamped or adjusted value based on global flag and bound checks.
 * summary:
 *   Checks bit 4 of DAT_0003c4d4. If clear, it branches on DAT_0003c3ac and compares
 *   param_1 against bounds in DAT_0003c575/576, setting bit 2 of DAT_0003c4d0 and calling
 *   clamp_value_to_range_000f4a34 or clamp_index_with_overflow_flag. If bit 4 is set, it
 *   subtracts 0x44 from param_1 and clamps the result to 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int clamp_value_with_flags(int param_1)

{
  int iVar1;
  
  if ((DAT_0003c4d4 & 0x10) == 0) {
    if (DAT_0003c3ac == '\0') {
      iVar1 = clamp_value_to_range_000f4a34(__frv_reg_unset(4));
    }
    else if (((DAT_0003c575 < DAT_0003c576) && (param_1 <= (int)(uint)DAT_0003c576)) ||
            ((DAT_0003c576 <= DAT_0003c575 && (param_1 <= (int)(uint)DAT_0003c575)))) {
      DAT_0003c4d0 = DAT_0003c4d0 | 4;
      iVar1 = clamp_value_to_range_000f4a34(DAT_0003c575);
    }
    else {
      iVar1 = clamp_index_with_overflow_flag(__frv_reg_unset(4));
    }
  }
  else {
    iVar1 = param_1 + -0x44;
    if (param_1 < 0x44) {
      iVar1 = 0;
    }
  }
  return iVar1;
}
