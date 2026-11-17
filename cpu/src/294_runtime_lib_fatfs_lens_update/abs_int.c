/* @k10d abs_int @ 0x10546eaa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Returns the absolute value of a signed integer parameter.
 * summary:
 *   The function takes a single integer argument, negates it if it is negative, and returns
 *   the result. It is a simple utility function with no side effects or external
 *   dependencies. It is called by normalize_fixed_point_value_10546d6a within the lens
 *   firmware update module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int abs_int(int param_1)

{
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}
