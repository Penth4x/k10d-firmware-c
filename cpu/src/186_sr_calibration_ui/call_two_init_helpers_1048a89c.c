/* @k10d call_two_init_helpers_1048a89c @ 0x1048a89c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 186_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions with the same object pointer as argument.
 * summary:
 *   This function takes a single pointer argument and passes it sequentially to
 *   trigger_sr_cal_transfer_104867c0 and call_helper_with_second_field_104867ae. It is
 *   virtual method slot 4 of class cls_105b3a84. No other operations, memory accesses, or
 *   side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_init_helpers_1048a89c(cls_105b3a84 *param_1)

{
  trigger_sr_cal_transfer_104867c0((int)param_1);
  call_helper_with_second_field_104867ae((int)param_1);
  return;
}
