/* @k10d call_helper_with_128_128 @ 0x104f4f98
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 260_ae_ev_offset_config (unit names are model-proposed)
 * purpose:
 *   Calls send_two_param_updates with param_1, param_2, and two 0x80 constants.
 * summary:
 *   This function is a thin wrapper that forwards its two arguments to
 *   send_two_param_updates, appending the constant values 0x80 and 0x80 as the third and
 *   fourth parameters. It performs no other operations or side effects. The specific role
 *   of send_two_param_updates is unknown, so the camera subsystem context cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_128_128(int param_1,int *param_2)

{
  send_two_param_updates(param_1,param_2,0x80,0x80);
  return;
}
