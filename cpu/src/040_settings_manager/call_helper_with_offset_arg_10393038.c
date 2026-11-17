/* @k10d call_helper_with_offset_arg_10393038 @ 0x10393038
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Forwards its two arguments to store_value_at_offset_0x30_10398be6, adding 8 to the
 *   first argument.
 * summary:
 *   A one-line wrapper that calls store_value_at_offset_0x30_10398be6 with (param_1 + 8,
 *   param_2). No other logic, no globals touched. The role of
 *   store_value_at_offset_0x30_10398be6 is unknown, so the subsystem cannot be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_arg_10393038(int param_1,uint32_t param_2)

{
  store_value_at_offset_0x30_10398be6(param_1 + 8,param_2);
  return;
}
