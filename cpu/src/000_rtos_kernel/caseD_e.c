/* @k10d caseD_e @ 0x1000ff22
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed compute_tcb_array_offset)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Computes a byte offset into a 0x20-byte-stride array using a base pointer and an index.
 * summary:
 *   The function takes an index in param_1, multiplies it by 0x20, and adds it to the
 *   global base pointer DAT_10011cf8 minus 0x20. This is a standard array indexing
 *   calculation for a structure array with 32-byte elements. Given the module context of
 *   RTOS kernel services, this likely computes the address of a specific task control block
 *   or kernel object within a fixed-size array.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int switchD_1000fe8c__caseD_e(int param_1)

{
  return DAT_10011cf8/*ROM*/ + param_1 * 0x20 + -0x20;
}
