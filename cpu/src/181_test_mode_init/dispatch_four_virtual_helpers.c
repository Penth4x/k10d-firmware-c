/* @k10d dispatch_four_virtual_helpers @ 0x10486eb0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 181_test_mode_init (unit names are model-proposed)
 * purpose:
 *   Calls four helper functions in sequence, passing the object pointer to the last three.
 * summary:
 *   This function acts as a virtual method (slot 4) that invokes
 *   clear_flag_and_call_helper_10486efe without arguments, followed by
 *   set_two_fields_to_four, trigger_sr_cal_transfer_104867c0, and
 *   call_helper_with_second_field_104867ae, each receiving the original parameter (likely
 *   'this'). The specific behavior depends entirely on the unannotated callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_four_virtual_helpers(cls_105b2f20 *param_1)

{
  clear_flag_and_call_helper_10486efe(__frv_reg_unset(4));
  set_two_fields_to_four((int)param_1);
  trigger_sr_cal_transfer_104867c0((int)param_1);
  call_helper_with_second_field_104867ae((int)param_1);
  return;
}
