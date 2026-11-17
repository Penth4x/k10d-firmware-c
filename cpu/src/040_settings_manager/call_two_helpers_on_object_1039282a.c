/* @k10d call_two_helpers_on_object_1039282a @ 0x1039282a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_object_1039282a(void *param_1)

{
  call_two_helpers_with_struct_fields_10397f80((int)param_1 + 8);
  forward_params_via_helper_10394686(param_1,*(int **)((int)param_1 + 4),1);
  return;
}
