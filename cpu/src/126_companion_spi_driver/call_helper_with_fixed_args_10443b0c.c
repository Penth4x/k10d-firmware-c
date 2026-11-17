/* @k10d call_helper_with_fixed_args_10443b0c @ 0x10443b0c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing the first argument, constant 0xc3, the second argument,
 *   and constant 0x40.
 * summary:
 *   Thin wrapper that forwards param_1 and param_2 to write_byte_to_device_register with
 *   two fixed constants (0xc3 and 0x40). No other logic, no side effects visible in this
 *   function. The role of the callee is unknown, so the camera subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443b0c(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0xc3,param_2,0x40);
  return;
}
