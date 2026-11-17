/* @k10d dispatch_event_with_timeout_104b8b48 @ 0x104b8b48
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Checks a condition, then calls a handler with a timeout value and a flag byte,
 *   returning the handler's result.
 * summary:
 *   The function first calls set_pointer_and_clear_flag with pointers to offsets 0x2c and 4
 *   of param_1. If true, it selects a timeout value (0x13 or 0x14) based on param_3, calls
 *   eventflag_clr_flg, and then invokes forward_with_mode_three with a pointer from offset
 *   0x18, the offset 4 pointer, the timeout, and a stack variable containing param_2. If
 *   forward_with_mode_three returns non-zero, it calls twai_flg_obj. Finally, it calls
 *   delete_signal_semaphore and returns the result of forward_with_mode_three.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dispatch_event_with_timeout_104b8b48(int param_1,uint8_t param_2,int param_3)

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
      uVar3 = 0x13;
    }
    else {
      uVar3 = 0x14;
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
