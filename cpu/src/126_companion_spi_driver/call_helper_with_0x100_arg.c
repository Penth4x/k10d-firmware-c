/* @k10d call_helper_with_0x100_arg @ 0x1043c526
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Forwards its four arguments to configure_object_with_five_params, inserting 0x100 as
 *   the third parameter.
 * summary:
 *   A thin wrapper that calls configure_object_with_five_params with param_1, param_2, the
 *   constant 0x100, param_3, and param_4. No other logic, state changes, or side effects
 *   are visible in this function itself. The role of the callee is unknown, so the camera
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_0x100_arg(void *param_1,uint32_t param_2,uint32_t param_3,uint8_t param_4)

{
  configure_object_with_five_params(param_1,param_2,0x100,param_3,param_4);
  return;
}
