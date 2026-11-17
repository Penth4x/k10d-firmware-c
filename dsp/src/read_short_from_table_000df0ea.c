/* @k10d read_short_from_table_000df0ea @ 0x000df0ea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns the 16-bit value stored at an index into a fixed table in ROM.
 * summary:
 *   The function takes an index in param_1, doubles it, adds the base offset 0x3d800, and
 *   dereferences the result as a signed 16-bit value. It performs no other operations and
 *   has no callees. The table location is not identified by the available evidence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int read_short_from_table_000df0ea(int param_1)

{
  return (int)*(short *)(param_1 * 2 + 0x3d800);
}
