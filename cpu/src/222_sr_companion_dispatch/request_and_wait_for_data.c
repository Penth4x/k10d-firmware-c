/* @k10d request_and_wait_for_data @ 0x104b96b2
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, requests a data transfer, and waits for completion before releasing
 *   the lock.
 * summary:
 *   The function calls set_pointer_and_clear_flag to acquire a resource (likely a mutex or
 *   semaphore) associated with param_1. If successful, it calls eventflag_clr_flg to signal
 *   a state change, then invokes forward_with_mode_three to perform the actual data
 *   operation. If the operation returns non-zero, it calls twai_flg_obj to set a flag.
 *   Finally, it releases the resource via delete_signal_semaphore and returns the status
 *   from forward_with_mode_three.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int request_and_wait_for_data(int param_1,uint32_t param_2)

{
  bool bVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t uStack_4;
  
  uStack_4 = param_2;
  bVar1 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar2 = 0;
  if (bVar1) {
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar2 = forward_with_mode_three(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),2,
                         (void *)((int)&uStack_4 + 3));
    if (iVar2 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar2;
}
