/* @k10d call_helper_with_fixed_params_10410168 @ 0x10410168
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Calls a single helper with the input argument and three fixed constants.
 * summary:
 *   This function is a thin wrapper that forwards param_1 to send_two_word_pair_over_ch2
 *   along with the constants 0x1428, 4, and 1. It is virtual method slot 11 of class
 *   cls_1059be70. No other operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_params_10410168(cls_1059be70 *param_1)

{
  send_two_word_pair_over_ch2((int)param_1,0x1428,4,1);
  return;
}
