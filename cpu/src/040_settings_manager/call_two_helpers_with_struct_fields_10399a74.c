/* @k10d call_two_helpers_with_struct_fields_10399a74 @ 0x10399a74
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_struct_fields_10399a74(int param_1)

{
  call_helper_with_size_608(param_1,*(uint32_t *)(param_1 + 0x28));
  dispatch_virtual_then_call_helper(param_1,*(uint32_t *)(param_1 + 0x24),*(uint32_t *)(param_1 + 0x28));
  return;
}
