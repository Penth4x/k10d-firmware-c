/* @k10d register_and_select_menu_items_1038936a @ 0x1038936a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Resets nine objects retrieved via a helper, then invokes a virtual method on one
 *   selected by an index.
 * summary:
 *   The function calls menu_item_register nine times with the same parameter to obtain
 *   object pointers. It then performs a virtual call (slot 2) on each of the nine objects
 *   with an argument of 0, likely resetting or initializing them. Finally, it uses a switch
 *   statement on param_2 to select one of the nine objects and invoke the same virtual
 *   method with an argument of 1, effectively activating or toggling a specific state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103894e4) overlaps instruction at (ram,0x103894e2)
    */

void register_and_select_menu_items_1038936a(int param_1, uint32_t param_2, uint32_t param_x2)

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
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
  (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
  (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,0);
  (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,0);
  (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,0);
  (**(code **)(*(int *)(iVar7 + 0xc) + 0xc))(*(short *)(*(int *)(iVar7 + 0xc) + 8) + iVar7,0);
  (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(*(short *)(*(int *)(iVar8 + 0xc) + 8) + iVar8,0);
  (**(code **)(*(int *)(iVar9 + 0xc) + 0xc))(*(short *)(*(int *)(iVar9 + 0xc) + 8) + iVar9,0);
  switch(param_2) {
  case 1:
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
    break;
  case 2:
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
    break;
  case 3:
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
    break;
  case 4:
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
    break;
  case 5:
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
    break;
  case 6:
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    break;
  case 7:
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
    break;
  case 8:
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    break;
  case 9:
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,1);
    break;
  case 10:
    (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,1);
    break;
  case 0xb:
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    break;
  case 0xc:
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,1);
    break;
  case 0xd:
    (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,1);
    break;
  case 0xe:
    (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(*(short *)(*(int *)(iVar8 + 0xc) + 8) + iVar8,1);
    break;
  case 0xf:
    (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(*(short *)(*(int *)(iVar8 + 0xc) + 8) + iVar8,1);
    break;
  case 0x10:
    (**(code **)(*(int *)(iVar9 + 0xc) + 0xc))(*(short *)(*(int *)(iVar9 + 0xc) + 8) + iVar9,1);
    break;
  case 0x11:
    (**(code **)(*(int *)(iVar7 + 0xc) + 0xc))(*(short *)(*(int *)(iVar7 + 0xc) + 8) + iVar7,1);
    break;
  case 0x12:
    (**(code **)(*(int *)(iVar7 + 0xc) + 0xc))(*(short *)(*(int *)(iVar7 + 0xc) + 8) + iVar7,1);
    break;
  default:
  }
  return;
}
