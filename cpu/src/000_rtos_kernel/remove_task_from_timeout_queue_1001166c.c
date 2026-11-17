/* @k10d remove_task_from_timeout_queue_1001166c @ 0x1001166c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Unlinks a task control block from a doubly-linked timeout queue and updates the queue
 *   head/tail pointers.
 * summary:
 *   The function takes a task index (param_1), computes the offset into a task array
 *   (stride 0x44), and checks a linked-list pointer at offset 0x1c1c. If the node is not
 *   already unlinked (value != -1), it reads the previous (0x1bec) and next (0x1bee) node
 *   indices. It then performs standard doubly-linked list removal: updating the next node's
 *   previous pointer, the previous node's next pointer, and adjusting the global queue
 *   head/tail pointers (_DAT_6a0036c4/_DAT_6a0036c6) if the removed node was at either end.
 *   Finally, it marks the node as unlinked by setting its list pointer to -1. This is a
 *   standard kernel timeout-queue removal operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void remove_task_from_timeout_queue_1001166c(short param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1 * 0x44;
  if (*(int *)(iVar1 + 0x6a001c1c) == -1) {
    return;
  }
  sVar2 = *(short *)(iVar1 + 0x6a001bec);
  sVar3 = *(short *)(iVar1 + 0x6a001bee);
  iVar5 = (int)sVar2;
  iVar4 = (int)sVar3;
  if (iVar5 == -1) {
    if (iVar4 == -1) {
      _DAT_6a0036c4 = -1;
      _DAT_6a0036c6 = -1;
      goto LAB_1001170c;
    }
  }
  else if (iVar4 == -1) {
    iVar5 = iVar5 * 0x44;
    _DAT_6a0036c4 = sVar2;
    *(uint16_t *)(iVar5 + 0x6a001bee) = 0xffff;
    *(int *)(iVar5 + 0x6a001c1c) = *(int *)(iVar5 + 0x6a001c1c) + *(int *)(iVar1 + 0x6a001c1c);
    goto LAB_1001170c;
  }
  if (iVar5 == -1) {
    *(uint16_t *)(iVar4 * 0x44 + 0x6a001bec) = 0xffff;
    _DAT_6a0036c6 = sVar3;
  }
  else {
    iVar5 = iVar5 * 0x44;
    *(short *)(iVar5 + 0x6a001bee) = sVar3;
    *(short *)(iVar4 * 0x44 + 0x6a001bec) = sVar2;
    *(int *)(iVar5 + 0x6a001c1c) = *(int *)(iVar5 + 0x6a001c1c) + *(int *)(iVar1 + 0x6a001c1c);
  }
LAB_1001170c:
  *(uint32_t *)(iVar1 + 0x6a001c1c) = 0xffffffff;
  return;
}
