/* @k10d call_three_helpers_on_object_1039b802 @ 0x1039b802
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_helpers_on_object_1039b802(int param_1)

{
  call_helper_with_size_608(param_1,*(uint32_t *)(param_1 + 0xa8));
  dispatch_virtual_then_call_helper(param_1,*(uint32_t *)(param_1 + 0xa4),*(uint32_t *)(param_1 + 0xa8));
  process_twelve_struct_fields(param_1);
  return;
}
