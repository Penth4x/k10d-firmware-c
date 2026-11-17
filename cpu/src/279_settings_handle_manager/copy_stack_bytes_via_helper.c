/* @k10d copy_stack_bytes_via_helper @ 0x10520d1c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 279_settings_handle_manager (unit names are model-proposed)
 * purpose:
 *   Copies 8 bytes from a stack region into a local buffer using two helper calls.
 * summary:
 *   The function calls alloc_two_word_pair_1045c3dc with a local pointer and constants
 *   0x118 and 0x72, then manually copies 8 bytes (two 4-byte words) from a stack offset
 *   into a local array. It then calls free_heap_if_flagged_1045c402 with the local pointer
 *   and value 2, followed by another 8-byte copy from the local array back to the stack.
 *   The exact purpose of the helper functions is unknown, but the mechanical operation is a
 *   small data copy mediated by these two calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_stack_bytes_via_helper(void)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  int in_stack_00000000;
  uint32_t uStack_18;
  uint32_t auStack_14 [3];
  
  alloc_two_word_pair_1045c3dc(&uStack_18,0x118,0x72);
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)((int)auStack_14 + iVar2) = *(uint32_t *)(&stack0xffffffe4 + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  free_heap_if_flagged_1045c402(&uStack_18,2);
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar1 + in_stack_00000000) = *(uint32_t *)((int)auStack_14 + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
