/* @k10d register_and_select_menu_items_10408ab8 @ 0x10408ab8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Resets five objects to state 0, then sets one of them to state 1 based on a 3-bit
 *   selector in param_2.
 * summary:
 *   The function calls menu_item_register five times with param_1 to obtain five object
 *   pointers. It issues a virtual call (slot 2) with argument 0 to each object, likely
 *   clearing a flag or state. It then uses the lower 3 bits of param_2 to select one of the
 *   five objects and calls the same virtual slot with argument 1, setting that specific
 *   object's state. The exact nature of the objects and the state being toggled is unknown
 *   because the callee menu_item_register is unnamed and the virtual method is not
 *   identified.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_and_select_menu_items_10408ab8(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = menu_item_register(param_1);
  iVar2 = menu_item_register(param_1);
  iVar3 = menu_item_register(param_1);
  iVar4 = menu_item_register(param_1);
  iVar5 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
  (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,0);
  (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,0);
  if ((param_2 & 4) == 0) {
    if ((param_2 & 8) == 0) {
      if ((param_2 & 3) != 0) {
        (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
      }
    }
    else if ((param_2 & 3) == 0) {
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
    }
    else {
      (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5);
    }
  }
  else if ((param_2 & 3) == 0) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
  }
  else {
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4);
  }
  return;
}
