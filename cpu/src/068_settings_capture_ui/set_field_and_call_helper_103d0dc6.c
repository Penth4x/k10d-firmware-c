/* @k10d set_field_and_call_helper_103d0dc6 @ 0x103d0dc6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 068_settings_capture_ui (unit names are model-proposed)
 * purpose:
 *   Stores a 16-bit value at offset 6 of the object and calls a helper with the object and
 *   zero.
 * summary:
 *   The function writes param_2 into the 4th word (offset 0x06) of the object pointed to by
 *   param_1. It then calls check_mode_transition_validity, passing the object pointer and
 *   the constant 0. The function is virtual slot 6 of class cls_10595f08. The role of the
 *   stored field and the helper's behavior are not determinable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_103d0dc6(uint32_t *param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 3) = param_2;
  check_mode_transition_validity(param_1,0);
  return;
}
