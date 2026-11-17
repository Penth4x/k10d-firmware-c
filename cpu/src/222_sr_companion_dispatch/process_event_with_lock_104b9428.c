/* @k10d process_event_with_lock_104b9428 @ 0x104b9428
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, processes an event via a helper chain, and releases the lock.
 * summary:
 *   The function calls set_pointer_and_clear_flag to acquire a lock (likely a mutex or
 *   semaphore) on a field at offset 0x2c. If successful, it calls eventflag_clr_flg, then
 *   get_or_init_heap_block and map_index_to_code_value to prepare data, and finally calls
 *   send_two_byte_payload to perform the main operation. It releases the lock via
 *   delete_signal_semaphore and returns the result of the main operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int process_event_with_lock_104b9428(int param_1,uint8_t param_2)

{
  bool bVar2;
  uint32_t uVar1;
  uint8_t uVar3;
  int iVar4;
  
  bVar2 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar4 = 0;
  if (bVar2) {
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    uVar1 = get_or_init_heap_block();
    uVar3 = map_index_to_code_value(uVar1,param_2);
    iVar4 = send_two_byte_payload(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),4,uVar3);
    if (iVar4 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar4;
}
