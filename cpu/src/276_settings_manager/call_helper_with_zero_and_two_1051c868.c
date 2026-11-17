/* @k10d call_helper_with_zero_and_two_1051c868 @ 0x1051c868
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a single helper with param_2, 0, and 2 as arguments.
 * summary:
 *   This function is a thin wrapper that forwards its second argument to
 *   write_word_to_dynamic_array along with the constants 0 and 2. It does not perform any
 *   other operations or access any memory directly. The role of the callee is unknown, so
 *   the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_zero_and_two_1051c868(uint32_t param_1,void *param_2)

{
  write_word_to_dynamic_array((int)param_2,0,2);
  return;
}
