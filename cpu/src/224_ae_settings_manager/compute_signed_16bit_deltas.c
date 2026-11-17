/* @k10d compute_signed_16bit_deltas @ 0x104bbc7e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_signed_16bit_deltas(void *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t *puVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_18 [3];
  
  puVar3 = auStack_18 + 1;
  alloc_two_word_pair_1045c3dc(puVar3,0,0);
  iVar1 = *(int *)(param_2 + 0x2c);
  if ((iVar1 == 0) || (iVar1 == 2)) {
    store_value_to_pointer_1045c510(puVar3,*(int *)(param_2 + 0x48) - *(int *)(param_2 + 0x40) & 0xffff);
    uVar2 = *(int *)(param_2 + 0x4c) - *(int *)(param_2 + 0x44);
  }
  else {
    if ((iVar1 != 1) && (iVar1 != 3)) goto LAB_104bbd04;
    store_value_to_pointer_1045c510(puVar3,*(int *)(param_2 + 0x4c) - *(int *)(param_2 + 0x44) & 0xffff);
    uVar2 = *(int *)(param_2 + 0x48) - *(int *)(param_2 + 0x40);
  }
  write_field_at_offset_four_1045c518(puVar3,uVar2 & 0xffff);
LAB_104bbd04:
  iVar1 = 8;
  do {
    iVar4 = iVar1 + -4;
    *(uint32_t *)(&stack0xffffffe0 + iVar1) = *(uint32_t *)((int)auStack_18 + iVar1);
    iVar1 = iVar4;
  } while (iVar4 != 0);
  free_heap_if_flagged_1045c402(puVar3,2);
  iVar1 = 8;
  do {
    iVar4 = iVar1 + -4;
    *(uint32_t *)(iVar4 + (int)param_1) = *(uint32_t *)(&stack0xffffffe0 + iVar1);
    iVar1 = iVar4;
  } while (iVar4 != 0);
  return;
}
