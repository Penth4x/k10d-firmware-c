/* @k10d call_helper_with_fixed_args_1044394c @ 0x1044394c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_1, 0xa0, param_2, and 0x20.
 * summary:
 *   This function is a thin wrapper that forwards its two arguments to
 *   write_byte_to_device_register along with the constants 0xa0 and 0x20. No other
 *   operations, memory accesses, or state changes are visible in the pseudocode. The role
 *   of the callee is unknown, so the wrapper's specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_1044394c(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0xa0,param_2,0x20);
  return;
}
