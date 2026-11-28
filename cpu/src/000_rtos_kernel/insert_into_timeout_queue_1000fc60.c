/* @k10d insert_into_timeout_queue_1000fc60 @ 0x1000fc60
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void insert_into_timeout_queue_1000fc60(short entry_id, short slot_index)

{
  short *entry = (short *)(0x6a001be8 + entry_id * 0x44);
  int slot_addr;
  short prev_slot;

  if (entry[4] == -1) {
    entry[4] = slot_index;
    prev_slot = -1;
    slot_addr = DAT_10011d04/*ROM*/ + slot_index * 0xe;
  }
  else {
    *(short *)(DAT_10011d04/*ROM*/ + entry[5] * 0xe - 10) = slot_index;
    prev_slot = entry[5];
    slot_addr = slot_index * 0xe + DAT_10011d04/*ROM*/;
  }
  *(short *)(slot_addr - 8) = prev_slot;
  *(short *)(DAT_10011d04/*ROM*/ + slot_index * 0xe - 10) = -1;
  entry[5] = slot_index;
  return;
}
