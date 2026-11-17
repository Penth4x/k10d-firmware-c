/* @k10d call_helper_on_field_at_offset_16 @ 0x10441226
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at param_1+0x10 to clear_flag3_with_notify and returns.
 * summary:
 *   The function dereferences the 4-byte value at offset 0x10 of the object pointed to by
 *   param_1 and passes it as the sole argument to clear_flag3_with_notify. No other
 *   operations, side effects, or state changes are visible in the pseudocode. The role of
 *   clear_flag3_with_notify is unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_at_offset_16(int param_1)

{
  clear_flag3_with_notify(*(void **)(param_1 + 0x10));
  return;
}
