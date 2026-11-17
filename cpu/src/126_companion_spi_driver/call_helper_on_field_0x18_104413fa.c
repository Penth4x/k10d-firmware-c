/* @k10d call_helper_on_field_0x18_104413fa @ 0x104413fa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x18 of the object in param_1 to test_flag_set.
 * summary:
 *   The function dereferences param_1 + 0x18 and passes that value as the sole argument to
 *   test_flag_set. No other operations, side effects, or state changes are visible in the
 *   pseudocode. The role of test_flag_set is unknown, so the specific subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_0x18_104413fa(int param_1)

{
  test_flag_set(*(void **)(param_1 + 0x18));
  return;
}
