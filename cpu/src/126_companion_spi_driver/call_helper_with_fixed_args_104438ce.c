/* @k10d call_helper_with_fixed_args_104438ce @ 0x104438ce
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_1, 0x65, param_2, and 0x17 as fixed arguments.
 * summary:
 *   This is a thin wrapper that forwards its two parameters to
 *   write_byte_to_device_register along with two hardcoded constants (0x65 and 0x17). No
 *   other logic, state changes, or side effects are visible in this function itself. The
 *   role of the callee is unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_104438ce(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0x65,param_2,0x17);
  return;
}
