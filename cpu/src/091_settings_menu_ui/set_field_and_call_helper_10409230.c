/* @k10d set_field_and_call_helper_10409230 @ 0x10409230
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value into the object at offset 0xc and calls a helper with the object
 *   and zero.
 * summary:
 *   Stores param_2 into the 4th word (offset 0xc) of the object pointed to by param_1. Then
 *   invokes check_mode_transition_validity with the object pointer and a zero argument. The
 *   function is virtual slot 6 of cls_105999ec. The role of the stored field and the
 *   helper's behavior are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_10409230(cls_105999ec *param_1,uint16_t param_2)

{
  param_1->field_0xc = param_2;
  check_mode_transition_validity(&param_1->field_0x0,0);
  return;
}
