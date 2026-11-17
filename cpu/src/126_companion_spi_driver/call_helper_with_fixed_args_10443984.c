/* @k10d call_helper_with_fixed_args_10443984 @ 0x10443984
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_1, constant 0xa4, param_2, and constant 0x24.
 * summary:
 *   This is a thin wrapper that forwards its two arguments to write_byte_to_device_register
 *   along with two fixed constants (0xa4 and 0x24). No other logic, state changes, or side
 *   effects are visible in this function itself. The role of the callee is unknown, so the
 *   camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443984(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0xa4,param_2,0x24);
  return;
}
