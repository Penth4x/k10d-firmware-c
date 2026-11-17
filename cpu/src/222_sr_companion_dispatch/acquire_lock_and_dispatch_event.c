/* @k10d acquire_lock_and_dispatch_event @ 0x104b93ae
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, calls an event handler with a 0x27 code, and signals a completion
 *   flag.
 * summary:
 *   The function calls set_pointer_and_clear_flag to acquire a lock on the object at
 *   param_1+0x2c. If successful, it initializes a field at param_1+0x24, invokes
 *   send_two_byte_payload with a parameter of 0x27, and if that returns non-zero, calls
 *   twai_flg_obj to set a flag. Finally, it releases the lock via delete_signal_semaphore.
 *   The specific subsystem (e.g., AE, AF) is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int acquire_lock_and_dispatch_event(int param_1,uint8_t param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar2 = 0;
  if (bVar1) {
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar2 = send_two_byte_payload(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),0x27,param_2);
    if (iVar2 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar2;
}
