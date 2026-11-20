/* @k10d caseD_8_1000feda @ 0x1000feda
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed compute_struct_array_offset)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Computes a byte offset into an array of 0x24-byte structures relative to a base
 *   pointer.
 * summary:
 *   The function takes a base pointer in r0 and an index in param_1, then returns the
 *   address of the element at that index in an array where each element is 0x24 (36) bytes.
 *   It performs the calculation `*in_r0 + param_1 * 0x24 - 0x24`, which is equivalent to
 *   `*in_r0 + (param_1 - 1) * 0x24`. This is a standard array indexing helper, likely used
 *   to access a specific task control block or kernel object within a fixed-size array. No
 *   callees are present, and the specific data structure type is not identifiable from the
 *   code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int switchD_1000fe8c__caseD_8(short param_1)

{
  int *r0_in;
  
  return *r0_in + param_1 * 0x24 + -0x24;
}
