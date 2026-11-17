/* @k10d call_subroutine_on_field_16_10441238 @ 0x10441238
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x10 of param_1 to set_flag3_with_notify.
 * summary:
 *   The function dereferences param_1 + 0x10 and passes that value as the sole argument to
 *   set_flag3_with_notify. No other operations, loops, or side effects are visible. The
 *   role of set_flag3_with_notify is unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_field_16_10441238(int param_1)

{
  set_flag3_with_notify(*(void **)(param_1 + 0x10));
  return;
}
