/* @k10d call_helper_on_field_0x20_10443768 @ 0x10443768
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x20 of param_1 to test_flag_set.
 * summary:
 *   The function dereferences param_1 + 0x20 and passes that value as the sole argument to
 *   test_flag_set. No other operations, side effects, or flags are visible in the
 *   pseudocode. The role of test_flag_set is unknown, so the camera subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_0x20_10443768(int param_1)

{
  test_flag_set(*(void **)(param_1 + 0x20));
  return;
}
