/* @k10d caseD_2_1000fea2 @ 0x1000fea2
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed compute_index_offset)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Computes an array index by scaling param_1 by 10 and adding a base offset.
 * summary:
 *   The function performs a simple arithmetic calculation: it multiplies the input
 *   parameter by 10, subtracts 10, and adds the value of the global variable DAT_10011d14.
 *   It returns the resulting integer. No other functions are called, and no side effects
 *   are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int switchD_1000fe8c__caseD_2(short param_1)

{
  return DAT_10011d14/*ROM*/ + param_1 * 10 + -10;
}
