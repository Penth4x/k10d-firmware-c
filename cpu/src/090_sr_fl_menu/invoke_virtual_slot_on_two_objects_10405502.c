/* @k10d invoke_virtual_slot_on_two_objects_10405502 @ 0x10405502
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 2 on two objects returned by menu_item_register, passing 0 then
 *   conditionally 1.
 * summary:
 *   Retrieves two object pointers via menu_item_register(param_1). For each, it
 *   dereferences the vtable pointer at offset 0xc, reads the this-adjustment short at
 *   offset 8, and invokes virtual slot 2 (offset 0xc in the vtable) with argument 0. If
 *   param_2 is 0, it invokes the same slot on the second object with argument 1; if param_2
 *   is 1, it does so on the first object. The specific role of the objects and the meaning
 *   of the 0/1 arguments are not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_two_objects_10405502(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = menu_item_register(param_1);
  iVar2 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
  if (param_2 == 0) {
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
  }
  else if (param_2 == 1) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
  }
  return;
}
