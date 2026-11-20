/* @k10d send_control_message_sequence @ 0x10461706
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 138_companion_chip_driver (unit names are model-proposed)
 * purpose:
 *   Validates a condition and, if true, sends a sequence of control messages to a
 *   peripheral interface.
 * summary:
 *   Checks a condition using set_pointer_and_clear_flag. If valid, it sets a command on the
 *   interface at param_1[6] and calls a series of helper functions (cpucom_resp_set_insize,
 *   set_ptr_if_field_is_null, set_object_field_at_offset_0x14, write_word_at_offset_16) to
 *   transmit data and status. It stores a result byte at param_1+0x14 and returns it.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t send_control_message_sequence(int *param_1,void *param_2)

{
  bool bVar3;
  void *pvVar1;
  uint32_t uVar2;
  void *pvVar4;
  
  bVar3 = set_pointer_and_clear_flag(param_1 + 7,param_2);
  if (bVar3) {
    cpucom_msg_set_cmd((void*)(param_1[6]),uRam105a71e8);
    cpucom_resp_set_insize((void *)param_1[6],(uint)bRam105a71e9);
    pvVar4 = (void *)param_1[6];
    pvVar1 = (void *)(((vtbl_entry*)(*param_1))[13].fn)((int)((vtbl_entry*)(*param_1))[13].adj + (int)param_1)
    ;
    set_ptr_if_field_is_null(pvVar4,pvVar1);
    set_object_field_at_offset_0x14((void *)param_1[6],param_2);
    write_word_at_offset_16((void *)param_1[6],0x1040009);
    uVar2 = get_registered_reply_code(param_1);
    *(char *)(param_1 + 0x14) = (char)uVar2;
    if (*(char *)(param_1 + 0x14) == '\0') {
      delete_signal_semaphore(param_1 + 7);
    }
  }
  return *(uint8_t *)(param_1 + 0x14);
}
