/* @k10d dispatch_state_change_via_vtable_103b1830 @ 0x103b1830
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object derived from param_1, conditionally repeating it
 *   based on a status check.
 * summary:
 *   The function retrieves an object pointer via menu_item_register(param_1 + 8) and calls
 *   virtual slot 2 (offset 0xc) with argument 0. It then checks a value at param_1 + 0x28
 *   via get_setting_0x96; if the result is 1, it repeats the virtual call with argument 1.
 *   The specific subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_change_via_vtable_103b1830(void *param_1)

{
  int iVar1;
  
  iVar1 = menu_item_register((int)param_1 + 8);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = get_setting_0x96(*(int *)((int)param_1 + 0x28));
  if (iVar1 == 1) {
    iVar1 = menu_item_register((int)param_1 + 8);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
