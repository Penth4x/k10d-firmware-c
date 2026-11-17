/* @k10d guarded_call_with_lock_104b8484 @ 0x104b8484
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, calls a helper with a flag, and releases the lock, returning the
 *   helper's result.
 * summary:
 *   The function calls set_pointer_and_clear_flag to check a condition or acquire a
 *   resource. If successful, it calls eventflag_clr_flg, then invokes
 *   forward_with_mode_three with parameters derived from the input structure. If
 *   forward_with_mode_three returns non-zero, it calls twai_flg_obj. Finally, it calls
 *   delete_signal_semaphore, likely to release the lock or resource acquired initially.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int guarded_call_with_lock_104b8484(int param_1,uint8_t param_2)

{
  bool bVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t uStack_9;
  
  bVar1 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar2 = 0;
  if (bVar1) {
    uStack_9 = param_2;
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar2 = forward_with_mode_three(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),1,&uStack_9);
    if (iVar2 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar2;
}
