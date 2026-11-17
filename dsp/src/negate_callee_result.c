/* @k10d negate_callee_result @ 0x000c33aa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Calls compute_weighted_average_000c3374 and returns the negation of its result.
 * summary:
 *   The function invokes compute_weighted_average_000c3374, stores the return value in a
 *   local variable, and returns its arithmetic negation. No other operations, memory
 *   accesses, or side effects are visible in the pseudocode. The caller is
 *   compute_indexed_sized_value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int negate_callee_result(uint32_t param_x0)

{
  int iVar1;
  
  iVar1 = compute_weighted_average_000c3374(__frv_reg_unset(4));
  return -iVar1;
}
