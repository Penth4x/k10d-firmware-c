/* @k10d call_helper_with_fixed_args_10443afe @ 0x10443afe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_1, constant 0xc2, param_2, and constant 0x3f.
 * summary:
 *   This is a thin wrapper that forwards its two arguments to
 *   write_byte_to_device_register, inserting the fixed constants 0xc2 and 0x3f as the
 *   second and fourth parameters. No other logic, state changes, or side effects are
 *   visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443afe(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0xc2,param_2,0x3f);
  return;
}
