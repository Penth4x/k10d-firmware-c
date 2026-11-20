/* @k10d apply_mode_state_to_object_group @ 0x1038d7d2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on a subset of 22 objects retrieved from a container, passing
 *   a mode-dependent boolean flag.
 * summary:
 *   The function calls menu_item_register 22 times with param_1 to retrieve object
 *   pointers. It then branches on param_2 (0-3) to call virtual slot 2 on specific objects,
 *   passing either 1 or 0 as the second argument. The specific objects and flags selected
 *   vary by mode, but the semantic meaning of the virtual call is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_mode_state_to_object_group(int param_1,int param_2)

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
  iVar19 = menu_item_register(param_1);
  iVar20 = menu_item_register(param_1);
  iVar21 = menu_item_register(param_1);
  menu_item_register(param_1);
  if (param_2 == 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
    (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar7 + 0xc) + 8) + iVar7,1);
    (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar8 + 0xc) + 8) + iVar8,1);
    (((vtbl_entry*)(*(int *)(iVar9 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar9 + 0xc) + 8) + iVar9,1);
    (((vtbl_entry*)(*(int *)(iVar13 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar13 + 0xc) + 8) + iVar13,0);
    (((vtbl_entry*)(*(int *)(iVar15 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar15 + 0xc) + 8) + iVar15,1);
    (((vtbl_entry*)(*(int *)(iVar16 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar16 + 0xc) + 8) + iVar16,0);
    (((vtbl_entry*)(*(int *)(iVar19 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar19 + 0xc) + 8) + iVar19,0);
    (((vtbl_entry*)(*(int *)(iVar20 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar20 + 0xc) + 8) + iVar20,0);
    (((vtbl_entry*)(*(int *)(iVar21 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar21 + 0xc) + 8) + iVar21,0);
  }
  else if (param_2 == 1) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
    (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar7 + 0xc) + 8) + iVar7,1);
    (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar8 + 0xc) + 8) + iVar8,1);
    (((vtbl_entry*)(*(int *)(iVar9 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar9 + 0xc) + 8) + iVar9,1);
    (((vtbl_entry*)(*(int *)(iVar13 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar13 + 0xc) + 8) + iVar13,0);
    (((vtbl_entry*)(*(int *)(iVar15 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar15 + 0xc) + 8) + iVar15,0);
    (((vtbl_entry*)(*(int *)(iVar16 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar16 + 0xc) + 8) + iVar16,1);
    (((vtbl_entry*)(*(int *)(iVar19 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar19 + 0xc) + 8) + iVar19,0);
    (((vtbl_entry*)(*(int *)(iVar20 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar20 + 0xc) + 8) + iVar20,0);
    (((vtbl_entry*)(*(int *)(iVar21 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar21 + 0xc) + 8) + iVar21,0);
  }
  else if (param_2 == 2) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
    (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar7 + 0xc) + 8) + iVar7,1);
    (((vtbl_entry*)(*(int *)(iVar8 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar8 + 0xc) + 8) + iVar8,1);
    (((vtbl_entry*)(*(int *)(iVar9 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar9 + 0xc) + 8) + iVar9,1);
    (((vtbl_entry*)(*(int *)(iVar10 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar10 + 0xc) + 8) + iVar10,0);
    (((vtbl_entry*)(*(int *)(iVar11 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar11 + 0xc) + 8) + iVar11,0);
    (((vtbl_entry*)(*(int *)(iVar12 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar12 + 0xc) + 8) + iVar12,0);
    (((vtbl_entry*)(*(int *)(iVar13 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar13 + 0xc) + 8) + iVar13,0);
    (((vtbl_entry*)(*(int *)(iVar15 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar15 + 0xc) + 8) + iVar15,0);
    (((vtbl_entry*)(*(int *)(iVar16 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar16 + 0xc) + 8) + iVar16,0);
    (((vtbl_entry*)(*(int *)(iVar17 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar17 + 0xc) + 8) + iVar17,0);
    (((vtbl_entry*)(*(int *)(iVar18 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar18 + 0xc) + 8) + iVar18,0);
  }
  else if (param_2 == 3) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
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
    (((vtbl_entry*)(*(int *)(iVar19 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar19 + 0xc) + 8) + iVar19,0);
    (((vtbl_entry*)(*(int *)(iVar20 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar20 + 0xc) + 8) + iVar20,0);
    (((vtbl_entry*)(*(int *)(iVar21 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar21 + 0xc) + 8) + iVar21,0);
  }
  return;
}
