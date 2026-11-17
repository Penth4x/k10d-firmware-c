/* @k10d dispatch_event_with_timeout_104b8bd0 @ 0x104b8bd0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, prepares a payload, dispatches an event via a handler, and signals
 *   completion.
 * summary:
 *   The function first calls set_pointer_and_clear_flag to acquire a resource or lock
 *   associated with param_1. If successful, it calls map_mode_flags_to_code to prepare a
 *   stack variable, sets a timeout value (0xf or 0x10) based on param_4, and calls
 *   eventflag_clr_flg. It then invokes forward_with_mode_three to perform the main
 *   operation, passing the prepared data and timeout. If the operation returns non-zero, it
 *   calls twai_flg_obj to signal a flag. Finally, it releases the lock via
 *   delete_signal_semaphore.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dispatch_event_with_timeout_104b8bd0(int param_1,uint32_t param_2,uint32_t param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint8_t uStack_9;
  
  bVar1 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar2 = 0;
  if (bVar1) {
    uStack_9 = map_mode_flags_to_code(param_1,param_2,param_3);
    uVar3 = 0xf;
    if (param_4 != 1) {
      uVar3 = 0x10;
    }
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar2 = forward_with_mode_three(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),uVar3,&uStack_9);
    if (iVar2 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar2;
}
