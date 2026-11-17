/* @k10d call_helper_on_field_0x10_104406a6 @ 0x104406a6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x10 of param_1 to clear_flag_with_notify.
 * summary:
 *   The function dereferences param_1 + 0x10 and passes that value as the sole argument to
 *   clear_flag_with_notify. No other operations, side effects, or state modifications are
 *   visible in the pseudocode. The role of clear_flag_with_notify is unknown, so the
 *   specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_0x10_104406a6(int param_1)

{
  clear_flag_with_notify(*(void **)(param_1 + 0x10));
  return;
}
