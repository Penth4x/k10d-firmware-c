/* @k10d dispatch_virtual_slot_two_10382654 @ 0x10382654
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on a set of objects retrieved via menu_item_register, passing 0
 *   or 1 based on param_2.
 * summary:
 *   The function calls menu_item_register 18 times to obtain object pointers. It then
 *   branches on param_2: if 0, it calls virtual slot 2 on the first 15 objects (with
 *   specific 0/1 arguments), and if 1, it calls virtual slot 2 on all 18 objects with
 *   argument 0. The specific objects and the meaning of the virtual method are not
 *   identifiable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_two_10382654(int param_1,int param_2)

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
  
  iVar1 = menu_item_register(param_1);
  iVar2 = menu_item_register(param_1);
  iVar3 = menu_item_register(param_1);
  iVar4 = menu_item_register(param_1);
  iVar5 = menu_item_register(param_1);
  iVar6 = menu_item_register(param_1);
  iVar7 = menu_item_register(param_1);
  iVar8 = menu_item_register(param_1);
  iVar9 = menu_item_register(param_1);
  iVar10 = menu_item_register(param_1);
  iVar11 = menu_item_register(param_1);
  iVar12 = menu_item_register(param_1);
  iVar13 = menu_item_register(param_1);
  iVar14 = menu_item_register(param_1);
  iVar15 = menu_item_register(param_1);
  iVar16 = menu_item_register(param_1);
  iVar17 = menu_item_register(param_1);
  iVar18 = menu_item_register(param_1);
  if (param_2 == 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    (((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,1);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,0);
    (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar7 + 0xc) + 8) + iVar7,0);
    (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar8 + 0xc) + 8) + iVar8,0);
    (((vtbl_entry*)(*(int *)(iVar9 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar9 + 0xc) + 8) + iVar9,0);
    (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar10 + 0xc) + 8) + iVar10,0);
    (((vtbl_entry*)(*(int *)(iVar11 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar11 + 0xc) + 8) + iVar11,0);
    (((vtbl_entry*)(*(int *)(iVar12 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar12 + 0xc) + 8) + iVar12,0);
    (((vtbl_entry*)(*(int *)(iVar13 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar13 + 0xc) + 8) + iVar13,0);
    (((vtbl_entry*)(*(int *)(iVar14 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar14 + 0xc) + 8) + iVar14,1);
    (((vtbl_entry*)(*(int *)(iVar15 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar15 + 0xc) + 8) + iVar15,1);
  }
  else if (param_2 == 1) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,0);
    (((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,0);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,0);
    (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar7 + 0xc) + 8) + iVar7,0);
    (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar8 + 0xc) + 8) + iVar8,0);
    (((vtbl_entry*)(*(int *)(iVar9 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar9 + 0xc) + 8) + iVar9,0);
    (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar10 + 0xc) + 8) + iVar10,0);
    (((vtbl_entry*)(*(int *)(iVar11 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar11 + 0xc) + 8) + iVar11,0);
    (((vtbl_entry*)(*(int *)(iVar12 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar12 + 0xc) + 8) + iVar12,0);
    (((vtbl_entry*)(*(int *)(iVar13 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar13 + 0xc) + 8) + iVar13,0);
    (((vtbl_entry*)(*(int *)(iVar14 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar14 + 0xc) + 8) + iVar14,0);
    (((vtbl_entry*)(*(int *)(iVar15 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar15 + 0xc) + 8) + iVar15,0);
    (((vtbl_entry*)(*(int *)(iVar16 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar16 + 0xc) + 8) + iVar16,0);
    (((vtbl_entry*)(*(int *)(iVar17 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar17 + 0xc) + 8) + iVar17,0);
    (((vtbl_entry*)(*(int *)(iVar18 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar18 + 0xc) + 8) + iVar18,0);
  }
  return;
}
