/* @k10d dispatch_mode_state_change_1038adc6 @ 0x1038adc6
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Resets five objects and conditionally triggers a state change on one based on a mode
 *   bitmask.
 * summary:
 *   The function retrieves five object pointers from param_1 using menu_item_register. It
 *   calls a virtual method (slot 2) with argument 0 on all five objects to reset them. It
 *   then evaluates param_2 (bits 0-3) to select one specific object and call the same
 *   virtual method with argument 1 (or no argument in some branches), likely activating a
 *   specific mode or state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_state_change_1038adc6(int param_1,uint param_2)

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
