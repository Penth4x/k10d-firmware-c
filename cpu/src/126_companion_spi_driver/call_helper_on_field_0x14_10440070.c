/* @k10d call_helper_on_field_0x14_10440070 @ 0x10440070
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x14 of the object in param_1 to a single helper
 *   function.
 * summary:
 *   The function dereferences param_1 + 0x14 and passes that value as the sole argument to
 *   clear_flag3_with_notify. It performs no other operations, checks, or state
 *   modifications. The role of the helper and the object field is not determinable from the
 *   provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_0x14_10440070(int param_1)

{
  clear_flag3_with_notify(*(void **)(param_1 + 0x14));
  return;
}
