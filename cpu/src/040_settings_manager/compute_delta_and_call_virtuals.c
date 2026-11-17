/* @k10d compute_delta_and_call_virtuals @ 0x1039cf04
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

int compute_delta_and_call_virtuals(uint32_t param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t *puStack_34;
  uint8_t auStack_30 [8];
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint8_t auStack_20 [24];
  int iVar5;
  
  (**(code **)(*(int *)(param_2 + 0xc) + 0x2c))
            (&uStack_28,*(short *)(*(int *)(param_2 + 0xc) + 0x28) + param_2);
  puStack_34 = &uStack_28;
  iVar3 = return_first_word_1045c514(puStack_34);
  (**(code **)(*(int *)(param_2 + 0xc) + 0x1c))
            (auStack_20,*(short *)(*(int *)(param_2 + 0xc) + 0x18) + param_2);
  store_word_to_pointer_1045bd48((uint32_t *)auStack_20,param_3 - iVar3);
  iVar2 = *(int *)(param_2 + 0xc);
  sVar1 = *(short *)(iVar2 + 0x10);
  iVar5 = 8;
  do {
    iVar4 = iVar5 + -4;
    *(uint32_t *)(auStack_30 + iVar5 + -4) = *(uint32_t *)((int)&uStack_24 + iVar5);
    iVar5 = iVar4;
  } while (iVar4 != 0);
  (**(code **)(iVar2 + 0x14))(sVar1 + param_2,auStack_30);
  free_heap_block_if_flagged_1045bc54(auStack_30,2);
  free_heap_block_if_flagged_1045bc54(auStack_20,2);
  free_heap_if_flagged_1045c402(puStack_34,2);
  return param_3 - iVar3;
}
