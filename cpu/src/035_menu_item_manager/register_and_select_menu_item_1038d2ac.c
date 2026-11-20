/* @k10d register_and_select_menu_item_1038d2ac @ 0x1038d2ac
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Resets four objects obtained from param_1, then activates the one indexed by param_2.
 * summary:
 *   Calls menu_item_register four times with param_1 to obtain four object pointers.
 *   Performs a virtual call (slot 2) with argument 0 on each of the four objects. Then,
 *   based on param_2 (0-3), performs a virtual call (slot 2) with argument 1 on the
 *   corresponding object. The specific role of the objects and the meaning of the 0/1
 *   arguments are not determinable from the provided pseudocode and unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_and_select_menu_item_1038d2ac(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = menu_item_register(param_1);
  iVar2 = menu_item_register(param_1);
  iVar3 = menu_item_register(param_1);
  iVar4 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,0);
  if (param_2 == 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
  }
  else if (param_2 == 1) {
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
  }
  else if (param_2 == 2) {
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 3) {
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
  }
  return;
}
