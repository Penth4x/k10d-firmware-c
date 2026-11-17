/* @k10d write_mmio_block_with_lock @ 0x104b8ea0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, computes a value based on a flag, and writes it to a memory-mapped I/O
 *   block.
 * summary:
 *   The function first calls set_pointer_and_clear_flag to acquire a lock or check a
 *   condition on the object at param_1. If successful, it retrieves a value from
 *   get_or_init_heap_block and processes it via map_keycode_to_index or
 *   read_byte_from_rodata_table depending on param_3. It then updates a field at
 *   param_1+0x24 and calls send_two_byte_payload to perform the actual write operation
 *   using data from param_1+0x18. Finally, it releases the lock via delete_signal_semaphore
 *   and returns the result of the write operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int write_mmio_block_with_lock(int param_1,ushort param_2,int param_3)

{
  bool bVar2;
  uint32_t uVar1;
  uint8_t uVar3;
  int iVar4;
  
  bVar2 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar4 = 0;
  if (bVar2) {
    uVar1 = get_or_init_heap_block();
    if (param_3 == 0) {
      uVar3 = map_keycode_to_index(uVar1,param_2);
    }
    else {
      uVar3 = read_byte_from_rodata_table(uVar1,param_2 & 0xff);
    }
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar4 = send_two_byte_payload(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),0x10,uVar3);
    if (iVar4 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar4;
}
