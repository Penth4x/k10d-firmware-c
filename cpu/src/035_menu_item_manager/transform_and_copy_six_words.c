/* @k10d transform_and_copy_six_words @ 0x10381cda
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Copies six 32-bit words from a source buffer, applies a transformation via two helper
 *   calls, and writes the result to a destination buffer.
 * summary:
 *   The function reads six 32-bit words from the memory location pointed to by param_2 +
 *   0x48. It passes the first two words to alloc_two_word_pair_1045c3dc, which appears to
 *   initialize or transform a local 24-byte buffer. After a second call to
 *   free_heap_if_flagged_1045c402 with a constant argument of 2, the function copies the
 *   six transformed words from the local buffer to the destination address in param_5. The
 *   specific nature of the transformation is unknown as the callees are not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void transform_and_copy_six_words(uint32_t param_1,int param_2,uint32_t param_3,uint32_t param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t auStack_14 [3];
  
  alloc_two_word_pair_1045c3dc(auStack_14 + 1,*(uint32_t *)(param_2 + 0x48),*(uint32_t *)(param_2 + 0x4c));
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
