/* @k10d call_helper_with_fixed_args_104438ea @ 0x104438ea
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper function with the first argument, a fixed 0x8e, the second argument, and
 *   a fixed 0x19.
 * summary:
 *   This function is a thin wrapper that forwards param_1 and param_2 to
 *   write_byte_to_device_register, inserting the constant values 0x8e and 0x19 as the
 *   second and fourth arguments respectively. It performs no other operations or state
 *   changes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_104438ea(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0x8e,param_2,0x19);
  return;
}
