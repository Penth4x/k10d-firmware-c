/* @k10d process_event_with_lock_104b972c @ 0x104b972c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, processes an event via a handler, and releases the lock.
 * summary:
 *   The function calls set_pointer_and_clear_flag to acquire a lock on the object at
 *   param_1+0x2c. If successful, it calls eventflag_clr_flg, then invokes
 *   send_two_byte_payload with a pointer from param_1+0x18 and other parameters. If
 *   send_two_byte_payload returns non-zero, it calls twai_flg_obj. Finally, it calls
 *   delete_signal_semaphore to release the lock. The specific subsystem (e.g., AE, AF) is
 *   not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int process_event_with_lock_104b972c(int param_1,uint8_t param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar2 = 0;
  if (bVar1) {
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar2 = send_two_byte_payload(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),2,param_2);
    if (iVar2 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar2;
}
