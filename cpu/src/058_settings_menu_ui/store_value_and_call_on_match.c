/* @k10d store_value_and_call_on_match @ 0x103c7e12
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 058_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Writes param_2 to offset 0x18 of the object and calls a helper if the value equals
 *   0x1030020.
 * summary:
 *   This virtual method (slot 9 of cls_10595788) stores the second argument into the object
 *   at offset 0x18. If the stored value is exactly 0x1030020, it invokes
 *   dispatch_two_virtual_commands_103c801e. The specific meaning of the constant 0x1030020
 *   and the role of the helper are not determinable from the provided pseudocode and callee
 *   list.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_and_call_on_match(cls_10595788 *param_1,int param_2)

{
  param_1->field_0x18 = param_2;
  if (param_2 == 0x1030020) {
    dispatch_two_virtual_commands_103c801e((int *)(uint32_t)param_1);
  }
  return;
}
