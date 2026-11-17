/* @k10d call_single_helper_with_param_104436e2 @ 0x104436e2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Forwards its single pointer argument to call_helper_on_field_0x20_10443e96 and returns.
 * summary:
 *   A one-line wrapper that passes param_1 to the callee call_helper_on_field_0x20_10443e96
 *   and returns void. No local state, no side effects beyond the callee. The callee's role
 *   is unknown, so no camera-subsystem term is applied.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_param_104436e2(void *param_1)

{
  call_helper_on_field_0x20_10443e96(param_1);
  return;
}
