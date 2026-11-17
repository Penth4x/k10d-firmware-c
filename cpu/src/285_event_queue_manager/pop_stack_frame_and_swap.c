/* @k10d pop_stack_frame_and_swap @ 0x1052aefc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Pops a 32-byte stack frame into param_1 and conditionally swaps entries in a linked
 *   list.
 * summary:
 *   The function first iterates through a list of 8-byte nodes (counted by
 *   *(param_2+0x410)) and compares them against a target list at param_2+0x228. If a match
 *   is found, it swaps the node's position in the list based on flags. It then decrements
 *   the count at param_2+0x410. Finally, it copies 8 words (32 bytes) from the current
 *   stack frame into the memory pointed to by param_1, effectively popping a stack frame or
 *   restoring a context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void pop_stack_frame_and_swap(void *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uintptr_t sp;
  
  iVar9 = 0;
  if (0 < *(int *)(param_2 + 0x410)) {
    iVar8 = 0;
    iVar1 = *(int *)(param_2 + 0x224);
    do {
      iVar6 = 0;
      if (0 < iVar1) {
        iVar5 = 0;
        do {
          piVar2 = (int *)(param_2 + 0x2a0);
          piVar3 = (int *)((int)piVar2 + iVar8);
          piVar4 = (int *)(param_2 + 0x228 + iVar5);
          iVar1 = *piVar3;
          if ((iVar1 == *piVar4) || (iVar1 == *piVar4 + 200)) {
            iVar7 = piVar3[1];
            if (piVar4[1] == 1) {
              *piVar3 = piVar2[(*(int *)(param_2 + 0x410) + -1) * 2];
              piVar3[1] = piVar2[(*(int *)(param_2 + 0x410) + -1) * 2 + 1];
              piVar2[(*(int *)(param_2 + 0x410) + -1) * 2] = iVar1;
              piVar2[(*(int *)(param_2 + 0x410) + -1) * 2 + 1] = iVar7;
            }
            if (piVar4[1] == 2) {
              *piVar3 = *piVar2;
              piVar3[1] = *(int *)(param_2 + 0x2a4);
              *piVar2 = iVar1;
              *(int *)(param_2 + 0x2a4) = iVar7;
            }
          }
          iVar1 = *(int *)(param_2 + 0x224);
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 8;
        } while (iVar6 < iVar1);
      }
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 8;
    } while (iVar9 < *(int *)(param_2 + 0x410));
  }
  if (0 < *(int *)(param_2 + 0x410)) {
    *(int *)(param_2 + 0x410) = *(int *)(param_2 + 0x410) + -1;
  }
  iVar9 = 8;
  do {
    iVar1 = iVar9 + -4;
    *(uint32_t *)(iVar1 + (int)param_1) = *(uint32_t *)(&stack0xffffffec + iVar9);
    iVar9 = iVar1;
  } while (iVar1 != 0);
  return;
}
