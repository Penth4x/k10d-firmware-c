/* @k10d register_and_select_menu_items_10404c94 @ 0x10404c94
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Resets 14 objects retrieved from param_1, then invokes a virtual method on the object
 *   selected by param_2.
 * summary:
 *   The function calls menu_item_register 14 times with param_1 to obtain object pointers.
 *   It then performs a virtual call (slot 2) with argument 0 on each of the 14 objects.
 *   Finally, it uses a switch statement on param_2 to perform the same virtual call with
 *   argument 1 on a specific subset of the objects, mapping indices 0-15 to the 14
 *   retrieved pointers (with some pointers reused for multiple indices).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_and_select_menu_items_10404c94(int param_1,uint32_t param_2)

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
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
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
  (**(code **)(*(int *)(iVar13 + 0xc) + 0xc))(*(short *)(*(int *)(iVar13 + 0xc) + 8) + iVar13,0);
  (**(code **)(*(int *)(iVar14 + 0xc) + 0xc))(*(short *)(*(int *)(iVar14 + 0xc) + 8) + iVar14,0);
  switch(param_2) {
  case 0:
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
    break;
  case 1:
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
    break;
  case 2:
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
    break;
  case 3:
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    break;
  case 4:
    (**(code **)(*(int *)(iVar7 + 0xc) + 0xc))(*(short *)(*(int *)(iVar7 + 0xc) + 8) + iVar7,1);
    break;
  case 5:
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,1);
    break;
  case 6:
    (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,1);
    break;
  case 7:
    (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(*(short *)(*(int *)(iVar8 + 0xc) + 8) + iVar8,1);
    break;
  case 8:
    (**(code **)(*(int *)(iVar9 + 0xc) + 0xc))(*(short *)(*(int *)(iVar9 + 0xc) + 8) + iVar9,1);
    break;
  case 9:
    (**(code **)(*(int *)(iVar10 + 0xc) + 0xc))(*(short *)(*(int *)(iVar10 + 0xc) + 8) + iVar10,1);
    break;
  case 10:
    (**(code **)(*(int *)(iVar10 + 0xc) + 0xc))(*(short *)(*(int *)(iVar10 + 0xc) + 8) + iVar10,1);
    break;
  case 0xb:
    (**(code **)(*(int *)(iVar10 + 0xc) + 0xc))(*(short *)(*(int *)(iVar10 + 0xc) + 8) + iVar10,1);
    break;
  case 0xc:
    (**(code **)(*(int *)(iVar11 + 0xc) + 0xc))(*(short *)(*(int *)(iVar11 + 0xc) + 8) + iVar11,1);
    break;
  case 0xd:
    (**(code **)(*(int *)(iVar12 + 0xc) + 0xc))(*(short *)(*(int *)(iVar12 + 0xc) + 8) + iVar12,1);
    break;
  case 0xe:
    (**(code **)(*(int *)(iVar13 + 0xc) + 0xc))(*(short *)(*(int *)(iVar13 + 0xc) + 8) + iVar13,1);
    break;
  case 0xf:
    (**(code **)(*(int *)(iVar14 + 0xc) + 0xc))(*(short *)(*(int *)(iVar14 + 0xc) + 8) + iVar14,1);
    break;
  default:
  }
  return;
}
