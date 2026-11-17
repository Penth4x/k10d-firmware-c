/* @k10d set_field_and_call_helper_103e1aca @ 0x103e1aca
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value into an object field and calls a helper with the object and zero.
 * summary:
 *   Stores param_2 into the 4th 32-bit word (offset 0xc) of the object pointed to by
 *   param_1. Then calls check_mode_transition_validity with the object pointer and the
 *   constant 0. The function is virtual slot 6 of cls_10596d20. The role of the field and
 *   the helper is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_103e1aca(uint32_t *param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 3) = param_2;
  check_mode_transition_validity(param_1,0);
  return;
}
