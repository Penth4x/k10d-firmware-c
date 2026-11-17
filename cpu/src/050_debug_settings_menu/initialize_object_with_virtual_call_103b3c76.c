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

void initialize_object_with_virtual_call_103b3c76(int *param_1)

{
  uint16_t uVar1;
  uint8_t uVar3;
  uint32_t uVar2;
  int *piVar4;
  
  if (*(char *)(param_1 + 1) == '\0') {
    (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1,0);
  }
  param_1[0x1a] = 0;
  piVar4 = param_1 + 2;
  *(uint8_t *)((int)param_1 + 0x67) = 0;
  call_helper_on_fetched_object(piVar4,0x10);
  call_helper_on_fetched_object(piVar4,0xf);
  call_helper_on_fetched_object(piVar4,0xd);
  call_helper_on_fetched_object(piVar4,0xe);
  forward_two_params_via_helper(piVar4,6,1);
  *(uint8_t *)((int)param_1 + 0x66) = 0;
  uVar3 = query_object_property_via_temp_104f15c4(param_1[10]);
  *(uint8_t *)(param_1 + 0x11) = uVar3;
  uVar2 = get_setting_0xb2(param_1[10]);
  *(char *)((int)param_1 + 0x45) = (char)uVar2;
  compute_and_send_two_offsets_103b45f4(param_1);
  uVar1 = 3;
  if (*(char *)((int)param_1 + 0x45) != '\0') {
    uVar1 = 2;
  }
  *(uint16_t *)((int)param_1 + 0x46) = uVar1;
  *(uint16_t *)(param_1 + 0x12) = *(uint16_t *)(param_1 + 0x19);
  *(uint16_t *)((int)param_1 + 0x4a) = *(uint16_t *)(param_1 + 0x13);
  dispatch_object_event_103b456c(param_1);
  dispatch_mode_state_update_103b4092(param_1);
  dispatch_event_to_object_10492252(piVar4,param_1);
  request_ui_sync_and_set_flag(piVar4);
  request_ui_sync_with_flag_10491f5c(piVar4,1);
  return;
}
