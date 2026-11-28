/* @k10d subtract_timeout_from_queue @ 0x1000fd20
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Subtracts a timeout value from the first entry of a linked timeout queue, splitting the
 *   entry if the timeout exceeds the head value.
 * summary:
 *   Walks a singly-linked list of timeout entries (stride 0x44) starting at DAT_6a0036c4.
 *   Each entry stores a timeout value at offset 0x1c and next/prev pointers at 0x1e/0x1c.
 *   If param_1 is less than the head timeout, it decrements the head and inserts a new
 *   entry for the remainder. If param_1 exceeds the head, it removes the head and continues
 *   with the difference. Called by kernel_twai_sem for timeout handling.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void subtract_timeout_from_queue(int timeout_delta)

{
  int entry_offset;
  short next_idx;
  int entry_idx;
  short new_entry_idx;
  int removed_idx;
  int head_timeout;

  removed_idx = -1;
  next_idx = _DAT_6a0036c4;
  do {
    entry_idx = (int)next_idx;
    if (entry_idx == -1) {
LAB_1000fd6a:
      if (entry_idx == -1) {
        _DAT_6a0036c6 = _DAT_6a003758;
      }
      else {
        *(short *)(entry_idx * 0x44 + 0x6a001bee) = _DAT_6a003758;
      }
      if (removed_idx == -1) {
        _DAT_6a0036c4 = _DAT_6a003758;
      }
      else {
        *(short *)(removed_idx * 0x44 + 0x6a001bec) = _DAT_6a003758;
      }
      new_entry_idx = _DAT_6a003758;
      entry_idx = (int)_DAT_6a003758;
      *(short *)(_DAT_6a003758 * 0x44 + 0x6a001bec) = next_idx;
      *(short *)(entry_idx * 0x44 + 0x6a001bee) = (short)removed_idx;
      *(int *)(new_entry_idx * 0x44 + 0x6a001c1c) = timeout_delta;
      return;
    }
    entry_offset = entry_idx * 0x44;
    head_timeout = *(int *)(entry_offset + 0x6a001c1c);
    if (timeout_delta < head_timeout) {
      removed_idx = (int)*(short *)(entry_offset + 0x6a001bee);
      *(int *)(entry_offset + 0x6a001c1c) = head_timeout - timeout_delta;
      goto LAB_1000fd6a;
    }
    next_idx = *(short *)(entry_offset + 0x6a001bec);
    timeout_delta = timeout_delta - head_timeout;
    removed_idx = entry_idx;
  } while( true );
}
