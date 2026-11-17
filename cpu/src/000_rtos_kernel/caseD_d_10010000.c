/* @k10d caseD_d @ 0x10010000
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed test_bit_in_table)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Tests a specific bit in a 16-bit entry of a table indexed by param_1.
 * summary:
 *   The function calculates an offset into the table at DAT_10011cfc using param_1, where
 *   each entry is 0x18 bytes apart. It reads a 16-bit value at an offset of -0x10 (24
 *   bytes) from the start of the entry and checks if the least significant bit is set. It
 *   returns true if the bit is set, false otherwise. No callees are used.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool switchD_1000ff64__caseD_d(short param_1)

{
  return (*(ushort *)(DAT_10011cfc/*ROM*/ + param_1 * 0x18 + -0x10) & 1) != 0;
}
