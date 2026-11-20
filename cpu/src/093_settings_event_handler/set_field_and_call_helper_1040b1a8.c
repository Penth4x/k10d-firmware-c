/* @k10d set_field_and_call_helper_1040b1a8 @ 0x1040b1a8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 093_settings_event_handler (unit names are model-proposed)
 * purpose:
 *   Writes param_2 into the 8th word of the object and calls check_mode_transition_validity
 *   with the object and 0.
 * summary:
 *   This is virtual slot 6 of cls_10599b9c. It stores the second argument into the object
 *   at offset 0x18 (param_1 + 3 words) and then invokes check_mode_transition_validity
 *   passing the object pointer and the constant 0. The specific role of the stored field
 *   and the callee is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_1040b1a8(cls_10599b9c *param_1,uint16_t param_2)

{
  param_1->field_0xc = param_2;
  check_mode_transition_validity(&param_1->field_0x0,0);
  return;
}
