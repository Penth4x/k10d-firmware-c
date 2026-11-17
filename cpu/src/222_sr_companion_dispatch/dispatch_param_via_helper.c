/* @k10d dispatch_param_via_helper @ 0x104b8fe8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, calls a helper with a masked parameter, and releases the lock.
 * summary:
 *   The function calls set_pointer_and_clear_flag to acquire a resource (likely a mutex)
 *   associated with param_1. If successful and param_2 is non-zero, it retrieves a value
 *   from get_or_init_heap_block, masks param_2 (16-bit or 8-bit based on param_3), and
 *   passes it to either map_keycode_to_index or read_byte_from_rodata_table. It then
 *   updates a field at param_1+0x24 and calls send_two_byte_payload with the result.
 *   Finally, it releases the resource via delete_signal_semaphore. The specific camera
 *   subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dispatch_param_via_helper(int param_1,uint param_2,int param_3)

{
  bool bVar2;
  uint32_t uVar1;
  uint8_t uVar3;
  int iVar4;
  
  bVar2 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar4 = 0;
  if (bVar2) {
    if (param_2 != 0) {
      uVar1 = get_or_init_heap_block();
      if (param_3 == 0) {
        uVar3 = map_keycode_to_index(uVar1,param_2 & 0xffff);
      }
      else {
        uVar3 = read_byte_from_rodata_table(uVar1,param_2 & 0xff);
      }
      eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
      iVar4 = send_two_byte_payload(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),0x38,uVar3);
      if (iVar4 != 0) {
        twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
      }
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar4;
}
