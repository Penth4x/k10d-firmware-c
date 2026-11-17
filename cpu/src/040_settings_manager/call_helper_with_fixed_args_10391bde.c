/* @k10d call_helper_with_fixed_args_10391bde @ 0x10391bde
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls update_three_field_struct with param_1 and fixed arguments 0, 0x2e, 0.
 * summary:
 *   A one-line wrapper that forwards its single pointer argument to
 *   update_three_field_struct along with three constant values (0, 0x2e, 0). No other
 *   logic, state changes, or side effects are visible in this function itself. The role of
 *   update_three_field_struct is unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10391bde(uint32_t *param_1)

{
  update_three_field_struct(param_1,0,0x2e,0);
  return;
}
