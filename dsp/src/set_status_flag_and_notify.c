/* @k10d set_status_flag_and_notify @ 0x000cc512
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Sets a bit in a status word based on the input parameter and calls a notification
 *   routine.
 * summary:
 *   The function checks if param_1 is zero. If zero, it sets bit 4 (0x10) in DAT_0003ce02;
 *   otherwise, it sets bit 5 (0x20). It then calls update_flag_bits_based_on_param and
 *   modifies DAT_0003ce01 by clearing the lower 3 bits and setting bit 0. The specific
 *   roles of the data globals and the callee are not determinable from the provided
 *   context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_status_flag_and_notify(int param_1)

{
  if (param_1 == 0) {
    DAT_0003ce02 = DAT_0003ce02 | 0x10;
  }
  else {
    DAT_0003ce02 = DAT_0003ce02 | 0x20;
  }
  update_flag_bits_based_on_param(__frv_reg_unset(4));
  DAT_0003ce01 = DAT_0003ce01 & 0xf8 | 1;
  return;
}
