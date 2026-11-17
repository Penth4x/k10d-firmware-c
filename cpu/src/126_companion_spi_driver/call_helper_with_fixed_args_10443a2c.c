/* @k10d call_helper_with_fixed_args_10443a2c @ 0x10443a2c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper function with the first argument, a constant 0xb3, the second argument,
 *   and a constant 0x30.
 * summary:
 *   This function is a thin wrapper that forwards its two parameters to
 *   write_byte_to_device_register, inserting the constant 0xb3 as the second argument and
 *   0x30 as the fourth argument. No other operations or side effects are visible in the
 *   pseudocode. The specific role of the callee is unknown, so the wrapper's behavior is
 *   described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443a2c(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0xb3,param_2,0x30);
  return;
}
