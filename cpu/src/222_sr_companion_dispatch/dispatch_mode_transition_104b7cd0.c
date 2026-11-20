/* @k10d dispatch_mode_transition_104b7cd0 @ 0x104b7cd0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Validates a state transition and dispatches to one of three mode-specific handlers
 *   based on param_3.
 * summary:
 *   The function first calls set_pointer_and_clear_flag to check a condition at offset 0x2c
 *   of the object. If valid, it sets a flag via eventflag_clr_flg and then branches on
 *   param_3 (0, 1, or 2) to call one of three distinct handlers
 *   (send_cpucom_command_104617b8, send_control_message_sequence, or
 *   send_cpucom_command_and_wait). Depending on the result, it either cleans up via
 *   delete_signal_semaphore or signals completion via twai_flg_obj.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dispatch_mode_transition_104b7cd0(int param_1,void *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),param_2);
  iVar2 = 0;
  if (!bVar1) {
    return 0;
  }
  eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
  if (param_3 == 0) {
    iVar2 = send_cpucom_command_104617b8((int *)(*(uint32_t *)(param_1 + 0xc)),(void *)(param_1 + 4));
  }
  else if (param_3 == 1) {
    iVar2 = send_control_message_sequence((int *)(*(uint32_t *)(param_1 + 0xc)),(void *)(param_1 + 4));
  }
  else {
    if (param_3 != 2) {
      bVar1 = true;
      goto LAB_104b7d4a;
    }
    iVar2 = send_cpucom_command_and_wait((int *)(*(uint32_t *)(param_1 + 0xc)),(void *)(param_1 + 4));
  }
  bVar1 = iVar2 == 0;
LAB_104b7d4a:
  if (bVar1) {
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  else {
    twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
  }
  return iVar2;
}
