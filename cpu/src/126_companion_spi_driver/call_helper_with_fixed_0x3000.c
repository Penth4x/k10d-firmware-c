/* @k10d call_helper_with_fixed_0x3000 @ 0x1043bed0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Forwards its four arguments to configure_object_with_seven_params_1043c10c,
 *   substituting the constant 0x3000 for the third parameter.
 * summary:
 *   A thin wrapper that invokes configure_object_with_seven_params_1043c10c with param_1,
 *   param_2, the fixed value 0x3000, param_3, and param_4. No local state is modified and
 *   no other side effects are visible. The role of the callee is unknown, so the camera
 *   subsystem cannot be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_0x3000(void *param_1,uint16_t param_2,uint32_t param_3,uint8_t param_4)

{
  configure_object_with_seven_params_1043c10c(param_1,param_2,0x3000,param_3,param_4);
  return;
}
