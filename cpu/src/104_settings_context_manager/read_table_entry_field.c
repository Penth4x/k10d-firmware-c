/* @k10d read_table_entry_field @ 0x10427828
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Returns the 4-byte field at offset 8 of a table entry selected by an index.
 * summary:
 *   Takes a base pointer (param_1) and an index (param_2). If the index is less than 0x100,
 *   it computes the entry address as base + index*0xc and checks that the first byte of the
 *   entry is non-zero. If valid, it returns the 32-bit value at offset 8 of that entry;
 *   otherwise it returns 0. No callees are invoked. The 0xc stride suggests a 12-byte
 *   record layout, but the specific data domain is not identifiable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_table_entry_field(void *table_base,int entry_index)

{
  char *entry_ptr;
  uint32_t field_value;

  field_value = 0;
  if ((entry_index < 0x100) && (entry_ptr = (char *)(entry_index * 0xc + (int)table_base), *entry_ptr != '\0')) {
    field_value = *(uint32_t *)(entry_ptr + 8);
  }
  return field_value;
}
