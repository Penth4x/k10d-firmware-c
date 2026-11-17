/* @k10d call_single_helper_1045c100 @ 0x1045c100
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Forwards two arguments to a single callee and returns.
 * summary:
 *   The function takes a pointer and an undefined4 value and passes them directly to
 *   write_field_at_offset_four_1045bd50. It performs no other operations, local state
 *   changes, or side effects beyond the call. The role of the callee is unknown, so the
 *   wrapper's specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_1045c100(void *param_1,uint32_t param_2)

{
  write_field_at_offset_four_1045bd50(param_1,param_2);
  return;
}
