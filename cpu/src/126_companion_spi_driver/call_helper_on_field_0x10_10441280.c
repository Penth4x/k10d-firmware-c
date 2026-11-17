/* @k10d call_helper_on_field_0x10_10441280 @ 0x10441280
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x10 of the object in param_1 to test_flag_clear.
 * summary:
 *   The function dereferences param_1 + 0x10 and passes that value as the sole argument to
 *   test_flag_clear. No other operations, loops, or side effects are visible. The role of
 *   test_flag_clear is unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_0x10_10441280(int param_1)

{
  test_flag_clear(*(void **)(param_1 + 0x10));
  return;
}
