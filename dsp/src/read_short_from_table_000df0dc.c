/* @k10d read_short_from_table_000df0dc @ 0x000df0dc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns the 16-bit value at an index into a fixed table.
 * summary:
 *   The function takes an index in param_1, doubles it, adds the base offset 0x3d400, and
 *   dereferences the result as a signed short. It performs no other operations and has no
 *   callees. The contents and purpose of the table at 0x3d400 are not determinable from
 *   this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int read_short_from_table_000df0dc(int param_1)

{
  return (int)*(short *)(param_1 * 2 + 0x3d400);
}
