/* @k10d store_value_and_call_two_helpers @ 0x1037a612
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Writes param_2 to offset 0x30 of the object in param_1, then calls two helper
 *   functions.
 * summary:
 *   The function stores the second argument into the memory location at param_1 + 0x30. It
 *   then calls register_menu_item_with_split_1037a8fa with no arguments, followed by
 *   register_six_menu_items_1037aaf6 with param_1 as the argument. The specific roles of
 *   the helpers and the object are not determinable from the provided pseudocode and callee
 *   names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_and_call_two_helpers(int param_1,uint32_t param_2)

{
  *(uint32_t *)(param_1 + 0x30) = param_2;
  register_menu_item_with_split_1037a8fa(__frv_reg_unset(4));
  register_six_menu_items_1037aaf6(param_1);
  return;
}
