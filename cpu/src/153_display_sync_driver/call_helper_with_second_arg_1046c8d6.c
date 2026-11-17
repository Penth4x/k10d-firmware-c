/* @k10d call_helper_with_second_arg_1046c8d6 @ 0x1046c8d6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * purpose:
 *   Passes the value at param_1+4 and the r5 register to apply_param_table_to_target and
 *   returns its result.
 * summary:
 *   A one-line wrapper that forwards two arguments (a dereferenced field from param_1 and
 *   the r5 register) to apply_param_table_to_target, returning the callee's return value
 *   unchanged. No other side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_second_arg_1046c8d6(int param_1)

{
  int iVar1;
  uint16_t *r5_in;
  
  iVar1 = apply_param_table_to_target(*(int *)(param_1 + 4),r5_in);
  return iVar1;
}
