/* @k10d call_two_helpers_with_struct_fields_1039c416 @ 0x1039c416
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_struct_fields_1039c416(int param_1)

{
  call_helper_with_size_608(param_1,*(uint32_t *)(param_1 + 0x38));
  dispatch_virtual_then_call_helper(param_1,*(uint32_t *)(param_1 + 0x34),*(uint32_t *)(param_1 + 0x38));
  return;
}
