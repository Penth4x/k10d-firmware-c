/* @k10d check_and_handle_condition @ 0x104ab5b2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 210_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a check function and invokes a handler if the check returns zero.
 * summary:
 *   The function takes a single object pointer, passes it to process_event_flags, and if
 *   the result is 0, calls dispatch_pending_event_flags_104ab7f0 with the same pointer. It
 *   is virtual slot 9 of cls_105b71d4. The specific roles of the callees are unknown, so
 *   the behavior is described mechanically as a conditional dispatch based on a status
 *   check.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_handle_condition(void *param_1)

{
  int iVar1;
  
  iVar1 = process_event_flags(param_1);
  if (iVar1 == 0) {
    dispatch_pending_event_flags_104ab7f0(param_1);
  }
  return;
}
