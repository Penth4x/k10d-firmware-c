/* @k10d acquire_lock_and_process_event @ 0x104b990c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, calls an unprocessed event handler, and signals a completion flag if
 *   the handler succeeds.
 * summary:
 *   The function first calls set_pointer_and_clear_flag, likely to acquire a mutex or
 *   semaphore associated with the object at param_1. If successful, it calls
 *   eventflag_clr_flg, invokes send_two_byte_payload with parameters from the object, and
 *   if that returns non-zero, calls twai_flg_obj to set a flag. Finally, it calls
 *   delete_signal_semaphore, likely to release the lock. The specific subsystem is not
 *   identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int acquire_lock_and_process_event(int param_1,uint8_t param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar2 = 0;
  if (bVar1) {
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar2 = send_two_byte_payload(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),0xe,param_2);
    if (iVar2 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar2;
}
