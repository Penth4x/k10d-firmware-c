/* @k10d configure_and_dispatch_event @ 0x1047be3c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Validates object state, updates fields at offsets 0x8c-0x92, and dispatches a virtual
 *   call with a constructed parameter block.
 * summary:
 *   The function checks a status via call_subroutine_with_offset_c_10477e8c and
 *   increment_counters_on_nonzero_check. If valid, it copies two 16-bit values from param_2
 *   to the object and stores param_3 at offset 0x8c. It then calls alloc_heap_block_pool2,
 *   populates a local array (param_4) with pointers and constants, and invokes a virtual
 *   method (slot 7) on the object's vtable. Finally, it calls eventflag_wai_flg,
 *   eventflag_clr_flg, decrement_counter_on_success, and release_heap_block_1047c598 before
 *   returning the byte at offset 0x6c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t configure_and_dispatch_event(int param_1,uint16_t *param_2,uint32_t param_3,int *param_4)

{
  uint8_t uVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t auStack_28 [32];
  
  uVar1 = 0;
  cls_105ab468_new(auStack_28);
  iVar2 = call_subroutine_with_offset_c_10477e8c(*(int *)(param_1 + 0x50));
  if (iVar2 != 0) {
    if ((uint16_t *)(param_1 + 0x90) != param_2) {
      *(uint16_t *)(param_1 + 0x90) = *param_2;
      *(uint16_t *)(param_1 + 0x92) = param_2[1];
    }
    *(uint32_t *)(param_1 + 0x8c) = param_3;
    iVar2 = increment_counters_on_nonzero_check(*(int *)(param_1 + 0x50));
    if ((iVar2 != 0) && (iVar2 = alloc_heap_block_pool2(param_1,(void *)0x10000), iVar2 != 0)) {
      *param_4 = param_1 + 0x88;
      param_4[1] = -1;
      param_4[3] = iVar2;
      param_4[4] = 0x10000;
      iVar3 = **(int **)(param_1 + 0x60);
      (**(code **)(iVar3 + 0x3c))
                ((int)*(int **)(param_1 + 0x60) + (int)*(short *)(iVar3 + 0x38),param_1 + 0x20,
                 param_4);
      eventflag_wai_flg((uint32_t *)(param_1 + 0x24),1,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
      decrement_counter_on_success(*(int *)(param_1 + 0x50));
      release_heap_block_1047c598(param_1,(void *)iVar2);
      uVar1 = *(uint8_t *)(param_1 + 0x6c);
    }
  }
  cls_105ab468_delete(auStack_28,2);
  return uVar1;
}
