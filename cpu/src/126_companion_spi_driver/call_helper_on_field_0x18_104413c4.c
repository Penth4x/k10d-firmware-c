/* @k10d call_helper_on_field_0x18_104413c4 @ 0x104413c4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the pointer at offset 0x18 of the object in param_1 and passes it to
 *   clear_flag_with_notify.
 * summary:
 *   The function dereferences param_1 + 0x18 to obtain a pointer and forwards it as the
 *   sole argument to clear_flag_with_notify. No other operations, side effects, or flags
 *   are visible in the pseudocode. The role of clear_flag_with_notify is unknown, so the
 *   specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_0x18_104413c4(int param_1)

{
  clear_flag_with_notify(*(void **)(param_1 + 0x18));
  return;
}
