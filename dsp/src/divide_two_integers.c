/* @k10d divide_two_integers @ 0x000f78b0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Performs integer division of param_1 by param_2 and returns the quotient.
 * summary:
 *   The function takes two integer parameters and returns the result of dividing the first
 *   by the second. It has no callees and no side effects. It is called by eight other
 *   functions, likely serving as a helper for arithmetic operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int divide_two_integers(int param_1,int param_2)

{
  return param_1 / param_2;
}
