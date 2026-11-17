/* @k10d register_three_menu_items_103760d0 @ 0x103760d0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Computes three boolean flags from two input parameters and invokes a virtual method on
 *   an object retrieved via a helper for each flag.
 * summary:
 *   The function derives three local variables (uVar2, uStack_c, uVar3) based on the
 *   zero/non-zero state of param_3 and param_4. It then calls menu_item_register three
 *   times with param_1 to retrieve an object pointer. For each call, it performs a virtual
 *   function call (slot 2) on the object, passing the object (adjusted by a short offset)
 *   and one of the computed flags as arguments. The specific camera subsystem is not
 *   identifiable from the provided pseudocode and unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_three_menu_items_103760d0(int param_1,uint32_t param_2,int param_3,int param_4)

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
