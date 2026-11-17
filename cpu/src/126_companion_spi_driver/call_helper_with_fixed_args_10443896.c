/* @k10d call_helper_with_fixed_args_10443896 @ 0x10443896
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper function with the first argument, a fixed 0x61, the second argument, and
 *   a fixed 0x13.
 * summary:
 *   This function is a thin wrapper that forwards param_1 and param_2 to
 *   write_byte_to_device_register, inserting the constant 0x61 as the second argument and
 *   0x13 as the fourth argument. No other logic or side effects are visible in this
 *   function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443896(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0x61,param_2,0x13);
  return;
}
