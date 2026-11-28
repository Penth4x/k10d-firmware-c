/* @k10d screen_key_find @ 0x1048204a
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed find_entry_by_hash)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Linearly searches an array of 8-byte entries for one whose 5th byte matches a hash of
 *   param_2.
 * summary:
 *   Calls normalize_ascii_letter on *param_2 to obtain a byte value. Iterates over the
 *   count stored at param_1+0x14, comparing each entry's byte at offset 4 (base
 *   param_1+0xc) against that value. Returns the zero-based index on match, or -1 if not
 *   found. The specific meaning of the hash and the entries is not determinable from this
 *   code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int screen_key_find(void *table, uint8_t *key_ptr)

{
  int index;
  int byte_offset;
  uint key_byte;

  key_byte = normalize_ascii_letter(*key_ptr);
  index = 0;
  if (0 < *(int *)((int)table + 0x14)) {
    byte_offset = 0;
    do {
      if (key_byte == *(byte *)(*(int *)((int)table + 0xc) + byte_offset + 4)) {
        return index;
      }
      index = index + 1;
      byte_offset = byte_offset + 8;
    } while (index < *(int *)((int)table + 0x14));
  }
  return -1;
}
