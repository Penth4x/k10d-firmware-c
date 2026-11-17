/* @k10d return_min_of_two_104ce48e @ 0x104ce48e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the smaller of two unsigned integer arguments.
 * summary:
 *   Compares param_1 and param_2, and if param_2 is less than or equal to param_1, returns
 *   param_2; otherwise returns param_1. No side effects or memory accesses are visible in
 *   the pseudocode. The caller combine_two_helper_results is not named, so the specific
 *   camera subsystem context is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint return_min_of_two_104ce48e(uint param_1,uint param_2)

{
  if (param_2 <= param_1) {
    param_1 = param_2;
  }
  return param_1;
}
