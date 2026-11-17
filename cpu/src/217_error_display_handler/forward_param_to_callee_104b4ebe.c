/* @k10d forward_param_to_callee_104b4ebe @ 0x104b4ebe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Reads a 4-byte value from offset 0x5c of param_1 and passes it with param_2 to
 *   check_condition_then_call_helper.
 * summary:
 *   This is a thin wrapper that extracts a field at offset 0x5c from the object pointed to
 *   by param_1 and forwards it as the first argument to check_condition_then_call_helper,
 *   along with param_2. No other operations or side effects are visible in the pseudocode.
 *   The caller is dispatch_event_by_type_104b4d1c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_param_to_callee_104b4ebe(int param_1,void *param_2)

{
  check_condition_then_call_helper(*(int *)(param_1 + 0x5c),(int)param_2);
  return;
}
