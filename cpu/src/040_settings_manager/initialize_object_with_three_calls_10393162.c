/* @k10d initialize_object_with_three_calls_10393162 @ 0x10393162
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_with_three_calls_10393162(void *param_1)

{
  init_object_with_three_calls_103934b2((void *)(uint32_t)param_1);
  call_three_object_helpers((int)param_1 + 8);
  forward_params_via_helper_10394686(param_1,*(int **)((int)param_1 + 4),1);
  return;
}
