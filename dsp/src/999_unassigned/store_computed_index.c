/* @k10d store_computed_index @ 0x000c09fa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Computes a linear combination of three parameters and stores the result of a callee
 *   call into a global.
 * summary:
 *   The function calculates an index using the formula param_1 * 2 + param_2 * 4 + param_3.
 *   It passes this index and the constant 7 to unsigned_divide. The return value of
 *   unsigned_divide is stored in the global variable _DAT_0003c5a0. The role of
 *   unsigned_divide and the global variable are not specified in the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void store_computed_index(int param_1,int param_2,int param_3)

{
  _DAT_0003c5a0 = unsigned_divide(param_1 * 2 + param_2 * 4 + param_3,7);
  return;
}
