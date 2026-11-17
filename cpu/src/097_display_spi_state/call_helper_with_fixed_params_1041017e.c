/* @k10d call_helper_with_fixed_params_1041017e @ 0x1041017e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Calls a single helper with the input argument and three fixed constants.
 * summary:
 *   The function is a thin wrapper that forwards param_1 to send_two_word_pair_over_ch2
 *   along with the constants 0x1428, 0xb, and 1. It is invoked as virtual method slot 9 of
 *   class cls_1059be70. No other operations or side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_params_1041017e(uint32_t param_1)

{
  send_two_word_pair_over_ch2(param_1,0x1428,0xb,1);
  return;
}
