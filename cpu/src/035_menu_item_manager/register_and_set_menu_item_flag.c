/* @k10d register_and_set_menu_item_flag @ 0x10389d12
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Resolves an object from param_1 and invokes a virtual method to set a flag to 1 or 0
 *   based on param_2.
 * summary:
 *   Calls menu_item_register with param_1 to obtain an object pointer. Uses the Cfront
 *   virtual call idiom to invoke virtual slot 2 (offset 0xc) of the sub-object at offset
 *   0xc of the resolved object. The argument passed to the virtual method is 1 if param_2
 *   is 2, otherwise 0. The specific role of the flag or the object is not determinable from
 *   the provided pseudocode and unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_and_set_menu_item_flag(int param_1, int param_2, uint32_t param_x2)

{
  int iVar1;
  
  iVar1 = menu_item_register(param_1);
  if (param_2 == 2) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  }
  return;
}
