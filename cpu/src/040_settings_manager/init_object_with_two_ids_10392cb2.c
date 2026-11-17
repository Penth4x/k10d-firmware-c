/* @k10d init_object_with_two_ids_10392cb2 @ 0x10392cb2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_ids_10392cb2(void *param_1)

{
  call_two_helpers_with_struct_fields_10398594((int)param_1 + 0xc);
  forward_params_via_helper_10394686(param_1,*(int **)((int)param_1 + 8),1);
  *(uint8_t *)((int)param_1 + 0x80) = 1;
  return;
}
