/* @k10d call_four_initialization_routines_103966d8 @ 0x103966d8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes four helper functions in sequence, passing param_1 to the third.
 * summary:
 *   The function is a thin wrapper that calls get_or_create_sram_object_1040a240,
 *   set_flag_and_call_two_helpers_1040ad90, clear_flag_if_set_103968b2 (with param_1), and
 *   call_two_initializers_1039459e in that order. No local state is modified and no return
 *   value is produced. The specific subsystem is not identifiable from the available callee
 *   names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_four_initialization_routines_103966d8(cls_10562eec *param_1)

{
  get_or_create_sram_object_1040a240();
  set_flag_and_call_two_helpers_1040ad90(__frv_reg_unset(4));
  clear_flag_if_set_103968b2((int)param_1);
  call_two_initializers_1039459e();
  return;
}
