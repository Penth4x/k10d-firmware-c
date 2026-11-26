/* @k10d call_helper_with_offset8_value_10476712 @ 0x10476712
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes the 32-bit value at param_1+8 to a single helper function.
 * summary:
 *   The function dereferences the field at offset 8 of the object pointed to by param_1 and
 *   passes it as the sole argument to poll_flag_until_timeout. No other operations, side
 *   effects, or state modifications are visible in the pseudocode. The role of the callee
 *   and the object field are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset8_value_10476712(int param_1)

{
  poll_flag_until_timeout(*(uint32_t *)(param_1 + 8),__frv_reg_unset(5),(int *)__frv_reg_unset(6));
  return;
}
