/* @k10d call_helper_with_zero_arg_1047e48c @ 0x1047e48c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls find_byte_one_in_buffer with the first argument and a second argument of 0,
 *   returning its result.
 * summary:
 *   This is a thin wrapper that forwards param_1 to find_byte_one_in_buffer along with a
 *   constant zero as the second parameter. It returns the value produced by the callee
 *   directly in r4. No other side effects or state modifications are visible in this
 *   function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_zero_arg_1047e48c(int *param_1)

{
  uint32_t uVar1;
  
  uVar1 = find_byte_one_in_buffer(param_1,0);
  return uVar1;
}
