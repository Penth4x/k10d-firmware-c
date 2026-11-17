/* @k10d set_field_and_call_helper_103eafbc @ 0x103eafbc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value into the object at offset 0xc and calls a helper with the object
 *   and zero.
 * summary:
 *   Stores param_2 into the third word (offset 0xc) of the object pointed to by param_1.
 *   Then invokes check_mode_transition_validity with the object pointer and a zero
 *   argument. The function is virtual slot 6 of cls_105978d4, but the specific camera role
 *   is not determinable from the pseudocode and the single unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_103eafbc(uint32_t *param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 3) = param_2;
  check_mode_transition_validity(param_1,0);
  return;
}
