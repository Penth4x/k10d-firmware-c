/* @k10d call_helper_with_fixed_args_10443b98 @ 0x10443b98
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_1, 0xcd, param_2, and 0x4a.
 * summary:
 *   Thin wrapper that forwards its two arguments to write_byte_to_device_register along
 *   with the constants 0xcd and 0x4a. No other logic, state changes, or side effects are
 *   visible in this function. The role of the callee is unknown, so the camera subsystem
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443b98(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0xcd,param_2,0x4a);
  return;
}
