/* @k10d process_two_entry_state_array @ 0x1052b1c4
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over two 0x3c-byte entries, dispatching non-sentinel values at four offsets to
 *   a helper, then resets four sentinel fields.
 * summary:
 *   The function loops twice (iVar3=2), advancing a 0x3c-byte stride over param_1. For each
 *   entry it reads four 32-bit fields at offsets 0x170, 0x17c, 0x188, 0x194, 0x1a0 and
 *   calls remove_entry_from_array_1052b11c(param_1, value) for any value not equal to 0xd,
 *   0xe, 0xf, or 0x10. After the loop it calls update_or_add_entry_in_table(param_1, id,
 *   0x80) for each of the four sentinel ids (0xf, 0x10, 0xe, 0xd). Returns 1. The callees
 *   are unnamed, so the subsystem is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_two_entry_state_array(void *state_base)

{
  int field_val;
  int entry_offset;
  int entry_count;

  entry_count = 2;
  entry_offset = 0;
  do {
    field_val = *(int *)((int)state_base + entry_offset + 0x170);
    if ((((field_val != 0xf) && (field_val != 0x10)) && (field_val != 0xe)) && (field_val != 0xd)) {
      remove_entry_from_array_1052b11c(state_base, field_val);
    }
    field_val = *(int *)((int)state_base + entry_offset + 0x17c);
    if (((field_val != 0xf) && (field_val != 0x10)) && ((field_val != 0xe && (field_val != 0xd)))) {
      remove_entry_from_array_1052b11c(state_base, field_val);
    }
    field_val = *(int *)((int)state_base + entry_offset + 0x188);
    if (((field_val != 0xf) && (field_val != 0x10)) && ((field_val != 0xe && (field_val != 0xd)))) {
      remove_entry_from_array_1052b11c(state_base, field_val);
    }
    field_val = *(int *)((int)state_base + entry_offset + 0x194);
    if ((((field_val != 0xf) && (field_val != 0x10)) && (field_val != 0xe)) && (field_val != 0xd)) {
      remove_entry_from_array_1052b11c(state_base, field_val);
    }
    field_val = *(int *)((int)state_base + entry_offset + 0x1a0);
    if (((field_val != 0xf) && (field_val != 0x10)) && ((field_val != 0xe && (field_val != 0xd)))) {
      remove_entry_from_array_1052b11c(state_base, field_val);
    }
    entry_count = entry_count + -1;
    entry_offset = entry_offset + 0x3c;
  } while (-1 < entry_count);
  update_or_add_entry_in_table(state_base, 0xf, 0x80);
  update_or_add_entry_in_table(state_base, 0x10, 0x80);
  update_or_add_entry_in_table(state_base, 0xe, 0x80);
  update_or_add_entry_in_table(state_base, 0xd, 0x80);
  return 1;
}
