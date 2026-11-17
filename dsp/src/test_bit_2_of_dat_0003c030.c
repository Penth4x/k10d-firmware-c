/* @k10d test_bit_2_of_dat_0003c030 @ 0x000f81be
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns true if bit 2 of the global variable DAT_0003c030 is set.
 * summary:
 *   The function shifts the 32-bit value at DAT_0003c030 left by 29 bits and checks if the
 *   result is negative, which is the standard Ghidra idiom for testing bit 2 (31 - 29 = 2).
 *   It has no callees and no side effects. The role of DAT_0003c030 is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_bit_2_of_dat_0003c030(void)

{
  return (int)((uint)DAT_0003c030 << 0x1d) < 0;
}
