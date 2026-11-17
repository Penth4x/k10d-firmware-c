/* @k10d call_helper_with_fixed_args_10443ae2 @ 0x10443ae2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_1, 0xc0, param_2, and 0x3d.
 * summary:
 *   This function is a thin wrapper that forwards its two arguments to
 *   write_byte_to_device_register along with the constants 0xc0 and 0x3d. No other
 *   operations or side effects are visible in the pseudocode. The role of the callee is
 *   unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443ae2(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0xc0,param_2,0x3d);
  return;
}
