/* @k10d return_max_of_two_104a8b48 @ 0x104a8b48
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Returns the larger of two unsigned integer arguments.
 * summary:
 *   The function compares param_1 and param_2. If param_1 is less than or equal to param_2,
 *   it sets param_1 to param_2. It returns param_1, effectively returning the maximum of
 *   the two inputs. No memory accesses or side effects are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint return_max_of_two_104a8b48(uint param_1,uint param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}
