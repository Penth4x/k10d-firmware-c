/* @k10d read_short_from_table_000f22dc @ 0x000f22dc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns the 16-bit value at index param_1 in a table located at 0x3d800.
 * summary:
 *   The function computes an offset by doubling param_1 and adding it to the base address
 *   0x3d800, then dereferences the result as a signed 16-bit integer. It performs no other
 *   operations, has no callees, and does not modify any state. The base address 0x3d800 is
 *   not identified in the provided brief, so the specific data table is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int read_short_from_table_000f22dc(int param_1)

{
  return (int)*(short *)(param_1 * 2 + 0x3d800);
}
