/* @k10d call_helper_with_fixed_args_10443c16 @ 0x10443c16
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing the first argument, 0xd6, the second argument, and 0x53.
 * summary:
 *   This is a thin wrapper that forwards param_1 and param_2 to
 *   write_byte_to_device_register, inserting the constant 0xd6 as the second parameter and
 *   0x53 as the fourth. No other logic, state changes, or side effects are visible in this
 *   function itself. The role of the underlying helper is unknown, so the camera subsystem
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443c16(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0xd6,param_2,0x53);
  return;
}
