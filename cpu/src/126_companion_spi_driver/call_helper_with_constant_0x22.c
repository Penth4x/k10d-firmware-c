/* @k10d call_helper_with_constant_0x22 @ 0x104437fc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper function passing param_1, the constant 0x22, param_2, and 8.
 * summary:
 *   This function is a thin wrapper that invokes write_byte_to_device_register with four
 *   arguments: the first parameter, the immediate value 0x22 (34), the second parameter,
 *   and the immediate value 8. It performs no other operations and returns void. The
 *   specific role of the callee is unknown, so the behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_constant_0x22(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0x22,param_2,8);
  return;
}
