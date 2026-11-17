/* @k10d call_helper_with_fixed_args_104438dc @ 0x104438dc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_1, 0x70, param_2, and 0x18.
 * summary:
 *   Thin wrapper that forwards its two arguments to write_byte_to_device_register with two
 *   fixed constants (0x70 and 0x18) inserted as the second and fourth parameters. No other
 *   logic, state changes, or side effects are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_104438dc(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0x70,param_2,0x18);
  return;
}
