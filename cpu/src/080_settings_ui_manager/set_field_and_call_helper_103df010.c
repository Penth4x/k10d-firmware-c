/* @k10d set_field_and_call_helper_103df010 @ 0x103df010
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 080_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a 16-bit value into the object at offset 0xc and calls a helper with the object
 *   and zero.
 * summary:
 *   The function writes param_2 into the third 32-bit word (offset 0xc) of the object
 *   pointed to by param_1. It then calls check_mode_transition_validity, passing the object
 *   pointer and the constant 0. The callee's role is unknown, so the overall subsystem
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_103df010(uint32_t *param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 3) = param_2;
  check_mode_transition_validity(param_1,0);
  return;
}
