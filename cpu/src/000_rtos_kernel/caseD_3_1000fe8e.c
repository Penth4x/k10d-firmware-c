/* @k10d caseD_3_1000fe8e @ 0x1000fe8e
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed compute_array_element_offset)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Computes a byte offset into a 12-byte-stride array using a 16-bit index.
 * summary:
 *   The function takes a short index, multiplies it by 0xc (12), and adds the result to the
 *   base address DAT_10011d10. It subtracts 0xc, which is equivalent to adding (param_1 -
 *   1) * 12, suggesting it accesses the element at index param_1-1 in an array of 12-byte
 *   structures. No other side effects or kernel operations are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int switchD_1000fe8c__caseD_3(short param_1)

{
  return DAT_10011d10/*ROM*/ + param_1 * 0xc + -0xc;
}
