/* @k10d call_single_helper_10395e3e @ 0x10395e3e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single unnamed helper function and returns.
 * summary:
 *   This function is a one-line wrapper that calls register_four_callbacks. It has no other
 *   logic, arguments, or side effects visible in the pseudocode. The caller is
 *   dispatch_event_by_type_and_code_10395c48.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_10395e3e(uint32_t param_x0)

{
  register_four_callbacks(__frv_reg_unset(4));
  return;
}
