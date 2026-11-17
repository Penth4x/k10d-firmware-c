/* @k10d transform_and_write_vector @ 0x1038600e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Computes a 2D vector from param_2 offsets, transforms it via two callees, and writes
 *   the 8-byte result to param_5.
 * summary:
 *   Reads two 32-bit values from param_2 at offsets 0x54/0x5c and 0x58/0x60, computes their
 *   differences, and passes them to alloc_two_word_pair_1045c3dc along with a stack buffer.
 *   The result is copied to a local area, then passed to free_heap_if_flagged_1045c402 with
 *   a constant argument of 2. Finally, the 8-byte result is copied from the local area to
 *   the memory location pointed to by param_5. The specific role of the transformation
 *   (e.g., coordinate rotation, vector math) is unclear without knowing the callees'
 *   purposes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void transform_and_write_vector(uint32_t param_1,int param_2,uint32_t param_3,uint32_t param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t auStack_14 [3];
  
  alloc_two_word_pair_1045c3dc(auStack_14 + 1,*(int *)(param_2 + 0x54) - *(int *)(param_2 + 0x5c),
               *(int *)(param_2 + 0x58) - *(int *)(param_2 + 0x60));
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
