/* @k10d ready_list_unlink @ 0x1000f5b4
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed unlink_task_from_ready_list)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Removes a task from its priority ready-list, clears the priority's ready bit if the
 *   list becomes empty, and triggers a reschedule.
 * summary:
 *   The function takes a task index (param_1), computes its TCB address (index * 0x44), and
 *   reads the task's priority (offset 0x18) and its current next/prev pointers (offsets
 *   0x1e/0x20). It patches the doubly-linked list by updating the head/tail pointers at
 *   0x6a0036d0/0x6a0036d2 or the neighboring task's pointers. If the priority list becomes
 *   empty, it clears the corresponding bit in the ready bitmap at 0x6a003750. Finally, it
 *   calls reschedule_raise_dicr, which likely performs the scheduler's reschedule or
 *   context switch.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ready_list_unlink(short task_idx)

{
  short prev_idx;
  short next_idx;
  int priority;
  uint pri_minus1;
  uint bitmap_word;
  int tcb_offset;

  tcb_offset = task_idx * 0x44;
  priority = (int)*(short *)(tcb_offset + 0x6a001c00);
  prev_idx = *(short *)(tcb_offset + 0x6a001be8);
  next_idx = *(short *)(tcb_offset + 0x6a001bea);
  if (prev_idx == -1) {
    *(short *)((priority + -1) * 4 + 0x6a0036d2) = next_idx;
  }
  else {
    *(short *)(prev_idx * 0x44 + 0x6a001bea) = next_idx;
  }
  if (next_idx == -1) {
    *(short *)((priority + -1) * 4 + 0x6a0036d0) = prev_idx;
  }
  else {
    *(short *)(next_idx * 0x44 + 0x6a001be8) = prev_idx;
  }
  pri_minus1 = priority - 1;
  if (*(short *)(pri_minus1 * 4 + 0x6a0036d2) == -1) {
    tcb_offset = ((int)pri_minus1 >> 5) * 4;
    bitmap_word = *(uint *)(tcb_offset + 0x6a003750) & (0x80000000U >> (pri_minus1 & 0x1f) ^ 0xffffffff);
    *(uint *)(tcb_offset + 0x6a003750) = bitmap_word;
    if (bitmap_word == 0) {
      _DAT_6a003754 = _DAT_6a003754 & (0x80000000U >> ((int)pri_minus1 >> 5 & 0x1fU) ^ 0xffffffff);
    }
  }
  reschedule_raise_dicr();
  return;
}
