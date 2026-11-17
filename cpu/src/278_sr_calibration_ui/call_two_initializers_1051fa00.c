/* @k10d call_two_initializers_1051fa00 @ 0x1051fa00
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions sequentially with the same object pointer argument.
 * summary:
 *   This function takes a single pointer argument and passes it to
 *   trigger_sr_cal_transfer_104867c0 followed by call_helper_with_second_field_104867ae. It
 *   is virtual slot 4 of class cls_105d6fa0. The specific roles of the two callees are
 *   unknown, so the overall behavior is a simple two-step initialization or setup sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_initializers_1051fa00(int param_1)

{
  trigger_sr_cal_transfer_104867c0(param_1);
  call_helper_with_second_field_104867ae(param_1);
  return;
}
