/* @k10d read_short_from_table_000f22ce @ 0x000f22ce
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns the 16-bit value at an offset computed from param_1 times 2 plus a fixed base.
 * summary:
 *   The function multiplies param_1 by 2, adds the constant 0x3d000, and dereferences the
 *   result as a short. It performs a simple table lookup with no side effects and no
 *   callees. The base address 0x3d000 is not identified in the provided brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int read_short_from_table_000f22ce(int param_1)

{
  return (int)*(short *)(param_1 * 2 + 0x3d000);
}
