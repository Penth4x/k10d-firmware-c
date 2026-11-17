/* @k10d call_single_helper_with_param_104436da @ 0x104436da
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Forwards its single integer argument to call_helper_on_field_0x20_10443e84 and returns.
 * summary:
 *   A one-line wrapper that invokes call_helper_on_field_0x20_10443e84 with param_1 and
 *   returns void. No local state, no side effects beyond the callee. The callee's role is
 *   unknown, so the wrapper's subsystem cannot be determined from its own code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_param_104436da(int param_1)

{
  call_helper_on_field_0x20_10443e84(param_1);
  return;
}
