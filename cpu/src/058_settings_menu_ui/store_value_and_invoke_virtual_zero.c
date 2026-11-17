/* @k10d store_value_and_invoke_virtual_zero @ 0x103c7e28
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 058_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores param_2 into object offset 0x1c and, if it equals 0x1030020, calls a virtual
 *   method with argument 0 twice.
 * summary:
 *   Writes param_2 to param_1[7]. When param_2 is 0x1030020, it calls menu_item_register
 *   with *param_1 to obtain an object pointer, then performs a virtual call (slot derived
 *   from offset 0xc) with argument 0 on that object, repeating the sequence twice. The
 *   specific subsystem role of the 0x1030020 value and the virtual method is not
 *   determinable from the provided pseudocode and unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_and_invoke_virtual_zero(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[7] = param_2;
  if (param_2 == 0x1030020) {
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  }
  return;
}
