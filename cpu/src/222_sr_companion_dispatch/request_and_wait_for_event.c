/* @k10d request_and_wait_for_event @ 0x104b962a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, requests an event with parameters, and waits for completion or
 *   timeout.
 * summary:
 *   The function calls set_pointer_and_clear_flag to acquire a lock on the object at
 *   param_1+0x2c. If successful, it calls eventflag_clr_flg to set a flag, then calls
 *   forward_with_mode_three to perform an operation with a timeout (param_2) and mode
 *   (param_3). If the operation fails (non-zero return), it calls twai_flg_obj to wait for
 *   a flag. Finally, it releases the lock via delete_signal_semaphore. The specific
 *   subsystem (e.g., lens, sensor) is not identifiable from the generic lock/wait/request
 *   pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int request_and_wait_for_event(int param_1,int param_2,uint8_t param_3)

{
  bool bVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  bVar1 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar2 = 0;
  if (bVar1) {
    uStack_9 = param_2 != 0;
    uStack_a = param_3;
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar2 = forward_with_mode_three(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),3,&uStack_a);
    if (iVar2 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar2;
}
