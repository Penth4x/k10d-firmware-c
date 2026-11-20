/* @k10d read_32bit_from_16bit_array @ 0x000f18a4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Reads a 32-bit value from a 16-bit array using big-endian byte order.
 * summary:
 *   The function takes a base pointer (param_1) and an index (param_2). It calculates the
 *   address of the lower 16-bit word at `param_1 + param_2 * 2` and the upper 16-bit word
 *   at `param_1 + (param_2 + 1) * 2`. It reads both as unsigned shorts, shifts the upper
 *   word left by 16 bits, and adds the lower word to form a 32-bit integer. This is a
 *   standard big-endian 32-bit read from a 16-bit aligned memory region.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int read_32bit_from_16bit_array(int param_1,int param_2)

{
  return (uint)*(ushort *)((param_2 + 1) * 2 + param_1) +
         (uint)*(ushort *)(param_2 * 2 + param_1) * 0x10000;
}
