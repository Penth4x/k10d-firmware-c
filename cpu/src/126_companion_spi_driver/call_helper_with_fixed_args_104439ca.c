/* @k10d call_helper_with_fixed_args_104439ca @ 0x104439ca
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing the first argument, 0xa9, the second argument, and 0x29.
 * summary:
 *   This is a thin wrapper that forwards param_1 and param_2 to
 *   write_byte_to_device_register with the fixed constants 0xa9 and 0x29 inserted as the
 *   second and fourth arguments. No other operations, state changes, or side effects are
 *   visible in this function itself. The role of the callee is unknown, so the camera
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_104439ca(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0xa9,param_2,0x29);
  return;
}
