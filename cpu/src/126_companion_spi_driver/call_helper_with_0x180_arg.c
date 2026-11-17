/* @k10d call_helper_with_0x180_arg @ 0x1043c53e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Forwards its four arguments to configure_object_with_five_params, inserting the
 *   constant 0x180 as the third parameter.
 * summary:
 *   Thin wrapper that calls configure_object_with_five_params with param_1, param_2, the
 *   fixed value 0x180, param_3, and param_4. No local state is modified and no other side
 *   effects are visible. The role of configure_object_with_five_params is unknown, so the
 *   camera subsystem cannot be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_0x180_arg(void *param_1,uint32_t param_2,uint32_t param_3,uint8_t param_4)

{
  configure_object_with_five_params(param_1,param_2,0x180,param_3,param_4);
  return;
}
