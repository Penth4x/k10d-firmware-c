/* @k10d store_two_values_and_call_helper @ 0x10531b22
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 291_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_two_values_and_call_helper(int param_1,uint32_t param_2,uint32_t param_3)

{
  *(uint32_t *)(param_1 + 0xc) = param_2;
  *(uint32_t *)(param_1 + 0x10) = param_3;
  traverse_tree_with_virtual_handlers(param_1 + 4,*(uint32_t *)(*(int *)(param_1 + 0xc) + 4),0,0);
  return;
}
