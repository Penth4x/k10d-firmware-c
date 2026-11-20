/* @k10d dispatch_event_with_timeout_104b88f0 @ 0x104b88f0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Checks a condition, constructs a temporary object, and dispatches a message with a
 *   timeout flag.
 * summary:
 *   The function first calls set_pointer_and_clear_flag to check a state at offset 0x2c of
 *   the input object. If true, it allocates a temporary object (cls_105a6d8c), initializes
 *   it via copy_status_block_bytes, and retrieves a value via
 *   extract_field_from_struct_1045ff0e (virtual slot 2). It then calls
 *   quantize_exposure_value to prepare a payload, sets a flag at offset 0x24, and calls
 *   forward_with_mode_three to dispatch the event. If the dispatch fails (non-zero return),
 *   it calls twai_flg_obj to set a timeout flag. Finally, it cleans up the temporary object
 *   and the state at 0x2c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dispatch_event_with_timeout_104b88f0(int param_1,uint32_t param_2,uint32_t param_3)

{
  bool bVar3;
  uint32_t uVar1;
  uint uVar2;
  int iVar4;
  uintptr_t sp;
  cls_105a6d8c acStack_28 [7];
  uint8_t uStack_9;
  
  bVar3 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar4 = 0;
  if (bVar3) {
    cls_105a6d8c_new(acStack_28);
    copy_status_block_bytes(*(int *)(param_1 + 0x1c),acStack_28);
    uVar1 = get_or_init_heap_block();
    uVar2 = extract_field_from_struct_1045ff0e(acStack_28,3);
    uStack_9 = quantize_exposure_value(uVar1,param_2,param_3,uVar2 & 0xff);
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar4 = forward_with_mode_three(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),7,&uStack_9);
    if (iVar4 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
    cls_105a6d8c_delete(acStack_28,2);
  }
  return iVar4;
}
