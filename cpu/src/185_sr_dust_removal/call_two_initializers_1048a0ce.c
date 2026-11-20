/* @k10d call_two_initializers_1048a0ce @ 0x1048a0ce
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 185_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions sequentially with the same object pointer argument.
 * summary:
 *   This function is a virtual method (slot 4) of class cls_105b3998. It takes a single
 *   parameter (likely 'this' or an object pointer) and passes it to
 *   trigger_sr_cal_transfer_104867c0 followed by call_helper_with_second_field_104867ae.
 *   The specific roles of these callees are unknown, so the function acts as a wrapper or
 *   composite operation combining their effects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_initializers_1048a0ce(cls_105b3998 *param_1)

{
  trigger_sr_cal_transfer_104867c0((int)param_1);
  call_helper_with_second_field_104867ae((int)param_1);
  return;
}
