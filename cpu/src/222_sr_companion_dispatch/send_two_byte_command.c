/* @k10d send_two_byte_command @ 0x104b8598
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Sends a 2-byte command via a communication channel after acquiring a lock.
 * summary:
 *   The function first calls set_pointer_and_clear_flag to acquire a lock or check a
 *   condition on the object at param_1. If successful, it prepares a 2-byte payload from
 *   param_2 on the stack, calls eventflag_clr_flg (likely a state setter), and then invokes
 *   forward_with_mode_three to transmit the data. If the transmission returns non-zero, it
 *   calls twai_flg_obj to set a flag. Finally, it releases the lock via
 *   delete_signal_semaphore. The specific subsystem (e.g., lens, flash, or body control) is
 *   not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int send_two_byte_command(int param_1,uint32_t param_2)

{
  bool bVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  bVar1 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar2 = 0;
  if (bVar1) {
    uStack_a = (uint8_t)((uint)param_2 >> 8);
    uStack_9 = (uint8_t)param_2;
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar2 = forward_with_mode_three(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),0xe,&uStack_a);
    if (iVar2 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar2;
}
