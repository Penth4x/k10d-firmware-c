/* @k10d call_helper_with_fixed_args_10443c4e @ 0x10443c4e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper function with the first argument, a fixed 0xda value, the second
 *   argument, and a fixed 0x57 value.
 * summary:
 *   This function is a thin wrapper that forwards its two parameters to
 *   write_byte_to_device_register, inserting the constant 0xda as the second argument and
 *   0x57 as the fourth argument. It performs no other operations or side effects. The
 *   specific role of the underlying helper is unknown as it is not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443c4e(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0xda,param_2,0x57);
  return;
}
