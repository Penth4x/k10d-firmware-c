/* @k10d init_subobject_from_parent_fields @ 0x10367e0e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 009_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a sub-object at offset 0x18 of param_1 by calling three setup routines with
 *   values read from param_1.
 * summary:
 *   The function takes a parent object pointer in param_1 and computes a sub-object address
 *   at param_1 + 0x18. It calls dispatch_virtual_calls_on_nine_objects with the sub-object
 *   and constant 1, then calls register_menu_item_and_set_flag_1037faf4 with the sub-object
 *   and a 16-bit value from param_1 + 0xa0, and finally calls
 *   register_and_set_two_menu_items with the sub-object and an 8-bit value from param_1 +
 *   0xa2. The callees are not named, so the specific subsystem is unknown, but the pattern
 *   is clearly initializing or configuring a nested structure using fields from the parent
 *   object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_subobject_from_parent_fields(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x18;
  dispatch_virtual_calls_on_nine_objects(iVar1,1);
  register_menu_item_and_set_flag_1037faf4(iVar1,*(short *)(param_1 + 0xa0));
  register_and_set_two_menu_items(iVar1,(uint)*(byte *)(param_1 + 0xa2));
  return;
}
