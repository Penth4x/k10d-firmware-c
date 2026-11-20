/* @k10d call_virtual_then_helper @ 0x10494864
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object referenced by param_1, then calls a helper
 *   function.
 * summary:
 *   The function dereferences a pointer at offset 0x48 of param_1 to get an object, then
 *   calls virtual slot 8 (offset 0x44) on that object with a this-adjusted pointer. It then
 *   calls invoke_virtual_destroy_on_range with the original param_1. The specific subsystem
 *   or camera role is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_then_helper(cls_105b4ad4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1->field_0x48 + 0xc);
  (((vtbl_entry*)(iVar1))[8].fn)(param_1->field_0x48 + (int)((vtbl_entry*)(iVar1))[8].adj);
  invoke_virtual_destroy_on_range((cls_105b48dc *)param_1);
  return;
}
