/* @k10d copy_struct_via_stack @ 0x1045bffe
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Copies an 8-byte structure from param_2 to param_1 using stack temporaries and helper
 *   calls.
 * summary:
 *   The function initializes a stack buffer via alloc_two_word_pair_1045c3dc, processes
 *   param_2 into a local variable via copy_four_words_from_source_1045bfe8, and combines
 *   them with add_two_structs_into_param1. It then performs a series of 4-byte memory moves
 *   to transfer data from the stack to param_1, calling free_heap_if_flagged_1045c402 on
 *   the intermediate buffers. The specific data semantics are unclear as the callees are
 *   unnamed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_struct_via_stack(void *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint8_t local_44 [8];
  /* B-6b: this is a TWO-word (8-byte) stack buffer — copy_four_words_from_source and
   * add_two_structs_into_param1 write/read offsets 0 AND 4 of it (matching stock, which uses
   * r14-0x30..-0x2c). The decompiler typed it as a single int, so fcc allocated only 4 bytes at the
   * frame top (r14-4); the +4 write then overran into the SAVED FRAME POINTER at r14 -> leave/ret
   * loaded a bogus FP -> wild `ret` to garbage. Declared as int[2] so the 8-byte access stays in it. */
  int iStack_3c [2];
  int aiStack_38 [11];

  piVar1 = aiStack_38 + 5;
  alloc_two_word_pair_1045c3dc((uint32_t *)piVar1,1,1);
  copy_four_words_from_source_1045bfe8(iStack_3c,param_2);
  add_two_structs_into_param1(local_44,iStack_3c,piVar1);
  iVar3 = 8;
  do {
    iVar2 = iVar3 + -4;
    *(uint32_t *)((int)aiStack_38 + iVar3) = *(uint32_t *)((int)aiStack_38 + iVar3 + -0x10);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  free_heap_if_flagged_1045c402(local_44,2);
  free_heap_if_flagged_1045c402(iStack_3c,2);
  iVar3 = 8;
  do {
    iVar2 = iVar3 + -4;
    *(uint32_t *)((int)aiStack_38 + iVar3 + 8) = *(uint32_t *)((int)aiStack_38 + iVar3);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  free_heap_if_flagged_1045c402(piVar1,2);
  iVar3 = 8;
  do {
    iVar2 = iVar3 + -4;
    *(uint32_t *)(iVar2 + (int)param_1) = *(uint32_t *)((int)aiStack_38 + iVar3 + 8);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  return;
}
