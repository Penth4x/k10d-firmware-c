/* @k10d call_helper_with_fixed_args_10443a48 @ 0x10443a48
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper function with the first argument, a fixed value 0xb5, the second
 *   argument, and a fixed value 0x32.
 * summary:
 *   This function is a thin wrapper that forwards its two parameters to
 *   write_byte_to_device_register, inserting the constant 0xb5 as the second argument and
 *   0x32 as the fourth argument. No other operations or side effects are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443a48(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0xb5,param_2,0x32);
  return;
}
