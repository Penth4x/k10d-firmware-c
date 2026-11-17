/* @k10d call_subroutine_on_field_16_1044004c @ 0x1044004c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x10 of the object to a single callee.
 * summary:
 *   The function dereferences param_1 + 0x10 and passes that value as the sole argument to
 *   clear_flag2_with_notify. It performs no other operations and returns void. The role of
 *   the callee and the object layout are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_field_16_1044004c(int param_1)

{
  clear_flag2_with_notify(*(void **)(param_1 + 0x10));
  return;
}
