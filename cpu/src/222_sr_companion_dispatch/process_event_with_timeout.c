/* @k10d process_event_with_timeout @ 0x104b84fe
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Processes an event object by acquiring a lock, preparing data, and dispatching it with
 *   a timeout.
 * summary:
 *   The function first checks a condition on the object (param_1) using
 *   set_pointer_and_clear_flag. If true, it acquires a resource (get_or_init_heap_block),
 *   prepares a payload (map_mode_index_to_code_1045b3aa), sets a flag (eventflag_clr_flg),
 *   and dispatches the event via send_two_byte_payload. If the dispatch fails, it signals a
 *   timeout object (twai_flg_obj). Finally, it releases the resource
 *   (delete_signal_semaphore).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int process_event_with_timeout(int param_1,uint8_t param_2,uint8_t param_3)

{
  bool bVar2;
  uint32_t uVar1;
  uint8_t uVar3;
  int iVar4;
  
  bVar2 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar4 = 0;
  if (bVar2) {
    get_or_init_heap_block();
    uVar1 = get_or_init_heap_block();
    uVar3 = map_mode_index_to_code_1045b3aa(uVar1,param_2,param_3);
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar4 = send_two_byte_payload(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),3,uVar3);
    if (iVar4 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar4;
}
