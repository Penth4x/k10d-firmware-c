/* @k10d write_halfword_to_array_000f2298 @ 0x000f2298
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes a 16-bit value into an array at an index computed from param_1.
 * summary:
 *   The function stores the 16-bit value in param_2 into memory at the address (param_1 * 2
 *   + 0x3e000). It has no callees and performs a single memory write. The base address
 *   0x3e000 is an unknown global or static array.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_halfword_to_array_000f2298(int param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 * 2 + 0x3e000) = param_2;
  return;
}
