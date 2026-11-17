/* @k10d send_command_with_timeout_104b87e8 @ 0x104b87e8
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Sends a command byte to a peripheral via a communication handler, waiting for a
 *   response with a timeout.
 * summary:
 *   The function acquires a lock (set_pointer_and_clear_flag), retrieves a context handle
 *   (get_or_init_heap_block), and prepares a command byte (clamp_byte_plus_one). It then
 *   calls forward_with_mode_three to transmit the command and wait for a response, using a
 *   timeout value of 0xd. If the operation fails, it triggers a timeout flag
 *   (twai_flg_obj). Finally, it releases the lock (delete_signal_semaphore).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int send_command_with_timeout_104b87e8(int param_1,uint param_2)

{
  bool bVar3;
  uint32_t uVar1;
  uint uVar2;
  int iVar4;
  uintptr_t sp;
  uint8_t uStack_9;
  
  bVar3 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar4 = 0;
  if (bVar3) {
    uVar1 = get_or_init_heap_block();
    uVar2 = clamp_byte_plus_one(uVar1,param_2 & 0xff);
    uStack_9 = (char)uVar2;
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar4 = forward_with_mode_three(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),0xd,&uStack_9);
    if (iVar4 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar4;
}
