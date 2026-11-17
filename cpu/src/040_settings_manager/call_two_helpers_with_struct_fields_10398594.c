/* @k10d call_two_helpers_with_struct_fields_10398594 @ 0x10398594
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_struct_fields_10398594(int param_1)

{
  call_helper_with_size_608(param_1,*(uint32_t *)(param_1 + 0x58));
  dispatch_virtual_then_call_helper(param_1,*(uint32_t *)(param_1 + 0x54),*(uint32_t *)(param_1 + 0x58));
  return;
}
