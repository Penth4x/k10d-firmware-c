/* @k10d call_helper_on_field_0x18_104413e8 @ 0x104413e8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x18 of the object in param_1 to a single helper
 *   function.
 * summary:
 *   The function dereferences param_1 + 0x18 and passes that value as the sole argument to
 *   test_flag_clear. It performs no other operations, loops, or state modifications. The
 *   role of the helper and the object field is not determinable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_0x18_104413e8(int param_1)

{
  test_flag_clear(*(void **)(param_1 + 0x18));
  return;
}
