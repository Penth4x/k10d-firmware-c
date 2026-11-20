/* @k10d call_two_initializers_1048913a @ 0x1048913a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions with the same object pointer as argument.
 * summary:
 *   This function is a virtual method (slot 4) of cls_105b3658. It simply forwards its
 *   single parameter to trigger_sr_cal_transfer_104867c0 and then
 *   call_helper_with_second_field_104867ae. No other operations, memory accesses, or state
 *   changes are visible in the pseudocode. The specific roles of the two callees are
 *   unknown, so the overall behavior is described mechanically as a sequence of two calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_initializers_1048913a(cls_105b3658 *param_1)

{
  trigger_sr_cal_transfer_104867c0((int)param_1);
  call_helper_with_second_field_104867ae((int)param_1);
  return;
}
