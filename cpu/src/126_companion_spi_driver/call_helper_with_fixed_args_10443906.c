/* @k10d call_helper_with_fixed_args_10443906 @ 0x10443906
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper function with the first argument, a fixed 0x91, the second argument, and
 *   a fixed 0x1b.
 * summary:
 *   This function is a thin wrapper that forwards param_1 and param_2 to
 *   write_byte_to_device_register, inserting the constant values 0x91 and 0x1b as the
 *   second and fourth arguments respectively. No other logic or state manipulation is
 *   visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443906(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0x91,param_2,0x1b);
  return;
}
