/* @k10d call_helper_with_zero_and_0x8000 @ 0x1043ecd6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Forwards param_1 to update_flag_bits_in_word with second argument 0 and third argument
 *   0x8000.
 * summary:
 *   Single-statement wrapper that invokes update_flag_bits_in_word(param_1, 0, 0x8000) and
 *   returns. No local state, no side effects beyond the callee. The meaning of the 0x8000
 *   constant and the callee's role are not established from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_zero_and_0x8000(void *param_1)

{
  update_flag_bits_in_word(param_1,0,0x8000);
  return;
}
