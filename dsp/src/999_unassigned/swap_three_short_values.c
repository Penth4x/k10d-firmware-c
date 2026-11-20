/* @k10d swap_three_short_values @ 0x000f209c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Reads three 16-bit values from offsets 0x3d000, 0x3d400, 0x3d800 in a buffer and swaps
 *   them with three global constants.
 * summary:
 *   The function takes a pointer (param_1), doubles it to get a byte offset, and performs
 *   three read-modify-write operations. For each of the three offsets (0x3d000, 0x3d400,
 *   0x3d800), it reads the current 16-bit value, shifts it left by 8 bits (zero-extending
 *   to 32 bits), stores it in a corresponding global variable (DAT_0003c830, DAT_0003c834,
 *   DAT_0003c880), and then writes a new 16-bit constant (DAT_0003c814, DAT_0003c816,
 *   DAT_0003c818) to that same memory location. The specific meaning of the buffer and the
 *   constants is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void swap_three_short_values(int param_1)

{
  param_1 = param_1 * 2;
  _DAT_0003c830 = (int)*(short *)(param_1 + 0x3d000) << 8;
  *(short *)(param_1 + 0x3d000) = _DAT_0003c814;
  _DAT_0003c834 = (int)*(short *)(param_1 + 0x3d400) << 8;
  *(short *)(param_1 + 0x3d400) = _DAT_0003c816;
  _DAT_0003c880 = (int)*(short *)(param_1 + 0x3d800) << 8;
  *(short *)(param_1 + 0x3d800) = _DAT_0003c818;
  return;
}
