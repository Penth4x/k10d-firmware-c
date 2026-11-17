/* @k10d set_field_and_call_helper_103c4ba2 @ 0x103c4ba2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a 16-bit value at offset 0xc of the object and calls a helper with the object
 *   and zero.
 * summary:
 *   This is virtual slot 6 of cls_10595294. It writes param_2 into the object at offset 0xc
 *   (param_1 + 3 in 4-byte units). It then calls check_mode_transition_validity with the
 *   object pointer and the constant 0. The specific role of the field and the helper is not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_103c4ba2(uint32_t *param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 3) = param_2;
  check_mode_transition_validity(param_1,0);
  return;
}
