/* @k10d compute_centered_point_from_bounds @ 0x104bbe70
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Computes the center point of two bounding boxes and writes the result to a destination
 *   buffer.
 * summary:
 *   The function initializes two local structures from param_2 using
 *   compute_signed_16bit_deltas and compute_two_16bit_deltas. It then queries properties
 *   (likely min/max coordinates) from both structures via read_first_word_1045bd4c/56 and
 *   return_first_word_1045c514/1e. It calculates the midpoint of each dimension (using
 *   integer division by 2) and stores the resulting center coordinates in a local buffer.
 *   Finally, it copies this 16-byte result structure to the memory location pointed to by
 *   param_5.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_centered_point_from_bounds(uint32_t param_1,uint32_t *param_2,uint32_t param_3,uint32_t param_4,
                 int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint32_t **ppuVar5;
  uintptr_t sp;
  uint32_t *apuStack_3c [5];
  uint32_t uStack_28;
  uint32_t auStack_24 [7];
  
  compute_signed_16bit_deltas(apuStack_3c + 3,(int)param_2);
  compute_two_16bit_deltas(&uStack_28,param_2);
  iVar1 = read_first_word_1045bd4c(&uStack_28);
  ppuVar5 = apuStack_3c + 3;
  iVar2 = return_first_word_1045c514((uint32_t *)ppuVar5);
  iVar3 = get_second_word_of_struct(&uStack_28);
  iVar4 = read_struct_field_at_offset_4(ppuVar5);
  apuStack_3c[0] = auStack_24 + 1;
  alloc_two_word_pair_1045bc2e(apuStack_3c[0],iVar1 + (iVar2 - 1U >> 1),iVar3 + (iVar4 - 1U >> 1));
  iVar1 = 8;
  do {
    iVar2 = iVar1 + -4;
    *(uint32_t *)((int)apuStack_3c + iVar1) = *(uint32_t *)((int)auStack_24 + iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0);
  free_heap_block_if_flagged_1045bc54(apuStack_3c[0],2);
  free_heap_block_if_flagged_1045bc54(&uStack_28,2);
  free_heap_if_flagged_1045c402(ppuVar5,2);
  iVar1 = 8;
  do {
    iVar2 = iVar1 + -4;
    *(uint32_t *)(iVar2 + param_5) = *(uint32_t *)((int)apuStack_3c + iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0);
  return;
}
