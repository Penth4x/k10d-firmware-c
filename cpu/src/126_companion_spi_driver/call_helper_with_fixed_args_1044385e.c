/* @k10d call_helper_with_fixed_args_1044385e @ 0x1044385e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper passing param_1, constant 0x29, param_2, and constant 0xf.
 * summary:
 *   This is a thin wrapper that forwards its two arguments to
 *   write_byte_to_device_register, inserting the fixed constants 0x29 and 0xf as the second
 *   and fourth parameters. No other logic, state changes, or side effects are visible in
 *   this function itself. The role of the callee is unknown, so the specific subsystem
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_1044385e(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0x29,param_2,0xf);
  return;
}
