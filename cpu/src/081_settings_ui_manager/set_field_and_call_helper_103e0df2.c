/* @k10d set_field_and_call_helper_103e0df2 @ 0x103e0df2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a 16-bit value at offset 0xc of the object and calls a helper with the object
 *   and zero.
 * summary:
 *   This is virtual slot 6 of cls_10596c84. It writes param_2 into the third word (offset
 *   0xc) of the object pointed to by param_1, then invokes check_mode_transition_validity
 *   with the object pointer and the constant 0. The role of the stored field and the
 *   helper's behavior are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_103e0df2(uint32_t *param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 3) = param_2;
  check_mode_transition_validity(param_1,0);
  return;
}
