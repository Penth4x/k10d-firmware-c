/* @k10d call_helper_with_fixed_args_10443922 @ 0x10443922
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing the first argument, a fixed 0x93, the second argument,
 *   and a fixed 0x1d.
 * summary:
 *   Thin wrapper that forwards param_1 and param_2 to write_byte_to_device_register with
 *   two hardcoded constants (0x93 and 0x1d). No other logic, no side effects beyond the
 *   callee. The callee's role is unknown, so no camera subsystem can be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10443922(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0x93,param_2,0x1d);
  return;
}
