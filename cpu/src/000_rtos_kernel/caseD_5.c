/* @k10d caseD_5 @ 0x1000ff10
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed compute_struct_offset)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Computes a byte offset into a structure using a base pointer and an index.
 * summary:
 *   The function takes a base pointer (in_r1) and an index (param_1), and returns the
 *   address of an element at a fixed stride of 0x1c (28) bytes, offset by -0x18. This is a
 *   standard array/structure indexing calculation. It resides in the rtos_kernel module,
 *   likely used for accessing elements in a kernel data structure like a task control block
 *   or ready list.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int switchD_1000fe8c__caseD_5(short param_1)

{
  int *r1_in;
  
  return *r1_in + param_1 * 0x1c + -0x18;
}
