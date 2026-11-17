/* @k10d call_helper_with_offset_eight_1039fd9e @ 0x1039fd9e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Passes param_1 plus 8 to a single helper function and returns.
 * summary:
 *   The function takes one integer argument, adds 8 to it, and forwards the result to
 *   invoke_virtual_slot_6_with_arg_3. No other operations, globals, or side effects are
 *   visible in the pseudocode. The role of the callee is unknown, so the behavior is
 *   described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_eight_1039fd9e(int param_1)

{
  invoke_virtual_slot_6_with_arg_3(param_1 + 8);
  return;
}
