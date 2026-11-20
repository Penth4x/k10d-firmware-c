/* @k10d set_field_and_call_helper_103d0344 @ 0x103d0344
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 066_settings_menu (unit names are model-proposed)
 * purpose:
 *   Stores a 16-bit value at offset 6 of the object and calls a helper with the object and
 *   zero.
 * summary:
 *   The function writes param_2 into the third word (offset 0x06) of the object pointed to
 *   by param_1. It then calls check_mode_transition_validity, passing the object pointer
 *   and the constant 0. The callee's role is unknown, so the overall behavior is limited to
 *   this field update and single helper invocation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_103d0344(cls_10595e74 *param_1,uint16_t param_2)

{
  param_1->field_0xc = param_2;
  check_mode_transition_validity(&param_1->field_0x0,0);
  return;
}
