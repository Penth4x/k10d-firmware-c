/* @k10d register_menu_items_by_type_103c6da8 @ 0x103c6da8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a state code into the object and conditionally invokes a virtual method with
 *   alternating 0/1 arguments.
 * summary:
 *   The function writes param_2 to offset 0x18 (index 6) of the object pointed to by
 *   param_1. It checks if param_2 matches one of four specific values (0x10d0016,
 *   0x10d001b, 0x10d0020, 0x10d0025) or the value 0x10d002a. If it matches the first group,
 *   it calls a virtual method (slot 2) via menu_item_register three times with arguments 0,
 *   1, 0. If it matches 0x10d002a, it calls the same virtual method three times with
 *   arguments 1, 0, 1. The callee menu_item_register is not named, and the specific camera
 *   subsystem is not identifiable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_items_by_type_103c6da8(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[6] = param_2;
  if ((((param_2 == 0x10d0016) || (param_2 == 0x10d001b)) || (param_2 == 0x10d0020)) ||
     (param_2 == 0x10d0025)) {
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  }
  else if (param_2 == 0x10d002a) {
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
