/* @k10d invoke_virtual_slot_three_times @ 0x1037e8ae
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 3 of an object retrieved via menu_item_register, passing 0 three
 *   times and 1 once based on param_2.
 * summary:
 *   The function repeatedly calls menu_item_register(param_1) to obtain an object pointer.
 *   It then performs a virtual call to slot 3 (offset 0xc) of the vtable found at offset
 *   0xc of the object, passing the adjusted object pointer and an integer argument. The
 *   first three calls pass 0. A fourth call passes 1 if param_2 is 0, 1, or 2. The specific
 *   role of the virtual method is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_three_times(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  if (param_2 == 0) {
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else if (param_2 == 1) {
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else if (param_2 == 2) {
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
