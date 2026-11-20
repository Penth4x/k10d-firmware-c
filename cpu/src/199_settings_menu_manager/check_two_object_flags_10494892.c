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

bool check_two_object_flags_10494892(cls_105b4ad4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1->field_0x48 + 0xc);
  iVar2 = (((vtbl_entry*)(iVar2))[9].fn)(param_1->field_0x48 + (int)((vtbl_entry*)(iVar2))[9].adj);
  iVar1 = any_item_predicate_true((cls_105b48dc *)param_1);
  return iVar2 != 0 || iVar1 != 0;
}
