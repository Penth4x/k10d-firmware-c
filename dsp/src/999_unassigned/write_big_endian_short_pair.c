/* @k10d write_big_endian_short_pair @ 0x000f18e2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes a 32-bit value as two big-endian 16-bit halves into a memory buffer at a
 *   computed offset.
 * summary:
 *   The function takes a 32-bit value in param_1 and writes its upper 16 bits to the
 *   address (param_3 * 2 + param_2) and its lower 16 bits to the address ((param_3 + 1) * 2
 *   + param_2). This effectively stores the 32-bit value in big-endian byte order into a
 *   4-byte region starting at offset param_2, where param_3 appears to be an index or
 *   stride multiplier. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_big_endian_short_pair(uint32_t param_1,int param_2,int param_3)

{
  *(short *)(param_3 * 2 + param_2) = (short)((uint)param_1 >> 0x10);
  *(short *)((param_3 + 1) * 2 + param_2) = (short)param_1;
  return;
}
