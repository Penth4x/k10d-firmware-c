/* @k10d send_cpucom_command_sequence_10461916 @ 0x10461916
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 138_companion_chip_driver (unit names are model-proposed)
 * purpose:
 *   Conditionally sends a series of commands and data to the companion chip via the CPUCOM
 *   interface.
 * summary:
 *   The function first checks a condition using set_pointer_and_clear_flag. If true, it
 *   configures the CPUCOM command register (DAT_105a71ee) and executes a sequence of calls
 *   (cpucom_resp_set_insize, set_ptr_if_field_is_null, set_object_field_at_offset_0x14,
 *   write_word_at_offset_16) that appear to transmit data and status to the companion
 *   processor. It concludes by calling get_registered_reply_code and
 *   delete_signal_semaphore, likely to finalize the transaction or update state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t send_cpucom_command_sequence_10461916(int *param_1,void *param_2)

{
  bool bVar2;
  void *pvVar1;
  uint32_t uVar3;
  void *pvVar4;
  
  bVar2 = set_pointer_and_clear_flag(param_1 + 7,param_2);
  uVar3 = 0;
  if (bVar2) {
    cpucom_msg_set_cmd((void*)(param_1[6]),DAT_105a71ee/*ROM*/);
    cpucom_resp_set_insize((void *)param_1[6],(uint)DAT_105a71ef/*ROM*/);
    pvVar4 = (void *)param_1[6];
    pvVar1 = (void *)(((vtbl_entry*)(*param_1))[13].fn)((int)((vtbl_entry*)(*param_1))[13].adj + (int)param_1)
    ;
    set_ptr_if_field_is_null(pvVar4,pvVar1);
    set_object_field_at_offset_0x14((void *)param_1[6],param_2);
    write_word_at_offset_16((void *)param_1[6],0x104000c);
    uVar3 = get_registered_reply_code(param_1);
    delete_signal_semaphore(param_1 + 7);
  }
  return uVar3;
}
