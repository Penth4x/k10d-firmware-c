/* @k10d send_cpucom_command_sequence_104615ba @ 0x104615ba
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 137_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sends a sequence of command and data bytes to the companion chip via the CPUCOM
 *   interface.
 * summary:
 *   The function first checks a condition using set_pointer_and_clear_flag. If true, it
 *   configures the CPUCOM command register (param_1[6]) with a value from DAT_105a71f6,
 *   then calls a series of functions (cpucom_resp_set_insize, set_ptr_if_field_is_null,
 *   set_object_field_at_offset_0x14, write_word_at_offset_16) that appear to write data or
 *   status to the companion chip. It concludes by calling get_registered_reply_code and
 *   potentially delete_signal_semaphore if the result is zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int send_cpucom_command_sequence_104615ba(int *param_1,void *param_2)

{
  bool bVar2;
  void *pvVar1;
  int iVar3;
  void *pvVar4;
  
  bVar2 = set_pointer_and_clear_flag(param_1 + 7,param_2);
  iVar3 = 0;
  if (bVar2) {
    cpucom_msg_set_cmd((void *)param_1[6],DAT_105a71f6/*ROM*/);
    cpucom_resp_set_insize((void *)param_1[6],(uint)DAT_105a71f7/*ROM*/);
    pvVar4 = (void *)param_1[6];
    pvVar1 = (void *)(**(code **)(*param_1 + 0x6c))((int)*(short *)(*param_1 + 0x68) + (int)param_1)
    ;
    set_ptr_if_field_is_null(pvVar4,pvVar1);
    set_object_field_at_offset_0x14((void *)param_1[6],param_2);
    write_word_at_offset_16((void *)param_1[6],0x1040010);
    iVar3 = get_registered_reply_code(param_1);
    if (iVar3 == 0) {
      delete_signal_semaphore(param_1 + 7);
    }
  }
  return iVar3;
}
