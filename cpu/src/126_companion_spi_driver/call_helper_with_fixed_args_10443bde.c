/* @k10d call_helper_with_fixed_args_10443bde @ 0x10443bde
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_1, 0xd2, param_2, and 0x4f.
 * summary:
 *   Thin wrapper that forwards its two arguments to write_byte_to_device_register along
 *   with the constants 0xd2 and 0x4f. No other operations or side effects are visible in
 *   this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443bde(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0xd2,param_2,0x4f);
  return;
}
