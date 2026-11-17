/* @k10d copy_transformed_pair @ 0x104bba62
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads two values from param_2, processes them via helper functions, and writes the
 *   8-byte result to param_1.
 * summary:
 *   The function calls return_first_word_1045c514 and read_struct_field_at_offset_4 on a
 *   pointer offset by 0x20 from param_2. It passes these results to
 *   alloc_two_word_pair_1045c3dc, which appears to store an 8-byte structure on the stack.
 *   After calling free_heap_if_flagged_1045c402, it copies this 8-byte block from the stack
 *   to the memory location pointed to by param_1. The specific nature of the transformation
 *   or data type is unclear due to unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_transformed_pair(void *param_1,void *param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_18 [3];
  
  uVar1 = return_first_word_1045c514((uint32_t *)((int)param_2 + 0x20));
  uVar2 = read_struct_field_at_offset_4((uint32_t *)((int)param_2 + 0x20));
  alloc_two_word_pair_1045c3dc(auStack_18 + 1,uVar1,uVar2);
  iVar4 = 8;
  do {
    iVar3 = iVar4 + -4;
    *(uint32_t *)(&stack0xffffffe0 + iVar4) = *(uint32_t *)((int)auStack_18 + iVar4);
    iVar4 = iVar3;
  } while (iVar3 != 0);
  free_heap_if_flagged_1045c402(auStack_18 + 1,2);
  iVar4 = 8;
  do {
    iVar3 = iVar4 + -4;
    *(uint32_t *)(iVar3 + (int)param_1) = *(uint32_t *)(&stack0xffffffe0 + iVar4);
    iVar4 = iVar3;
  } while (iVar3 != 0);
  return;
}
