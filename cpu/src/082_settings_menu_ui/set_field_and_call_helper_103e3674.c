/* @k10d set_field_and_call_helper_103e3674 @ 0x103e3674
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Writes param_2 into the 6th word of the object and calls check_mode_transition_validity
 *   with the object and 0.
 * summary:
 *   This is virtual slot 6 of cls_10596e58. It stores the 16-bit param_2 at offset 0xc
 *   (param_1 + 3) of the object, then invokes check_mode_transition_validity passing the
 *   object pointer and the constant 0. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_103e3674(cls_10596e58 *param_1,uint16_t param_2)

{
  param_1->field_0xc = param_2;
  check_mode_transition_validity(&param_1->field_0x0,0);
  return;
}
