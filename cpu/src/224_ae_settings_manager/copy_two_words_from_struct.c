/* @k10d copy_two_words_from_struct @ 0x104bb658
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Extracts two 32-bit values from a struct based on a mode field and copies them to a
 *   destination buffer.
 * summary:
 *   The function reads a mode integer from offset 0x2c of the object pointed to by param_2.
 *   Depending on whether the mode is 0/2 or 1/3, it calls helper functions
 *   (return_first_word_1045c514, read_struct_field_at_offset_4) to retrieve two values from
 *   offset 0x18 of the object, storing them into a local stack buffer via
 *   store_value_to_pointer_1045c510 and write_field_at_offset_four_1045c518. It then copies
 *   these two 32-bit values from the local buffer to the memory location pointed to by
 *   param_5. The specific camera subsystem is not identifiable from the provided pseudocode
 *   and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_two_words_from_struct(uint32_t param_1,int param_2,uint32_t param_3,uint32_t param_4,int param_5)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_14 [3];
  
  puVar3 = auStack_14 + 1;
  alloc_two_word_pair_1045c3dc(puVar3,0,0);
  iVar1 = *(int *)(param_2 + 0x2c);
  if ((iVar1 == 0) || (iVar1 == 2)) {
    uVar2 = return_first_word_1045c514((uint32_t *)(param_2 + 0x18));
    store_value_to_pointer_1045c510(puVar3,uVar2);
    uVar2 = read_struct_field_at_offset_4((uint32_t *)(param_2 + 0x18));
  }
  else {
    if ((iVar1 != 1) && (iVar1 != 3)) goto LAB_104bb6e4;
    uVar2 = read_struct_field_at_offset_4((uint32_t *)(param_2 + 0x18));
    store_value_to_pointer_1045c510(puVar3,uVar2);
    uVar2 = return_first_word_1045c514((uint32_t *)(param_2 + 0x18));
  }
  write_field_at_offset_four_1045c518(puVar3,uVar2);
LAB_104bb6e4:
  iVar1 = 8;
  do {
    iVar4 = iVar1 + -4;
    *(uint32_t *)(&stack0xffffffe4 + iVar1) = *(uint32_t *)((int)auStack_14 + iVar1);
    iVar1 = iVar4;
  } while (iVar4 != 0);
  free_heap_if_flagged_1045c402(puVar3,2);
  iVar1 = 8;
  do {
    iVar4 = iVar1 + -4;
    *(uint32_t *)(iVar4 + param_5) = *(uint32_t *)(&stack0xffffffe4 + iVar1);
    iVar1 = iVar4;
  } while (iVar4 != 0);
  return;
}
