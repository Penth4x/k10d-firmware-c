/* @k10d process_four_struct_fields @ 0x1039bee4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_four_struct_fields(int param_1)

{
  call_helper_with_size_608(param_1,*(uint32_t *)(param_1 + 0x5c));
  dispatch_virtual_then_call_helper(param_1,*(uint32_t *)(param_1 + 0x58),*(uint32_t *)(param_1 + 0x5c));
  call_helper_with_size_608(param_1,*(uint32_t *)(param_1 + 0x54));
  dispatch_virtual_then_call_helper(param_1,*(uint32_t *)(param_1 + 0x50),*(uint32_t *)(param_1 + 0x54));
  return;
}
