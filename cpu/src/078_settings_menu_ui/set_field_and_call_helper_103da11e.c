/* @k10d set_field_and_call_helper_103da11e @ 0x103da11e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 078_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a 16-bit value at offset 0xc of the object and calls a helper with the object
 *   and zero.
 * summary:
 *   This is virtual slot 6 of cls_105965fc. It writes param_2 into the third 32-bit word
 *   (offset 0xc) of the object pointed to by param_1, then invokes
 *   check_mode_transition_validity with the object pointer and the constant 0. The callee's
 *   role is unknown, so the overall subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_103da11e(uint32_t *param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 3) = param_2;
  check_mode_transition_validity(param_1,0);
  return;
}
