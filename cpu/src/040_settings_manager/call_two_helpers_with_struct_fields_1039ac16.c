/* @k10d call_two_helpers_with_struct_fields_1039ac16 @ 0x1039ac16
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_struct_fields_1039ac16(int param_1)

{
  call_helper_with_size_608(param_1,*(uint32_t *)(param_1 + 0x68));
  dispatch_virtual_then_call_helper(param_1,*(uint32_t *)(param_1 + 100),*(uint32_t *)(param_1 + 0x68));
  return;
}
