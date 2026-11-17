/* @k10d transform_and_copy_two_words @ 0x104bbad0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads two 16-bit values from param_2, passes them to a helper, transforms the result,
 *   and copies 8 bytes to param_5.
 * summary:
 *   The function extracts two 16-bit values from offsets 0x28 and 0x2a of the structure
 *   pointed to by param_2. It calls alloc_two_word_pair_1045c3dc with these values and a
 *   stack buffer, then copies 8 bytes from that buffer to a local area. It calls
 *   free_heap_if_flagged_1045c402 with the stack buffer and the value 2, then copies the
 *   8-byte result from the stack buffer to the memory location pointed to by param_5. The
 *   specific roles of the helper functions are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void transform_and_copy_two_words(uint32_t param_1,int param_2,uint32_t param_3,uint32_t param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t auStack_14 [3];
  
  alloc_two_word_pair_1045c3dc(auStack_14 + 1,(uint)*(ushort *)(param_2 + 0x28),(uint)*(ushort *)(param_2 + 0x2a));
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
