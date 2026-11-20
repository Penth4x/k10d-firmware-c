/* @k10d write_halfword_to_array_000df26e @ 0x000df26e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes a 16-bit value into an array at an index scaled by 2.
 * summary:
 *   The function takes an index in param_1 and a 16-bit value in param_2. It calculates the
 *   byte offset as param_1 * 2 + 0x3e000 and stores param_2 at that location. No other
 *   operations or side effects are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_halfword_to_array_000df26e(int param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 * 2 + 0x3e000) = param_2;
  return;
}
