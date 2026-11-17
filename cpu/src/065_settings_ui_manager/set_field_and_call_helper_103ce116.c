/* @k10d set_field_and_call_helper_103ce116 @ 0x103ce116
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value into offset 0xc of the object and calls a helper with the object
 *   and zero.
 * summary:
 *   Stores param_2 into the 4th word (offset 0xc) of the object pointed to by param_1. Then
 *   invokes check_mode_transition_validity with the object pointer and a zero argument. The
 *   function is virtual slot 6 of cls_10595c20, but the specific camera subsystem role is
 *   not determinable from the pseudocode and the single unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_103ce116(uint32_t *param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 3) = param_2;
  check_mode_transition_validity(param_1,0);
  return;
}
