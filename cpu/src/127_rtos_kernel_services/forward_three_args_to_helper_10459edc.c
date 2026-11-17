/* @k10d forward_three_args_to_helper_10459edc @ 0x10459edc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Forwards its three arguments to settings_init with a zero inserted as the second
 *   parameter.
 * summary:
 *   A thin one-call wrapper that passes param_1, a literal 0, param_2, and param_3 to
 *   settings_init and returns. It is referenced as virtual method slot 2 by several classes
 *   and by two verified constructors, but the callee's role is unknown, so no subsystem can
 *   be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_three_args_to_helper_10459edc(void *param_1,uint32_t param_2,uint32_t param_3)

{
  settings_init(param_1,0,param_2,param_3);
  return;
}
