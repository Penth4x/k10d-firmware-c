/* @k10d return_max_of_two_1051b2a4 @ 0x1051b2a4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Returns the larger of two unsigned integer arguments.
 * summary:
 *   Compares param_1 and param_2. If param_1 is less than or equal to param_2, it sets
 *   param_1 to param_2. Returns the resulting maximum value in r4. No memory access or side
 *   effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint return_max_of_two_1051b2a4(uint param_1,uint param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}
