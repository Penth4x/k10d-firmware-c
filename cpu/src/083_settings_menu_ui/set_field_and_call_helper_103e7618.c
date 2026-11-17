/* @k10d set_field_and_call_helper_103e7618 @ 0x103e7618
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a 16-bit value at offset 0xc of the object and calls a helper with the object
 *   and zero.
 * summary:
 *   This virtual method (slot 6 of cls_105972a8) writes param_2 into the 4th word (offset
 *   0xc) of the object pointed to by param_1. It then calls check_mode_transition_validity,
 *   passing the object pointer and the constant 0. The function returns void.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_103e7618(uint32_t *param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 3) = param_2;
  check_mode_transition_validity(param_1,0);
  return;
}
