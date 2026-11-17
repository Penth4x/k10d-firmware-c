/* @k10d conditional_override_param2 @ 0x000c5e66
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns param_2, or the result of FUN_000c66b0 if bits 6 or 7 of DAT_0003c58a are set.
 * summary:
 *   Checks bits 0x40 and 0x80 of the global DAT_0003c58a. If either is set, it calls
 *   FUN_000c66b0 and returns that value, ignoring param_2. Otherwise it returns param_2
 *   unchanged. The role of DAT_0003c58a and FUN_000c66b0 is not determinable from the given
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t conditional_override_param2(uint32_t param_1,uint32_t param_2)

{
  if (((DAT_0003c58a & 0x40) != 0) || ((DAT_0003c58a & 0x80) != 0)) {
    param_2 = FUN_000c66b0(param_1);
  }
  return param_2;
}
