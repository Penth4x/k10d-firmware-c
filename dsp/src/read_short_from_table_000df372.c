/* @k10d read_short_from_table_000df372 @ 0x000df372
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns the 16-bit value stored at an index-scaled offset into a fixed table.
 * summary:
 *   The function takes an index in param_1, multiplies it by 2, adds the base offset
 *   0x3d800, and dereferences the result as a signed short. It performs no other operations
 *   and has no callees. The base address 0x3d800 is a fixed offset whose contents are not
 *   identified by the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int read_short_from_table_000df372(int param_1)

{
  return (int)*(short *)(param_1 * 2 + 0x3d800);
}
