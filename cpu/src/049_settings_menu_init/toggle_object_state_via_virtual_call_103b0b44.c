/* @k10d toggle_object_state_via_virtual_call_103b0b44 @ 0x103b0b44
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Retrieves an object, calls a virtual method with state 0, invokes a helper on a field,
 *   then calls the same virtual method with state 1.
 * summary:
 *   The function uses menu_item_register to resolve an object pointer from param_1+8. It
 *   performs a virtual call (slot 2) on that object with argument 0, then calls
 *   read_setting_by_mode_flag with the value at param_1+0x28. It re-resolves the object and
 *   performs the same virtual call with argument 1. The specific subsystem is not
 *   identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_object_state_via_virtual_call_103b0b44(void *param_1)

{
  int iVar1;
  
  iVar1 = menu_item_register((int)param_1 + 8);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  read_setting_by_mode_flag(*(int *)((int)param_1 + 0x28));
  iVar1 = menu_item_register((int)param_1 + 8);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  return;
}
