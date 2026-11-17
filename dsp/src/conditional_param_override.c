/* @k10d conditional_param_override @ 0x000c5e86
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns param_2, or the result of call_callee_with_fixed_args if bits 2 or 3 of
 *   DAT_0003c58a are set.
 * summary:
 *   Checks bits 2 and 3 of the global DAT_0003c58a. If either is set, it calls
 *   call_callee_with_fixed_args and returns that value, ignoring param_2. Otherwise, it
 *   returns param_2 directly. The role of DAT_0003c58a and call_callee_with_fixed_args is
 *   not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t conditional_param_override(uint32_t param_1,uint32_t param_2)

{
  if (((DAT_0003c58a & 4) != 0) || ((DAT_0003c58a & 8) != 0)) {
    param_2 = call_callee_with_fixed_args(param_1);
  }
  return param_2;
}
