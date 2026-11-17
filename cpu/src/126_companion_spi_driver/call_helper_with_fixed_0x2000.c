/* @k10d call_helper_with_fixed_0x2000 @ 0x1043beb8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls configure_object_with_seven_params_1043c10c with param_1, param_2, a fixed
 *   0x2000, param_3, and param_4.
 * summary:
 *   This function is a thin wrapper that forwards its four arguments to
 *   configure_object_with_seven_params_1043c10c, substituting the constant 0x2000 for the
 *   third parameter. No other operations or side effects are visible in this function
 *   itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_0x2000(void *param_1,uint16_t param_2,uint32_t param_3,uint8_t param_4)

{
  configure_object_with_seven_params_1043c10c(param_1,param_2,0x2000,param_3,param_4);
  return;
}
