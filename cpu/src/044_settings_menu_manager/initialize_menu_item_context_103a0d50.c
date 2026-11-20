/* @k10d initialize_menu_item_context_103a0d50 @ 0x103a0d50
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by clearing flags, calling a virtual method, and invoking a
 *   series of helper functions on a sub-structure.
 * summary:
 *   The function checks a flag at offset 0x41 and conditionally invokes a virtual method
 *   (slot 0x44/8 = 8) with argument 0. It clears several fields (0x42, 0x41, 0x11) and
 *   calls call_helper_on_fetched_object four times with different constants on a sub-object
 *   at offset 8. It calls call_two_helpers_in_sequence_104f1b02 to set a field at offset
 *   0x40, invokes compute_and_send_two_offsets_103a10c8, and performs another virtual call
 *   (slot 0x74/8 = 14) via a pointer retrieved from menu_item_register. Finally, it calls
 *   several other helpers (forward_two_params_via_helper,
 *   dispatch_event_to_object_10492252, request_ui_sync_and_set_flag,
 *   request_ui_sync_with_flag_10491f5c) to complete the initialization or state transition.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_menu_item_context_103a0d50(cls_1056482c *param_1)

{
  uint32_t uVar1;
  int iVar2;
  uint8_t *puVar3;
  
  if (param_1->field_0x4 == '\0') {
    (((vtbl_entry*)(param_1->field_0x0))[8].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj,0);
  }
  param_1->field_0x42 = 0;
  puVar3 = &param_1->field5_0x8;
  param_1->field_0x44 = 0;
  call_helper_on_fetched_object(puVar3,0x10);
  call_helper_on_fetched_object(puVar3,0xf);
  call_helper_on_fetched_object(puVar3,0xd);
  call_helper_on_fetched_object(puVar3,0xe);
  param_1->field_0x41 = 0;
  uVar1 = call_two_helpers_in_sequence_104f1b02(param_1->field_0x28);
  param_1->field_0x40 = (char)uVar1;
  compute_and_send_two_offsets_103a10c8(param_1);
  iVar2 = menu_item_register((int)puVar3);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[14].fn)(iVar2 + ((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[14].adj,1);
  if (param_1->field_0x40 == '\x1c') {
    iVar2 = menu_item_register((int)puVar3);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[14].fn)(iVar2 + ((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[14].adj,0);
  }
  forward_two_params_via_helper(puVar3,0x11,1);
  dispatch_event_to_object_10492252((cls_105b4254 *)puVar3,param_1);
  request_ui_sync_and_set_flag((cls_105b4254 *)puVar3);
  request_ui_sync_with_flag_10491f5c(puVar3,1);
  return;
}
