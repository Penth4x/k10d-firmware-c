/* @k10d call_helper_on_field_0x14_10441346 @ 0x10441346
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x14 of the object in param_1 to a single callee.
 * summary:
 *   The function dereferences param_1 + 0x14 and passes that value as the sole argument to
 *   test_flag_set. No other operations, loops, or side effects are visible. The role of the
 *   callee and the object field are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_0x14_10441346(int param_1)

{
  test_flag_set(*(void **)(param_1 + 0x14));
  return;
}
