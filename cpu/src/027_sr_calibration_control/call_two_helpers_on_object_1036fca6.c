/* @k10d call_two_helpers_on_object_1036fca6 @ 0x1036fca6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 027_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions, passing a pointer offset by 0x30 to the first and the
 *   base pointer to the second.
 * summary:
 *   The function takes a single pointer argument. It calls apply_mode_state_to_object_group
 *   with the argument plus 0x30 and the constant 3. It then calls
 *   update_object_state_and_data with the original argument. No other operations are
 *   performed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_object_1036fca6(void *param_1)

{
  apply_mode_state_to_object_group((int)param_1 + 0x30,3);
  update_object_state_and_data((int)param_1);
  return;
}
