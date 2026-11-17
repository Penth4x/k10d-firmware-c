/* @k10d invoke_virtual_slot_one_10386142 @ 0x10386142
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 1 of an object obtained from menu_item_register, passing 1 as the
 *   argument.
 * summary:
 *   The function checks a byte at param_1 + 0x44 + param_2, but both branches execute
 *   identical code. It calls menu_item_register(param_1) to get an object pointer, then
 *   performs a virtual call to slot 1 (offset 0xc in the vtable) with argument 1. The
 *   conditional branch is redundant as both paths are identical.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_one_10386142(int param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x44 + param_2) == '\0') {
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else {
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
