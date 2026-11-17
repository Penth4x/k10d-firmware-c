/* @k10d call_helper_on_offset_field_1039206e @ 0x1039206e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes the value at param_1+0xc to a single helper function.
 * summary:
 *   The function takes a single pointer-like argument, adds the offset 0xc, and forwards
 *   that value to init_object_with_seventeen_handles_10397862. No other operations, loops,
 *   or side effects are visible in the pseudocode. The role of the callee is unknown, so
 *   the behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_offset_field_1039206e(int param_1)

{
  init_object_with_seventeen_handles_10397862((void *)(param_1 + 0xc),__frv_reg_unset(5),(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  return;
}
