/* @k10d set_field_and_call_helper_103f1ee0 @ 0x103f1ee0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 087_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a 16-bit value at offset 6 of the object and calls a helper with the object and
 *   zero.
 * summary:
 *   This virtual method (slot 6 of cls_10597bf0) writes param_2 into the third word (offset
 *   0x06) of the object pointed to by param_1. It then calls
 *   check_mode_transition_validity, passing the object pointer and the constant 0. The
 *   function returns void.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_103f1ee0(uint32_t *param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 3) = param_2;
  check_mode_transition_validity(param_1,0);
  return;
}
