/* @k10d set_field_and_call_helper_103d3042 @ 0x103d3042
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 073_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value into the object at offset 0xc and calls a helper with the object
 *   and zero.
 * summary:
 *   Stores param_2 into the 4th word (offset 0xc) of the object pointed to by param_1. Then
 *   calls check_mode_transition_validity with the object pointer and a zero argument. The
 *   function is virtual slot 6 of cls_10596154. The role of the stored field and the
 *   helper's effect are not determinable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_103d3042(uint32_t *param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 3) = param_2;
  check_mode_transition_validity(param_1,0);
  return;
}
