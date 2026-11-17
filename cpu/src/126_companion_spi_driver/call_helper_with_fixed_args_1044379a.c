/* @k10d call_helper_with_fixed_args_1044379a @ 0x1044379a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_1, constant 4, param_2, and constant 1.
 * summary:
 *   This function is a thin wrapper that forwards its two arguments to
 *   write_byte_to_device_register, inserting the constant values 4 and 1 as the second and
 *   fourth parameters. No other operations, state changes, or side effects are visible in
 *   the pseudocode. The role of the callee is unknown, so the wrapper's specific subsystem
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_1044379a(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,4,param_2,1);
  return;
}
