/* @k10d multiply_two_integers @ 0x000c2994
 * name: model (proposed by the local model from the decompile, confidence 0.99)
 * purpose:
 *   Returns the product of two integer parameters.
 * summary:
 *   The function takes two integer arguments and returns their product. No memory accesses,
 *   MMIO operations, or kernel calls are present. It is called by FUN_000c28e2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int multiply_two_integers(int param_1,int param_2)

{
  return param_1 * param_2;
}
