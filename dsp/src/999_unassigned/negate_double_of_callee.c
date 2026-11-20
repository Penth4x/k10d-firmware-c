/* @k10d negate_double_of_callee @ 0x000c33f8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Calls FUN_000c33be and returns its result multiplied by -2.
 * summary:
 *   The function makes a single call to FUN_000c33be, takes the returned integer value, and
 *   returns its negated double (value * -2). No other operations, memory accesses, or side
 *   effects are visible in the pseudocode. The role of FUN_000c33be is unknown, so the
 *   semantic meaning of the multiplication cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int negate_double_of_callee(uint32_t param_x0)

{
  int iVar1;
  
  iVar1 = FUN_000c33be(__frv_reg_unset(4));
  return iVar1 * -2;
}
