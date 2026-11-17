/* @k10d set_field_and_call_helper_10422ef4 @ 0x10422ef4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a 16-bit value into the object at offset 0xc and calls a helper with the object
 *   and zero.
 * summary:
 *   The function writes param_2 into the third 32-bit word (offset 0xc) of the object
 *   pointed to by param_1. It then calls check_mode_transition_validity with the object
 *   pointer and a zero argument. The role of the stored field and the helper's behavior are
 *   not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_10422ef4(uint32_t *param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 3) = param_2;
  check_mode_transition_validity(param_1,0);
  return;
}
