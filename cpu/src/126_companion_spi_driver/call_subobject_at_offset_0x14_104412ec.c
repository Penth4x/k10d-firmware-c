/* @k10d call_subobject_at_offset_0x14_104412ec @ 0x104412ec
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x14 of param_1 to set_flag3_with_notify.
 * summary:
 *   The function dereferences param_1 + 0x14 to obtain a pointer and forwards it as the
 *   sole argument to set_flag3_with_notify. No other operations, side effects, or state
 *   modifications are visible in the pseudocode. The role of set_flag3_with_notify is
 *   unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subobject_at_offset_0x14_104412ec(int param_1)

{
  set_flag3_with_notify(*(void **)(param_1 + 0x14));
  return;
}
