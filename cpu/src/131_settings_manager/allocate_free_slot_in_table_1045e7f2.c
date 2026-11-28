/* @k10d allocate_free_slot_in_table_1045e7f2 @ 0x1045e7f2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Finds the first zero entry in a bounded array of 32-bit slots and writes a value into
 *   it.
 * summary:
 *   Takes a base pointer, a count (capped at 0x19), and a value. It scans up to 16 slots
 *   starting at offset 0x1ac from the base pointer. If a slot is zero, it writes the value
 *   into that slot and returns 1. If no free slot is found or the count is too small, it
 *   returns 0. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_free_slot_in_table_1045e7f2(void *unused_base, int slot_group, uint32_t slot_value)

{
  int scan_offset;
  int slot_index;
  int group_base_offset;

  if (slot_group < 0x19) {
    slot_index = 0;
    group_base_offset = slot_group * 0x10;
    scan_offset = group_base_offset;
    do {
      if (*(int *)((int)unused_base + scan_offset + 0x1ac) == 0) {
        *(uint32_t *)((int)unused_base + slot_index * 4 + group_base_offset + 0x1ac) = slot_value;
        return 1;
      }
      scan_offset = scan_offset + 4;
      slot_index = slot_index + 1;
    } while (scan_offset < group_base_offset + 0x10);
  }
  return 0;
}
