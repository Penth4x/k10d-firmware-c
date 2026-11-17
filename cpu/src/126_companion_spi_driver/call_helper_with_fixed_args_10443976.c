/* @k10d call_helper_with_fixed_args_10443976 @ 0x10443976
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_1, 0xa3, param_2, and 0x23 as fixed arguments.
 * summary:
 *   This function is a thin wrapper that forwards its two input parameters to
 *   write_byte_to_device_register along with two constant values (0xa3 and 0x23). It
 *   performs no other operations and returns immediately after the call. The specific role
 *   of the helper and the meaning of the constants are not determinable from this
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443976(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0xa3,param_2,0x23);
  return;
}
