/* @k10d store_param_and_call_two_helpers_10376060 @ 0x10376060
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_param_and_call_two_helpers_10376060(cls_10558568 *param_1,uint32_t param_2)

{
  param_1->field_0x30 = param_2;
  register_menu_item_with_split_10376348(__frv_reg_unset(4));
  register_six_menu_items_10376544((int)(param_1));
  return;
}
