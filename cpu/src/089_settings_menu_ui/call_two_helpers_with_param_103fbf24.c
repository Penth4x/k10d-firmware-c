/* @k10d call_two_helpers_with_param_103fbf24 @ 0x103fbf24
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions, passing the input pointer to the second one.
 * summary:
 *   The function first calls update_state_and_notify with no arguments, then calls
 *   register_nine_menu_items_103fd884 passing param_1. It is virtual slot 7 of
 *   cls_10597dcc. No side effects or data manipulation are visible beyond these two calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_param_103fbf24(cls_10597dcc *param_1, uint32_t param_2)
{
  update_state_and_notify((uint32_t *)(uint32_t)param_1,(uint32_t)param_2);
  register_nine_menu_items_103fd884((void *)param_1);
  return;
}
