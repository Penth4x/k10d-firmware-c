/* @k10d call_helper_on_field_at_offset_0x10 @ 0x10440016
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from param_1+0x10 and passes it to clear_flag_with_notify.
 * summary:
 *   The function dereferences the 4-byte value at offset 0x10 of the object pointed to by
 *   param_1 and forwards it as the sole argument to clear_flag_with_notify. No other
 *   operations, side effects, or state changes are visible in the pseudocode. The role of
 *   clear_flag_with_notify is unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_at_offset_0x10(int param_1)

{
  clear_flag_with_notify(*(void **)(param_1 + 0x10));
  return;
}
