/* @k10d call_helper_with_offset8_param @ 0x1047680a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes the 4-byte value at param_1+8 to clamp_counter_to_100_999 and returns its
 *   result.
 * summary:
 *   A one-line thunk that dereferences the second word of a struct-like object (offset 8)
 *   and forwards it as the sole argument to clamp_counter_to_100_999, returning that
 *   callee's value unchanged. No other side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_offset8_param(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = clamp_counter_to_100_999(*(uint32_t *)(param_1 + 8));
  return uVar1;
}
