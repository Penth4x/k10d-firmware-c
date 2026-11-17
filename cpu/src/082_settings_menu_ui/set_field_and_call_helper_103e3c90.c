/* @k10d set_field_and_call_helper_103e3c90 @ 0x103e3c90
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a 16-bit value at offset 6 of the object and calls a helper with the object and
 *   zero.
 * summary:
 *   This virtual method (slot 6 of cls_10596eec) writes param_2 to the 4th word (offset
 *   0x06) of the object pointed to by param_1. It then calls
 *   check_mode_transition_validity, passing the object pointer and the constant 0. The role
 *   of the stored field and the helper function is not determinable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_103e3c90(uint32_t *param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 3) = param_2;
  check_mode_transition_validity(param_1,0);
  return;
}
