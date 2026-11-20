/* @k10d read_short_from_table_000f2194 @ 0x000f2194
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns the 16-bit value at an offset computed from param_1 times 2 plus a fixed base.
 * summary:
 *   The function computes an address as param_1 * 2 + 0x3d800, dereferences it as a short,
 *   and returns the value. No callees are invoked and no side effects are visible. The base
 *   address 0x3d800 is not identified in the provided brief, so the table's purpose is
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int read_short_from_table_000f2194(int param_1)

{
  return (int)*(short *)(param_1 * 2 + 0x3d800);
}
