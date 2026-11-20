/* @k10d register_and_select_menu_item_1038b0c8 @ 0x1038b0c8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method with argument 0 on three objects, then calls it with argument 1
 *   on the object selected by param_2.
 * summary:
 *   Retrieves three object pointers from param_1 via menu_item_register. Invokes virtual
 *   slot 2 (offset 0xc) on each object with argument 0. Based on param_2 (1, 2, or 3),
 *   invokes the same virtual slot on the corresponding object with argument 1. The specific
 *   role of the objects and the meaning of the 0/1 arguments are not determinable from the
 *   provided pseudocode and unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_and_select_menu_item_1038b0c8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = menu_item_register(param_1);
  iVar2 = menu_item_register(param_1);
  iVar3 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
  if (param_2 == 3) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
  }
  else if (param_2 == 2) {
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
  }
  else if (param_2 == 1) {
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  return;
}
