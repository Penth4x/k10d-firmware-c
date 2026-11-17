/* @k10d call_helper_with_fixed_args_104438c0 @ 0x104438c0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_1, the constant 100, param_2, and 0x16.
 * summary:
 *   This is a thin wrapper that forwards its two arguments to write_byte_to_device_register
 *   along with the fixed constants 100 and 0x16. No other operations, state changes, or
 *   side effects are visible in this function itself. The role of the callee is unknown, so
 *   the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_104438c0(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,100,param_2,0x16);
  return;
}
