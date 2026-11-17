/* @k10d compute_signed_half_sum @ 0x000d9d8e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Computes param_2 plus half of param_1 (with sign handling) and passes the result to a
 *   callee.
 * summary:
 *   The function takes the absolute value of param_1, shifts it right by 1, and re-applies
 *   the sign of param_2 to this half-value. It then calls divide_two_integers with the sum
 *   of param_2 and this signed half-value as the first argument, and the original param_1
 *   as the second argument. The role of divide_two_integers is unknown, so the specific
 *   application of this calculation cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_signed_half_sum(uint param_1,int param_2)

{
  uint uVar1;
  uint32_t uVar2;
  
  uVar1 = param_1;
  if ((int)param_1 < 0) {
    uVar1 = -param_1;
  }
  uVar1 = uVar1 >> 1;
  if (param_2 < 0) {
    uVar1 = -uVar1;
  }
  uVar2 = divide_two_integers(param_2 + uVar1,param_1);
  return uVar2;
}
