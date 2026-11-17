/* @k10d register_eight_menu_items_1038faee @ 0x1038faee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object derived from param_1 with a specific sequence of
 *   1 and 0 arguments.
 * summary:
 *   The function repeatedly calls menu_item_register(param_1) to obtain an object pointer.
 *   It then performs a virtual call (slot 2) on that object, passing the object (adjusted)
 *   and a sequence of arguments: 1, 0, 0, 1, 0, 0, 0, 0. Finally, it sets the value at
 *   offset 0x28 in the param_1 structure to 3. The specific meaning of the virtual method
 *   and the state change is not clear from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_eight_menu_items_1038faee(int param_1)

{
  int iVar1;
  
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  *(uint32_t *)(param_1 + 0x28) = 3;
  return;
}
