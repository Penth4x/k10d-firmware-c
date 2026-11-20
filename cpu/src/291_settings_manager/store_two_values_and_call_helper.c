/* @k10d store_two_values_and_call_helper @ 0x10531b22
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 291_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_two_values_and_call_helper(cls_1061e22c *param_1,uint32_t param_2,uint32_t param_3)

{
  param_1->field_0xc = param_2;
  param_1->field_0x10 = param_3;
  traverse_tree_with_virtual_handlers((uint32_t)&param_1->field_0x4,*(uint32_t *)(param_1->field_0xc + 4),0,0);
  return;
}
