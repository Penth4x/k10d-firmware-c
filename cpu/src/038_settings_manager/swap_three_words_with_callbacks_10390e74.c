/* @k10d swap_three_words_with_callbacks_10390e74 @ 0x10390e74
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 038_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies three 32-bit words from param_2 to a stack buffer and then to param_1, invoking
 *   two callbacks on param_2+0xc before and after the copy.
 * summary:
 *   The function first calls check_offset_c_nonzero_10390edc on param_2; if true it calls
 *   call_kernel_with_short_id on the pointer at param_2+0xc. It then copies three
 *   consecutive 32-bit words (offsets 0x08, 0x04, 0x00) from param_2 into a local stack
 *   array. It repeats the check_offset_c_nonzero_10390edc check and, if true, calls
 *   check_kernel_call_success_10459d88 on param_2+0xc. Finally it copies the three words
 *   from the stack buffer into param_1. The net effect is a three-word swap between param_1
 *   and param_2 with pre/post hooks.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void swap_three_words_with_callbacks_10390e74(void *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  uint32_t auStack_18 [3];
  
  bVar1 = check_offset_c_nonzero_10390edc((void *)param_2);
  if (bVar1) {
    call_kernel_with_short_id((uint32_t *)(param_2 + 0xc));
  }
  iVar3 = 0xc;
  do {
    iVar2 = iVar3 + -4;
    *(uint32_t *)(&stack0xffffffe4 + iVar3) = *(uint32_t *)(iVar2 + param_2);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  bVar1 = check_offset_c_nonzero_10390edc((void *)param_2);
  if (bVar1) {
    check_kernel_call_success_10459d88((uint32_t *)(param_2 + 0xc));
  }
  iVar3 = 0xc;
  do {
    iVar2 = iVar3 + -4;
    *(uint32_t *)(iVar2 + (int)param_1) = *(uint32_t *)(&stack0xffffffe4 + iVar3);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  return;
}
