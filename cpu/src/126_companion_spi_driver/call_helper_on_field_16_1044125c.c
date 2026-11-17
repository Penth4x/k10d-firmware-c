/* @k10d call_helper_on_field_16_1044125c @ 0x1044125c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x10 of the object to a single helper function.
 * summary:
 *   The function dereferences param_1 + 0x10 and passes that value as the sole argument to
 *   clear_flag_with_notify. It performs no other operations, checks, or state
 *   modifications. The role of the helper and the object field are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_16_1044125c(int param_1)

{
  clear_flag_with_notify(*(void **)(param_1 + 0x10));
  return;
}
