/* @k10d return_min_of_two_1049a362 @ 0x1049a362
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Returns the smaller of two unsigned integers.
 * summary:
 *   Compares param_1 and param_2, swapping param_1 to param_2 if param_2 is less than or
 *   equal to param_1. Returns the resulting minimum value. No side effects or memory
 *   accesses.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint return_min_of_two_1049a362(uint param_1,uint param_2)

{
  if (param_2 <= param_1) {
    param_1 = param_2;
  }
  return param_1;
}
