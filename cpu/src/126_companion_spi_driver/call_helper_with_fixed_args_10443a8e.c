/* @k10d call_helper_with_fixed_args_10443a8e @ 0x10443a8e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_1, 0xba, param_2, and 0x37 as fixed arguments.
 * summary:
 *   This function is a thin wrapper that forwards its two input parameters to
 *   write_byte_to_device_register, inserting the constant values 0xba and 0x37 as the
 *   second and fourth arguments. No other operations, memory accesses, or state changes are
 *   visible in the pseudocode. The role of the callee is unknown, so the specific subsystem
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443a8e(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0xba,param_2,0x37);
  return;
}
