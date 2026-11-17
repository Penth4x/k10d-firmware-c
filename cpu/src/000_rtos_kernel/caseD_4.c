/* @k10d caseD_4 @ 0x1000fefe
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed compute_array_element_offset)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Computes the address of an element in a 0x1c-byte stride array using a base pointer and
 *   index.
 * summary:
 *   The function takes a base pointer (in_r1) and a short index (param_1), multiplies the
 *   index by 0x1c (28), and subtracts 0x1c from the result. This is a standard array
 *   indexing operation for a structure or array with 28-byte elements. No callees are
 *   present, and the specific data structure being indexed is not identifiable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int switchD_1000fe8c__caseD_4(short param_1)

{
  int *r1_in;
  
  return *r1_in + param_1 * 0x1c + -0x1c;
}
