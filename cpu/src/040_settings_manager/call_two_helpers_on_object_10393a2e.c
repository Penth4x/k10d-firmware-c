/* @k10d call_two_helpers_on_object_10393a2e @ 0x10393a2e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_object_10393a2e(void *param_1)

{
  call_two_helpers_with_struct_fields_10399a74((int)param_1 + 8);
  forward_params_via_helper_10394686(param_1,*(int **)((int)param_1 + 4),1);
  return;
}
