/* @k10d ready_list_insert @ 0x1000f534
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed insert_task_into_ready_list)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Inserts a task into the kernel ready list and sets its ready bit in the bitmap.
 * summary:
 *   Takes a task index (param_1), computes its slot in the ready-list array at 0x6a0036d0,
 *   and links it into the list (handling the empty-list case by initializing head/tail
 *   pointers). Sets the corresponding bit in the 64-bit ready bitmap at 0x6a003750. Updates
 *   the task's state fields at 0x6a001be8/0x6a001bea and calls reschedule_raise_dicr
 *   (likely a scheduler notification or context-switch trigger).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ready_list_insert(short task_idx)

{
  int tcb_off;
  short tail_idx;
  uint prev_idx;
  int slot_off;

  /* Byte offset of this task's control block (stride 0x44) */
  tcb_off = task_idx * 0x44;

  /* Previous task index stored in this TCB's "prev" field, minus 1 */
  prev_idx = (int)*(short *)(tcb_off + 0x6a001c00) - 1;

  /* Byte offset of this task's slot in the ready-list array */
  slot_off = prev_idx * 4;

  /* Tail index of the ready list (at 0x6a0036d2) */
  tail_idx = *(short *)(slot_off + 0x6a0036d2);

  if (tail_idx == -1) {
    /* Empty list: initialize head and tail to this task */
    *(short *)(slot_off + 0x6a0036d0) = task_idx;
    *(short *)(slot_off + 0x6a0036d2) = task_idx;

    /* Set the ready bit in the 64-bit bitmap at 0x6a003750 */
    slot_off = ((int)prev_idx >> 5) * 4;
    *(uint *)(slot_off + 0x6a003750) = *(uint *)(slot_off + 0x6a003750) | 0x80000000U >> (prev_idx & 0x1f);
    _DAT_6a003754 = _DAT_6a003754 | 0x80000000U >> ((int)prev_idx >> 5 & 0x1fU);
  }
  else {
    /* Non-empty: link this task after the current tail */
    *(short *)(tail_idx * 0x44 + 0x6a001be8) = task_idx;
    *(short *)(slot_off + 0x6a0036d2) = task_idx;
  }

  /* Mark this TCB's "next" field as end-of-list (-1) */
  *(uint16_t *)(tcb_off + 0x6a001be8) = 0xffff;

  /* Store the old tail index into this TCB's "prev" field */
  *(short *)(tcb_off + 0x6a001bea) = tail_idx;

  /* Notify the scheduler */
  reschedule_raise_dicr();
  return;
}
