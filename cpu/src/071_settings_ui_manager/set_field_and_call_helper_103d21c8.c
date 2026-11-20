/* @k10d set_field_and_call_helper_103d21c8 @ 0x103d21c8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 071_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a 16-bit value at offset 0xc of the object and calls a helper with the object
 *   and zero.
 * summary:
 *   This virtual method (slot 6 of cls_10596030) writes param_2 into the 4th word (offset
 *   0xc) of the object pointed to by param_1. It then calls check_mode_transition_validity,
 *   passing the object pointer and the constant 0. The callee's role is unknown, so the
 *   overall subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_103d21c8(cls_10596030 *param_1,uint16_t param_2)

{
  param_1->field_0xc = param_2;
  check_mode_transition_validity(&param_1->field_0x0,0);
  return;
}
