/* @k10d register_menu_items_by_type_103cb776 @ 0x103cb776
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 062_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a state code in the object and toggles four virtual slots based on the code
 *   value.
 * summary:
 *   Writes param_2 to offset 0x1c of the object. If the code matches a specific set of
 *   values (0x1050027, 0x1050032, 0x1050070, 0x105007e, 0x105001a), it calls virtual slot 1
 *   twice with 1 and twice with 0. If the code is 0x105005d, it calls slot 1 twice with 1,
 *   twice with 0, and twice with 1. The callee menu_item_register is used to retrieve the
 *   object pointer for the virtual calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_items_by_type_103cb776(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[7] = param_2;
  if ((((param_2 == 0x1050027) || (param_2 == 0x1050032)) || (param_2 == 0x1050070)) ||
     ((param_2 == 0x105007e || (param_2 == 0x105001a)))) {
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  }
  else if (param_2 == 0x105005d) {
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
