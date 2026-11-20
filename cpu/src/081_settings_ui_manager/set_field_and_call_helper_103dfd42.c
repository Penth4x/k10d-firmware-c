/* @k10d set_field_and_call_helper_103dfd42 @ 0x103dfd42
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a 16-bit value at offset 0xc of the object and calls a helper with the object
 *   and zero.
 * summary:
 *   The function writes param_2 into the 4th word (offset 0xc) of the object pointed to by
 *   param_1. It then calls check_mode_transition_validity, passing the object pointer and
 *   the constant 0. The function is virtual slot 6 of class cls_10596b58. The role of
 *   check_mode_transition_validity is unknown, so the specific subsystem effect cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_103dfd42(cls_10596b58 *param_1,uint16_t param_2)

{
  param_1->field_0xc = param_2;
  check_mode_transition_validity(&param_1->field_0x0,0);
  return;
}
