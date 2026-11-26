/* @k10d call_single_helper_1043ed1e @ 0x1043ed1e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a single unnamed helper function and returns.
 * summary:
 *   This function is a one-line wrapper that calls call_helper_with_zero_and_0x8000 and
 *   returns immediately. No arguments are passed, and no local state is modified. The
 *   specific role of the callee is unknown, so the wrapper's behavior is purely mechanical
 *   delegation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_1043ed1e(uint32_t param_x0)

{
  call_helper_with_zero_and_0x8000((void *)param_x0);
  return;
}
