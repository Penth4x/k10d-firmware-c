/* @k10d register_and_select_menu_items_1038ad3c @ 0x1038ad3c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves two object pointers and invokes a virtual method on each, conditionally
 *   invoking it again on one based on a mode parameter.
 * summary:
 *   Calls menu_item_register twice with param_1 to obtain two object pointers (iVar1,
 *   iVar2). For each, it performs a virtual call to slot 2 (offset 0xc) with argument 0. If
 *   param_2 is 2, it calls the same virtual slot on iVar1 with argument 1; if param_2 is 1,
 *   it calls it on iVar2 with argument 1. The specific subsystem is unknown as the callee
 *   menu_item_register is not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_and_select_menu_items_1038ad3c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = menu_item_register(param_1);
  iVar2 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
  if (param_2 == 2) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
  }
  else if (param_2 == 1) {
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
  }
  return;
}
