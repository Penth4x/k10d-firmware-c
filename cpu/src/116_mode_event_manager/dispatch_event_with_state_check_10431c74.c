/* @k10d dispatch_event_with_state_check_10431c74 @ 0x10431c74
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 116_mode_event_manager (unit names are model-proposed)
 * purpose:
 *   Checks a state condition and dispatches an event to a handler with a specific status
 *   code.
 * summary:
 *   The function compares two values derived from object fields at offsets 0x38 and 0x30.
 *   If they match, it initializes a temporary object, calls a setup routine, and then
 *   dispatches the event with a status code of 1 or 2 based on a secondary check. If the
 *   initial check fails, it dispatches the event with status code 1 using a different
 *   handler based on another state check. It always returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_with_state_check_10431c74(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  uintptr_t sp;
  cls_105a8a1c acStack_48 [16];
  
  iVar1 = get_field_at_offset_four_1042ff1c(*(uint32_t *)(param_1 + 0x38),0);
  iVar2 = select_value_by_two_indices(*(uint32_t *)(param_1 + 0x30),2);
  if (iVar1 == iVar2) {
    cls_105a8a1c_new(acStack_48);
    copy_struct_under_semaphore(param_1,acStack_48);
    iVar1 = process_settings_event(*(uint32_t *)(param_1 + 0x30),acStack_48);
    if (iVar1 == 0) {
      uVar3 = *(uint32_t *)(param_1 + 0x30);
      iVar1 = check_setting_0x97_active(uVar3);
      iVar2 = 2;
      if (iVar1 == 0) {
        iVar2 = 1;
      }
      send_message_with_optional_payload(uVar3,param_2,iVar2);
    }
    else {
      init_and_set_value_10434d94(*(uint32_t *)(param_1 + 0x30),param_2,5);
    }
    cls_105a8a1c_delete(acStack_48,2);
  }
  else {
    iVar1 = read_field_at_offset_0x6c(*(uint32_t *)(param_1 + 0x38));
    if (iVar1 == 1) {
      init_and_set_value_10434ee8(*(uint32_t *)(param_1 + 0x30),param_2,1);
    }
    else {
      send_message_with_optional_payload(*(uint32_t *)(param_1 + 0x30),param_2,1);
    }
  }
  return 1;
}
