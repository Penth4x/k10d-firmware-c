/* @k10d register_and_select_menu_items_1038c638 @ 0x1038c638
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on a series of objects retrieved via menu_item_register, passing
 *   0 or 1 based on parameters.
 * summary:
 *   The function repeatedly calls menu_item_register to obtain object pointers and invokes
 *   virtual slot 2 (offset 0xc) on each, initially passing 0. It then selects one of these
 *   objects based on param_2 and passes 1 to its slot 2, followed by a call to
 *   forward_two_args_to_helper_10493bf8. Additional objects are selected based on param_3
 *   and param_4 to toggle their slot 2 state between 0 and 1. The specific subsystem is not
 *   identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_and_select_menu_items_1038c638(int param_1,uint32_t param_2,int param_3,int param_4,uint8_t param_5)

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
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  void *pvVar29;
  
  iVar1 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  iVar2 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
  iVar3 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
  iVar4 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,0);
  iVar5 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,0);
  iVar6 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,0);
  iVar7 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar7 + 0xc) + 8) + iVar7,0);
  iVar8 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar8 + 0xc) + 8) + iVar8,0);
  iVar9 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar9 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar9 + 0xc) + 8) + iVar9,0);
  iVar10 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar10 + 0xc) + 8) + iVar10,0);
  iVar11 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar11 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar11 + 0xc) + 8) + iVar11,0);
  iVar12 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar12 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar12 + 0xc) + 8) + iVar12,0);
  iVar13 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar13 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar13 + 0xc) + 8) + iVar13,0);
  iVar14 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar14 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar14 + 0xc) + 8) + iVar14,0);
  iVar15 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar15 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar15 + 0xc) + 8) + iVar15,0);
  iVar16 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar16 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar16 + 0xc) + 8) + iVar16,0);
  iVar17 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar17 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar17 + 0xc) + 8) + iVar17,0);
  iVar18 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar18 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar18 + 0xc) + 8) + iVar18,0);
  iVar19 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar19 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar19 + 0xc) + 8) + iVar19,0);
  iVar20 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar20 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar20 + 0xc) + 8) + iVar20,0);
  iVar21 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar21 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar21 + 0xc) + 8) + iVar21,0);
  iVar22 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar22 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar22 + 0xc) + 8) + iVar22,0);
  iVar23 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar23 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar23 + 0xc) + 8) + iVar23,0);
  iVar24 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar24 + 0xc)))[1].fn)(iVar24 + *(short *)(*(int *)(iVar24 + 0xc) + 8),0);
  iVar25 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar25 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar25 + 0xc) + 8) + iVar25,0);
  iVar26 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar26 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar26 + 0xc) + 8) + iVar26,0);
  iVar27 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar27 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar27 + 0xc) + 8) + iVar27,0);
  iVar28 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar28 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar28 + 0xc) + 8) + iVar28,0);
  iVar24 = 0;
  switch(param_2) {
  case 0:
    iVar24 = 0;
    break;
  case 1:
    iVar24 = iVar1;
    break;
  case 2:
    iVar24 = iVar2;
    break;
  case 3:
    iVar24 = iVar3;
    break;
  case 4:
    iVar24 = iVar4;
    break;
  case 5:
    iVar24 = iVar5;
    break;
  case 6:
    iVar24 = iVar6;
    break;
  case 7:
    iVar24 = iVar7;
    break;
  case 8:
    iVar24 = iVar8;
    break;
  case 9:
    iVar24 = iVar9;
    break;
  case 10:
    iVar24 = iVar10;
    break;
  case 0xb:
    iVar24 = iVar11;
    break;
  case 0xc:
    iVar24 = iVar12;
    break;
  case 0xd:
    iVar24 = iVar13;
    break;
  case 0xe:
    iVar24 = iVar14;
    break;
  case 0xf:
    iVar24 = iVar15;
    break;
  case 0x10:
    iVar24 = iVar16;
    break;
  case 0x11:
    iVar24 = iVar17;
    break;
  case 0x12:
    iVar24 = iVar18;
    break;
  case 0x13:
    iVar24 = iVar19;
    break;
  case 0x14:
    iVar24 = iVar20;
    break;
  case 0x15:
    iVar24 = iVar21;
    break;
  case 0x16:
    iVar24 = iVar22;
    break;
  case 0x17:
    iVar24 = iVar23;
  }
  if (iVar24 != 0) {
    (((vtbl_entry*)(*(int *)(iVar24 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar24 + 0xc) + 8) + iVar24,1);
    forward_two_args_to_helper_10493bf8((int *)(iVar24),(uint8_t)(param_5));
  }
  if (param_3 == 1) {
    (((vtbl_entry*)(*(int *)(iVar25 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar25 + 0xc) + 8) + iVar25,1);
    (((vtbl_entry*)(*(int *)(iVar26 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar26 + 0xc) + 8) + iVar26,1);
  }
  else if (param_3 == 2) {
    (((vtbl_entry*)(*(int *)(iVar27 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar27 + 0xc) + 8) + iVar27,1);
    (((vtbl_entry*)(*(int *)(iVar28 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar28 + 0xc) + 8) + iVar28,1);
  }
  pvVar29 = (void *)menu_item_register(param_1);
  init_object_with_hash_and_flag(pvVar29,0);
  if (param_4 == 0) {
    (((vtbl_entry*)(*(int *)((int)pvVar29 + 0xc)))[1].fn)
              ((int)*(short *)(*(int *)((int)pvVar29 + 0xc) + 8) + (int)pvVar29,0);
  }
  else {
    (((vtbl_entry*)(*(int *)((int)pvVar29 + 0xc)))[1].fn)
              ((int)*(short *)(*(int *)((int)pvVar29 + 0xc) + 8) + (int)pvVar29,1);
  }
  return;
}
