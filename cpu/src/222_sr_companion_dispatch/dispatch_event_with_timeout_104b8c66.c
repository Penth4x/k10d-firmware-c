/* @k10d dispatch_event_with_timeout_104b8c66 @ 0x104b8c66
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Checks a condition, then dispatches an event with a timeout value based on a mode
 *   parameter.
 * summary:
 *   The function first calls set_pointer_and_clear_flag to check a condition on the object
 *   at param_1. If true, it selects a timeout value (0x11 or 0x12) based on param_3,
 *   prepares a stack variable with param_2, and calls forward_with_mode_three to perform
 *   the main operation. If the operation succeeds (returns non-zero), it calls twai_flg_obj
 *   to set a flag. Finally, it calls delete_signal_semaphore to clean up or release the
 *   condition state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dispatch_event_with_timeout_104b8c66(int param_1,uint8_t param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint8_t uStack_9;
  
  bVar1 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar2 = 0;
  if (bVar1) {
    if (param_3 == 1) {
      uVar3 = 0x11;
    }
    else {
      uVar3 = 0x12;
    }
    uStack_9 = param_2;
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar2 = forward_with_mode_three(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),uVar3,&uStack_9);
    if (iVar2 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar2;
}
