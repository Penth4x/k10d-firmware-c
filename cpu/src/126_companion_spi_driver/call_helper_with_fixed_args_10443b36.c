/* @k10d call_helper_with_fixed_args_10443b36 @ 0x10443b36
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_1, 0xc6, param_2, and 0x43.
 * summary:
 *   This function is a thin wrapper that forwards its two arguments to
 *   write_byte_to_device_register along with the constants 0xc6 and 0x43. No other
 *   operations, memory accesses, or state changes are visible in the pseudocode. The role
 *   of the callee is unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443b36(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0xc6,param_2,0x43);
  return;
}
