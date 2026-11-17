/* @k10d call_helper_with_fixed_args_10443ad4 @ 0x10443ad4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper function with the first two parameters and two fixed constants.
 * summary:
 *   This function is a thin wrapper that forwards param_1 and param_2 to
 *   write_byte_to_device_register, inserting the constant 0xbf as the second argument and
 *   0x3c as the fourth argument. It performs no other operations or side effects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443ad4(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0xbf,param_2,0x3c);
  return;
}
