/* @k10d compute_modulo_000f7ca0 @ 0x000f7ca0
 * name: model (proposed by the local model from the decompile, confidence 0.99)
 * purpose:
 *   Returns the remainder of param_1 divided by param_2.
 * summary:
 *   A simple arithmetic helper that computes the modulo of two unsigned integers. It has no
 *   callees and no side effects. The single caller at 0x000d0950 uses it for a remainder
 *   calculation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_modulo_000f7ca0(uint param_1,uint param_2)

{
  return param_1 % param_2;
}
