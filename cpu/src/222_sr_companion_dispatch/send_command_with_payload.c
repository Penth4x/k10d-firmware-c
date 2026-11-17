/* @k10d send_command_with_payload @ 0x104b8cee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, computes a payload byte from parameters, and dispatches a command via
 *   a helper function.
 * summary:
 *   The function first calls set_pointer_and_clear_flag to acquire a resource or lock. If
 *   successful, it retrieves a context pointer from get_or_init_heap_block and determines a
 *   single-byte value (uVar3) based on param_2 and param_3. It then calls
 *   send_two_byte_payload with this byte as an argument. If the dispatch fails (non-zero
 *   return), it calls twai_flg_obj to set a flag. Finally, it releases the lock via
 *   delete_signal_semaphore and returns the result of the dispatch.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int send_command_with_payload(int param_1,uint param_2,int param_3)

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
      if (param_2 == 0) {
        uVar3 = 0xff;
      }
      else {
        uVar3 = map_keycode_to_index(uVar1,param_2 & 0xffff);
      }
    }
    else {
      uVar3 = read_byte_from_rodata_table(uVar1,param_2 & 0xff);
    }
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar4 = send_two_byte_payload(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),2,uVar3);
    if (iVar4 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar4;
}
