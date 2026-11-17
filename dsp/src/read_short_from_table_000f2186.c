/* @k10d read_short_from_table_000f2186 @ 0x000f2186
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns the 16-bit value at an offset computed from param_1 times 2 plus a fixed base.
 * summary:
 *   The function takes an integer index, multiplies it by 2, adds the constant 0x3d400, and
 *   dereferences the result as a short. It has no callees and performs no side effects. The
 *   base address 0x3d400 is not identified in the provided brief, so the table's purpose is
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int read_short_from_table_000f2186(int param_1)

{
  return (int)*(short *)(param_1 * 2 + 0x3d400);
}
