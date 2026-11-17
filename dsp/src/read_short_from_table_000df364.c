/* @k10d read_short_from_table_000df364 @ 0x000df364
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns the 16-bit value stored at an index-scaled offset in a fixed table.
 * summary:
 *   The function takes an index in param_1, multiplies it by 2, adds the base offset
 *   0x3d000, and dereferences the resulting address as a signed 16-bit value. It performs
 *   no other operations and has no callees. The base address 0x3d000 is a fixed offset,
 *   likely into a data table, but its specific contents are not determinable from this code
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int read_short_from_table_000df364(int param_1)

{
  return (int)*(short *)(param_1 * 2 + 0x3d000);
}
