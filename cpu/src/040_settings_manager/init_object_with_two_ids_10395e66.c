/* @k10d init_object_with_two_ids_10395e66 @ 0x10395e66
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_ids_10395e66(void *param_1)

{
  call_three_helpers_on_object_1039b802((int)param_1 + 8);
  forward_params_via_helper_10394686(param_1,*(int **)((int)param_1 + 4),1);
  *(uint8_t *)((int)param_1 + 0xc4) = 1;
  return;
}
