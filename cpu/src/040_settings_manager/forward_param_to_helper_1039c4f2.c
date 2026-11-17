/* @k10d forward_param_to_helper_1039c4f2 @ 0x1039c4f2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes its single pointer argument to store_two_values_at_offsets and returns.
 * summary:
 *   A one-line wrapper that forwards param_1 to the callee store_two_values_at_offsets. No
 *   local state, no side effects beyond the callee's behavior. The callee's role is
 *   unknown, so the wrapper's subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_param_to_helper_1039c4f2(void *param_1)

{
  store_two_values_at_offsets(param_1);
  return;
}
