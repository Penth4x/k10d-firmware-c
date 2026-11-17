/* @k10d call_helper_with_fixed_args_1044393e @ 0x1044393e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_1, 0x9f, param_2, and 0x1f.
 * summary:
 *   Thin wrapper that forwards its two arguments to write_byte_to_device_register with two
 *   fixed constants (0x9f and 0x1f) inserted as the second and fourth parameters. No other
 *   logic, state changes, or side effects are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_1044393e(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0x9f,param_2,0x1f);
  return;
}
