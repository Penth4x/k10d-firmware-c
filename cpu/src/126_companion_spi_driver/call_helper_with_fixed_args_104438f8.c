/* @k10d call_helper_with_fixed_args_104438f8 @ 0x104438f8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_1, 0x90, param_2, and 0x1a.
 * summary:
 *   Thin wrapper that forwards its two arguments to write_byte_to_device_register along
 *   with the constants 0x90 and 0x1a. No other logic, loops, or side effects are visible in
 *   this function. The role of the callee is unknown, so no camera subsystem can be
 *   inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_104438f8(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0x90,param_2,0x1a);
  return;
}
