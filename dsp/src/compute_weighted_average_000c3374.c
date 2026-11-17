/* @k10d compute_weighted_average_000c3374 @ 0x000c3374
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Computes the average of two values derived from param_1, one scaled by a lookup table
 *   entry.
 * summary:
 *   Calls FUN_000c33be and negate_double_of_callee with param_1 to obtain two values. The
 *   first value is multiplied by a byte from the table at DAT_000f9d58 indexed by param_1,
 *   then passed to divide_two_integers with a shift amount of 0x10. The final result is the
 *   integer average of the scaled first value and the second value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_weighted_average_000c3374(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_000c33be(param_1);
  iVar1 = divide_two_integers(iVar1 * (uint)(byte)(&DAT_000f9d58)[param_1],0x10);
  iVar2 = negate_double_of_callee(param_1);
  return (iVar1 + iVar2) / 2;
}
