/* @k10d dispatch_virtual_calls_on_nine_objects @ 0x1037f7f2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves nine object pointers and invokes a virtual method on each, passing 0, then
 *   conditionally passes 1 to a subset based on param_2.
 * summary:
 *   The function calls menu_item_register nine times with param_1 to obtain object
 *   pointers. It then performs a virtual call (slot 2) on each object with argument 0.
 *   Depending on param_2, it performs a second virtual call with argument 1 on either the
 *   first, second, third, fourth, sixth, and seventh objects (if param_2 is 0) or the
 *   fifth, eighth, and ninth objects (if param_2 is 1). The specific camera subsystem is
 *   not identifiable from the provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_calls_on_nine_objects(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = menu_item_register(param_1);
  iVar2 = menu_item_register(param_1);
  iVar3 = menu_item_register(param_1);
  iVar4 = menu_item_register(param_1);
  iVar5 = menu_item_register(param_1);
  iVar6 = menu_item_register(param_1);
  iVar7 = menu_item_register(param_1);
  iVar8 = menu_item_register(param_1);
  iVar9 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,0);
  (((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,0);
  (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,0);
  (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar7 + 0xc) + 8) + iVar7,0);
  (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar8 + 0xc) + 8) + iVar8,0);
  (((vtbl_entry*)(*(int *)(iVar9 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar9 + 0xc) + 8) + iVar9,0);
  if (param_2 == 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,1);
    (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar7 + 0xc) + 8) + iVar7,1);
  }
  else if (param_2 == 1) {
    (((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,1);
    (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar8 + 0xc) + 8) + iVar8,1);
    (((vtbl_entry*)(*(int *)(iVar9 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar9 + 0xc) + 8) + iVar9,1);
  }
  return;
}
