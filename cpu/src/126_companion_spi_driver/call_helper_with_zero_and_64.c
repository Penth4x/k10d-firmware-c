/* @k10d call_helper_with_zero_and_64 @ 0x1044b72e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing the input pointer, 0, and 0x40.
 * summary:
 *   The function forwards its first argument to fill_byte_array along with the constants 0
 *   and 0x40 (64). No other operations, side effects, or globals are touched. The role of
 *   fill_byte_array is unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_zero_and_64(void *param_1)

{
  fill_byte_array(param_1,0,0x40);
  return;
}
