/* @k10d register_and_activate_menu_items_10403552 @ 0x10403552
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Stores a mode index in the object and invokes a virtual method on a sequence of sub-
 *   objects.
 * summary:
 *   The function writes param_2 to offset 0x28 of param_1. It then repeatedly calls
 *   menu_item_register to retrieve object pointers and invokes a virtual method (slot 2)
 *   with an argument of 0 on each. Finally, based on the value of param_2, it invokes the
 *   same virtual method with an argument of 1 on a specific subset of the previously
 *   retrieved objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_and_activate_menu_items_10403552(void *param_1,int param_2)

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
  int iVar10;
  int iVar11;
  int iVar12;
  
  *(int *)((int)param_1 + 0x28) = param_2;
  iVar1 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
  iVar3 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
  iVar4 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
  iVar4 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
  iVar4 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
  iVar4 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
  iVar4 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
  iVar4 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
  iVar4 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
  iVar4 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
  iVar4 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
  iVar4 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,0);
  iVar5 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,0);
  iVar6 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,0);
  iVar7 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar7 + 0xc) + 8) + iVar7,0);
  iVar8 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar8 + 0xc) + 8) + iVar8,0);
  iVar9 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar9 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar9 + 0xc) + 8) + iVar9,0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar10 + 0xc) + 8) + iVar10,0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(iVar10 + *(short *)(*(int *)(iVar10 + 0xc) + 8),0);
  iVar10 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar10 + 0xc) + 8) + iVar10,0);
  iVar11 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar11 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar11 + 0xc) + 8) + iVar11,0);
  iVar12 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar12 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar12 + 0xc) + 8) + iVar12,0);
  if (param_2 == 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    (((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,1);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,1);
    (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar7 + 0xc) + 8) + iVar7,1);
  }
  else if (param_2 == 1) {
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    (((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,1);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,1);
    (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar7 + 0xc) + 8) + iVar7,1);
    (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar8 + 0xc) + 8) + iVar8,1);
    (((vtbl_entry*)(*(int *)(iVar9 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar9 + 0xc) + 8) + iVar9,1);
  }
  else if (param_2 == 2) {
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    (((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,1);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,1);
    (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar7 + 0xc) + 8) + iVar7,1);
  }
  else if (param_2 == 3) {
    (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar10 + 0xc) + 8) + iVar10,1);
    (((vtbl_entry*)(*(int *)(iVar11 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar11 + 0xc) + 8) + iVar11,1);
    (((vtbl_entry*)(*(int *)(iVar12 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar12 + 0xc) + 8) + iVar12,1);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,1);
    (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar7 + 0xc) + 8) + iVar7,1);
  }
  return;
}
