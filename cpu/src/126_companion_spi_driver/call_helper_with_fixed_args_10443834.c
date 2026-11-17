/* @k10d call_helper_with_fixed_args_10443834 @ 0x10443834
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_1, 0x26, param_2, and 0xc as fixed arguments.
 * summary:
 *   This function is a thin wrapper that forwards its two input parameters to
 *   write_byte_to_device_register along with the constant values 0x26 and 0xc. It performs
 *   no other operations and returns immediately after the call. The specific role of the
 *   helper and the meaning of the constants are not determinable from this pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443834(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0x26,param_2,0xc);
  return;
}
