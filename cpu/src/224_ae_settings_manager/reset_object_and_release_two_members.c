/* @k10d reset_object_and_release_two_members @ 0x104bce64
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resets a large object by calling an init helper, clearing two virtual member pointers,
 *   and setting a flag byte.
 * summary:
 *   Calls process_three_string_slots_per_entry on the object, then zeroes the byte at
 *   offset 0xfd99. If the bytes at offsets 0x88c and 0x8a8 are non-zero, it calls virtual
 *   slot 3 (release_object_heap_blocks_1047e1ec) on the objects at offsets 0x874 and 0x890
 *   respectively, then zeroes the flag bytes. Finally sets the byte at offset 0x1e to 1.
 *   This pattern is consistent with a destructor or reset routine for a class with two
 *   virtual sub-objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_object_and_release_two_members(int param_1)

{
  process_three_string_slots_per_entry(param_1);
  *(uint8_t *)(param_1 + 0xfd99) = 0;
  if (*(char *)(param_1 + 0x88c) != '\0') {
    release_object_heap_blocks_1047e1ec((cls_105aae94 *)(param_1 + 0x874));
    *(uint8_t *)(param_1 + 0x88c) = 0;
  }
  if (*(char *)(param_1 + 0x8a8) != '\0') {
    release_object_heap_blocks_1047e1ec((cls_105aae94 *)(param_1 + 0x890));
    *(uint8_t *)(param_1 + 0x8a8) = 0;
  }
  *(uint8_t *)(param_1 + 0x1e) = 1;
  return;
}
