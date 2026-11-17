/* @k10d send_cpucom_command_sequence_10461b02 @ 0x10461b02
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 138_companion_chip_driver (unit names are model-proposed)
 * purpose:
 *   Sends a sequence of commands and data to the companion chip via the CPUCOM interface.
 * summary:
 *   The function first checks a condition using set_pointer_and_clear_flag. If true, it
 *   performs a virtual call, sets a command via cpucom_msg_set_cmd, and then calls a series
 *   of FUN_104655xx functions to transmit data and parameters to the object stored in
 *   param_1[6]. It concludes by calling get_registered_reply_code twice and potentially
 *   delete_signal_semaphore if the result is zero. The specific camera subsystem (e.g.,
 *   PRIME, OSDC) is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int send_cpucom_command_sequence_10461b02(int *param_1,void *param_2,int param_3)

{
  bool bVar2;
  void *pvVar1;
  int iVar3;
  void *pvVar4;
  
  bVar2 = set_pointer_and_clear_flag(param_1 + 7,param_2);
  iVar3 = 0;
  if (bVar2) {
    (**(code **)(*param_1 + 0x4c))
              ((int)*(short *)(*param_1 + 0x48) + (int)param_1,0,param_3 != 0,0xff);
    cpucom_msg_set_cmd((void *)param_1[6],DAT_105a71f4/*ROM*/);
    cpucom_resp_set_insize((void *)param_1[6],(uint)DAT_105a71f5/*ROM*/);
    pvVar4 = (void *)param_1[6];
    pvVar1 = (void *)(**(code **)(*param_1 + 0x6c))((int)*(short *)(*param_1 + 0x68) + (int)param_1)
    ;
    set_ptr_if_field_is_null(pvVar4,pvVar1);
    set_object_field_at_offset_0x14((void *)param_1[6],param_2);
    write_word_at_offset_16((void *)param_1[6],0x104000f);
    get_registered_reply_code(param_1);
    iVar3 = get_registered_reply_code(param_1);
    if (iVar3 == 0) {
      delete_signal_semaphore(param_1 + 7);
    }
  }
  return iVar3;
}
