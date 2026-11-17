/* @k10d swap_three_words_with_callbacks_10391b84 @ 0x10391b84
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Exchanges three 32-bit words between two memory locations, invoking conditional
 *   callbacks before and after the swap.
 * summary:
 *   The function checks a condition via check_offset_c_nonzero_10391bec on param_2. If
 *   true, it calls call_kernel_with_short_id on the third word of param_2. It then copies
 *   three words (offsets 0x00, 0x04, 0x08) from param_2 to a local stack buffer. It re-
 *   checks the condition and calls check_kernel_call_success_10459d88 if true. Finally, it
 *   copies the three words from the stack buffer to param_1. This effectively swaps the
 *   first three words of the two structures pointed to by param_1 and param_2, with pre-
 *   and post-swap side effects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void swap_three_words_with_callbacks_10391b84(void *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  uint32_t auStack_18 [3];
  
  bVar1 = check_offset_c_nonzero_10391bec((void *)param_2);
  if (bVar1) {
    call_kernel_with_short_id((uint32_t *)(param_2 + 0xc));
  }
  iVar3 = 0xc;
  do {
    iVar2 = iVar3 + -4;
    *(uint32_t *)(&stack0xffffffe4 + iVar3) = *(uint32_t *)(iVar2 + param_2);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  bVar1 = check_offset_c_nonzero_10391bec((void *)param_2);
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
