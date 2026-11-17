/* @k10d read_table_entry_at_offset @ 0x1051e536
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the 16-bit value stored at a computed offset within a table pointed to by
 *   param_1.
 * summary:
 *   The function calculates an address by adding param_1, 0xc, and param_2 multiplied by 4.
 *   It then dereferences the pointer at that address and returns the 16-bit value it points
 *   to. This pattern is typical for accessing elements in a table of pointers or a
 *   structure with a header followed by an array of pointers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t read_table_entry_at_offset(int param_1,int param_2)

{
  return **(uint16_t **)(param_1 + 0xc + param_2 * 4);
}
