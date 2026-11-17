/* @k10d send_message_with_timeout_104b981c @ 0x104b981c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Sends a message to a task or channel, waiting for a response with a timeout.
 * summary:
 *   The function acquires a lock (set_pointer_and_clear_flag), sets a flag
 *   (eventflag_clr_flg), and calls send_two_byte_payload to perform the actual send
 *   operation with a timeout value of 0x39. If the send fails (non-zero return), it calls
 *   twai_flg_obj to set a flag. Finally, it releases the lock (delete_signal_semaphore).
 *   The use of twai_flg_obj and the lock/unlock pattern strongly suggests a µITRON-style
 *   message send with timeout.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int send_message_with_timeout_104b981c(int param_1,uint8_t param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar2 = 0;
  if (bVar1) {
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar2 = send_two_byte_payload(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),0x39,param_2);
    if (iVar2 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar2;
}
