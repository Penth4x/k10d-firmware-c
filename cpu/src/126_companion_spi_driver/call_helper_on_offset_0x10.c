/* @k10d call_helper_on_offset_0x10 @ 0x10440700
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer at offset 0x10 of param_1 to clear_flag2_with_notify.
 * summary:
 *   The function dereferences param_1 + 0x10 and passes that value as the sole argument to
 *   clear_flag2_with_notify. It acts as a thin wrapper or thunk around the callee. No other
 *   operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_offset_0x10(void *param_1)

{
  clear_flag2_with_notify(*(void **)((int)param_1 + 0x10));
  return;
}
