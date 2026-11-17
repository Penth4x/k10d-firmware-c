/* @k10d call_helper_with_fixed_args_104437b6 @ 0x104437b6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_1, constant 0x10, param_2, and constant 3.
 * summary:
 *   This function is a thin wrapper that forwards its two arguments to
 *   write_byte_to_device_register, inserting the constant 0x10 as the second argument and
 *   the constant 3 as the fourth argument. It performs no other operations and returns
 *   void. The role of the callee is unknown, so the specific subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_104437b6(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0x10,param_2,3);
  return;
}
