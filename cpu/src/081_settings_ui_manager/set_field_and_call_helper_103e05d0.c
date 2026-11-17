/* @k10d set_field_and_call_helper_103e05d0 @ 0x103e05d0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a 16-bit value at offset 0xc of the object and calls a helper with the object
 *   and zero.
 * summary:
 *   This is virtual slot 6 of cls_10596bf0. It writes param_2 into the object at offset 0xc
 *   (param_1 + 3 in 4-byte units) and then invokes check_mode_transition_validity with the
 *   object pointer and a zero argument. The role of the stored field and the helper is not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_103e05d0(uint32_t *param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 3) = param_2;
  check_mode_transition_validity(param_1,0);
  return;
}
