/* @k10d caseD_2 @ 0x1000ff7a
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed test_bit_in_table)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Returns whether a specific bit is set in a 10-byte-per-entry table indexed by param_1.
 * summary:
 *   The function computes an offset into the table at DAT_10011d14 using param_1 * 10 - 6,
 *   reads the 16-bit value at that location, and returns true if bit 0 is set. It is a
 *   simple bit-test helper with no side effects or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool switchD_1000ff64__caseD_2(short param_1)

{
  return (*(ushort *)(DAT_10011d14/*ROM*/ + param_1 * 10 + -6) & 1) != 0;
}
