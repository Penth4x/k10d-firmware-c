/* @k10d call_single_helper_1043be78 @ 0x1043be78
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a single unnamed helper function and returns.
 * summary:
 *   The function consists solely of a call to test_bit2_of_vtable_offset_0x18 with no
 *   arguments and no local state manipulation. It acts as a thin wrapper or trampoline to
 *   the callee. No camera-specific behavior or side effects are visible in this function
 *   itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_1043be78(uint32_t param_x0)
{
  test_bit2_of_vtable_offset_0x18((uint32_t)param_x0);
  return;
}
