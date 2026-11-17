/* @k10d subtract_100_from_param @ 0x10475976
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the second parameter minus 100, truncated to a 16-bit signed value.
 * summary:
 *   The function ignores the first parameter and performs a simple arithmetic operation on
 *   the second. It subtracts the constant 100 from param_2 and returns the result as a
 *   16-bit signed integer. No memory accesses, MMIO operations, or kernel calls are
 *   present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int subtract_100_from_param(uint32_t param_1,short param_2)

{
  return (int)(short)(param_2 + -100);
}
