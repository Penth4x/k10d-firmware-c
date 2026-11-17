/* @k10d copy_stack_buffer_via_helper @ 0x10520fde
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 279_settings_handle_manager (unit names are model-proposed)
 * purpose:
 *   Copies a 12-byte stack buffer through two helper calls into a caller-provided stack
 *   location.
 * summary:
 *   The function calls alloc_two_word_pair_1045c3dc with a local buffer and sizes
 *   0x1c8/0x9c, then copies 12 bytes (three 32-bit words) from a stack region into a local
 *   array. It calls free_heap_if_flagged_1045c402 with the buffer and value 2, then copies
 *   the same 12 bytes from the local array into the caller's stack frame at
 *   in_stack_00000000. The two callees are unnamed, so the subsystem role is not
 *   determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_stack_buffer_via_helper(void)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  int in_stack_00000000;
  uint32_t uStack_18;
  uint32_t auStack_14 [3];
  
  alloc_two_word_pair_1045c3dc(&uStack_18,0x1c8,0x9c);
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
