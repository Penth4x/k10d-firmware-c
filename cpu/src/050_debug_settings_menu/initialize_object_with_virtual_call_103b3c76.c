/* @k10d initialize_object_with_virtual_call_103b3c76 @ 0x103b3c76
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Resets object fields, calls a virtual method, and invokes a series of helper functions
 *   on a sub-object.
 * summary:
 *   The function checks a flag at offset 4 and conditionally invokes a virtual method (slot
 *   8) with argument 0. It then zeroes several fields, calls call_helper_on_fetched_object
 *   four times with different constants on a sub-object at offset 8, and calls
 *   forward_two_params_via_helper. It queries two values from param_1[10] via
 *   query_object_property_via_temp_104f15c4 and get_setting_0xb2, stores them in fields,
 *   and sets a 2-byte value at offset 0x46 based on the second query result. Finally, it
 *   copies two 2-byte fields and calls four more helper functions
 *   (compute_and_send_two_offsets_103b45f4, dispatch_object_event_103b456c,
 *   dispatch_mode_state_update_103b4092, dispatch_event_to_object_10492252,
 *   request_ui_sync_and_set_flag, request_ui_sync_with_flag_10491f5c).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_with_virtual_call_103b3c76(cls_10566478 *param_1)

{
  uint16_t uVar1;
  uint8_t uVar3;
  uint32_t uVar2;
  uint8_t *puVar4;
  
  if (param_1->field_0x4 == '\0') {
    (((vtbl_entry*)(param_1->field_0x0))[8].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj,0);
  }
  *(uint32_t *)&param_1->field_0x68 = 0;
  puVar4 = &param_1->field5_0x8;
  param_1->field_0x67 = '\0';
  call_helper_on_fetched_object(puVar4,0x10);
  call_helper_on_fetched_object(puVar4,0xf);
  call_helper_on_fetched_object(puVar4,0xd);
  call_helper_on_fetched_object(puVar4,0xe);
  forward_two_params_via_helper(puVar4,6,1);
  param_1->field_0x66 = 0;
  uVar3 = query_object_property_via_temp_104f15c4(param_1->field_0x28);
  param_1->field_0x44 = uVar3;
  uVar2 = get_setting_0xb2(param_1->field_0x28);
  param_1->field_0x45 = (byte)uVar2;
  compute_and_send_two_offsets_103b45f4(param_1);
  uVar1 = 3;
  if (param_1->field_0x45 != 0) {
    uVar1 = 2;
  }
  *(uint16_t *)&param_1->field_0x46 = uVar1;
  param_1->field_0x48 = param_1->field_0x64;
  param_1->field_0x49 = param_1->field_0x65;
  param_1->field_0x4a = param_1->field_0x4c;
  param_1->field_0x4b = param_1->field_0x4d;
  dispatch_object_event_103b456c(param_1);
  dispatch_mode_state_update_103b4092(param_1);
  dispatch_event_to_object_10492252((cls_105b4254 *)puVar4,param_1);
  request_ui_sync_and_set_flag((cls_105b4254 *)puVar4);
  request_ui_sync_with_flag_10491f5c(puVar4,1);
  return;
}
