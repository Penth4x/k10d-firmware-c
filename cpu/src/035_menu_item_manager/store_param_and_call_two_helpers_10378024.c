/* @k10d store_param_and_call_two_helpers_10378024 @ 0x10378024
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_param_and_call_two_helpers_10378024(int param_1,uint32_t param_2)

{
  *(uint32_t *)(param_1 + 0x30) = param_2;
  register_menu_item_with_split_1037830c(__frv_reg_unset(4));
  register_six_menu_items_10378508(param_1);
  return;
}
