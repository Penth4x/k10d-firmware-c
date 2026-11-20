/* @k10d caseD_6_1000ff8e @ 0x1000ff8e
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed test_bit_in_table_entry)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Returns whether bit 0 of a 16-bit field at a computed offset in a table is set.
 * summary:
 *   The function indexes into a table starting at DAT_10011d08 with 0x10-byte stride, reads
 *   the 16-bit value at offset -0xc within the entry, and returns true if its least
 *   significant bit is set. No callees are invoked and the role of DAT_10011d08 is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool switchD_1000ff64__caseD_6(int param_1)

{
  return (*(ushort *)(DAT_10011d08/*ROM*/ + param_1 * 0x10 + -0xc) & 1) != 0;
}
