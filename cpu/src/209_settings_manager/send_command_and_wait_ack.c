/* @k10d send_command_and_wait_ack @ 0x104aa896
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 209_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes a flag to an object field, sends a command via a helper, and waits for an
 *   acknowledgment if the send succeeds.
 * summary:
 *   The function first calls eventflag_clr_flg with a pointer to offset 0x1c of the input
 *   object and the value 1. It then calls send_cpucom_command_1045cfdc with data from
 *   offset 0x10, a pointer to offset 8, and constants 1 and 0. If
 *   send_cpucom_command_1045cfdc returns non-zero, it calls twai_flg_obj to wait for a flag
 *   at offset 0x1c with a 1000ms timeout. The specific subsystem is not identifiable from
 *   the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_command_and_wait_ack(int param_1)

{
  int iVar1;
  
  eventflag_clr_flg((uint32_t *)(param_1 + 0x1c),1);
  iVar1 = send_cpucom_command_1045cfdc((void *)(*(uint32_t *)(param_1 + 0x10)),(void *)(param_1 + 8),1,0);
  if (iVar1 != 0) {
    twai_flg_obj((uint32_t *)(param_1 + 0x1c),1,(void *)0x0,1000);
  }
  return;
}
