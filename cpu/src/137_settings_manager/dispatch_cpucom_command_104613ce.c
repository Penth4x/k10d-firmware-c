/* @k10d dispatch_cpucom_command_104613ce @ 0x104613ce
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 137_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sends a command sequence to the companion chip via CPUCOM if a pre-check passes.
 * summary:
 *   Calls set_pointer_and_clear_flag to validate state. If true, sets a command via
 *   cpucom_msg_set_cmd, then invokes a series of FUN_104655xx functions to transmit data
 *   and parameters. Finally calls get_registered_reply_code and delete_signal_semaphore to
 *   finalize the operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_cpucom_command_104613ce(int *param_1,void *param_2)

{
  bool bVar2;
  void *pvVar1;
  uint32_t uVar3;
  void *pvVar4;
  
  bVar2 = set_pointer_and_clear_flag(param_1 + 7,param_2);
  uVar3 = 0;
  if (bVar2) {
    cpucom_msg_set_cmd((void*)(param_1[6]),DAT_105a71e0/*ROM*/);
    cpucom_resp_set_insize((void *)param_1[6],(uint)DAT_105a71e1/*ROM*/);
    pvVar4 = (void *)param_1[6];
    pvVar1 = (void *)(((vtbl_entry*)(*param_1))[13].fn)((int)((vtbl_entry*)(*param_1))[13].adj + (int)param_1)
    ;
    set_ptr_if_field_is_null(pvVar4,pvVar1);
    set_object_field_at_offset_0x14((void *)param_1[6],param_2);
    write_word_at_offset_16((void *)param_1[6],0x1040005);
    uVar3 = get_registered_reply_code(param_1);
    delete_signal_semaphore(param_1 + 7);
  }
  return uVar3;
}
