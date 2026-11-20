/* @k10d set_field_and_call_helper_103dc8da @ 0x103dc8da
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 079_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a 16-bit value at offset 0xc of the object and calls a helper with the object
 *   and zero.
 * summary:
 *   This virtual method (slot 6 of cls_10596808) writes param_2 into the 4th word (offset
 *   0xc) of the object pointed to by param_1. It then calls check_mode_transition_validity,
 *   passing the object pointer and the constant 0. The role of the stored field and the
 *   helper's behavior are not determinable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_103dc8da(cls_10596808 *param_1,uint16_t param_2)

{
  param_1->field_0xc = param_2;
  check_mode_transition_validity(&param_1->field_0x0,0);
  return;
}
