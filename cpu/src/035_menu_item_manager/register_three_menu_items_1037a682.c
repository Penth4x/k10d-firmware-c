/* @k10d register_three_menu_items_1037a682 @ 0x1037a682
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Sets three boolean flags on an object retrieved via menu_item_register based on two
 *   input parameters.
 * summary:
 *   The function derives three boolean values (uVar2, uStack_c, uVar3) from param_3 and
 *   param_4. It then calls menu_item_register(param_1) three times to obtain an object
 *   pointer and invokes a virtual method (slot 2) on it, passing each of the three boolean
 *   values as the second argument. The specific role of the object or the flags is not
 *   determinable from the provided pseudocode and single unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_three_menu_items_1037a682(int param_1,uint32_t param_2,int param_3,int param_4)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uStack_c;
  
  uVar2 = 0;
  uStack_c = 0;
  uVar3 = 0;
  if (param_3 == 0) {
    if (param_4 == 0) {
      uStack_c = 1;
    }
    else {
      uVar2 = 1;
    }
  }
  else if (param_4 == 0) {
    uVar3 = 1;
  }
  else {
    uVar2 = 1;
  }
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),uVar2);
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),uStack_c)
  ;
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),uVar3);
  return;
}
