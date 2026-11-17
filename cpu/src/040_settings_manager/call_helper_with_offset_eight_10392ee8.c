/* @k10d call_helper_with_offset_eight_10392ee8 @ 0x10392ee8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes param_1 plus 8 to a single helper function and returns.
 * summary:
 *   The function takes one integer argument, adds 8 to it, and forwards the result to
 *   configure_sensor_readout_params_1039877e. No other operations, globals, or side effects
 *   are visible in the pseudocode. The role of the callee is unknown, so the behavior is
 *   described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_eight_10392ee8(int param_1)

{
  configure_sensor_readout_params_1039877e((void *)(param_1 + 8),__frv_reg_unset(5),(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  return;
}
