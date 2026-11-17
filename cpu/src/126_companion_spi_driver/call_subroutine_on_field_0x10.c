/* @k10d call_subroutine_on_field_0x10 @ 0x10440670
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Dereferences the pointer at offset 0x10 of param_1 and passes it to
 *   clear_flag3_with_notify.
 * summary:
 *   This is a one-line wrapper that extracts a pointer from offset 0x10 of the input
 *   structure and forwards it to the callee clear_flag3_with_notify. No other operations,
 *   loops, or state changes are visible in the pseudocode. The specific role of
 *   clear_flag3_with_notify is unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_field_0x10(void *param_1)

{
  clear_flag3_with_notify(*(void **)((int)param_1 + 0x10));
  return;
}
