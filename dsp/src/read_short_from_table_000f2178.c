/* @k10d read_short_from_table_000f2178 @ 0x000f2178
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns the 16-bit value at index param_1 in a table located at 0x3d000.
 * summary:
 *   The function computes an address by doubling param_1 and adding the base 0x3d000, then
 *   dereferences it as a signed 16-bit integer and returns the result. It performs no other
 *   operations and has no callees. The base address 0x3d000 is not identified in the
 *   provided brief, so the specific data table is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int read_short_from_table_000f2178(int param_1)

{
  return (int)*(short *)(param_1 * 2 + 0x3d000);
}
