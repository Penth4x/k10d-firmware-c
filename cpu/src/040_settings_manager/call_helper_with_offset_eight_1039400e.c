/* @k10d call_helper_with_offset_eight_1039400e @ 0x1039400e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes param_1 plus 8 to a single helper function.
 * summary:
 *   The function takes one integer argument, adds 8 to it, and forwards the result to
 *   configure_context_with_two_commands. No other operations, side effects, or state
 *   changes are visible in the pseudocode. The role of the callee is unknown, so the camera
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_eight_1039400e(int param_1)

{
  configure_context_with_two_commands((void *)(param_1 + 8),__frv_reg_unset(5),(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  return;
}
