/* @k10d process_event_with_two_objects @ 0x104b91a6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Constructs two temporary objects, computes a result via helper calls, and dispatches an
 *   event if the result is non-zero.
 * summary:
 *   The function first checks a condition using set_pointer_and_clear_flag. If true, it
 *   instantiates two objects (cls_105a6abc and cls_105a6d8c), calls virtual methods on
 *   them, and passes the results to lookup_aperture_value_index. It then calls
 *   forward_with_mode_three with the computed result; if that returns non-zero, it calls
 *   twai_flg_obj. Finally, it cleans up the temporary objects and calls
 *   delete_signal_semaphore.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int process_event_with_two_objects(int param_1,int param_2,uint param_3,int param_4)

{
  bool bVar3;
  uint uVar1;
  uint32_t uVar2;
  int iVar4;
  uintptr_t sp;
  uint8_t *puVar5;
  uint8_t auStack_70 [8];
  uint8_t uStack_3a;
  uint8_t uStack_39;
  cls_105a6abc acStack_38 [5];
  cls_105a6d8c acStack_24 [7];
  
  puVar5 = auStack_70;
  bVar3 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar4 = 0;
  if (bVar3) {
    cls_105a6abc_new(acStack_38);
    copy_buffer_with_lock_1045e22a(*(int *)(param_1 + 0x1c),acStack_38);
    iVar4 = extract_bitfield_from_byte_array(acStack_38,0x13);
    cls_105a6d8c_new(acStack_24);
    copy_status_block_bytes(*(int *)(param_1 + 0x1c),acStack_24);
    uVar1 = extract_field_from_struct_1045ff0e(acStack_24,3);
    uVar2 = get_or_init_heap_block();
    puVar5[3] = param_2 != 0;
    puVar5[7] = (char)iVar4;
    uVar1 = lookup_aperture_value_index(uVar2,param_3,param_4,uVar1 & 0xff,puVar5[3],puVar5[7]);
    uStack_3a = (char)uVar1;
    uStack_39 = param_2 != 0;
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar4 = forward_with_mode_three(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),3,&uStack_3a);
    if (iVar4 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
    cls_105a6d8c_delete(acStack_24,2);
    cls_105a6abc_delete(acStack_38,2);
  }
  return iVar4;
}
