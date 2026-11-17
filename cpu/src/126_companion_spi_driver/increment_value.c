/* @k10d increment_value @ 0x1044bf26
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns the input parameter incremented by one.
 * summary:
 *   The function takes a single integer argument and returns its value plus one. It has no
 *   callees and performs no side effects. The caller at 0x1044bf30 is not named, so the
 *   specific context of this increment is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int increment_value(int param_1)

{
  return param_1 + 1;
}
