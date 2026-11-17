/* @k10d call_two_helpers_with_param_103f8720 @ 0x103f8720
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions, passing the input pointer to the second one.
 * summary:
 *   The function first calls update_state_and_notify with no arguments, then calls
 *   register_nine_menu_items_103fa390 passing param_1. It is virtual slot 7 of
 *   cls_10597d1c. No side effects or data manipulation are visible beyond these two calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_param_103f8720(int *param_1)

{
  update_state_and_notify((uint32_t *)__frv_reg_unset(4),__frv_reg_unset(5));
  register_nine_menu_items_103fa390(param_1);
  return;
}
