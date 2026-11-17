/* @k10d caseD_e @ 0x1000ffea
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed test_tcb_flag_bit0)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Returns true if bit 0 of a 16-bit field at offset -0x14 in a 0x20-byte array element is
 *   set.
 * summary:
 *   The function indexes into an array of 0x20-byte structures starting at DAT_10011cf8
 *   using param_1. It reads a 16-bit value at offset -0x14 relative to the element base and
 *   tests its least significant bit. Given the module context (RTOS kernel,
 *   scheduler/ready-list), this likely checks a status or state flag within a task control
 *   block or similar kernel structure, but the specific role of the flag cannot be
 *   determined from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool switchD_1000ff64__caseD_e(int param_1)

{
  return (*(ushort *)(DAT_10011cf8/*ROM*/ + param_1 * 0x20 + -0x14) & 1) != 0;
}
