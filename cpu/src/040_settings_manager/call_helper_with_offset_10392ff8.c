/* @k10d call_helper_with_offset_10392ff8 @ 0x10392ff8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls store_value_at_offset_0x28_10398bce with param_1+8 and param_2.
 * summary:
 *   A one-line wrapper that forwards its two arguments to
 *   store_value_at_offset_0x28_10398bce, adding 8 to the first argument before the call. No
 *   other operations or side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_10392ff8(int param_1,uint32_t param_2)

{
  store_value_at_offset_0x28_10398bce(param_1 + 8,param_2);
  return;
}
