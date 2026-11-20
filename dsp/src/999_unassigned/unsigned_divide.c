/* @k10d unsigned_divide @ 0x000f7bbc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Performs an unsigned integer division of param_1 by param_2 and returns the quotient.
 * summary:
 *   The function takes two unsigned integer parameters and returns the result of dividing
 *   the first by the second. It has no callees and no side effects. It is called by eight
 *   other functions, likely as a helper for arithmetic operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint unsigned_divide(uint param_1,uint param_2)

{
  return param_1 / param_2;
}
