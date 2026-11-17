/* @k10d dispatch_virtual_call_on_pair @ 0x10382d0e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on one or two objects retrieved via menu_item_register based
 *   on two flag parameters.
 * summary:
 *   The function calls menu_item_register twice with param_1 to obtain two object pointers
 *   (iVar1, iVar2). It then performs a Cfront-style virtual call on slot 2 (offset 0xc) of
 *   these objects. The specific object and arguments depend on param_2 and param_3: if
 *   param_2 is 0, it calls on both with argument 0; if param_3 is 0, it calls on the first
 *   with argument 1; otherwise, it calls on the second with no arguments. The role of
 *   menu_item_register and the objects is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_call_on_pair(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = menu_item_register(param_1);
  iVar2 = menu_item_register(param_1);
  if (param_2 == 0) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
  }
  else if (param_3 == 0) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
  }
  else {
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2);
  }
  return;
}
