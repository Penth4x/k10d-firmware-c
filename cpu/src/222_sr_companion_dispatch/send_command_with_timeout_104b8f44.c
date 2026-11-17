/* @k10d send_command_with_timeout_104b8f44 @ 0x104b8f44
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, prepares a command byte, sends it via a helper, and waits for a
 *   response with a timeout.
 * summary:
 *   The function first calls set_pointer_and_clear_flag to acquire a resource or lock
 *   associated with param_1. If successful, it retrieves a context from
 *   get_or_init_heap_block and prepares a command byte using either map_keycode_to_index or
 *   read_byte_from_rodata_table based on param_3. It then calls send_two_byte_payload to
 *   transmit the command and waits for a response using twai_flg_obj with a timeout defined
 *   by _DAT_105a2af0. Finally, it releases the lock via delete_signal_semaphore and returns
 *   the result of the transmission.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int send_command_with_timeout_104b8f44(int param_1,ushort param_2,int param_3)

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
    iVar4 = send_two_byte_payload(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),0x11,uVar3);
    if (iVar4 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar4;
}
