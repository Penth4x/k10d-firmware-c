/* @k10d call_helper_with_fixed_offsets_104439f4 @ 0x104439f4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_1, 0xac, param_2, and 0x2c as fixed arguments.
 * summary:
 *   This is a thin wrapper that forwards its two parameters to
 *   write_byte_to_device_register along with two constant values (0xac and 0x2c). No other
 *   logic, loops, or state changes are visible in this function. The role of the callee is
 *   unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_offsets_104439f4(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0xac,param_2,0x2c);
  return;
}
