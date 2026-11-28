/* @k10d dequeue_timeout_entry @ 0x1000deec
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Removes a timeout entry from the kernel's timeout queue and updates the linked list
 *   pointers.
 * summary:
 *   The function takes an index into a timeout queue array (DAT_10011d04) and retrieves the
 *   entry ID. It calls insert_into_timeout_queue_1000fc60 and
 *   remove_task_from_timeout_queue_1001166c, likely for internal bookkeeping or
 *   notification. It then manipulates a linked list of timeout objects (size 0x44) located
 *   in SDRAM (0x6a001c00), updating the 'next' pointer (offset 0x1be8) to bypass the
 *   removed entry. It also updates a status byte at offset 0x1c06, toggling between values
 *   2 and 8, and calls ready_list_insert if the status was not 8. This behavior is
 *   consistent with removing a node from a timeout queue in a µITRON/REALOS kernel.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

void dequeue_timeout_entry(short slot_index)

{
  int slot_offset;
  short entry_id;
  short next_entry_id;
  int slot_base;
  int entry_id_int;
  int next_ptr_offset;

  slot_offset = slot_index * 0xe;
  entry_id = *(short *)(DAT_10011d04/*ROM*/ + slot_offset - 0xe);
  entry_id_int = (int)entry_id;
  if (entry_id_int != -1) {
    *(short *)(DAT_10011d04/*ROM*/ + slot_offset - 2) = entry_id;
    insert_into_timeout_queue_1000fc60(entry_id, slot_index);
    slot_base = DAT_10011d04/*ROM*/ + slot_offset;
    if ((*(short *)(slot_base - 6) == 3) &&
       (*(short *)(slot_base - 4) < *(short *)(entry_id_int * 0x44 + 0x6a001c00))) {
      *(uint16_t *)(entry_id_int * 0x44 + 0x6a001c00) = *(uint16_t *)(slot_base - 4);
    }
    remove_task_from_timeout_queue_1001166c(entry_id);
    entry_id_int = entry_id_int * 0x44;
    next_entry_id = *(short *)(entry_id_int + 0x6a001be8);
    if (next_entry_id == -1) {
      slot_base = DAT_10011d04/*ROM*/ + slot_offset;
      next_ptr_offset = -0xc;
    }
    else {
      slot_base = 0;
      next_ptr_offset = next_entry_id * 0x44 + 0x6a001be8;
    }
    *(uint16_t *)(next_ptr_offset + slot_base) = 0xffff;
    *(short *)(DAT_10011d04/*ROM*/ + slot_offset - 0xe) = next_entry_id;
    if ((*(byte *)(entry_id_int + 0x6a001c06) & 8) == 0) {
      *(uint8_t *)(entry_id_int + 0x6a001c06) = 2;
      ready_list_insert(entry_id);
    }
    else {
      *(uint8_t *)(entry_id_int + 0x6a001c06) = 8;
    }
  }
  return;
}
