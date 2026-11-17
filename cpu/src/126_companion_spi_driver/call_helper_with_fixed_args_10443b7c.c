/* @k10d call_helper_with_fixed_args_10443b7c @ 0x10443b7c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_1, constant 0xcb, param_2, and constant 0x48.
 * summary:
 *   This is a thin wrapper that forwards its two arguments to write_byte_to_device_register
 *   along with two fixed constants (0xcb and 0x48). No other logic, loops, or side effects
 *   are present in this function. The role of the callee is unknown, so the camera
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443b7c(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0xcb,param_2,0x48);
  return;
}
