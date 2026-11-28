/* @k10d remove_task_from_timeout_queue_100115c4 @ 0x100115c4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Removes a task from the kernel timeout queue and updates the queue's head pointer if it
 *   was the first entry.
 * summary:
 *   The function clears a link field in a queue node (DAT_10011d04 + offset), calls two
 *   helper functions (update_timeout_queue_entry, dequeue_timeout_entry) likely for list
 *   manipulation or task state updates, and then checks if the removed task was the head of
 *   the queue (indicated by a -1 marker and index comparison). If so, it calls
 *   ready_list_unlink and ready_list_insert to update the queue head and possibly wake the
 *   scheduler. The module context (rtos_kernel, timeout-queue code) strongly supports this
 *   interpretation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void remove_task_from_timeout_queue_100115c4(uint32_t task_index, uint32_t queue_slot)

{
  uint32_t task_base;

  /* Clear the next-link field in the timeout-queue node (14-byte stride). */
  *(uint16_t *)(DAT_10011d04/*ROM*/ + (uint16_t)queue_slot * 0xe - 2) = 0;

  update_timeout_queue_entry((uint16_t)task_index, (uint16_t)queue_slot);
  dequeue_timeout_entry((uint16_t)queue_slot);

  /* Per-task control block lives at 0x6a001be8 + task_index * 0x44. */
  task_base = (uint32_t)task_index * 0x44 + 0x6a001be8;

  if (*(short *)(task_base + 0x8) == -1 &&
      *(short *)(task_base + 0x18) < *(short *)(task_base + 0x1c)) {
    ready_list_unlink((uint16_t)task_index);
    *(uint16_t *)(task_base + 0x18) = *(uint16_t *)(task_base + 0x1c);
    ready_list_insert((uint16_t)task_index);
  }
}
