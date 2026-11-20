/* @k10d caseD_8_1000ffc2 @ 0x1000ffc2
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed test_bit_in_struct_array)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Returns whether bit 0 of a 16-bit field at a computed offset in a struct array is set.
 * summary:
 *   The function indexes into an array of 0x24-byte structures at DAT_10011d00 using
 *   param_1, reads the 16-bit value at offset -0x1c, and tests its least significant bit.
 *   It is a simple accessor with no side effects or kernel service calls. The role of the
 *   underlying data structure is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool switchD_1000ff64__caseD_8(short param_1)

{
  return (*(ushort *)(DAT_10011d00/*ROM*/ + param_1 * 0x24 + -0x1c) & 1) != 0;
}
