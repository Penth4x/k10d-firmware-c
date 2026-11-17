/* @k10d call_helper_with_fixed_args_1044386c @ 0x1044386c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing the first argument, 0x2a, the second argument, and 0x10.
 * summary:
 *   Thin wrapper that forwards param_1 and param_2 to write_byte_to_device_register with
 *   the constant middle arguments 0x2a and 0x10. No other logic, state changes, or side
 *   effects are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_1044386c(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0x2a,param_2,0x10);
  return;
}
