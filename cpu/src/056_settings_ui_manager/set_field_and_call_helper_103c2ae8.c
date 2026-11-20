/* @k10d set_field_and_call_helper_103c2ae8 @ 0x103c2ae8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a 16-bit value at offset 0xc of the object and calls a helper with the object
 *   and zero.
 * summary:
 *   This is virtual slot 6 of cls_1059514c. It writes param_2 into the 4th word (offset
 *   0xc) of the object pointed to by param_1, then invokes check_mode_transition_validity
 *   with the object pointer and a zero argument. The specific role of the stored field and
 *   the helper's behavior are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_103c2ae8(cls_1059514c *param_1,uint16_t param_2)

{
  param_1->field_0xc = param_2;
  check_mode_transition_validity(&param_1->field_0x0,0);
  return;
}
