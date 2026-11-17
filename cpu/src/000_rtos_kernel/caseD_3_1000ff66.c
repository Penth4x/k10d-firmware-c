/* @k10d caseD_3 @ 0x1000ff66
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed test_bit_in_struct_array)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Returns whether bit 0 of a 12-byte struct element at an index is set.
 * summary:
 *   The function indexes into an array of 12-byte structures located at DAT_10011d10, using
 *   param_1 as the index with an offset of -8 bytes. It reads a 16-bit value at that
 *   location and checks if the least significant bit is set. The role of the underlying
 *   data structure is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool switchD_1000ff64__caseD_3(short param_1)

{
  return (*(ushort *)(DAT_10011d10/*ROM*/ + param_1 * 0xc + -8) & 1) != 0;
}
