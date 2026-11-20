/* @k10d compute_modulo_000f79a8 @ 0x000f79a8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns the remainder of param_1 divided by param_2.
 * summary:
 *   A simple arithmetic helper that computes the modulo of two integer arguments. It has no
 *   callees and no side effects. The three callers at 0x000f66a6, 0x000f69ca, and
 *   0x000f6522 use it for remainder calculations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_modulo_000f79a8(int param_1,int param_2)

{
  return param_1 % param_2;
}
