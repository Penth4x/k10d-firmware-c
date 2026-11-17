/* @k10d send_two_mmio_commands @ 0x104b8d9e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Sends two 16-bit command values to an MMIO block via a helper, guarded by a lock.
 * summary:
 *   Acquires a lock on a field at offset 0x2c of param_1. If successful, it prepares two
 *   command payloads (either raw or masked to 8-bit) based on param_4. It then calls
 *   send_two_byte_payload twice with command IDs 0x10 and 0x11, passing the prepared
 *   payloads. If either call fails, it triggers a wait flag via twai_flg_obj. Finally, it
 *   releases the lock.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int send_two_mmio_commands(int param_1,ushort param_2,ushort param_3,int param_4)

{
  bool bVar2;
  uint32_t uVar1;
  uint32_t *puVar3;
  int iVar4;
  void *pvVar5;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  pvVar5 = (void *)(param_1 + 4);
  bVar2 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),pvVar5);
  iVar4 = 0;
  if (bVar2) {
    uVar1 = get_or_init_heap_block();
    if (param_4 == 0) {
      uStack_a = map_keycode_to_index(uVar1,param_2);
      uStack_9 = map_keycode_to_index(uVar1,param_3);
    }
    else {
      uStack_a = read_byte_from_rodata_table(uVar1,param_2 & 0xff);
      uStack_9 = read_byte_from_rodata_table(uVar1,param_3 & 0xff);
    }
    puVar3 = (uint32_t *)(param_1 + 0x24);
    eventflag_clr_flg(puVar3,1);
    iVar4 = send_two_byte_payload(*(int **)(param_1 + 0x18),pvVar5,0x10,uStack_a);
    if (iVar4 != 0) {
      twai_flg_obj(puVar3,1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    eventflag_clr_flg(puVar3,1);
    iVar4 = send_two_byte_payload(*(int **)(param_1 + 0x18),pvVar5,0x11,uStack_9);
    if (iVar4 != 0) {
      twai_flg_obj(puVar3,1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar4;
}
