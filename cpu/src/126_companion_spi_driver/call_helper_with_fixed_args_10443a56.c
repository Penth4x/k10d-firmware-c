/* @k10d call_helper_with_fixed_args_10443a56 @ 0x10443a56
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_1, 0xb6, param_2, and 0x33.
 * summary:
 *   This function is a thin wrapper that forwards its two arguments to
 *   write_byte_to_device_register along with the fixed constants 0xb6 and 0x33. It performs
 *   no other operations and returns immediately after the call. The role of the callee is
 *   unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443a56(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0xb6,param_2,0x33);
  return;
}
