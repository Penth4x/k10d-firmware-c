/* @k10d remove_entry_from_array_1052b11c @ 0x1052b11c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void remove_entry_from_array_1052b11c(void *state_base,int match_value)

{
  bool found;
  int byte_offset;
  uint32_t *entry_ptr;
  int src_byte_offset;
  int entry_index;
  uint32_t *src_entry_ptr;

  entry_index = 0;
  found = false;
  if (0 < *(int *)((int)state_base + 0x16c)) {
    byte_offset = 0;
    do {
      if (*(int *)((int)state_base + byte_offset + 0x170) == match_value) {
        entry_ptr = (uint32_t *)((int)state_base + entry_index * 0xc + 0x170);
        *entry_ptr = 0xffff;
        entry_ptr[1] = 0;
        entry_ptr[2] = 0;
        found = true;
        break;
      }
      entry_index = entry_index + 1;
      byte_offset = byte_offset + 0xc;
    } while (entry_index < *(int *)((int)state_base + 0x16c));
  }
  if (found) {
    if (entry_index < *(int *)((int)state_base + 0x16c) + -1) {
      byte_offset = entry_index * 0xc;
      src_byte_offset = (entry_index + 1) * 0xc;
      do {
        src_entry_ptr = (uint32_t *)((int)state_base + src_byte_offset + 0x170);
        entry_ptr = (uint32_t *)((int)state_base + byte_offset + 0x170);
        *entry_ptr = *src_entry_ptr;
        src_byte_offset = src_byte_offset + 0xc;
        entry_ptr[1] = src_entry_ptr[1];
        byte_offset = byte_offset + 0xc;
        entry_ptr[2] = src_entry_ptr[2];
        entry_index = entry_index + 1;
      } while (entry_index < *(int *)((int)state_base + 0x16c) + -1);
    }
    *(int *)((int)state_base + 0x16c) = *(int *)((int)state_base + 0x16c) + -1;
  }
  return;
}
