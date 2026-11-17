/* @k10d call_subroutine_on_offset_field_103967b2 @ 0x103967b2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes the pointer at offset 0xc of param_1 to
 *   decrement_short_and_call_helper_1039bdbc.
 * summary:
 *   The function dereferences param_1, adds 0xc to form a sub-object pointer, and forwards
 *   it as the sole argument to decrement_short_and_call_helper_1039bdbc. No other
 *   operations, globals, or side effects are visible in the pseudocode. The caller is
 *   dispatch_event_by_type_and_id_1039656a.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_offset_field_103967b2(void *param_1)

{
  decrement_short_and_call_helper_1039bdbc((void *)((int)param_1 + 0xc));
  return;
}
