/* @k10d compute_byte_difference @ 0x000c3410
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Subtracts a byte at an offset from a byte at a fixed offset within the same object.
 * summary:
 *   The function takes a single pointer argument and returns the difference between two
 *   bytes located within the memory region it points to. It reads the byte at offset
 *   0x3f330 and subtracts the byte at an offset determined by the value of the global
 *   variable DAT_000f9d78. No other operations or side effects are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_byte_difference(int param_1)

{
  return (uint)*(byte *)(param_1 + 0x3f330) - (uint)(byte)(&DAT_000f9d78)[param_1];
}
