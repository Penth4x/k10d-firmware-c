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

void remove_task_from_timeout_queue_1001166c(short task_idx)

{
  int node_off;
  short prev_idx;
  short next_idx;
  int prev_off;
  int next_off;

  node_off = task_idx * 0x44;
  if (*(int *)(node_off + 0x6a001c1c) == -1) {
    return;
  }
  prev_idx = *(short *)(node_off + 0x6a001bec);
  next_idx = *(short *)(node_off + 0x6a001bee);
  prev_off = (int)prev_idx;
  next_off = (int)next_idx;
  if (prev_off == -1) {
    if (next_off == -1) {
      _DAT_6a0036c4 = -1;
      _DAT_6a0036c6 = -1;
      goto LAB_1001170c;
    }
  }
  else if (next_off == -1) {
    prev_off = prev_off * 0x44;
    _DAT_6a0036c4 = prev_idx;
    *(uint16_t *)(prev_off + 0x6a001bee) = 0xffff;
    *(int *)(prev_off + 0x6a001c1c) = *(int *)(prev_off + 0x6a001c1c) + *(int *)(node_off + 0x6a001c1c);
    goto LAB_1001170c;
  }
  if (prev_off == -1) {
    *(uint16_t *)(next_off * 0x44 + 0x6a001bec) = 0xffff;
    _DAT_6a0036c6 = next_idx;
  }
  else {
    prev_off = prev_off * 0x44;
    *(short *)(prev_off + 0x6a001bee) = next_idx;
    *(short *)(next_off * 0x44 + 0x6a001bec) = prev_idx;
    *(int *)(prev_off + 0x6a001c1c) = *(int *)(prev_off + 0x6a001c1c) + *(int *)(node_off + 0x6a001c1c);
  }
LAB_1001170c:
  *(uint32_t *)(node_off + 0x6a001c1c) = 0xffffffff;
  return;
}
