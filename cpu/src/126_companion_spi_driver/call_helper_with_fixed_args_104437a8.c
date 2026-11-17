/* @k10d call_helper_with_fixed_args_104437a8 @ 0x104437a8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing the first argument, constant 5, the second argument, and
 *   constant 2.
 * summary:
 *   This is a thin wrapper that forwards param_1 and param_2 to
 *   write_byte_to_device_register, inserting the literal constants 5 and 2 as the second
 *   and fourth arguments. No other logic, state changes, or side effects are visible in
 *   this function itself. The role of the callee is unknown, so the camera subsystem cannot
 *   be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_104437a8(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,5,param_2,2);
  return;
}
