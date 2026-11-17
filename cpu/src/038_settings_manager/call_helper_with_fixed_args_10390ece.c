/* @k10d call_helper_with_fixed_args_10390ece @ 0x10390ece
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 038_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls update_three_field_record with param_1 and fixed arguments 0, 0x2e, 0.
 * summary:
 *   A one-line wrapper that forwards its single pointer argument to
 *   update_three_field_record along with three constant values (0, 0x2e, 0). No other
 *   logic, no side effects beyond the callee. The role of update_three_field_record is
 *   unknown, so the subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10390ece(uint32_t *param_1)

{
  update_three_field_record(param_1,0,0x2e,0);
  return;
}
