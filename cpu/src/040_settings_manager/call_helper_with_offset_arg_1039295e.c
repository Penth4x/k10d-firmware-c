/* @k10d call_helper_with_offset_arg_1039295e @ 0x1039295e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes param_1 plus 0xc to a single helper function and returns.
 * summary:
 *   The function takes one integer argument, adds 0xc to it, and forwards the result to
 *   forward_param_to_helper_1039c4f2. No other operations, globals, or side effects are
 *   visible in the pseudocode. The role of the callee is unknown, so the wrapper's behavior
 *   is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_arg_1039295e(int param_1)

{
  forward_param_to_helper_1039c4f2((void *)(param_1 + 0xc));
  return;
}
