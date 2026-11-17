/* @k10d return_max_of_two_104732e2 @ 0x104732e2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the larger of two integer parameters.
 * summary:
 *   The function compares param_1 and param_2. If param_1 is less than or equal to param_2,
 *   it sets param_1 to param_2. It returns param_1, effectively returning the maximum of
 *   the two inputs. No side effects or memory accesses are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int return_max_of_two_104732e2(int param_1,int param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}
