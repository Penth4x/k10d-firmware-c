/* @k10d call_helper_on_offset_field_103922d6 @ 0x103922d6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes the pointer at offset 0xc of param_1 to decrement_short_and_dispatch.
 * summary:
 *   A one-line wrapper that dereferences param_1 at offset 0xc and forwards that value as
 *   the sole argument to decrement_short_and_dispatch. No other operations, flags, or side
 *   effects are visible in this function. The caller is
 *   dispatch_event_by_type_and_id_1039208e.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_offset_field_103922d6(void *param_1)

{
  decrement_short_and_dispatch((void *)((int)param_1 + 0xc));
  return;
}
