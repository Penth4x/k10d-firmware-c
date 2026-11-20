/* @k10d call_five_initialization_routines @ 0x10392b36
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes five helper functions in sequence, passing param_1 to two of them.
 * summary:
 *   The function acts as a simple wrapper that calls get_or_create_sram_object_1040a240 and
 *   set_flag_and_call_two_helpers_1040ad90 with no arguments, then calls
 *   call_two_helpers_in_sequence_10394a22 and clear_flag_and_call_helper_10392cde with
 *   param_1, and finally calls call_two_initializers_1039459e. No local variables are
 *   manipulated and no return value is produced. The specific subsystem is not identifiable
 *   from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_five_initialization_routines(cls_10562850 *param_1)

{
  get_or_create_sram_object_1040a240();
  set_flag_and_call_two_helpers_1040ad90(__frv_reg_unset(4));
  call_two_helpers_in_sequence_10394a22((int)param_1);
  clear_flag_and_call_helper_10392cde((int)param_1);
  call_two_initializers_1039459e();
  return;
}
