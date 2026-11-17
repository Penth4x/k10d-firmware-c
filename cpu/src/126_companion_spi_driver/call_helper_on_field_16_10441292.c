/* @k10d call_helper_on_field_16_10441292 @ 0x10441292
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x10 of the object to a single helper function.
 * summary:
 *   The function dereferences param_1 + 0x10 and passes that value as the sole argument to
 *   test_flag_set. It performs no other operations, checks, or state modifications. The
 *   role of the helper and the object field are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_16_10441292(int param_1)

{
  test_flag_set(*(void **)(param_1 + 0x10));
  return;
}
