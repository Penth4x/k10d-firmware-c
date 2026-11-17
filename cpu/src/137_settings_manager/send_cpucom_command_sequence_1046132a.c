/* @k10d send_cpucom_command_sequence_1046132a @ 0x1046132a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 137_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sends a sequence of commands and data to the companion chip via the CPUCOM interface.
 * summary:
 *   The function first calls an unknown check function (set_pointer_and_clear_flag). If the
 *   check passes, it sets a command via cpucom_msg_set_cmd, then calls a series of
 *   functions (cpucom_resp_set_insize, set_ptr_if_field_is_null,
 *   set_object_field_at_offset_0x14, write_word_at_offset_16) that appear to transmit data
 *   and status to the companion chip. It also performs a virtual call on the object pointed
 *   to by param_1. Finally, it calls get_registered_reply_code and delete_signal_semaphore,
 *   likely for cleanup or state update.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t send_cpucom_command_sequence_1046132a(int *param_1,void *param_2)

{
  bool bVar2;
  void *pvVar1;
  uint32_t uVar3;
  void *pvVar4;
  
  bVar2 = set_pointer_and_clear_flag(param_1 + 7,param_2);
  uVar3 = 0;
  if (bVar2) {
    cpucom_msg_set_cmd((void *)param_1[6],DAT_105a71de/*ROM*/);
    cpucom_resp_set_insize((void *)param_1[6],(uint)DAT_105a71df/*ROM*/);
    pvVar4 = (void *)param_1[6];
    pvVar1 = (void *)(**(code **)(*param_1 + 0x6c))((int)*(short *)(*param_1 + 0x68) + (int)param_1)
    ;
    set_ptr_if_field_is_null(pvVar4,pvVar1);
    set_object_field_at_offset_0x14((void *)param_1[6],param_2);
    write_word_at_offset_16((void *)param_1[6],0x1040004);
    uVar3 = get_registered_reply_code(param_1);
    delete_signal_semaphore(param_1 + 7);
  }
  return uVar3;
}
