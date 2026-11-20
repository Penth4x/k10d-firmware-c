/* @k10d process_event_with_two_params @ 0x104b9092
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Checks a condition, constructs two temporary objects, computes a result via a helper,
 *   and dispatches it if non-zero.
 * summary:
 *   The function first calls set_pointer_and_clear_flag to check a state. If true, it
 *   instantiates two objects (cls_105a6d8c and cls_105a6abc), retrieves values from them
 *   via virtual calls, and passes them along with param_2 and param_3 to
 *   lookup_or_compute_index. The result is stored in a local variable. If the subsequent
 *   call to forward_with_mode_three returns non-zero, it calls twai_flg_obj. Finally, it
 *   cleans up the temporary objects and calls delete_signal_semaphore.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int process_event_with_two_params(int param_1,uint param_2,uint param_3)

{
  bool bVar3;
  uint32_t uVar1;
  uint uVar2;
  int iVar4;
  uintptr_t sp;
  uint8_t *puVar5;
  uint8_t auStack_68 [4];
  cls_105a6d8c acStack_3c [7];
  cls_105a6abc acStack_20 [5];
  uint8_t uStack_9;
  
  puVar5 = auStack_68;
  bVar3 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar4 = 0;
  if (bVar3) {
    cls_105a6d8c_new(acStack_3c);
    copy_status_block_bytes(*(int *)(param_1 + 0x1c),acStack_3c);
    cls_105a6abc_new(acStack_20);
    copy_buffer_with_lock_1045e22a(*(int *)(param_1 + 0x1c),acStack_20);
    uVar1 = get_or_init_heap_block();
    uVar2 = extract_field_from_struct_1045ff0e(acStack_3c,3);
    iVar4 = extract_bitfield_from_byte_array(acStack_20,5);
    puVar5[3] = (char)iVar4;
    uVar2 = lookup_or_compute_index(uVar1,param_2,param_3,uVar2 & 0xff,puVar5[3]);
    uStack_9 = (char)uVar2;
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar4 = forward_with_mode_three(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),2,&uStack_9);
    if (iVar4 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
    cls_105a6abc_delete(acStack_20,2);
    cls_105a6d8c_delete(acStack_3c,2);
  }
  return iVar4;
}
