/* @k10d clamp_min_value @ 0x10476a26
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the larger of two integer parameters, enforcing a minimum bound.
 * summary:
 *   The function compares param_1 and param_2. If param_1 is less than or equal to param_2,
 *   it sets param_1 to param_2. It then returns param_1, effectively acting as a 'max' or
 *   'clamp to minimum' operation. No memory writes or external calls are made.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int clamp_min_value(int param_1,int param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}
