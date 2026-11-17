/* @k10d call_helper_with_fixed_args_10443b1a @ 0x10443b1a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing the first argument, 0xc4, the second argument, and 0x41.
 * summary:
 *   This is a thin wrapper that forwards param_1 and param_2 to
 *   write_byte_to_device_register with two fixed constants (0xc4 and 0x41) inserted as the
 *   second and fourth arguments. No other operations, state changes, or side effects are
 *   visible in this function itself. The role of the callee is unknown, so the camera
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443b1a(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0xc4,param_2,0x41);
  return;
}
