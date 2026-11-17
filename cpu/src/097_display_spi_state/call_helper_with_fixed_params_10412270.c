/* @k10d call_helper_with_fixed_params_10412270 @ 0x10412270
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the input argument and three fixed constants.
 * summary:
 *   This function is a thin wrapper that invokes send_two_word_pair_over_ch2, passing
 *   param_1 as the first argument followed by the constants 0x1400, 1, and 1. It performs
 *   no other operations and returns immediately after the call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_params_10412270(uint32_t param_1)

{
  send_two_word_pair_over_ch2(param_1,0x1400,1,1);
  return;
}
