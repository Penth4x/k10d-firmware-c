/* @k10d set_field_and_register_menu_items_103ffa9e @ 0x103ffa9e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Stores param_2 into object offset 0x1c and, if it equals 0x184000e, calls virtual slot
 *   1 twice with argument 0.
 * summary:
 *   Writes the second argument into the 8th word of the object pointed to by param_1. When
 *   that value is 0x184000e, it retrieves a sub-object via menu_item_register(*param_1) and
 *   invokes virtual slot 1 (vtable offset 0xc) on it twice, passing 0 as the sole argument.
 *   The role of the 0x184000e constant and the sub-object is not determinable from the
 *   available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_register_menu_items_103ffa9e(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[7] = param_2;
  if (param_2 == 0x184000e) {
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  }
  return;
}
