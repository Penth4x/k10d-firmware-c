/* @k10d send_message_with_timeout_104b8a3c @ 0x104b8a3c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Sends a message to a task or channel with a timeout, managing a semaphore and setting a
 *   wait flag on failure.
 * summary:
 *   The function acquires a lock or semaphore (set_pointer_and_clear_flag) on an object at
 *   param_1+0x2c. If successful, it signals a semaphore (eventflag_clr_flg), calls a core
 *   send function (send_two_byte_payload) with a timeout value of 5, and sets a wait flag
 *   (twai_flg_obj) if the send fails. It finally releases the lock
 *   (delete_signal_semaphore). The use of 'twai_flg_obj' and the structure strongly suggest
 *   a µITRON/REALOS message sending primitive with timeout handling.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int send_message_with_timeout_104b8a3c(int param_1,uint8_t param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar2 = 0;
  if (bVar1) {
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar2 = send_two_byte_payload(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),5,param_2);
    if (iVar2 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar2;
}
