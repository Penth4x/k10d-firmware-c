/* @k10d send_command_and_get_result @ 0x10461516
 * name: model (proposed by the local model from the decompile, confidence 0.50)
 * unit: 137_settings_manager (unit names are model-proposed)
 * purpose:
 *   Conditionally sends a command sequence to a channel object and returns a result value.
 * summary:
 *   Checks a condition via set_pointer_and_clear_flag. If true, sets a command on the
 *   object at param_1[6] using a global value, calls a virtual method on the main object,
 *   and invokes several helper functions (cpucom_resp_set_insize, set_ptr_if_field_is_null,
 *   set_object_field_at_offset_0x14, write_word_at_offset_16) that likely handle
 *   transmission and status updates. Finally, calls get_registered_reply_code to retrieve a
 *   result and delete_signal_semaphore to update state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t send_command_and_get_result(int *param_1,void *param_2)

{
  bool bVar2;
  void *pvVar1;
  uint32_t uVar3;
  void *pvVar4;
  
  bVar2 = set_pointer_and_clear_flag(param_1 + 7,param_2);
  uVar3 = 0;
  if (bVar2) {
    cpucom_msg_set_cmd((void*)(param_1[6]),uRam105a71e4);
    cpucom_resp_set_insize((void *)param_1[6],(uint)bRam105a71e5);
    pvVar4 = (void *)param_1[6];
    pvVar1 = (void *)(((vtbl_entry*)(*param_1))[13].fn)((int)((vtbl_entry*)(*param_1))[13].adj + (int)param_1)
    ;
    set_ptr_if_field_is_null(pvVar4,pvVar1);
    set_object_field_at_offset_0x14((void *)param_1[6],param_2);
    write_word_at_offset_16((void *)param_1[6],0x1040007);
    uVar3 = get_registered_reply_code(param_1);
    delete_signal_semaphore(param_1 + 7);
  }
  return uVar3;
}
