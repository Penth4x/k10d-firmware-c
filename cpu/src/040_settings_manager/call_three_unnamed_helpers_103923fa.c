/* @k10d call_three_unnamed_helpers_103923fa @ 0x103923fa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sequentially invokes three helper functions, passing param_1 and param_2 to the second
 *   and param_1 to the third.
 * summary:
 *   The function acts as a simple wrapper or sequence starter. It first calls
 *   forward_two_ram_values_10392414 with no arguments, then calls
 *   read_two_values_and_store_1039244a with the original parameters, and finally calls
 *   update_object_state_flags_1039252a with the first parameter. Without knowledge of the
 *   callees' roles, the specific subsystem or behavior cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_unnamed_helpers_103923fa(void *param_1,int param_2)

{
  forward_two_ram_values_10392414((uint32_t)param_1);
  read_two_values_and_store_1039244a((int)param_1,param_2);
  update_object_state_flags_1039252a((int)param_1);
  return;
}
