/* @k10d copy_four_words_and_call_helper @ 0x10493e06
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Copies four consecutive 32-bit words from param_2 to a stack buffer and passes the
 *   buffer to a helper.
 * summary:
 *   The function performs a small backward loop that copies 16 bytes (four int-sized words)
 *   from the memory pointed to by param_2 into a local stack array. It then calls
 *   copy_event_payload_and_notify with param_1 and a pointer to the second element of the
 *   local array. The specific role of the data or the helper is not determinable from the
 *   provided pseudocode and unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_four_words_and_call_helper(int *param_1,void *param_2)

{
  int iVar1;
  uintptr_t sp;
  int aiStack_14 [3];
  int iVar2;
  
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)((int)aiStack_14 + iVar2) = *(uint32_t *)(iVar1 + (int)param_2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  copy_event_payload_and_notify(param_1,aiStack_14 + 1);
  return;
}
