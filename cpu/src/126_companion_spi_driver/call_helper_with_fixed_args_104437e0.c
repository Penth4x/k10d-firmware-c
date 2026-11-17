/* @k10d call_helper_with_fixed_args_104437e0 @ 0x104437e0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper function with the first argument, a constant 0x20, the second argument,
 *   and a constant 6.
 * summary:
 *   This function is a thin wrapper that forwards its two parameters to
 *   write_byte_to_device_register, inserting the constant 0x20 as the second argument and 6
 *   as the fourth argument. It performs no other operations or state changes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_104437e0(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0x20,param_2,6);
  return;
}
