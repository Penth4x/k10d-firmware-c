/* @k10d register_thirteen_menu_items @ 0x10382eac
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on 13 objects retrieved from param_1 to set their state based
 *   on param_2.
 * summary:
 *   The function calls menu_item_register 13 times with param_1 to obtain object pointers.
 *   It then calls virtual slot 2 on each object. If param_2 is 0, it sets the first
 *   object's state to 1 and the last to 0. If param_2 is non-zero, it sets the first 12
 *   objects to 0 and the last to 1. The specific subsystem (display, UI, etc.) is not
 *   determinable from the provided code or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10382fac) overlaps instruction at (ram,0x10382faa)
    */

void register_thirteen_menu_items(int param_1,int param_2)

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
  if (param_2 == 0) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
    (**(code **)(*(int *)(iVar13 + 0xc) + 0xc))(*(short *)(*(int *)(iVar13 + 0xc) + 8) + iVar13,0);
  }
  else {
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,0);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,0);
    (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,0);
    (**(code **)(*(int *)(iVar7 + 0xc) + 0xc))(*(short *)(*(int *)(iVar7 + 0xc) + 8) + iVar7,0);
    (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(*(short *)(*(int *)(iVar8 + 0xc) + 8) + iVar8,0);
    (**(code **)(*(int *)(iVar9 + 0xc) + 0xc))(*(short *)(*(int *)(iVar9 + 0xc) + 8) + iVar9,0);
    (**(code **)(*(int *)(iVar10 + 0xc) + 0xc))(*(short *)(*(int *)(iVar10 + 0xc) + 8) + iVar10,0);
    (**(code **)(*(int *)(iVar11 + 0xc) + 0xc))(*(short *)(*(int *)(iVar11 + 0xc) + 8) + iVar11,0);
    (**(code **)(*(int *)(iVar12 + 0xc) + 0xc))(*(short *)(*(int *)(iVar12 + 0xc) + 8) + iVar12,0);
    (**(code **)(*(int *)(iVar13 + 0xc) + 0xc))(*(short *)(*(int *)(iVar13 + 0xc) + 8) + iVar13,1);
  }
  return;
}
