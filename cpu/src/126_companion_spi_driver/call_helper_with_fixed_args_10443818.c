/* @k10d call_helper_with_fixed_args_10443818 @ 0x10443818
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_1, constant 0x24, param_2, and constant 10.
 * summary:
 *   This function is a thin wrapper that forwards its two arguments to
 *   write_byte_to_device_register along with two fixed constants (0x24 and 10). It performs
 *   no other operations and returns immediately after the call. The specific role of the
 *   helper is unknown as it is not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443818(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0x24,param_2,10);
  return;
}
