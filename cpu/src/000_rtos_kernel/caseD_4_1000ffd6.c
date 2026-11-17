/* @k10d caseD_4 @ 0x1000ffd6
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed test_bit_in_struct_array)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Returns whether a specific bit is set in a 16-bit field of a struct at an index.
 * summary:
 *   The function calculates an offset into an array of structs (size 0x1c) using param_1.
 *   It reads a 16-bit value from an offset of -0x14 (0xEC) within that struct and checks if
 *   bit 0 is set. The base address DAT_10011d0c is unknown, and the specific role of the
 *   bit is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool switchD_1000ff64__caseD_4(short param_1)

{
  return (*(ushort *)(DAT_10011d0c/*ROM*/ + param_1 * 0x1c + -0x14) & 1) != 0;
}
