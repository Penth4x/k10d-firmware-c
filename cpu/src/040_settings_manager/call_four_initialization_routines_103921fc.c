/* @k10d call_four_initialization_routines_103921fc @ 0x103921fc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes four helper functions in sequence, passing the input parameter to the third
 *   call.
 * summary:
 *   The function acts as a wrapper that calls get_or_create_sram_object_1040a240 and
 *   set_flag_and_call_two_helpers_1040ad90 with no arguments, then calls
 *   clear_flag_and_call_helper_103923d6 with param_1, and finally calls
 *   call_two_initializers_1039459e. No local state is modified or returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_four_initialization_routines_103921fc(cls_10562758 *param_1)

{
  get_or_create_sram_object_1040a240();
  set_flag_and_call_two_helpers_1040ad90(__frv_reg_unset(4));
  clear_flag_and_call_helper_103923d6((int)param_1);
  call_two_initializers_1039459e();
  return;
}
