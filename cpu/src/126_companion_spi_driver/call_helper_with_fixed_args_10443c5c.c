/* @k10d call_helper_with_fixed_args_10443c5c @ 0x10443c5c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper function with the first argument, a fixed 0xdb value, the second
 *   argument, and a fixed 0x58 value.
 * summary:
 *   This function is a thin wrapper that forwards its two parameters to
 *   write_byte_to_device_register, inserting the constant 0xdb as the second argument and
 *   0x58 as the fourth argument. No other operations or side effects are visible in the
 *   pseudocode. The specific role of the callee is unknown, so the wrapper's behavior is
 *   described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443c5c(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0xdb,param_2,0x58);
  return;
}
