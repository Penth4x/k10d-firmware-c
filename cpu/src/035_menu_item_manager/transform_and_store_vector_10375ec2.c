/* @k10d transform_and_store_vector_10375ec2 @ 0x10375ec2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Computes a 2D vector from struct fields, applies a transformation, and writes the
 *   result to a destination buffer.
 * summary:
 *   The function reads two 32-bit values from offsets 0x50/0x58 and 0x54/0x5c of the
 *   structure pointed to by param_2, calculates their differences, and passes them to
 *   alloc_two_word_pair_1045c3dc. It then copies the resulting 8-byte output from the stack
 *   to a temporary location, calls free_heap_if_flagged_1045c402 with a mode parameter of
 *   2, and finally copies the transformed 8-byte result to the memory location specified by
 *   param_5. The specific nature of the transformation and the data domain (e.g.,
 *   coordinates, sensor data) cannot be determined from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void transform_and_store_vector_10375ec2(uint32_t param_1,int param_2,uint32_t param_3,uint32_t param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t auStack_14 [3];
  
  alloc_two_word_pair_1045c3dc(auStack_14 + 1,*(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x58),
               *(int *)(param_2 + 0x54) - *(int *)(param_2 + 0x5c));
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(&stack0xffffffe4 + iVar2) = *(uint32_t *)((int)auStack_14 + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  free_heap_if_flagged_1045c402(auStack_14 + 1,2);
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar1 + param_5) = *(uint32_t *)(&stack0xffffffe4 + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
