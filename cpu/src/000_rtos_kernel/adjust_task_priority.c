/* @k10d adjust_task_priority @ 0x10010028
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void adjust_task_priority(int task_id, uint32_t caller_priority)

{
  int state_entry_addr;
  short next_task_id;
  int state_bit;
  int next_task_offset;

  /* Load the "next" pointer from the calling task's control block (offset 0x20) */
  next_task_id = *(short *)((short)task_id * 0x44 + 0x6a001c08);
  while( true ) {
    /* Compute address into the per-task state table indexed by next_task_id */
    state_entry_addr = DAT_10011d04/*ROM*/ + next_task_id * 0xe;
    if (*(short *)(state_entry_addr + -6) != 2) {
      return;
    }
    /* Load the "next" pointer from the current task's control block */
    next_task_id = *(short *)(state_entry_addr + -2);
    next_task_offset = (int)next_task_id;
    state_entry_addr = next_task_offset * 0x44;
    if ((*(byte *)(state_entry_addr + 0x6a001c06) & 2) != 0) {
      /* Task is on the ready list: compare priorities, swap if needed */
      if (*(short *)(state_entry_addr + 0x6a001c00) <= *(short *)(task_id * 0x44 + 0x6a001c00)) {
        return;
      }
      ready_list_unlink(next_task_id);
      *(uint16_t *)(state_entry_addr + 0x6a001c00) = *(uint16_t *)(task_id * 0x44 + 0x6a001c00);
      ready_list_insert(next_task_id);
      return;
    }
    if ((*(byte *)(state_entry_addr + 0x6a001c06) & 4) == 0) {
      /* Task is blocked: just update the stored priority */
      next_task_id = *(short *)(task_id * 0x44 + 0x6a001c00);
      if (*(short *)(next_task_offset * 0x44 + 0x6a001c00) <= next_task_id) {
        return;
      }
      *(short *)(next_task_offset * 0x44 + 0x6a001c00) = next_task_id;
      return;
    }
    /* Task is in a queue: update priority, check state, possibly dequeue */
    next_task_id = *(short *)(task_id * 0x44 + 0x6a001c00);
    if (*(short *)(state_entry_addr + 0x6a001c00) <= next_task_id) break;
    *(short *)(state_entry_addr + 0x6a001c00) = next_task_id;
    state_bit = test_task_state_bit((int)*(short *)(state_entry_addr + 0x6a001c08),*(uint8_t *)(state_entry_addr + 0x6a001c07));
    if (state_bit == 1) {
      remove_node_from_queue((int)*(short *)(state_entry_addr + 0x6a001c08),next_task_offset,1);
    }
    if (*(char *)(state_entry_addr + 0x6a001c07) != '\a') {
      return;
    }
    /* Follow the chain to the next task in the queue */
    next_task_id = *(short *)(state_entry_addr + 0x6a001c08);
  }
  return;
}
