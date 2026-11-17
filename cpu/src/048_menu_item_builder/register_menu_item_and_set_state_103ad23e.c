/* @k10d register_menu_item_and_set_state_103ad23e @ 0x103ad23e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 048_menu_item_builder (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method with argument 0, checks a state value, and calls the same
 *   virtual method with argument 1 if the state is not in a specific set.
 * summary:
 *   The function retrieves an object pointer from param_1+8 via menu_item_register and
 *   invokes virtual slot 2 with argument 0. It then queries a state value from param_1+0x28
 *   via call_helper_on_field_0x24. If the state is 1, 2, 3, or 4, it returns early.
 *   Otherwise, it invokes the same virtual slot with argument 1. The logic suggests a
 *   conditional state transition or toggle mechanism.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_and_set_state_103ad23e(void *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = menu_item_register((int)param_1 + 8);
  iVar2 = 0;
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = call_helper_on_field_0x24(*(int *)((int)param_1 + 0x28));
  if (iVar1 == 4) {
    bVar3 = false;
  }
  else if (iVar1 == 3) {
    bVar3 = false;
  }
  else if (iVar1 == 2) {
    bVar3 = false;
  }
  else {
    if (iVar1 == 1) {
      iVar2 = 0x209008a;
    }
    else if (iVar1 != 0) goto LAB_103ad2c2;
    bVar3 = iVar2 == 0;
  }
  if (bVar3) {
    return;
  }
LAB_103ad2c2:
  iVar1 = menu_item_register((int)param_1 + 8);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  return;
}
