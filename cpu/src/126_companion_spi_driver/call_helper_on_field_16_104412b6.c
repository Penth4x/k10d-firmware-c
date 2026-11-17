/* @k10d call_helper_on_field_16_104412b6 @ 0x104412b6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x10 of param_1 to clear_flag2_with_notify.
 * summary:
 *   The function dereferences param_1 + 0x10 and passes that value as the sole argument to
 *   clear_flag2_with_notify. No other operations, side effects, or state changes are
 *   visible in the pseudocode. The role of the callee and the meaning of the field at
 *   offset 0x10 are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_16_104412b6(int param_1)

{
  clear_flag2_with_notify(*(void **)(param_1 + 0x10));
  return;
}
