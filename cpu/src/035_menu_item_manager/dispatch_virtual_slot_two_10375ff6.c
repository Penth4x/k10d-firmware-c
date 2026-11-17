/* @k10d dispatch_virtual_slot_two_10375ff6 @ 0x10375ff6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 2 of an object obtained via a helper, passing a constant argument of
 *   1.
 * summary:
 *   The function checks a byte at an offset in param_1 but executes identical code in both
 *   branches. It calls menu_item_register to obtain an object pointer, then performs a
 *   virtual call to slot 2 (offset 0xc in the vtable) with the object as 'this' and 1 as
 *   the first argument. The byte check appears to be dead code or a placeholder since both
 *   branches are identical.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_two_10375ff6(int param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x34 + param_2) == '\0') {
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else {
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
