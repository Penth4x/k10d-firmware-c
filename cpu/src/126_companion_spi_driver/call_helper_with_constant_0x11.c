/* @k10d call_helper_with_constant_0x11 @ 0x1044378c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Forwards its two arguments to write_byte_to_device_register with a fixed second
 *   argument of 0x11 and a fixed fourth argument of 0.
 * summary:
 *   This is a thin wrapper that calls write_byte_to_device_register(param_1, 0x11, param_2,
 *   0). It does not perform any local computation or memory access beyond passing through
 *   the caller's first and second parameters. The role of write_byte_to_device_register is
 *   unknown, so the specific subsystem cannot be determined from this function alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_constant_0x11(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0x11,param_2,0);
  return;
}
