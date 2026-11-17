/* @k10d call_helper_with_zero_1039c4e2 @ 0x1039c4e2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Forwards its single argument to return_one_constant_1049229a with a second argument of
 *   0.
 * summary:
 *   A one-line wrapper that calls return_one_constant_1049229a(param_1, 0) and returns. No
 *   local state is modified and no other side effects are visible. The role of
 *   return_one_constant_1049229a is unknown, so the subsystem cannot be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_zero_1039c4e2(uint32_t param_1)

{
  return_one_constant_1049229a(param_1,0);
  return;
}
