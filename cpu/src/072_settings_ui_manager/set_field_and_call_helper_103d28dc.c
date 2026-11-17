/* @k10d set_field_and_call_helper_103d28dc @ 0x103d28dc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 072_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value into the object at offset 0xc and calls a helper with the object
 *   and zero.
 * summary:
 *   Stores param_2 into the third 32-bit word (offset 0xc) of the object pointed to by
 *   param_1. Then invokes check_mode_transition_validity with the object pointer and a zero
 *   argument. This is virtual slot 6 of cls_105960c0, a 0x24-byte object deriving from
 *   cls_105956e0. The role of the stored field and the helper is not determinable from the
 *   available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_103d28dc(uint32_t *param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 3) = param_2;
  check_mode_transition_validity(param_1,0);
  return;
}
