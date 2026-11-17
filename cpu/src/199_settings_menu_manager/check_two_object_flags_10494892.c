/* @k10d check_two_object_flags_10494892 @ 0x10494892
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Returns true if either a virtual method result or a callee result is non-zero.
 * summary:
 *   Reads a pointer from param_1+0x48, then a sub-object at offset 0xc. Performs a virtual
 *   call on that sub-object (slot at offset 0x4c) with a this-adjustment. Calls
 *   any_item_predicate_true with param_1. Returns the logical OR of the two results.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_two_object_flags_10494892(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x48) + 0xc);
  iVar2 = (**(code **)(iVar2 + 0x4c))(*(int *)(param_1 + 0x48) + (int)*(short *)(iVar2 + 0x48));
  iVar1 = any_item_predicate_true(param_1);
  return iVar2 != 0 || iVar1 != 0;
}
